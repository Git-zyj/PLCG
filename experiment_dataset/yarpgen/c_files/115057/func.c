/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115057
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0]))) : (arr_0 [i_0])))) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)6615)) > (((/* implicit */int) var_3)))))))))))));
        var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) -1881780360)) : (arr_0 [i_0])))) ? (((((unsigned long long int) var_18)) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)65535), (((/* implicit */unsigned short) (short)256)))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((((/* implicit */int) (short)-257)) >= (((/* implicit */int) (short)-247)))))))))))));
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (arr_1 [i_0])))) ? (((unsigned int) (unsigned short)22016)) : (((/* implicit */unsigned int) ((/* implicit */int) var_18))))) : (((((/* implicit */_Bool) ((arr_1 [i_0]) & (((/* implicit */int) var_10))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)256))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (1356921156U)))))));
        var_23 = ((/* implicit */_Bool) max((arr_0 [i_0]), (var_16)));
    }
    for (unsigned short i_1 = 0; i_1 < 15; i_1 += 1) 
    {
        var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_16)) ? (max((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_3))))), (((((/* implicit */_Bool) 4251843155207500683LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_3 [i_1]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)265)))))));
        var_25 = ((/* implicit */unsigned short) arr_1 [i_1]);
        var_26 &= ((/* implicit */int) var_13);
    }
    var_27 -= ((/* implicit */unsigned short) ((int) var_9));
    var_28 ^= ((/* implicit */int) var_18);
    /* LoopSeq 4 */
    for (unsigned short i_2 = 0; i_2 < 24; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_3 = 0; i_3 < 24; i_3 += 2) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    var_29 += ((/* implicit */unsigned short) arr_0 [i_4]);
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 24; i_5 += 4) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 24; i_6 += 3) 
                        {
                            {
                                var_30 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_1 [i_5])) ? (arr_1 [i_2]) : (arr_1 [i_3]))), (((((/* implicit */_Bool) var_9)) ? (((((/* implicit */int) arr_9 [i_4])) - (((/* implicit */int) (short)-17632)))) : (((/* implicit */int) (short)-257))))));
                                var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) min((min((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) >= (var_16)))), (arr_16 [i_2] [i_2] [10U] [i_2] [i_2]))), (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_11 [i_2] [i_2])) <= (((((/* implicit */_Bool) arr_20 [i_4] [i_4] [i_4] [i_4] [i_5] [i_4])) ? (var_0) : (10681068925548875308ULL)))))))))));
                                var_32 &= min((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)43519)) & (((/* implicit */int) var_4))))), (min((arr_11 [i_4] [i_5]), (((/* implicit */unsigned int) (unsigned short)63488)))));
                                var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_2] [i_3])) ? (((/* implicit */int) var_2)) : (((arr_18 [i_4] [i_3] [i_3] [i_4]) ? (((/* implicit */int) arr_18 [i_2] [(signed char)20] [i_4] [i_4])) : (((/* implicit */int) arr_18 [i_2] [i_2] [i_2] [i_4]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 3 */
        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
        {
            for (unsigned short i_8 = 3; i_8 < 22; i_8 += 2) 
            {
                for (unsigned short i_9 = 0; i_9 < 24; i_9 += 1) 
                {
                    {
                        var_34 &= ((/* implicit */unsigned long long int) ((((1336863184) ^ (((/* implicit */int) arr_8 [i_7 + 1] [i_8 + 1])))) != (((((/* implicit */int) var_8)) ^ (((/* implicit */int) arr_2 [i_2] [i_8 - 1]))))));
                        var_35 = ((/* implicit */int) (unsigned short)43339);
                        var_36 |= ((/* implicit */long long int) min(((((((_Bool)1) ? (1480254453U) : (((/* implicit */unsigned int) -1336863184)))) + (arr_11 [i_9] [i_7 + 1]))), (((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned short) arr_19 [i_9] [i_8 + 1] [(short)18] [i_2] [i_2]))))))));
                    }
                } 
            } 
        } 
        var_37 &= var_13;
        var_38 = ((/* implicit */unsigned short) arr_23 [i_2]);
    }
    for (short i_10 = 0; i_10 < 15; i_10 += 2) 
    {
        var_39 &= ((/* implicit */unsigned short) max((((unsigned int) arr_16 [2U] [i_10] [2U] [2U] [i_10])), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) (_Bool)1)), (var_18))))));
        var_40 = ((/* implicit */unsigned long long int) min((min((((/* implicit */int) (_Bool)1)), (1336863184))), (((/* implicit */int) var_1))));
    }
    for (int i_11 = 0; i_11 < 12; i_11 += 1) 
    {
        var_41 = max((((/* implicit */int) var_11)), ((+(((/* implicit */int) (_Bool)1)))));
        var_42 = ((/* implicit */unsigned int) ((max(((+(((/* implicit */int) var_11)))), (((/* implicit */int) min((var_1), (((/* implicit */unsigned short) (short)-238))))))) * (((/* implicit */int) ((signed char) ((((/* implicit */int) var_18)) << (((arr_1 [i_11]) + (353108053)))))))));
        var_43 &= ((/* implicit */unsigned short) (_Bool)1);
        var_44 = ((/* implicit */_Bool) max((((unsigned char) 1336863184)), (((/* implicit */unsigned char) (_Bool)1))));
    }
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_13 = 0; i_13 < 16; i_13 += 1) 
        {
            var_45 = ((/* implicit */_Bool) max((var_45), (((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0)))))));
            var_46 ^= ((/* implicit */signed char) ((((/* implicit */int) arr_17 [(_Bool)0] [i_12] [i_12])) != (((((var_0) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) ? (((/* implicit */int) min((((/* implicit */signed char) arr_2 [(unsigned short)12] [i_12])), (var_19)))) : (((((/* implicit */int) (unsigned short)1341)) / (((/* implicit */int) var_1))))))));
            /* LoopNest 2 */
            for (signed char i_14 = 2; i_14 < 14; i_14 += 3) 
            {
                for (signed char i_15 = 0; i_15 < 16; i_15 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned short i_16 = 1; i_16 < 15; i_16 += 4) 
                        {
                            var_47 -= ((/* implicit */_Bool) ((signed char) (unsigned short)0));
                            var_48 = ((/* implicit */int) ((((/* implicit */int) var_11)) > (((/* implicit */int) ((short) (unsigned short)61964)))));
                        }
                        for (int i_17 = 1; i_17 < 12; i_17 += 1) 
                        {
                            var_49 = (-(arr_27 [i_13] [i_13] [i_13] [i_13]));
                            var_50 = ((/* implicit */int) arr_40 [i_12]);
                        }
                        var_51 = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((_Bool) var_5))) : (((((/* implicit */int) arr_45 [i_14] [i_14])) ^ (((/* implicit */int) arr_43 [i_12] [i_14] [i_14]))))))) ^ (((((/* implicit */_Bool) ((13861629591888823288ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_18)))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) 341823161U)) ? (-643250252462465833LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-25)))))))));
                    }
                } 
            } 
            var_52 = ((/* implicit */int) arr_10 [i_12]);
        }
        /* vectorizable */
        for (unsigned short i_18 = 3; i_18 < 14; i_18 += 4) 
        {
            var_53 = ((/* implicit */_Bool) min((var_53), (((/* implicit */_Bool) ((short) (_Bool)1)))));
            var_54 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_52 [i_18 + 1] [i_18 - 2] [i_18] [i_18 - 1] [i_18 + 2]) : (arr_52 [i_18] [i_18] [i_18] [i_18] [i_18])));
        }
        var_55 = ((/* implicit */int) arr_6 [i_12]);
        var_56 *= ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */int) (_Bool)1)) / (1147846976))), (((/* implicit */int) ((short) (unsigned short)10)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_12] [i_12])) && (((/* implicit */_Bool) arr_8 [i_12] [i_12]))))) : (((/* implicit */int) ((_Bool) min((((/* implicit */signed char) (_Bool)1)), (var_3)))))));
    }
}

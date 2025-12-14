/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13532
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
    /* LoopSeq 3 */
    for (short i_0 = 3; i_0 < 21; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned short) arr_2 [i_0]);
        /* LoopNest 2 */
        for (long long int i_1 = 2; i_1 < 24; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */signed char) ((((min((((/* implicit */unsigned int) var_6)), (var_11))) > (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_0 [i_1 + 1])))))) || (((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_1 [i_2] [i_2])) : (((/* implicit */int) var_13))))))));
                    arr_10 [i_0 + 4] [i_0 + 4] [i_2] [i_2] |= ((/* implicit */unsigned int) ((((/* implicit */long long int) min((arr_6 [i_0 - 1]), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_8 [i_1] [i_1] [i_1] [i_1 - 2]))))))) >= (min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_2] [i_1])) ? (((/* implicit */int) arr_8 [i_0] [i_1 + 1] [i_2] [i_1 + 1])) : (((/* implicit */int) arr_5 [i_0] [i_1 + 1] [i_1 - 1]))))), (((((var_0) + (9223372036854775807LL))) << (((((var_0) + (5121947799374223573LL))) - (56LL)))))))));
                    var_16 = ((/* implicit */int) min((((/* implicit */unsigned int) arr_8 [i_1 - 1] [i_2] [i_2] [i_2])), (max((((unsigned int) var_10)), (((/* implicit */unsigned int) max((arr_9 [i_0] [i_1 - 1] [i_1 - 1] [i_1 - 1]), (((/* implicit */unsigned short) arr_8 [i_0] [i_0] [i_0 - 3] [i_0])))))))));
                    arr_11 [i_1] = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_1 - 2] [i_1 - 2] [i_0 + 4])) >> ((((-(-1603131413))) - (1603131395)))))), (((unsigned int) var_3))));
                }
            } 
        } 
        var_17 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0 + 2] [i_0 + 4])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0 + 4])) && (((/* implicit */_Bool) arr_6 [i_0])))))) : (min((var_0), (((/* implicit */long long int) var_11))))))), (max((min((((/* implicit */unsigned long long int) arr_6 [i_0])), (var_12))), (((/* implicit */unsigned long long int) min((var_10), (((/* implicit */unsigned short) var_13)))))))));
        /* LoopNest 2 */
        for (unsigned int i_3 = 3; i_3 < 24; i_3 += 3) 
        {
            for (unsigned short i_4 = 0; i_4 < 25; i_4 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) max((-1603131410), (((/* implicit */int) (short)-3475))));
                    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_3] [i_3 - 1] [i_3 - 2]))))) ? (((/* implicit */int) ((((/* implicit */int) var_8)) < (((/* implicit */int) var_5))))) : (((/* implicit */int) max((arr_7 [i_3] [i_3] [i_3 - 3]), (arr_7 [i_3 - 2] [i_3 - 2] [i_3 - 3]))))));
                    var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) min((((max((var_2), (((/* implicit */unsigned int) arr_14 [(short)20] [i_0] [(short)20])))) | (((/* implicit */unsigned int) ((arr_18 [i_0] [i_0] [i_3] [i_3]) ? (((/* implicit */int) arr_9 [i_0 - 1] [i_3] [i_3] [i_4])) : (arr_15 [(short)16] [i_3] [i_3 - 1] [i_4])))))), (((/* implicit */unsigned int) (-(((arr_18 [i_0 + 4] [i_3] [i_3] [i_4]) ? (((/* implicit */int) arr_7 [i_4] [i_4] [i_4])) : (((/* implicit */int) arr_18 [i_0 - 2] [i_3] [i_4] [i_4]))))))))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (short i_5 = 3; i_5 < 24; i_5 += 1) 
        {
            for (unsigned short i_6 = 4; i_6 < 24; i_6 += 4) 
            {
                for (unsigned long long int i_7 = 4; i_7 < 24; i_7 += 2) 
                {
                    {
                        var_21 = ((/* implicit */unsigned long long int) ((unsigned int) max((3735320541U), (((/* implicit */unsigned int) -1603131388)))));
                        var_22 |= ((/* implicit */unsigned int) max((max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) arr_17 [i_0] [i_6 - 1] [i_6] [i_6]))))), (arr_24 [i_0 - 3] [i_0] [i_0 + 3] [i_0 + 4]))), (((/* implicit */long long int) ((max((((/* implicit */int) (_Bool)1)), (1235791264))) | (((arr_2 [i_7]) ? (((/* implicit */int) var_1)) : (arr_15 [i_7] [i_5 - 2] [i_7] [i_7]))))))));
                        var_23 = ((/* implicit */unsigned short) arr_16 [i_5] [i_6 - 3] [i_7]);
                        var_24 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) min((var_14), (((/* implicit */long long int) arr_25 [i_6] [i_6] [i_5 - 3]))))))) == (((((/* implicit */_Bool) arr_1 [i_0 + 4] [i_0 + 4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 3] [i_0]))) : (arr_13 [i_6])))));
                        var_25 = ((/* implicit */signed char) ((((_Bool) 1973757820U)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_25 [i_0 + 1] [i_5 - 1] [i_6 + 1])) ? (((/* implicit */int) arr_5 [i_0 + 1] [i_5 + 1] [i_6 - 4])) : (((/* implicit */int) arr_1 [i_0] [i_0 - 2]))))) : (((unsigned int) arr_25 [i_0] [i_5 - 2] [i_6 - 1]))));
                    }
                } 
            } 
        } 
    }
    for (int i_8 = 2; i_8 < 7; i_8 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_9 = 0; i_9 < 10; i_9 += 4) 
        {
            for (unsigned short i_10 = 3; i_10 < 7; i_10 += 4) 
            {
                {
                    var_26 = (i_8 % 2 == zero) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) max((var_5), (((/* implicit */unsigned char) arr_2 [i_10 - 2]))))) * (((/* implicit */int) arr_18 [i_10 + 1] [i_10 + 2] [i_10] [i_10]))))) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (min((max((arr_22 [i_10] [i_8]), (((/* implicit */long long int) arr_8 [i_8] [i_8] [i_8] [i_8])))), (((/* implicit */long long int) ((((/* implicit */int) arr_14 [i_8 + 3] [i_9] [i_8])) >> (((((/* implicit */int) arr_0 [i_10])) - (15161))))))))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) max((var_5), (((/* implicit */unsigned char) arr_2 [i_10 - 2]))))) * (((/* implicit */int) arr_18 [i_10 + 1] [i_10 + 2] [i_10] [i_10]))))) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (min((max((arr_22 [i_10] [i_8]), (((/* implicit */long long int) arr_8 [i_8] [i_8] [i_8] [i_8])))), (((/* implicit */long long int) ((((((/* implicit */int) arr_14 [i_8 + 3] [i_9] [i_8])) + (2147483647))) >> (((((/* implicit */int) arr_0 [i_10])) - (15161)))))))))));
                    var_27 = ((/* implicit */unsigned char) min((((1599530222124117421LL) << (((2724831160U) - (2724831160U))))), (((long long int) ((((/* implicit */int) arr_31 [i_8] [i_8] [i_8])) > (((/* implicit */int) var_9)))))));
                    var_28 |= ((/* implicit */long long int) (!(((/* implicit */_Bool) max((arr_32 [i_8] [i_10 + 1] [i_10 - 2] [i_9]), (arr_32 [i_8] [i_10 + 3] [i_10 - 3] [i_10]))))));
                    arr_34 [i_8] [i_8] = ((/* implicit */unsigned int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) max((var_6), (((/* implicit */unsigned short) var_1)))))) + (max((((/* implicit */unsigned long long int) var_5)), (var_3))))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) min((arr_20 [i_8] [i_8]), (arr_2 [i_8]))))) < (min((-2580639273750228769LL), (((/* implicit */long long int) (signed char)0)))))))));
                }
            } 
        } 
        arr_35 [i_8] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((var_2) + (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) >> (((/* implicit */int) ((_Bool) (unsigned short)31366)))))), (min((((/* implicit */long long int) min((var_7), (var_5)))), (arr_24 [i_8 + 1] [i_8 + 2] [i_8 + 1] [i_8 + 2])))));
    }
    for (unsigned int i_11 = 0; i_11 < 12; i_11 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_12 = 0; i_12 < 12; i_12 += 3) 
        {
            /* LoopNest 2 */
            for (short i_13 = 0; i_13 < 12; i_13 += 1) 
            {
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    {
                        var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_15 [i_12] [i_12] [i_13] [i_12])) ? (((/* implicit */int) arr_19 [i_11] [i_14])) : (((/* implicit */int) arr_44 [i_11] [i_11] [i_11] [i_11]))));
                        arr_45 [i_11] [i_11] [i_11] [i_11] [i_11] [i_12] = ((/* implicit */_Bool) ((unsigned long long int) arr_43 [i_11] [i_12]));
                        var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_2) >> (((((/* implicit */int) var_1)) - (4121)))))) ? (((/* implicit */int) ((var_2) < (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_13])))))) : (((((/* implicit */int) var_10)) << (((arr_12 [i_11] [i_11]) - (798501740U)))))));
                    }
                } 
            } 
            var_31 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_1))))) < (((/* implicit */int) ((var_0) >= (arr_39 [i_12] [i_12]))))));
            /* LoopNest 3 */
            for (long long int i_15 = 1; i_15 < 10; i_15 += 4) 
            {
                for (int i_16 = 0; i_16 < 12; i_16 += 1) 
                {
                    for (long long int i_17 = 0; i_17 < 12; i_17 += 1) 
                    {
                        {
                            var_32 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_42 [i_11] [i_12] [i_15])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_48 [i_12] [i_12] [i_12]))) : (var_3))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_11] [i_15] [i_11] [i_11])))));
                            arr_55 [i_11] [i_12] [i_15 + 2] [i_12] [i_15] = ((/* implicit */int) ((unsigned short) arr_41 [i_15 + 1] [i_12] [i_15]));
                            arr_56 [i_11] [i_11] [i_15 - 1] [i_12] [i_17] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_47 [i_12])) ? (((/* implicit */unsigned long long int) var_0)) : (arr_47 [i_12])));
                            var_33 = ((/* implicit */_Bool) ((((arr_19 [i_16] [i_15]) ? (((/* implicit */int) arr_44 [i_11] [i_12] [i_15] [i_11])) : (((/* implicit */int) arr_9 [i_11] [i_12] [i_15 - 1] [i_16])))) | (((/* implicit */int) arr_44 [i_15 + 1] [i_15 + 1] [i_15 + 2] [i_15]))));
                        }
                    } 
                } 
            } 
        }
        var_34 = ((/* implicit */unsigned int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)65535)));
    }
    var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? (var_14) : (((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_6))))), (((((/* implicit */_Bool) (unsigned short)65511)) ? (1235791264) : (((/* implicit */int) (short)-14069)))))))));
    var_36 |= ((/* implicit */signed char) min((((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (min((var_14), (((/* implicit */long long int) var_1)))))), (((/* implicit */long long int) min(((unsigned short)10), ((unsigned short)48444))))));
    var_37 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) var_9)), (var_3))) / (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1)))))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_7))));
}

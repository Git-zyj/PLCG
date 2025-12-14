/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166069
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
    var_12 = ((/* implicit */int) min((var_12), (((((/* implicit */int) var_5)) % (((/* implicit */int) ((unsigned short) ((_Bool) (unsigned char)161))))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            arr_5 [i_0] [i_1] = ((((/* implicit */_Bool) arr_2 [i_0])) ? (var_0) : (((/* implicit */int) ((short) (unsigned char)0))));
            var_13 = ((/* implicit */signed char) var_4);
        }
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            arr_9 [i_0] = ((/* implicit */unsigned char) arr_3 [i_0]);
            /* LoopSeq 3 */
            for (short i_3 = 0; i_3 < 11; i_3 += 1) 
            {
                var_14 = ((/* implicit */long long int) max((max((((/* implicit */unsigned long long int) max(((unsigned short)60351), (((/* implicit */unsigned short) var_8))))), (((unsigned long long int) (unsigned short)5184)))), (((/* implicit */unsigned long long int) var_0))));
                arr_14 [i_3] [i_0] [i_2 - 1] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) -472657471))) <= (((/* implicit */int) ((signed char) max((arr_4 [i_0] [i_0] [i_3]), (((/* implicit */unsigned int) (short)-12832))))))));
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 11; i_4 += 1) 
                {
                    for (unsigned char i_5 = 2; i_5 < 9; i_5 += 3) 
                    {
                        {
                            arr_22 [i_0] [i_2 - 1] [i_2 - 1] [i_3] [i_3] [i_5 + 1] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (short)-12832))) & (-1325886269488935429LL)));
                            var_15 = ((/* implicit */long long int) ((unsigned int) 1325886269488935426LL));
                            var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_0] [(_Bool)1] [i_2 - 1] [i_2 - 1] [i_5 - 2])) && (arr_10 [i_5 + 2])))) * (((int) var_1)))))));
                            var_17 = arr_17 [i_2 - 1] [i_2] [i_4] [i_4];
                        }
                    } 
                } 
            }
            for (unsigned char i_6 = 2; i_6 < 8; i_6 += 1) 
            {
                var_18 = (!((!(((/* implicit */_Bool) arr_0 [i_0] [i_2 - 1])))));
                arr_25 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) min(((~(((((/* implicit */unsigned int) ((/* implicit */int) (signed char)30))) * (arr_4 [i_0] [i_0] [i_0]))))), (min((arr_13 [i_6 + 1] [i_2 - 1] [i_6 - 2]), (((/* implicit */unsigned int) arr_24 [i_6 + 2] [i_2 - 1]))))));
                arr_26 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */short) ((unsigned char) var_11))), (((short) var_4))));
            }
            /* vectorizable */
            for (signed char i_7 = 1; i_7 < 9; i_7 += 3) 
            {
                var_19 ^= ((/* implicit */signed char) ((((/* implicit */int) var_5)) + (((/* implicit */int) ((unsigned char) arr_15 [i_0] [i_0] [i_0] [i_0])))));
                var_20 = ((/* implicit */unsigned char) arr_16 [i_0] [i_7]);
            }
            /* LoopSeq 1 */
            for (long long int i_8 = 1; i_8 < 10; i_8 += 1) 
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_9 = 0; i_9 < 11; i_9 += 3) 
                {
                    arr_36 [i_9] [i_2 - 1] [i_8] [(short)8] [i_9] = ((/* implicit */signed char) ((((/* implicit */int) arr_8 [i_2 - 1] [i_2 - 1] [i_8 - 1])) + (((/* implicit */int) arr_8 [i_2 - 1] [i_2 - 1] [i_8 - 1]))));
                    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) arr_27 [i_0] [i_2] [i_8] [i_9]))));
                    /* LoopSeq 2 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        var_22 = ((/* implicit */signed char) ((unsigned int) 1449451743041091325LL));
                        arr_41 [i_9] [i_2] = ((/* implicit */long long int) var_5);
                        var_23 = ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)-1))));
                        var_24 += ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)73)) >> (((((/* implicit */int) (signed char)50)) - (19)))));
                    }
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        var_25 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) 312205439U)) ? (((/* implicit */int) (unsigned short)60351)) : (((/* implicit */int) var_1)))));
                        arr_44 [i_0] [i_0] [i_9] [i_0] = ((/* implicit */int) ((unsigned char) (signed char)70));
                    }
                    var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (~(((/* implicit */int) var_6))))) + (-7023708408658887163LL)));
                }
                for (unsigned short i_12 = 0; i_12 < 11; i_12 += 1) 
                {
                    var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1348440462U)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-115)))))) ? (((/* implicit */int) max(((unsigned char)158), (((/* implicit */unsigned char) (_Bool)0))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)64)) : (((/* implicit */int) var_6))))));
                    var_28 &= ((/* implicit */unsigned short) max((((/* implicit */long long int) max((((signed char) var_0)), (((/* implicit */signed char) var_9))))), (max((-20LL), (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_7)))))));
                    var_29 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_39 [i_0] [i_0] [i_8 - 1] [(signed char)2] [i_8] [i_2]))));
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_13 = 0; i_13 < 11; i_13 += 1) 
                {
                    arr_53 [i_0] [i_2] [8] = ((/* implicit */signed char) var_5);
                    var_30 = ((/* implicit */unsigned int) min((var_30), (((unsigned int) -1325886269488935418LL))));
                    arr_54 [i_0] [i_2] [i_0] [i_13] [i_13] [i_2] = ((/* implicit */signed char) ((arr_47 [i_0] [i_8 - 1] [i_8] [i_2 - 1]) - (((/* implicit */long long int) ((/* implicit */int) var_6)))));
                }
                /* LoopNest 2 */
                for (short i_14 = 0; i_14 < 11; i_14 += 4) 
                {
                    for (unsigned int i_15 = 0; i_15 < 11; i_15 += 1) 
                    {
                        {
                            var_31 = ((/* implicit */signed char) var_4);
                            arr_59 [(unsigned char)0] [i_2] [i_2] [8] [i_2] [i_2 - 1] [i_2 - 1] = ((/* implicit */long long int) ((unsigned char) ((int) arr_57 [i_0] [i_2 - 1] [5U] [i_14])));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_16 = 0; i_16 < 11; i_16 += 1) 
                {
                    var_32 = ((/* implicit */unsigned char) (signed char)-7);
                    arr_63 [(unsigned char)3] [i_2] [i_16] = ((/* implicit */unsigned short) arr_0 [i_0] [i_2]);
                    arr_64 [i_16] = ((/* implicit */unsigned short) var_1);
                    arr_65 [i_16] [i_2] [i_2] [i_16] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) var_0))) ? (((unsigned int) (unsigned short)60336)) : (((/* implicit */unsigned int) ((/* implicit */int) arr_55 [i_0] [(signed char)5] [i_8] [i_8])))));
                }
            }
            var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) max(((unsigned short)1996), (((/* implicit */unsigned short) arr_56 [i_0] [i_2 - 1] [0U] [i_2]))))) : (((/* implicit */int) var_11))));
        }
        arr_66 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_5))));
        /* LoopNest 2 */
        for (short i_17 = 0; i_17 < 11; i_17 += 3) 
        {
            for (unsigned short i_18 = 0; i_18 < 11; i_18 += 2) 
            {
                {
                    arr_71 [i_0] = ((/* implicit */unsigned short) (signed char)-1);
                    /* LoopNest 2 */
                    for (unsigned short i_19 = 0; i_19 < 11; i_19 += 1) 
                    {
                        for (signed char i_20 = 0; i_20 < 11; i_20 += 3) 
                        {
                            {
                                var_34 = ((/* implicit */long long int) min((var_34), (((/* implicit */long long int) (+(((/* implicit */int) arr_55 [i_0] [i_17] [i_18] [i_19])))))));
                                var_35 = ((/* implicit */unsigned char) (~((-(((/* implicit */int) max(((unsigned short)5184), (((/* implicit */unsigned short) var_9)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (unsigned int i_21 = 0; i_21 < 11; i_21 += 2) /* same iter space */
    {
        arr_80 [(_Bool)1] [i_21] = ((/* implicit */int) max((((/* implicit */long long int) (signed char)-104)), (((((/* implicit */long long int) arr_67 [i_21] [(signed char)2])) - (-1325886269488935418LL)))));
        var_36 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) ((arr_70 [i_21] [i_21] [i_21]) / (((/* implicit */int) arr_55 [i_21] [i_21] [i_21] [i_21]))))) ? (((((/* implicit */int) (short)-28241)) * (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (short)-12832))))));
        var_37 = ((/* implicit */unsigned char) max((((/* implicit */short) ((signed char) arr_39 [i_21] [i_21] [i_21] [i_21] [i_21] [i_21]))), (((short) -1325886269488935418LL))));
        arr_81 [i_21] [(signed char)3] = ((/* implicit */short) var_2);
        arr_82 [i_21] = ((/* implicit */unsigned char) 4096);
    }
    var_38 = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)-94)) : (((/* implicit */int) (unsigned char)141))))) > (2549157771U)));
}

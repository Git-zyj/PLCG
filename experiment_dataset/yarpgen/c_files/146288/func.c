/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146288
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
    var_11 = ((/* implicit */unsigned long long int) var_0);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        {
                            var_12 = ((/* implicit */unsigned long long int) ((signed char) 4163186160U));
                            var_13 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(361624795292483865ULL)))) ? (((/* implicit */long long int) 281728105)) : (((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2] [i_1] [i_2] [i_3]))) & (var_6)))))) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) arr_3 [i_2] [i_1] [i_0]))))))) : ((-(((/* implicit */int) arr_4 [2] [(unsigned short)3] [(short)11] [(short)13]))))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (long long int i_4 = 0; i_4 < 14; i_4 += 4) 
                {
                    arr_11 [i_0] [(unsigned char)12] [i_4] &= ((/* implicit */unsigned char) max((4194303), (((/* implicit */int) (_Bool)0))));
                    var_14 = ((/* implicit */unsigned short) (+(-281728105)));
                    arr_12 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_1] [i_4]))) : (max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) ^ (6127321176481976488ULL))), (((/* implicit */unsigned long long int) ((18085119278417067755ULL) < (((/* implicit */unsigned long long int) -2125568169)))))))));
                }
                /* vectorizable */
                for (signed char i_5 = 0; i_5 < 14; i_5 += 4) 
                {
                    arr_15 [i_5] |= ((/* implicit */unsigned short) 18085119278417067755ULL);
                    var_15 = ((/* implicit */int) (-(361624795292483883ULL)));
                    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) (short)-23423)) ? (arr_8 [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1]) : (-2125568169))))));
                }
                for (long long int i_6 = 1; i_6 < 13; i_6 += 3) 
                {
                    var_17 = ((/* implicit */int) 6127321176481976488ULL);
                    arr_18 [i_0] = ((/* implicit */unsigned long long int) ((_Bool) arr_6 [7]));
                    /* LoopSeq 4 */
                    for (short i_7 = 0; i_7 < 14; i_7 += 4) 
                    {
                        arr_23 [i_0] [i_0] [i_0] [i_1] [i_6] [i_0] = ((/* implicit */unsigned char) max((max((1494066747), (((/* implicit */int) var_7)))), (((/* implicit */int) var_5))));
                        arr_24 [i_0] [i_1] [i_6] [i_7] = ((/* implicit */_Bool) 1097373760924923678ULL);
                        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((8460238524897062816LL), (((/* implicit */long long int) 33554431U))))) ? (((/* implicit */unsigned long long int) var_0)) : (max((((/* implicit */unsigned long long int) (signed char)-89)), (var_3)))))) ? (((/* implicit */int) max(((unsigned char)18), (((/* implicit */unsigned char) (signed char)109))))) : (((/* implicit */int) arr_1 [8U]))));
                    }
                    for (signed char i_8 = 0; i_8 < 14; i_8 += 4) 
                    {
                        arr_27 [i_0] [i_1] [(unsigned short)6] [i_0] = ((/* implicit */unsigned long long int) ((int) ((16382580640949809507ULL) + (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7))))))));
                        var_19 = ((/* implicit */_Bool) (~(((int) (-(((/* implicit */int) arr_2 [i_8])))))));
                        var_20 = ((/* implicit */unsigned char) ((((1097373760924923678ULL) == (((/* implicit */unsigned long long int) -2125568169)))) ? (max((((((/* implicit */_Bool) 787442050U)) ? (((/* implicit */int) var_5)) : (var_4))), (((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_6] [i_8])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_5 [(signed char)0] [i_6] [i_6])))))) : ((+((~(((/* implicit */int) arr_4 [(signed char)10] [(unsigned short)2] [i_6] [i_8]))))))));
                    }
                    for (long long int i_9 = 0; i_9 < 14; i_9 += 2) 
                    {
                        arr_32 [(_Bool)1] [i_6] [i_0] [i_0] [(unsigned char)5] [(short)7] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_1 - 1])) && ((_Bool)1))))) + (max((arr_3 [i_6 - 1] [i_6] [(unsigned short)9]), (((/* implicit */unsigned int) arr_1 [i_1 - 1]))))));
                        /* LoopSeq 1 */
                        for (signed char i_10 = 0; i_10 < 14; i_10 += 2) 
                        {
                            arr_35 [0U] [0U] [i_0] = (unsigned char)79;
                            arr_36 [i_0] [i_0] = ((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned short) (_Bool)1))))) ? (-8460238524897062816LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)88))));
                            var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_29 [i_6 - 1] [i_6]) ? (((/* implicit */int) arr_33 [i_0] [i_0])) : (((/* implicit */int) arr_33 [i_0] [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_29 [i_6 + 1] [i_9])), (arr_33 [i_0] [i_0]))))) : (max((((/* implicit */long long int) arr_29 [i_6 + 1] [(unsigned short)7])), (-8460238524897062816LL)))));
                            var_22 = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_16 [i_1 - 1] [i_1] [i_1] [i_6 + 1])) ? (arr_16 [i_1 - 1] [i_1] [i_6] [i_6 + 1]) : (arr_16 [i_1 - 1] [i_6] [10] [i_6 - 1]))), (arr_16 [i_1 - 1] [i_1] [i_6] [i_6 - 1])));
                        }
                    }
                    for (unsigned int i_11 = 0; i_11 < 14; i_11 += 1) 
                    {
                        var_23 = ((/* implicit */unsigned int) max((((int) max((((/* implicit */unsigned int) arr_17 [i_11] [i_1])), (4094053301U)))), (2125568157)));
                        var_24 |= ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (_Bool)1)), (787442065U)));
                    }
                }
                var_25 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_29 [i_0] [(_Bool)1]))))) ? (((/* implicit */int) (signed char)-1)) : (((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_1] [i_0])) ? (var_0) : (arr_8 [i_0] [i_0] [i_1] [1LL])))))) ? (((/* implicit */int) arr_33 [i_0] [i_1])) : (((/* implicit */int) ((((/* implicit */int) (signed char)-85)) < (((((/* implicit */_Bool) (short)-23413)) ? (-38852159) : (arr_9 [i_0] [i_1] [i_0] [i_0]))))))));
            }
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150158
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
    var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) (~(max((((unsigned int) (short)-3801)), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_3))))))))))));
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_5)), (((((/* implicit */_Bool) var_3)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-108)))))))) ? (((/* implicit */long long int) ((/* implicit */int) min(((_Bool)1), ((_Bool)1))))) : (min((((/* implicit */long long int) var_12)), (((long long int) var_2))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned int i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    var_15 *= ((/* implicit */_Bool) (-(var_0)));
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 0; i_3 < 18; i_3 += 1) /* same iter space */
                    {
                        /* LoopSeq 4 */
                        for (short i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            var_16 *= ((/* implicit */unsigned long long int) arr_6 [i_1] [i_2] [i_3] [i_4]);
                            var_17 = ((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))));
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            arr_19 [i_0] [i_0 + 3] [i_0 + 3] [i_2] [i_3] [(unsigned short)4] [i_5] = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((int) (short)4095))) ? (((/* implicit */unsigned long long int) var_12)) : (((unsigned long long int) 3211190852U)))), (((/* implicit */unsigned long long int) ((_Bool) var_5)))));
                            var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (((~(((/* implicit */int) arr_1 [i_5] [i_0 + 3])))) < (((/* implicit */int) var_10)))))));
                            arr_20 [i_0] [i_1] [i_2] [i_3] [i_5] = arr_9 [i_3];
                        }
                        /* vectorizable */
                        for (unsigned long long int i_6 = 2; i_6 < 15; i_6 += 2) 
                        {
                            arr_23 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((_Bool) var_9);
                            arr_24 [i_6] [i_6] = ((/* implicit */signed char) (~(((/* implicit */int) arr_22 [i_0 + 2] [i_6 + 2] [i_6] [i_6] [i_6 + 1] [i_6 + 3]))));
                        }
                        for (unsigned long long int i_7 = 2; i_7 < 15; i_7 += 2) 
                        {
                            var_19 = ((/* implicit */long long int) (unsigned short)23826);
                            var_20 = ((/* implicit */unsigned short) var_10);
                        }
                        var_21 ^= ((/* implicit */_Bool) (signed char)-58);
                        arr_28 [i_0] [i_0 - 1] = ((/* implicit */int) arr_4 [i_0] [i_1] [i_2]);
                        arr_29 [i_0] [i_0 + 3] [5U] [i_0 + 2] [5U] [5U] = ((/* implicit */unsigned short) ((signed char) (_Bool)1));
                    }
                    /* vectorizable */
                    for (unsigned int i_8 = 0; i_8 < 18; i_8 += 1) /* same iter space */
                    {
                        arr_33 [i_0] [i_0 + 3] [i_0] = ((/* implicit */unsigned int) (~(arr_13 [i_0 + 1])));
                        var_22 &= ((/* implicit */unsigned int) (_Bool)1);
                    }
                }
                /* vectorizable */
                for (short i_9 = 0; i_9 < 18; i_9 += 3) 
                {
                    var_23 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (unsigned short)65527)) : (((/* implicit */int) (_Bool)1)))) << (((arr_0 [i_0 + 1] [i_1]) - (584658946U)))));
                    /* LoopSeq 2 */
                    for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
                    {
                        arr_39 [i_9] [i_9] [i_9] [i_1] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? ((-(((/* implicit */int) arr_12 [i_9] [i_1] [i_9] [i_9] [i_10 + 1] [i_9] [i_0])))) : (((/* implicit */int) var_10))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_11 = 0; i_11 < 18; i_11 += 1) 
                        {
                            var_24 = arr_40 [i_0] [i_1] [i_9] [i_0] [i_11];
                            var_25 *= ((/* implicit */signed char) arr_3 [i_11] [i_0]);
                        }
                    }
                    for (unsigned short i_12 = 0; i_12 < 18; i_12 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_13 = 2; i_13 < 17; i_13 += 4) 
                        {
                            arr_51 [(_Bool)1] [i_9] [(_Bool)1] [i_9] [i_0] = (~(((unsigned int) (unsigned short)9)));
                            arr_52 [i_0 - 1] [i_9] [i_13] [i_12] = ((/* implicit */unsigned int) (-(((/* implicit */int) (short)0))));
                        }
                        var_26 *= ((/* implicit */unsigned char) arr_42 [i_1]);
                        var_27 = ((long long int) arr_9 [i_0]);
                        var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_8 [12U] [i_1] [i_9] [i_12])))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)0))));
                    }
                    var_29 = arr_47 [i_0 - 1] [i_1];
                    var_30 ^= ((/* implicit */short) ((_Bool) arr_47 [i_0 + 2] [i_1]));
                }
                /* LoopNest 2 */
                for (unsigned int i_14 = 2; i_14 < 17; i_14 += 4) 
                {
                    for (unsigned short i_15 = 0; i_15 < 18; i_15 += 2) 
                    {
                        {
                            var_31 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) arr_31 [i_0] [i_0] [i_0 + 1] [i_0] [i_0] [i_0]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_1] [i_1] [i_14] [i_15] [i_15])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_15] [i_1]))) : (var_3)))))) ? (((((/* implicit */_Bool) ((unsigned long long int) arr_21 [i_0 - 1]))) ? (((unsigned int) (_Bool)0)) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) : (((var_10) ? ((((_Bool)1) ? (arr_21 [i_14]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_42 [i_15]))))) : (arr_55 [i_1]))));
                            var_32 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_59 [i_0 + 3] [i_0] [i_1] [5LL] [i_15])) ? (((/* implicit */int) (_Bool)1)) : ((+(((/* implicit */int) var_4))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_16 = 0; i_16 < 18; i_16 += 3) 
                {
                    for (unsigned long long int i_17 = 0; i_17 < 18; i_17 += 1) 
                    {
                        {
                            var_33 = ((/* implicit */_Bool) ((unsigned int) max((arr_56 [i_0 + 1] [i_0 + 1] [i_1]), (min((((/* implicit */unsigned int) arr_27 [i_17] [i_17] [i_17] [i_17] [(_Bool)1])), (1073479680U))))));
                            arr_65 [i_16] [i_16] [i_16] = ((/* implicit */unsigned int) var_1);
                            arr_66 [i_17] [i_16] [i_16] [i_0 + 3] = ((/* implicit */unsigned long long int) var_5);
                            var_34 = ((/* implicit */unsigned int) arr_44 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16]);
                        }
                    } 
                } 
                var_35 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((short) arr_18 [i_0 + 1] [(signed char)12] [i_1] [i_1] [i_0])))));
            }
        } 
    } 
}

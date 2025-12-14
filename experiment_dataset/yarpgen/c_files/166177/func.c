/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166177
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 10; i_2 += 1) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 2; i_3 < 9; i_3 += 3) 
                    {
                        var_15 = ((/* implicit */signed char) ((_Bool) ((min((-847144630), (((/* implicit */int) arr_7 [(short)0] [(_Bool)1] [i_2])))) / ((+(((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0])))))));
                        var_16 = ((/* implicit */int) ((((/* implicit */_Bool) max((arr_9 [(unsigned short)8] [i_0] [i_3 + 1] [i_3 + 1]), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) != (4093708105786017443ULL))))))) ? (max((arr_10 [i_3] [(_Bool)1] [(_Bool)1] [i_3]), (((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_0] [3LL] [(_Bool)1])) >> (((arr_4 [i_0] [i_1]) + (1648486571)))))))) : (((/* implicit */long long int) (~(arr_6 [(unsigned short)2] [i_0] [i_1] [i_3]))))));
                    }
                    for (long long int i_4 = 1; i_4 < 8; i_4 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            arr_15 [i_0] [i_1] [i_1] [7ULL] [i_1] [(unsigned short)2] = ((/* implicit */unsigned long long int) (-((+(arr_13 [3ULL] [i_2] [i_1] [i_0])))));
                            var_17 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_0)) ? (arr_6 [i_1] [4] [(_Bool)1] [(_Bool)1]) : (arr_6 [i_0] [2] [i_0] [i_0]))) + (((arr_0 [i_4]) ? (847144630) : (var_4)))))) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_0]))))))));
                        }
                        for (long long int i_6 = 1; i_6 < 8; i_6 += 1) 
                        {
                            var_18 = ((/* implicit */int) min((((((/* implicit */_Bool) arr_8 [i_6] [i_2] [i_1] [i_0])) ? (((((/* implicit */_Bool) arr_11 [i_6] [i_4] [7ULL] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (9728544152979948505ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (562985647) : (((/* implicit */int) (_Bool)0))))))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) 1501451915085212432LL))))), (arr_10 [i_6] [i_6 - 1] [i_4] [i_4 + 1]))))));
                            arr_19 [i_0] [i_0] [i_2] [i_4] [7LL] = ((/* implicit */signed char) min((arr_10 [i_0] [3ULL] [i_0] [i_0]), (arr_10 [i_0] [(_Bool)1] [i_2] [i_6])));
                        }
                        for (short i_7 = 1; i_7 < 7; i_7 += 1) 
                        {
                            var_19 = ((/* implicit */short) ((((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_8 [i_7] [i_4] [(unsigned short)9] [i_0])), (6ULL)))) ? (min((var_10), (((/* implicit */long long int) arr_8 [i_1] [i_2] [i_4] [i_7])))) : (((/* implicit */long long int) ((((/* implicit */int) var_2)) | (((/* implicit */int) var_1))))))) + (9223372036854775807LL))) << (((((((/* implicit */int) (short)-2494)) + (2551))) - (53)))));
                            var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_18 [0] [(unsigned short)6] [i_7 + 1] [i_7 - 1] [i_7 - 1]) || (arr_18 [i_7] [(unsigned short)5] [i_7 + 1] [i_7 + 2] [i_7 + 1]))))) >= (((((((/* implicit */_Bool) (signed char)21)) ? (3794986958948664063ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_7] [i_4] [i_2] [i_1] [i_0]))))) ^ (((/* implicit */unsigned long long int) (~(2722193126942989985LL)))))))))));
                            var_21 = min((((/* implicit */unsigned long long int) -847144630)), (4148427722078523336ULL));
                        }
                        /* LoopSeq 3 */
                        for (long long int i_8 = 3; i_8 < 8; i_8 += 1) 
                        {
                            var_22 = ((/* implicit */unsigned long long int) arr_9 [5ULL] [i_0] [i_2] [i_2]);
                            var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) min((((/* implicit */short) (!(((/* implicit */_Bool) ((long long int) (signed char)-31)))))), (((short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_3))))))))));
                            arr_26 [(unsigned short)2] [i_0] [i_2] [i_2] [i_2] [9] [i_2] = ((/* implicit */_Bool) ((arr_5 [i_0] [i_1] [i_4 + 1] [i_8 - 1]) * (((((/* implicit */long long int) ((/* implicit */int) var_1))) / (arr_5 [i_0] [i_1] [i_2] [i_4])))));
                        }
                        /* vectorizable */
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            arr_29 [i_9] [(_Bool)0] [(_Bool)1] |= ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_17 [i_1] [i_9])) != (((/* implicit */int) var_1))))) != (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) arr_17 [(signed char)7] [i_2]))))));
                            arr_30 [i_0] [(signed char)3] [i_2] [(short)5] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)2493)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((signed char) arr_5 [i_0] [(unsigned short)9] [i_4] [(_Bool)1])))));
                            var_24 = ((/* implicit */int) ((((/* implicit */int) ((_Bool) (_Bool)1))) <= (((((/* implicit */_Bool) arr_21 [i_0] [i_1] [i_2] [9LL] [i_0] [i_9])) ? (-847144630) : (((/* implicit */int) var_2))))));
                        }
                        for (short i_10 = 2; i_10 < 9; i_10 += 3) 
                        {
                            var_25 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */int) var_3)) >> (((-1501451915085212448LL) + (1501451915085212479LL)))))) ? (((/* implicit */unsigned long long int) arr_6 [i_10] [i_0] [i_0] [i_0])) : (((14ULL) ^ (17ULL))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) (-(arr_10 [i_10] [i_2] [i_1] [0LL])))) >= (((arr_11 [i_0] [i_2] [i_4] [i_10]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))))));
                            arr_33 [i_10] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned long long int) min(((-(((/* implicit */int) arr_14 [i_4 + 2] [i_0] [i_10 - 1] [i_4])))), (min((((((/* implicit */int) (short)-21969)) / (((/* implicit */int) (short)-25205)))), (((/* implicit */int) arr_14 [i_10 - 2] [i_0] [i_0] [i_4 + 1]))))));
                            var_26 *= max((max((((/* implicit */int) var_13)), (((((/* implicit */_Bool) (short)-2494)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)65535)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */_Bool) var_14)) ? (-865053375) : (((/* implicit */int) var_0)))) : (var_11))));
                            var_27 = ((/* implicit */unsigned long long int) ((short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_2] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)6080))) : (6257260029350922936LL)))))));
                        }
                    }
                    for (unsigned long long int i_11 = 0; i_11 < 10; i_11 += 1) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) ((((/* implicit */int) (signed char)102)) != (((/* implicit */int) (signed char)3)))))));
                            arr_40 [i_0] [i_2] [i_12] = ((((((/* implicit */_Bool) 8532296650372189406ULL)) ? (-1736441400) : (((/* implicit */int) var_2)))) / ((+(((/* implicit */int) arr_9 [9ULL] [i_0] [i_11] [i_12])))));
                            var_29 = (!(((/* implicit */_Bool) ((unsigned long long int) (_Bool)1))));
                        }
                        arr_41 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((short) ((((/* implicit */int) var_3)) << (((max((arr_13 [i_0] [i_1] [i_2] [i_11]), (729839797))) - (1726963950))))));
                        var_30 -= min((((((/* implicit */long long int) arr_32 [i_0] [i_2] [4LL] [i_11] [i_2] [4LL] [i_2])) / ((+(-8724169121199945847LL))))), (((/* implicit */long long int) (~(((((/* implicit */_Bool) (unsigned short)59465)) ? (((/* implicit */int) arr_22 [i_0] [6] [i_0] [(_Bool)1])) : (((/* implicit */int) arr_0 [i_0]))))))));
                        var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [8LL])))))));
                    }
                    arr_42 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)6080)) ? ((~(var_5))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)30174)))));
                }
                for (int i_13 = 0; i_13 < 10; i_13 += 1) /* same iter space */
                {
                    arr_46 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((max((((/* implicit */long long int) (unsigned short)38826)), (((((/* implicit */_Bool) arr_9 [i_13] [i_0] [i_0] [i_0])) ? (var_5) : (((/* implicit */long long int) var_11)))))) - (((/* implicit */long long int) ((/* implicit */int) ((arr_36 [i_0] [i_0]) > (((/* implicit */int) arr_0 [i_13]))))))));
                    arr_47 [i_0] [(_Bool)1] [i_13] [3] = ((/* implicit */short) ((long long int) (+(arr_43 [i_0]))));
                }
                var_32 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((var_4) | (((/* implicit */int) var_8))))))) ? (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) 1736441417)) || (((/* implicit */_Bool) (unsigned short)25291))))) << (((/* implicit */int) ((14939989619887176764ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))))) : (min((((((/* implicit */_Bool) 821650564)) ? (((/* implicit */long long int) arr_16 [i_0] [i_1])) : (-1501451915085212433LL))), (((/* implicit */long long int) arr_35 [i_1] [(unsigned short)8] [i_1] [7ULL] [i_0] [8LL]))))));
            }
        } 
    } 
    var_33 = ((/* implicit */unsigned long long int) (+((+(((-1736441400) * (((/* implicit */int) (_Bool)0))))))));
    var_34 |= ((/* implicit */int) ((min((min((((/* implicit */unsigned long long int) var_6)), (var_7))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_3))))))) + (((/* implicit */unsigned long long int) var_4))));
    var_35 = (signed char)1;
}

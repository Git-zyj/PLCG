/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12351
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (long long int i_2 = 3; i_2 < 23; i_2 += 2) 
                {
                    arr_7 [(_Bool)1] [1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)110))))), (var_5)))) ? (((((/* implicit */_Bool) -6994604937922317973LL)) ? (18255843361040806573ULL) : (236471559174159859ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (6994604937922317972LL) : (((((/* implicit */_Bool) (short)19800)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)41964))) : (6994604937922317972LL))))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 22; i_3 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            arr_14 [i_3] [i_1] [i_1] [i_2 - 2] [21LL] [i_4] = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)65506)) ? (((/* implicit */int) (unsigned short)65505)) : (((/* implicit */int) (_Bool)1)))) - (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)1)), ((unsigned short)29))))))) ? (var_9) : (((((/* implicit */_Bool) ((unsigned char) 24LL))) ? (6969263097148545554ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))));
                            arr_15 [i_0] [i_1] [i_0] [i_3] [i_3] = ((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))));
                            var_17 = ((/* implicit */_Bool) var_9);
                            var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((18014398509481952LL), (2979631151722064232LL)))) ? (var_9) : (((var_9) / (var_5)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-17)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (_Bool)1))))))))) : (var_10)));
                        }
                        for (unsigned char i_5 = 0; i_5 < 24; i_5 += 4) 
                        {
                            var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) (~(((/* implicit */int) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)-19276)) : (((/* implicit */int) (unsigned short)0)))) == (((/* implicit */int) min((((/* implicit */short) var_7)), ((short)3314))))))))))));
                            var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */unsigned long long int) 0)) : (2331904617477241365ULL))))));
                            var_21 = 7870062096351841494LL;
                        }
                        var_22 += ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) 520730981U)) : (4611686018427387903LL))) < (((/* implicit */long long int) ((/* implicit */int) ((18446744073709551615ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (short)23579))))))))))) > (var_10)));
                    }
                    for (long long int i_6 = 2; i_6 < 23; i_6 += 3) 
                    {
                        arr_20 [(short)21] [i_1] [i_6] [(signed char)12] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(18446744073709551599ULL)))) ? (max((((/* implicit */long long int) (unsigned short)65531)), (min((var_10), (((/* implicit */long long int) -4)))))) : (min((var_0), (((/* implicit */long long int) var_11))))));
                        /* LoopSeq 3 */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            arr_24 [i_0] [i_0] [i_0] [i_6] [i_0] [i_6 - 2] [i_7] = ((/* implicit */long long int) 2609450069U);
                            var_23 = ((((((/* implicit */_Bool) max((2979631151722064231LL), (((/* implicit */long long int) (_Bool)1))))) ? (min((7870062096351841494LL), (var_3))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) != (((long long int) (signed char)6)));
                            arr_25 [i_0] [i_6 - 1] [i_6] [i_6] [i_1] [i_0] = ((/* implicit */short) var_2);
                            var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) var_16))));
                        }
                        /* vectorizable */
                        for (short i_8 = 0; i_8 < 24; i_8 += 1) 
                        {
                            var_25 += ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)16))) : (var_10))) : (((((/* implicit */_Bool) (unsigned short)65506)) ? (-8028388000413253005LL) : (((/* implicit */long long int) var_2)))));
                            arr_28 [i_6] [(unsigned char)12] [i_6 + 1] [(unsigned char)12] [i_8] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((var_10) != (var_0))))) * (var_16)));
                            var_26 = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)33)) ? (((/* implicit */int) var_15)) : (1801723942)))) | (((long long int) (short)-11713))));
                        }
                        for (int i_9 = 3; i_9 < 23; i_9 += 3) 
                        {
                            var_27 = min((-7870062096351841495LL), (((/* implicit */long long int) (signed char)24)));
                            var_28 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)58888)) ^ (((/* implicit */int) (unsigned char)0))))) : (((((((/* implicit */int) var_12)) >= (((/* implicit */int) (unsigned short)65507)))) ? (((/* implicit */long long int) min((-600126526), (((/* implicit */int) var_11))))) : (((((/* implicit */_Bool) (signed char)12)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_0)))))));
                            arr_31 [i_0] [i_6] [i_2] [i_2] [(_Bool)1] [i_9 - 2] [i_9] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) var_13)) >= (((/* implicit */int) var_6))))) * (((((/* implicit */int) (short)(-32767 - 1))) / (((/* implicit */int) (unsigned char)188))))))) && (((/* implicit */_Bool) (signed char)5))));
                            arr_32 [i_0] [i_0] [i_6] [i_2] [i_6 - 1] [i_9 - 1] = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-7))) + (var_9))) - (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_15)), ((unsigned short)45369)))))));
                        }
                        var_29 += ((/* implicit */signed char) ((unsigned char) var_5));
                    }
                    arr_33 [4] [(signed char)2] [(short)21] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)188))) : (var_5)));
                }
                var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) var_4)) ? (1801723942) : (((/* implicit */int) (unsigned char)36)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) (signed char)12)) ? (((/* implicit */int) var_7)) : (var_1))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)32765)))))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)28672))))) ? (max((-7870062096351841494LL), (((/* implicit */long long int) var_15)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 5)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)1)))))))));
                var_31 = ((/* implicit */int) max((var_31), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (var_1)))) ? (min((((/* implicit */int) (_Bool)1)), (-33))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)32767)) : (-5)))))));
                var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) var_2))));
            }
        } 
    } 
    var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((signed char) var_10))) : ((-2147483647 - 1))))) ? (min((min((var_10), (((/* implicit */long long int) var_12)))), (-7870062096351841495LL))) : (max((((-7870062096351841481LL) - (((/* implicit */long long int) 0)))), (((/* implicit */long long int) ((((/* implicit */int) (short)27682)) | (((/* implicit */int) (signed char)-6)))))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134557
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
    var_11 = ((/* implicit */signed char) max((((/* implicit */long long int) var_3)), (((-9223372036854775804LL) % (((/* implicit */long long int) 1412196839))))));
    var_12 = ((/* implicit */unsigned long long int) (_Bool)0);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (signed char i_2 = 2; i_2 < 18; i_2 += 2) 
                {
                    arr_7 [i_0] [i_1] [i_2 - 2] [i_2] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_3))));
                    /* LoopSeq 2 */
                    for (int i_3 = 4; i_3 < 17; i_3 += 2) /* same iter space */
                    {
                        var_13 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_1] [i_1] [i_1] [i_3 - 1])) ? (arr_6 [i_3] [(unsigned char)2] [(unsigned char)2] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_2] [i_3] [i_3] [i_3] [i_1] [(unsigned short)5]))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */long long int) arr_2 [i_2 - 1] [i_1] [i_1])) > (9223372036854775800LL)))), (max((((/* implicit */unsigned int) var_8)), (arr_5 [0ULL] [i_1] [i_2] [i_2]))))))));
                        arr_12 [i_1] [i_1] [i_2] [i_0] = ((/* implicit */unsigned short) ((9223372036854775795LL) <= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                        var_14 = ((/* implicit */unsigned short) min(((~(min((-8722449177754012510LL), (((/* implicit */long long int) (_Bool)1)))))), (((/* implicit */long long int) var_7))));
                        /* LoopSeq 4 */
                        for (unsigned short i_4 = 4; i_4 < 18; i_4 += 4) 
                        {
                            var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_11 [i_2] [i_2 - 2] [i_3 - 3] [0ULL] [16] [i_4])))))));
                            var_16 = ((/* implicit */unsigned short) (_Bool)1);
                            var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_1] [i_4] [i_4] [i_4] [i_4 - 2] [i_1])) ? (8722449177754012510LL) : (-9223372036854775801LL)))) ? (min((arr_11 [i_1] [i_2] [i_1] [i_1] [i_2] [i_1]), (arr_11 [i_1] [i_4] [i_4] [i_4 - 3] [i_4] [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_5)) > (arr_11 [i_1] [i_4] [i_4] [i_4] [i_2] [i_1])))))));
                            var_18 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) ((arr_11 [i_2] [i_4] [18ULL] [i_2] [i_4] [i_4]) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))))) ? (((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) -9LL)) ? (((/* implicit */unsigned long long int) arr_8 [i_0] [i_3 - 3] [i_0])) : (17254362906976285839ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_2] [i_4] [16] [i_4 - 2] [i_4] [i_2]))))))));
                            arr_15 [i_0] [i_1] [i_1] [i_2] [i_3] [i_1] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((_Bool) arr_2 [i_0] [i_2] [i_1])))));
                        }
                        for (int i_5 = 4; i_5 < 17; i_5 += 2) 
                        {
                            var_19 *= ((/* implicit */short) var_1);
                            var_20 ^= ((/* implicit */unsigned long long int) (_Bool)1);
                            var_21 = ((/* implicit */signed char) ((min((((/* implicit */unsigned long long int) (short)32752)), (0ULL))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_6)) <= (((/* implicit */int) arr_19 [i_2] [i_3 - 3] [i_5 - 3] [i_5 - 1] [i_5]))))))));
                            var_22 |= ((/* implicit */unsigned short) arr_1 [i_0] [i_5]);
                            arr_20 [i_0] [i_1] [(unsigned char)16] [i_2] [i_3] [i_3 - 3] [18U] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_0)) % (var_4)))) ? (((/* implicit */unsigned long long int) max((arr_1 [i_3 - 3] [i_2 - 1]), (((/* implicit */int) arr_18 [i_0] [i_0] [8] [(signed char)2] [i_0]))))) : (((((/* implicit */_Bool) (+(1ULL)))) ? (12756583723311205847ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32748)))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_6 = 0; i_6 < 19; i_6 += 2) 
                        {
                            var_23 = -9223372036854775804LL;
                            var_24 = ((/* implicit */_Bool) ((unsigned long long int) -9223372036854775793LL));
                            arr_23 [i_1] [i_1] [i_1] [18] [i_3 - 1] [i_1] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) 5690160350398345782ULL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_22 [i_6] [i_6] [i_6] [i_6] [i_6]))))));
                        }
                        for (signed char i_7 = 1; i_7 < 18; i_7 += 3) 
                        {
                            var_25 = (!(((12756583723311205839ULL) == (((((/* implicit */_Bool) var_1)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))));
                            var_26 = ((/* implicit */int) 14133465950736166591ULL);
                            arr_28 [i_2] [i_1] [i_2] [i_0] [i_7] [i_1] = ((/* implicit */short) arr_1 [i_7] [(_Bool)0]);
                        }
                    }
                    for (int i_8 = 4; i_8 < 17; i_8 += 2) /* same iter space */
                    {
                        var_27 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned short) ((((/* implicit */int) var_3)) > (((/* implicit */int) var_10))))))));
                        var_28 = ((/* implicit */int) 8722449177754012510LL);
                        var_29 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-32761)) ? (max((8722449177754012519LL), (((/* implicit */long long int) (short)32756)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((-8722449177754012516LL), (((/* implicit */long long int) arr_9 [i_8 + 2] [i_1] [i_1] [i_0])))))))))));
                    }
                    var_30 += ((/* implicit */unsigned int) min(((+(((((/* implicit */_Bool) arr_27 [i_0] [i_2] [14])) ? (arr_6 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) 9223372036854775798LL)))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((short) (_Bool)1))))))));
                }
                for (unsigned char i_9 = 0; i_9 < 19; i_9 += 1) 
                {
                    var_31 &= ((/* implicit */unsigned short) max((max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)62697)) <= (((/* implicit */int) (unsigned char)114))))), (max((var_2), (((/* implicit */unsigned long long int) var_6)))))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))) - (min((25LL), (((/* implicit */long long int) var_6)))))))));
                    var_32 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) 9954889721939056488ULL)) ? (((/* implicit */int) (short)32757)) : (((/* implicit */int) (unsigned short)62699))))));
                    var_33 *= ((((/* implicit */int) (signed char)-113)) != (((/* implicit */int) (unsigned short)62699)));
                }
                for (unsigned char i_10 = 1; i_10 < 15; i_10 += 3) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_11 = 0; i_11 < 19; i_11 += 3) 
                    {
                        var_34 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 1422449116))));
                        arr_40 [i_1] [i_1] [i_10] [i_10] = ((/* implicit */unsigned char) var_4);
                        arr_41 [(unsigned char)8] [i_1] [i_1] [i_1] &= ((/* implicit */short) (_Bool)1);
                        var_35 = ((/* implicit */int) min((var_35), (((/* implicit */int) var_6))));
                    }
                    var_36 ^= ((/* implicit */short) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_3))));
                    var_37 = ((/* implicit */unsigned char) min((var_37), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((max((var_2), (((/* implicit */unsigned long long int) 8341580920511934195LL)))), (((/* implicit */unsigned long long int) var_10))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (~(arr_31 [i_0] [i_0] [i_1] [i_10])))) || (((/* implicit */_Bool) ((var_2) << (((var_2) - (2036998834666431455ULL)))))))))) : (((min((arr_11 [i_0] [i_1] [i_10] [i_10] [i_0] [(_Bool)1]), (arr_6 [i_0] [i_0] [i_0] [i_10]))) >> ((((-(-6311046567716112226LL))) - (6311046567716112196LL))))))))));
                }
                var_38 = ((/* implicit */short) ((18446744073709551615ULL) <= (((/* implicit */unsigned long long int) 18U))));
            }
        } 
    } 
}

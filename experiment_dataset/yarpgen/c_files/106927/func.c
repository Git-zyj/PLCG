/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106927
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
    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((((var_5) && (((/* implicit */_Bool) var_3)))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_4))))) : (((((/* implicit */_Bool) (signed char)-6)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-112))))))) ^ (((/* implicit */long long int) ((/* implicit */int) ((short) var_0)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_17 = ((/* implicit */signed char) ((((/* implicit */int) arr_1 [i_0] [i_0])) - (((var_5) ? (-2147483619) : (arr_0 [i_0])))));
        var_18 ^= ((/* implicit */short) arr_1 [(signed char)8] [i_0]);
        arr_3 [i_0] = (_Bool)1;
        var_19 *= var_5;
        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (unsigned char)22)) : (((/* implicit */int) arr_2 [i_0]))));
    }
    for (unsigned char i_1 = 0; i_1 < 24; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned char) min((((((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_5 [(short)2])))) + (((((/* implicit */_Bool) (short)4528)) ? (var_11) : (var_13))))), (((/* implicit */int) arr_4 [i_1]))));
        arr_7 [i_1] = ((/* implicit */unsigned int) arr_5 [i_1]);
        /* LoopSeq 2 */
        for (long long int i_2 = 0; i_2 < 24; i_2 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned char i_3 = 0; i_3 < 24; i_3 += 1) 
            {
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    {
                        var_21 ^= ((/* implicit */unsigned int) arr_11 [i_1] [(unsigned char)15] [i_4]);
                        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((arr_13 [i_4]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_2]))))) ^ (((/* implicit */long long int) ((((/* implicit */int) (short)1023)) ^ (((/* implicit */int) (short)-32761)))))))) ? (min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_3])) ? (((/* implicit */int) (unsigned short)44256)) : (((/* implicit */int) (short)127))))), (arr_13 [i_1]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_15 [(signed char)10] [i_2] [i_3] [i_4 - 1])), (4786891821459297969LL)))) ? (((((/* implicit */_Bool) arr_13 [i_1])) ? (((/* implicit */int) arr_5 [i_4])) : (((/* implicit */int) (short)-32757)))) : (((arr_15 [(signed char)12] [i_3] [(unsigned short)15] [i_1]) ? (((/* implicit */int) arr_5 [i_2])) : (((/* implicit */int) var_15))))))))))));
                        arr_16 [i_1] [i_2] = (!(((/* implicit */_Bool) ((long long int) arr_13 [i_4 - 1]))));
                        var_23 = ((/* implicit */short) max((var_23), (arr_8 [i_1])));
                        var_24 = ((/* implicit */int) arr_8 [i_3]);
                    }
                } 
            } 
            var_25 |= ((/* implicit */unsigned short) var_13);
            var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) arr_5 [i_1]))));
            /* LoopSeq 2 */
            for (int i_5 = 0; i_5 < 24; i_5 += 1) /* same iter space */
            {
                var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) ((((/* implicit */long long int) (+(((/* implicit */int) (short)26624))))) / (((((/* implicit */long long int) ((arr_18 [i_5] [i_2] [i_1]) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)232)))))) * (min((((/* implicit */long long int) var_4)), (var_14))))))))));
                var_28 = ((/* implicit */signed char) ((unsigned int) (+(((/* implicit */int) (short)-32762)))));
                /* LoopNest 2 */
                for (short i_6 = 0; i_6 < 24; i_6 += 1) 
                {
                    for (unsigned char i_7 = 1; i_7 < 22; i_7 += 1) 
                    {
                        {
                            var_29 = ((/* implicit */int) var_10);
                            var_30 &= ((/* implicit */signed char) min((((/* implicit */int) arr_22 [i_7 + 1] [i_7 - 1] [i_7 + 1] [i_7 + 1] [i_7 + 1])), (((((/* implicit */_Bool) arr_22 [i_7] [i_7 + 1] [i_7] [i_7 - 1] [i_7 - 1])) ? (((/* implicit */int) arr_22 [i_7 + 2] [i_7 + 2] [i_7 - 1] [i_7 - 1] [i_7 + 1])) : (((/* implicit */int) arr_22 [i_7] [i_7 - 1] [(signed char)18] [i_7 + 1] [i_7 + 1]))))));
                            var_31 = ((/* implicit */int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)20781))))), (arr_17 [i_7] [i_1])));
                        }
                    } 
                } 
                var_32 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_19 [i_1] [8LL] [i_2] [i_5])) ? (((max((4786891821459297989LL), (((/* implicit */long long int) 2508803235U)))) - (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_2] [i_1]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [(unsigned short)6])) ? (((/* implicit */int) ((_Bool) var_1))) : (((/* implicit */int) arr_8 [i_1])))))));
            }
            for (int i_8 = 0; i_8 < 24; i_8 += 1) /* same iter space */
            {
                arr_26 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((min((((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_19 [i_1] [(signed char)3] [i_2] [i_8])) : (((/* implicit */int) var_10))))), ((+(-7681955563975966688LL))))) ^ (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_17 [i_2] [i_1])), (arr_25 [i_1] [i_1] [i_1]))))));
                /* LoopSeq 1 */
                for (int i_9 = 0; i_9 < 24; i_9 += 1) 
                {
                    var_33 -= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (short)-30984)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) : (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */long long int) arr_18 [i_9] [i_8] [i_1])) : (-1763685290213660759LL))))), (((/* implicit */long long int) ((signed char) (-(((/* implicit */int) (short)614))))))));
                    arr_31 [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_0)) : (arr_9 [i_8]))) - (((/* implicit */int) ((short) arr_20 [i_9] [i_8] [(short)7] [i_1])))))) ? (arr_18 [22] [i_2] [(short)9]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_1] [i_1] [i_2] [i_8] [i_9])))));
                }
                var_34 = ((/* implicit */short) max((var_34), (((/* implicit */short) arr_28 [i_8] [19U] [i_2] [i_1] [i_1]))));
            }
        }
        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
        {
            arr_36 [i_1] [i_10] [i_1] = ((/* implicit */signed char) ((short) 17171249574738729663ULL));
            var_35 = ((/* implicit */unsigned short) ((min((((/* implicit */int) ((signed char) (unsigned char)1))), ((-(((/* implicit */int) (unsigned char)57)))))) ^ (((((/* implicit */_Bool) (short)1483)) ? (((((/* implicit */int) (signed char)7)) - (((/* implicit */int) arr_23 [i_1] [i_1] [i_10] [i_10] [(short)23])))) : ((+(((/* implicit */int) var_1))))))));
        }
        var_36 = ((/* implicit */short) arr_12 [i_1]);
    }
    var_37 = ((/* implicit */unsigned char) min((((/* implicit */long long int) (!(((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_1))))))), (((long long int) var_15))));
    var_38 = ((/* implicit */_Bool) min((var_38), (((/* implicit */_Bool) var_8))));
    var_39 -= ((/* implicit */_Bool) max((((((/* implicit */int) (unsigned char)254)) + (((/* implicit */int) ((short) (unsigned short)0))))), (((/* implicit */int) (short)29466))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178159
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
    var_17 = ((/* implicit */long long int) max((((var_14) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))), (((((/* implicit */unsigned long long int) var_8)) / (11458649474653717793ULL)))));
    var_18 = ((/* implicit */long long int) (~(((/* implicit */int) var_6))));
    var_19 = ((/* implicit */short) min((6785565538435610822ULL), (((/* implicit */unsigned long long int) 8191413005562087759LL))));
    var_20 = ((/* implicit */long long int) var_1);
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 3; i_0 < 16; i_0 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            arr_5 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((short) arr_4 [i_1] [i_1] [i_0]));
            var_21 |= ((/* implicit */int) ((_Bool) (~(arr_0 [5ULL]))));
        }
        var_22 -= ((/* implicit */unsigned short) ((arr_1 [i_0]) & (arr_1 [i_0])));
        arr_6 [(unsigned short)0] &= ((/* implicit */_Bool) arr_1 [(unsigned char)6]);
    }
    for (signed char i_2 = 3; i_2 < 16; i_2 += 2) /* same iter space */
    {
        var_23 *= ((/* implicit */_Bool) max((arr_3 [i_2] [i_2 + 1] [12ULL]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_6))))))))));
        /* LoopSeq 1 */
        for (long long int i_3 = 2; i_3 < 16; i_3 += 3) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                arr_17 [i_2] [(signed char)10] [(unsigned char)16] |= ((/* implicit */unsigned int) var_15);
                arr_18 [i_2] [i_2] [2ULL] [i_3] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_11)) + (2147483647))) << (((arr_4 [i_2] [i_3] [1ULL]) / (((/* implicit */unsigned long long int) -289178412))))));
                /* LoopSeq 1 */
                for (long long int i_5 = 0; i_5 < 18; i_5 += 2) 
                {
                    var_24 ^= ((/* implicit */signed char) (-(((/* implicit */int) var_3))));
                    /* LoopSeq 1 */
                    for (short i_6 = 3; i_6 < 16; i_6 += 4) 
                    {
                        arr_25 [i_2] [i_3] [i_5] = ((/* implicit */unsigned long long int) arr_14 [(unsigned char)0] [i_3] [i_2]);
                        arr_26 [i_2] [i_2] [i_4] = ((/* implicit */short) arr_21 [i_5] [i_3] [i_4] [i_5] [i_2]);
                    }
                    /* LoopSeq 1 */
                    for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 3) 
                    {
                        var_25 &= ((/* implicit */signed char) arr_3 [i_2] [i_7] [i_3]);
                        var_26 |= ((/* implicit */signed char) (+(arr_23 [i_4] [(unsigned char)8])));
                        arr_29 [i_2] [i_3] [i_4] [(signed char)10] [i_2] = ((/* implicit */signed char) (~((~(11458649474653717793ULL)))));
                        var_27 = ((/* implicit */signed char) (unsigned short)33079);
                    }
                    var_28 *= ((/* implicit */unsigned long long int) var_5);
                }
            }
            /* LoopSeq 2 */
            /* vectorizable */
            for (int i_8 = 0; i_8 < 18; i_8 += 3) 
            {
                arr_34 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (~(3523331034U)))) != (((arr_20 [i_2]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [(unsigned short)17])))))));
                /* LoopSeq 1 */
                for (signed char i_9 = 0; i_9 < 18; i_9 += 4) 
                {
                    arr_37 [i_2] [i_2] = ((/* implicit */unsigned long long int) arr_13 [(signed char)9] [i_9] [i_8]);
                    arr_38 [i_2] [i_2] [i_8] [i_9] = ((/* implicit */signed char) ((arr_16 [i_2] [i_2 + 2] [i_2] [i_3 + 2]) << (((/* implicit */int) arr_10 [10U] [i_2 - 3] [(short)3]))));
                    var_29 = ((/* implicit */unsigned long long int) min((var_29), (((unsigned long long int) 8191413005562087759LL))));
                }
            }
            for (short i_10 = 0; i_10 < 18; i_10 += 4) 
            {
                /* LoopNest 2 */
                for (signed char i_11 = 0; i_11 < 18; i_11 += 2) 
                {
                    for (long long int i_12 = 1; i_12 < 17; i_12 += 3) 
                    {
                        {
                            var_30 = ((/* implicit */long long int) (~(((/* implicit */int) arr_14 [i_2] [i_3] [i_2]))));
                            var_31 = ((/* implicit */short) min((max((((/* implicit */unsigned short) var_5)), (arr_43 [i_2 + 1] [i_3] [i_3 + 2] [i_2] [8] [i_11] [i_12]))), (((/* implicit */unsigned short) arr_42 [i_2]))));
                            var_32 = max((((/* implicit */unsigned long long int) max((max((-8508161291695405570LL), (-4358264583065924669LL))), (((/* implicit */long long int) -524702704))))), (16367560498035820051ULL));
                        }
                    } 
                } 
                arr_47 [i_2] [i_3] [(short)2] = ((/* implicit */signed char) arr_15 [(unsigned short)9] [i_3]);
            }
            arr_48 [(signed char)4] &= ((/* implicit */short) max((max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_9 [i_3]))))), (min((var_0), (((/* implicit */unsigned long long int) arr_0 [i_2])))))), (((/* implicit */unsigned long long int) max((min((1949884553), (((/* implicit */int) var_1)))), (((/* implicit */int) var_6)))))));
        }
        var_33 *= ((/* implicit */int) ((_Bool) max((12118690706790796427ULL), (((/* implicit */unsigned long long int) ((1981524394) <= (1981524394)))))));
        var_34 = ((/* implicit */unsigned int) -1949884554);
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168321
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) min((4629276947281117690LL), (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0])) != (((/* implicit */int) (signed char)112)))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            var_20 = ((/* implicit */unsigned long long int) (-(arr_5 [i_0] [i_0])));
            /* LoopSeq 1 */
            for (unsigned int i_2 = 2; i_2 < 15; i_2 += 1) 
            {
                arr_9 [i_0] [i_0] = ((/* implicit */int) ((arr_5 [i_0] [i_1]) << (((((/* implicit */int) (signed char)112)) - (98)))));
                var_21 = ((/* implicit */int) arr_5 [i_0 - 1] [i_0]);
            }
        }
        for (unsigned int i_3 = 4; i_3 < 14; i_3 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (int i_4 = 4; i_4 < 13; i_4 += 4) 
            {
                var_22 = ((/* implicit */short) arr_3 [i_0] [i_3] [i_3 + 2]);
                var_23 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-112)) ? (((/* implicit */int) max((var_13), (((/* implicit */short) arr_4 [(short)3] [i_0] [i_0]))))) : (((/* implicit */int) arr_13 [i_0 - 1] [i_3] [i_4]))))), (arr_12 [i_0] [i_3] [i_4 + 1])));
            }
            arr_15 [i_0] [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_16)), (min((-1154369368482551942LL), (((/* implicit */long long int) (signed char)107))))));
            arr_16 [i_0] [i_3 - 3] = ((/* implicit */signed char) var_2);
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 4) 
            {
                arr_20 [i_0 + 2] [i_0] [i_3 + 2] = ((/* implicit */int) arr_19 [i_0] [i_3 + 2] [i_0]);
                arr_21 [i_0] [i_0] [i_5] = ((/* implicit */signed char) var_11);
                arr_22 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) var_6);
                /* LoopSeq 1 */
                for (long long int i_6 = 0; i_6 < 16; i_6 += 3) 
                {
                    arr_26 [i_0] [i_3] [i_0] [i_0] [i_0] = ((/* implicit */signed char) var_2);
                    var_24 = ((/* implicit */unsigned long long int) arr_18 [(short)0] [(short)0] [i_3 - 2] [i_6]);
                    var_25 = ((/* implicit */int) arr_12 [i_6] [i_6] [i_3 - 1]);
                    /* LoopSeq 1 */
                    for (unsigned int i_7 = 2; i_7 < 14; i_7 += 3) 
                    {
                        arr_29 [i_0] [(short)11] [i_0] [i_0] = ((/* implicit */short) 1489221990U);
                        arr_30 [i_0] = ((/* implicit */unsigned long long int) arr_11 [i_3 - 2] [i_3 - 2]);
                    }
                }
                arr_31 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_24 [i_0 + 3] [i_0 + 2] [i_0 + 2] [i_0 + 1]))));
            }
        }
        /* vectorizable */
        for (unsigned int i_8 = 4; i_8 < 14; i_8 += 1) /* same iter space */
        {
            arr_34 [i_0] [i_8 - 3] = (-(-1154369368482551944LL));
            var_26 = ((/* implicit */short) (signed char)111);
            arr_35 [i_0] = ((/* implicit */unsigned int) var_18);
        }
        var_27 = ((/* implicit */int) arr_27 [i_0 + 2] [i_0 + 3] [i_0 + 1] [i_0 + 3]);
    }
    var_28 = ((/* implicit */unsigned int) (~(-1LL)));
    var_29 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (unsigned char)129)), (var_3)));
    var_30 = ((/* implicit */long long int) var_19);
    var_31 = ((/* implicit */unsigned long long int) min((1154369368482551944LL), (((/* implicit */long long int) -1334062144))));
}

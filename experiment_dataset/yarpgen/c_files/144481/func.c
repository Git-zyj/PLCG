/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144481
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
    var_17 = ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */_Bool) (short)22414)) ? (((/* implicit */int) (signed char)115)) : (((/* implicit */int) ((signed char) var_15)))))), (var_3)));
    var_18 ^= ((/* implicit */long long int) var_15);
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                for (long long int i_3 = 0; i_3 < 14; i_3 += 2) 
                {
                    for (short i_4 = 1; i_4 < 13; i_4 += 1) 
                    {
                        {
                            var_19 = -5959423565584452965LL;
                            arr_14 [i_4] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) arr_7 [i_0 + 1] [i_0 + 1] [i_3]);
                        }
                    } 
                } 
            } 
            var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_0 - 2] [i_0] [i_0 - 1])) ? (((/* implicit */int) arr_13 [5LL] [(short)10] [i_0 + 1] [i_0 - 1])) : (((/* implicit */int) (signed char)-50)))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_5 = 1; i_5 < 11; i_5 += 2) 
            {
                arr_19 [7ULL] [i_1] [i_0] = ((/* implicit */_Bool) var_11);
                arr_20 [i_0] [i_1] [i_5] [i_5] = ((/* implicit */_Bool) arr_12 [i_0 - 1] [i_0] [i_0] [i_0] [i_0]);
                /* LoopNest 2 */
                for (unsigned char i_6 = 3; i_6 < 13; i_6 += 2) 
                {
                    for (long long int i_7 = 0; i_7 < 14; i_7 += 2) 
                    {
                        {
                            arr_27 [i_0 - 2] [i_1] [i_5] [(signed char)4] [(unsigned char)1] |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (short)-3312)) : (((/* implicit */int) arr_26 [i_0] [(signed char)12] [7ULL] [i_5] [i_6] [i_7] [(signed char)12]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_25 [i_0] [i_1] [i_1] [i_1] [i_7]) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))))) : (2547998800558992470ULL)));
                            var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (((~((-9223372036854775807LL - 1LL)))) + (((/* implicit */long long int) ((/* implicit */int) (signed char)-116))))))));
                            var_22 = ((/* implicit */long long int) ((arr_17 [8LL] [i_5 - 1]) & (arr_17 [i_0] [i_1])));
                            var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) arr_25 [i_0] [i_0] [i_0 + 1] [i_0] [i_0]))));
                        }
                    } 
                } 
            }
        }
        for (unsigned char i_8 = 1; i_8 < 11; i_8 += 2) 
        {
            var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)245)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)24518))) : (2547998800558992468ULL)));
            var_25 = ((/* implicit */unsigned long long int) arr_26 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_8 + 3] [i_8]);
            arr_32 [i_0] = ((/* implicit */unsigned long long int) -4675471927126756155LL);
            var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 15898745273150559148ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)68))));
        }
        for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 3) 
        {
            var_27 = ((/* implicit */short) ((long long int) 5161532648705999175LL));
            arr_36 [i_9] = ((/* implicit */unsigned long long int) ((signed char) arr_29 [i_0 - 1]));
        }
        var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) ((long long int) var_13)))));
    }
    var_29 = ((/* implicit */unsigned long long int) (_Bool)1);
}

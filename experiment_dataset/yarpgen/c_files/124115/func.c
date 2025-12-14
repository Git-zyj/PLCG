/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124115
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_7 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_5 [i_1] [i_1]);
                    arr_8 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_5 [i_1] [i_1]);
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_3 = 0; i_3 < 19; i_3 += 3) 
    {
        arr_11 [i_3] [i_3] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [(_Bool)1]))));
        arr_12 [i_3] = ((/* implicit */signed char) (-((~(((/* implicit */int) arr_0 [i_3]))))));
        var_18 ^= ((/* implicit */int) var_15);
    }
    for (int i_4 = 0; i_4 < 21; i_4 += 4) 
    {
        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 8488547426192741260LL)))))));
        arr_15 [i_4] [i_4] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [i_4]))));
    }
    for (short i_5 = 0; i_5 < 16; i_5 += 1) 
    {
        arr_20 [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [18ULL] [i_5])) ? (((/* implicit */int) arr_5 [(unsigned short)4] [i_5])) : (((/* implicit */int) arr_5 [(unsigned short)14] [i_5]))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_4 [i_5]))));
        var_20 = ((((/* implicit */_Bool) arr_3 [14])) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_14 [i_5])) : (((/* implicit */int) arr_14 [i_5])))) : (((/* implicit */int) var_11)));
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_6 = 0; i_6 < 16; i_6 += 4) 
        {
            arr_25 [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_5] [i_6])))));
            /* LoopSeq 2 */
            for (long long int i_7 = 0; i_7 < 16; i_7 += 2) 
            {
                var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_8)))))));
                arr_28 [i_5] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_27 [i_5] [i_5] [i_6] [i_7]))));
            }
            for (unsigned int i_8 = 3; i_8 < 15; i_8 += 2) 
            {
                arr_32 [i_8] [i_6] [i_5] [(unsigned short)6] = ((/* implicit */unsigned short) var_9);
                var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_5))));
                arr_33 [i_8 + 1] = ((/* implicit */int) (-(8488547426192741258LL)));
            }
        }
        var_23 &= (~(-8488547426192741268LL));
    }
}

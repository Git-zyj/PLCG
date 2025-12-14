/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109223
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
    var_15 &= ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */int) var_2)), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 ^= ((/* implicit */signed char) ((unsigned int) ((var_4) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)149))))));
        var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) (~(15552177255059831447ULL))))));
        /* LoopSeq 4 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0])))));
            arr_8 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((var_4) + (9223372036854775807LL))) << (((var_9) - (2423831909U)))));
        }
        for (unsigned long long int i_2 = 2; i_2 < 17; i_2 += 2) /* same iter space */
        {
            var_19 = ((/* implicit */int) (~(((((/* implicit */_Bool) 833251904U)) ? (((/* implicit */long long int) 2001207412U)) : (2516810920180477539LL)))));
            var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) (!(((/* implicit */_Bool) -691121193)))))));
        }
        for (unsigned long long int i_3 = 2; i_3 < 17; i_3 += 2) /* same iter space */
        {
            var_21 ^= ((/* implicit */_Bool) (~((~(var_1)))));
            var_22 -= ((/* implicit */unsigned int) var_2);
        }
        for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 2) 
        {
            var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((unsigned long long int) var_12)))));
            var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-113)) && (((/* implicit */_Bool) 2170128397U)))))));
        }
        /* LoopNest 2 */
        for (unsigned short i_5 = 0; i_5 < 20; i_5 += 4) 
        {
            for (unsigned int i_6 = 0; i_6 < 20; i_6 += 1) 
            {
                {
                    arr_24 [i_0] [i_5] [i_6] = ((/* implicit */signed char) var_2);
                    arr_25 [(unsigned char)10] [(unsigned char)10] [i_5] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(-1721223763)))) ? (((/* implicit */unsigned long long int) -9223372036854775791LL)) : (((var_7) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_5]))) : (var_3)))));
                    arr_26 [i_5] |= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)14))) != (arr_6 [i_0] [i_5] [i_5])));
                    arr_27 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((10) - (((/* implicit */int) arr_22 [i_0] [i_0]))));
                }
            } 
        } 
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 2) 
    {
        var_25 ^= ((/* implicit */unsigned short) var_9);
        var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((var_1) * (((/* implicit */unsigned int) var_0)))))));
        var_27 += ((/* implicit */unsigned long long int) (~(7)));
    }
    /* vectorizable */
    for (unsigned long long int i_8 = 0; i_8 < 13; i_8 += 1) 
    {
        var_28 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) 328517366U)) ? ((~(var_12))) : (((/* implicit */unsigned long long int) 177723051U))));
        arr_34 [i_8] [8ULL] = ((/* implicit */unsigned int) arr_17 [i_8] [6U] [i_8]);
    }
    for (unsigned long long int i_9 = 1; i_9 < 15; i_9 += 1) 
    {
        arr_38 [i_9 - 1] [i_9 + 2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_9) + (var_9)))) ? (((((/* implicit */_Bool) 18394874273385893455ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_20 [(unsigned char)14]))) : (((/* implicit */long long int) arr_6 [i_9] [i_9] [12]))))) ? ((~(((/* implicit */int) (!(((/* implicit */_Bool) 0))))))) : (((/* implicit */int) ((unsigned short) arr_36 [i_9])))));
        /* LoopSeq 1 */
        for (int i_10 = 0; i_10 < 17; i_10 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_11 = 0; i_11 < 17; i_11 += 1) 
            {
                arr_47 [i_9] [i_9] [(unsigned char)7] [i_9] = ((/* implicit */unsigned char) var_9);
                var_29 = (!(((/* implicit */_Bool) (unsigned short)40471)));
            }
            var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) ((unsigned short) min((var_0), (((/* implicit */int) arr_16 [i_9 + 2] [i_9 + 1] [i_9 + 1]))))))));
            arr_48 [(short)6] = ((/* implicit */unsigned long long int) var_7);
        }
        arr_49 [i_9] = ((/* implicit */unsigned char) ((unsigned short) min((((/* implicit */long long int) arr_16 [i_9 + 1] [i_9 - 1] [i_9 - 1])), (var_4))));
    }
    var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((signed char) (~(9169533892229124949LL))))) : (((/* implicit */int) var_10))));
}

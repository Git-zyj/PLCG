/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160984
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
    for (long long int i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */unsigned char) 1334178041);
                var_13 = ((/* implicit */unsigned char) max((-1334178047), (((/* implicit */int) (signed char)62))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (-(1334178041)))), (var_10)));
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 10; i_2 += 4) 
    {
        for (unsigned int i_3 = 0; i_3 < 10; i_3 += 3) 
        {
            {
                arr_12 [i_3] [(short)7] = ((/* implicit */int) ((max((arr_10 [i_2] [i_3] [i_2]), (arr_5 [i_2] [i_3] [i_3]))) ? (((arr_5 [i_2] [(_Bool)1] [i_2]) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2] [i_3] [i_2]))))) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_8 [i_2] [i_2]), (arr_8 [i_2] [i_2])))))));
                arr_13 [i_3] = ((/* implicit */unsigned char) max((max((((/* implicit */long long int) min((((/* implicit */unsigned char) (signed char)-25)), (arr_1 [i_3])))), (((arr_5 [i_2] [i_3] [i_3]) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2] [i_2] [i_2]))) : (var_1))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_2 [i_2] [(unsigned char)6])), (9U)))))))));
                arr_14 [i_3] [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1334178047)) ? (((/* implicit */int) (unsigned short)65535)) : (min((1334178046), (1334178041)))));
                var_15 ^= ((/* implicit */_Bool) ((((_Bool) arr_2 [i_2] [i_3])) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2] [i_2] [i_3]))) & (4294967295U))) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_10 [i_2] [i_2] [i_2])))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_4 = 0; i_4 < 10; i_4 += 1) 
                {
                    var_16 = ((/* implicit */unsigned char) ((short) (unsigned char)98));
                    arr_18 [i_2] [(unsigned char)9] [i_3] [i_2] = ((/* implicit */long long int) ((signed char) arr_4 [i_3] [i_3] [i_3]));
                }
            }
        } 
    } 
}

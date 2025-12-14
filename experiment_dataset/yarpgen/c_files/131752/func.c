/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131752
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) (+(((var_13) / (((/* implicit */int) (short)22646))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) arr_1 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        arr_10 [(short)8] [i_0] [5] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (short)-3234)) != (arr_5 [i_0] [i_0])));
                        var_16 = ((/* implicit */int) var_12);
                        arr_11 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */long long int) arr_6 [i_0]);
                    }
                    var_17 = (~(arr_7 [(short)18] [(short)18] [i_0] [i_0]));
                    arr_12 [i_0] [i_2] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0] [(short)20])) + ((~(((/* implicit */int) var_12))))));
                }
            } 
        } 
    }
    for (unsigned int i_4 = 0; i_4 < 25; i_4 += 1) 
    {
        /* LoopSeq 2 */
        for (signed char i_5 = 0; i_5 < 25; i_5 += 2) 
        {
            arr_17 [i_4] [i_4] [i_4] = ((/* implicit */unsigned int) 538784139850055781ULL);
            var_18 = ((/* implicit */long long int) ((unsigned short) var_13));
        }
        for (int i_6 = 2; i_6 < 22; i_6 += 3) 
        {
            arr_20 [i_4] [i_6 - 2] [i_6] = ((/* implicit */signed char) (+(((/* implicit */int) arr_16 [i_4]))));
            var_19 ^= ((/* implicit */signed char) (-(-389822448)));
        }
        var_20 = ((/* implicit */unsigned char) ((((((((/* implicit */int) (short)-25396)) % (((/* implicit */int) (short)-20049)))) + (2147483647))) << (((((((((/* implicit */_Bool) arr_13 [i_4])) ? (((int) arr_19 [i_4])) : (min((var_13), (((/* implicit */int) (unsigned char)38)))))) + (1384974576))) - (27)))));
    }
    var_21 = ((/* implicit */unsigned int) min((var_1), (((/* implicit */int) (unsigned char)15))));
    var_22 = ((/* implicit */short) ((((((17179869183LL) | (((/* implicit */long long int) ((/* implicit */int) (short)-11386))))) + (9223372036854775807LL))) >> (((/* implicit */int) max((((((/* implicit */long long int) 0U)) != (var_7))), (((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_7)))))))));
}

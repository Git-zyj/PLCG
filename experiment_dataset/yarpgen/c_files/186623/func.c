/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186623
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
    /* vectorizable */
    for (int i_0 = 3; i_0 < 23; i_0 += 3) 
    {
        var_17 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) == (arr_0 [i_0 - 2]))))));
        var_18 = (-((+(((/* implicit */int) (unsigned short)65535)))));
        arr_2 [i_0] = (signed char)15;
        var_19 = ((/* implicit */signed char) ((2760594454941794767ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)18)))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    var_20 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) & (15686149618767756833ULL)))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) var_13)))) : (((int) (short)32766))));
                    var_21 = ((/* implicit */signed char) ((((((/* implicit */int) (short)-32767)) + (2147483647))) >> (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_5))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 3; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_22 |= ((/* implicit */int) var_9);
                                var_23 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_7 [i_1 + 1] [i_3] [(unsigned short)23] [i_4 + 1]))));
                                var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32767))) : (var_15)));
                                var_25 = ((/* implicit */signed char) ((arr_10 [i_4 + 2] [(unsigned char)23] [(short)10] [(unsigned char)23] [i_4 - 2]) | (((/* implicit */int) (short)-32766))));
                            }
                        } 
                    } 
                    arr_13 [i_0] [i_0] [i_0] [i_0] = (~(((/* implicit */int) arr_8 [i_0] [i_1])));
                }
            } 
        } 
    }
    var_26 = ((/* implicit */unsigned short) min((((/* implicit */int) ((((/* implicit */int) var_9)) >= (((/* implicit */int) var_14))))), (var_1)));
    var_27 = ((((/* implicit */int) ((unsigned short) var_12))) << (((((var_12) + (4202938713789886608LL))) - (26LL))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157086
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
    var_10 ^= ((/* implicit */unsigned int) var_2);
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        var_11 = ((/* implicit */signed char) min((1840115187U), (((/* implicit */unsigned int) (signed char)-123))));
        /* LoopNest 2 */
        for (signed char i_1 = 2; i_1 < 22; i_1 += 2) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_12 ^= ((/* implicit */int) arr_10 [i_0] [i_0] [i_0]);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            {
                                arr_16 [i_0] [i_2] [i_2] [i_0] [i_0] = ((/* implicit */unsigned int) arr_11 [i_0] [i_0] [i_0] [i_3]);
                                var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) var_7))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_17 [i_0] = ((/* implicit */long long int) min((arr_0 [i_0]), (((unsigned int) (short)-5288))));
        arr_18 [i_0] [i_0 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) arr_13 [i_0 - 1] [i_0] [i_0] [i_0] [i_0 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0 + 1] [i_0] [i_0 + 1] [i_0 - 1] [19U] [i_0 + 1]))) : (var_4))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0 - 1]))) : (((arr_10 [i_0 + 1] [i_0] [i_0 + 1]) + (((/* implicit */unsigned long long int) min((4294967267U), (133169152U))))))));
    }
    var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) var_1))));
}

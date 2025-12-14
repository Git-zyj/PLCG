/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134749
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
    var_11 = ((/* implicit */unsigned char) var_7);
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 21; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 22; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            {
                                var_12 = ((/* implicit */signed char) ((unsigned char) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)38182)) : (524287))) == (((/* implicit */int) ((signed char) var_3))))));
                                arr_12 [i_0] [i_1] [i_1] [(unsigned char)18] [(unsigned short)20] [i_1] = arr_4 [i_0 - 1];
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */unsigned char) ((((arr_5 [i_0 + 2] [i_0 + 2] [15U]) + (arr_5 [i_0 - 1] [i_0 - 1] [i_0]))) != (((/* implicit */unsigned int) 524281))));
                }
            } 
        } 
    } 
    var_14 &= ((/* implicit */unsigned char) ((18446744073709551615ULL) | (((/* implicit */unsigned long long int) -288760338))));
}

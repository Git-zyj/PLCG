/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122912
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
    for (unsigned long long int i_0 = 3; i_0 < 15; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 2; i_3 < 13; i_3 += 3) 
                    {
                        var_11 = ((/* implicit */int) ((unsigned long long int) arr_4 [12ULL] [i_1] [i_0]));
                        arr_10 [i_3 + 3] [i_0] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */signed char) 7254748003806219305ULL);
                        var_12 = ((/* implicit */long long int) arr_5 [i_0]);
                    }
                    var_13 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) ((11191996069903332321ULL) - (var_0))))) ? (((/* implicit */int) arr_8 [i_0] [i_2] [i_2] [i_0 + 1] [i_0] [i_0 - 2])) : (((/* implicit */int) var_6))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned int) ((var_4) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) 17121805691418083377ULL)) ? ((-2147483647 - 1)) : (((/* implicit */int) (unsigned char)173)))) != (((/* implicit */int) var_3)))))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)6))) : (255LL)))));
}

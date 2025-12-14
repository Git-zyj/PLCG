/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182771
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 10; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        var_12 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_5 [i_1] [i_1 - 1] [i_1] [i_1 - 1]))));
                        var_13 = ((/* implicit */unsigned long long int) var_5);
                        arr_10 [i_0] [2U] [i_1] [(unsigned short)0] = ((/* implicit */signed char) var_11);
                        var_14 = ((/* implicit */_Bool) var_8);
                    }
                    var_15 = ((/* implicit */unsigned long long int) min(((~(((/* implicit */int) (unsigned char)79)))), (((/* implicit */int) min((((unsigned short) var_5)), (((/* implicit */unsigned short) var_3)))))));
                    arr_11 [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_0 [i_0]))));
                }
            } 
        } 
    } 
    var_16 -= ((/* implicit */unsigned char) ((signed char) var_10));
}

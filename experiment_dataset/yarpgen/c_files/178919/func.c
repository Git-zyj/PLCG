/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178919
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
    var_17 = ((/* implicit */unsigned long long int) -39725503114271267LL);
    var_18 = ((/* implicit */unsigned long long int) (signed char)5);
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        {
                            var_19 = (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((long long int) var_14))) > ((~(arr_3 [i_0] [i_0 + 2] [i_0 + 1])))))));
                            arr_10 [i_0 + 1] [i_0] [i_0] [i_3] = ((/* implicit */_Bool) (unsigned char)64);
                        }
                    } 
                } 
                var_20 = ((/* implicit */unsigned char) var_9);
            }
        } 
    } 
}

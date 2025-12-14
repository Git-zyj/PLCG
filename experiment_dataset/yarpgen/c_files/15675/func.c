/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15675
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
    var_18 |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) var_10)), (min((4294967295U), (((/* implicit */unsigned int) var_12)))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) max((arr_1 [i_0] [i_0]), (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned char) arr_3 [i_0] [i_1])))))))))));
                var_20 -= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) 1645800977U)), (1256307373343441749ULL)));
                var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) max(((-(arr_1 [i_0] [10]))), (((/* implicit */unsigned long long int) 3450373021U)))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_2 = 0; i_2 < 18; i_2 += 2) 
    {
        var_22 ^= (-(arr_4 [i_2]));
        var_23 = ((/* implicit */int) ((long long int) 1645800977U));
    }
}

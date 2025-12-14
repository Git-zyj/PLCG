/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152656
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
    for (signed char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */_Bool) var_0);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_3 = 1; i_3 < 17; i_3 += 4) 
                    {
                        var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((_Bool) ((arr_10 [i_0] [i_1] [9LL] [i_3]) & (((/* implicit */long long int) ((/* implicit */int) var_3)))))))));
                        var_19 ^= ((/* implicit */unsigned long long int) var_7);
                    }
                    arr_12 [i_1] [i_0] &= ((/* implicit */int) max((((/* implicit */unsigned long long int) ((arr_5 [i_2]) != (arr_5 [i_1])))), (arr_5 [i_2])));
                    var_20 = ((/* implicit */long long int) (~(min((((/* implicit */int) (_Bool)1)), (var_8)))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_11))))), ((-(max((((/* implicit */unsigned long long int) 3458764513820540928LL)), (5690270428884440905ULL)))))));
}

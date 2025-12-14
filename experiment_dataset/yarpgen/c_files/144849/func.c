/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144849
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
    var_18 = ((/* implicit */unsigned long long int) var_8);
    var_19 = ((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) (_Bool)1)), (var_2))) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    arr_7 [i_2] = max((var_2), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_1] [i_1 + 1] [i_2])));
                    arr_8 [(unsigned short)3] [i_1] = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) ((_Bool) var_2))) + (((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))))) + (((((0LL) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) - (((/* implicit */long long int) ((((/* implicit */int) var_14)) - (var_5))))))));
                    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) arr_3 [i_0] [i_0]))));
                    var_21 = ((/* implicit */int) 18446744073709551615ULL);
                }
            } 
        } 
    } 
}

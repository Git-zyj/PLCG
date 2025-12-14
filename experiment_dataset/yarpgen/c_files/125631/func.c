/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125631
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
    var_20 &= ((/* implicit */unsigned long long int) var_15);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                arr_6 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_5 [i_0]), (((/* implicit */unsigned short) max((((/* implicit */unsigned char) arr_2 [i_0])), (arr_4 [i_0] [i_1]))))))) ? (((/* implicit */int) min((arr_2 [i_0]), (arr_0 [i_0] [i_1])))) : (((/* implicit */int) ((short) 983040LL)))));
                var_21 &= ((/* implicit */long long int) (-(((/* implicit */int) ((var_2) < (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) arr_2 [i_1])), (arr_4 [i_0] [(short)4]))))))))));
                arr_7 [i_1] &= ((/* implicit */unsigned short) var_5);
            }
        } 
    } 
}

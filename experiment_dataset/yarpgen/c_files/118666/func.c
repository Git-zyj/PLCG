/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118666
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                arr_6 [i_1] [2LL] [i_0] |= ((/* implicit */unsigned char) arr_3 [i_0]);
                var_11 = ((/* implicit */signed char) max((5776102673035174048LL), (((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_0]))))))))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)14070)) ? (((/* implicit */int) var_3)) : (var_0)))), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)186)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))) ^ (max((var_7), (((/* implicit */unsigned long long int) var_3)))))))))));
    var_13 = ((/* implicit */unsigned char) (((~(var_7))) & (var_5)));
    var_14 &= var_7;
}

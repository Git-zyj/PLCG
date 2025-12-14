/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144648
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
    var_13 = ((/* implicit */short) var_5);
    var_14 = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) ((var_11) || (((/* implicit */_Bool) var_7)))))) << (((((/* implicit */int) ((signed char) min((((/* implicit */unsigned short) var_3)), (var_1))))) + (110)))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 21; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */unsigned long long int) arr_5 [i_2] [i_1]);
                    arr_7 [i_0] [i_0] [i_0] = min((((((((/* implicit */_Bool) (signed char)9)) || (((/* implicit */_Bool) arr_5 [i_1] [i_1])))) ? (max((var_0), (((/* implicit */unsigned long long int) (unsigned char)127)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_0 [i_0])))))), (((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)9))) % (var_0))) >> (((/* implicit */int) max((((/* implicit */signed char) (_Bool)0)), (arr_1 [i_1])))))));
                }
            } 
        } 
    } 
    var_16 &= ((/* implicit */unsigned long long int) ((var_0) <= (((/* implicit */unsigned long long int) (-(max((((/* implicit */long long int) var_8)), (var_5))))))));
    var_17 &= ((min((((/* implicit */long long int) max((var_12), (((/* implicit */unsigned int) var_1))))), (((var_6) << (((/* implicit */int) var_2)))))) != (((/* implicit */long long int) ((/* implicit */int) var_2))));
}

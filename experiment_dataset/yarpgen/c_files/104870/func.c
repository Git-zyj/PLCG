/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104870
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
    var_18 += ((/* implicit */short) (+((~(var_11)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_19 &= ((/* implicit */unsigned int) (((-(arr_1 [(_Bool)1]))) / (((/* implicit */long long int) -2147483637))));
                var_20 = ((/* implicit */long long int) 1109785874);
                arr_6 [i_0] [i_0] [1LL] = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)50)))))));
                var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) min((((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))) : ((-(arr_4 [i_0] [i_0] [i_0]))))), (((/* implicit */unsigned long long int) ((long long int) var_2))))))));
            }
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148302
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
    var_19 = ((/* implicit */int) max((var_11), (((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) (unsigned char)63))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_15))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) 2992874675U))))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] [2ULL] |= ((/* implicit */signed char) ((-8388608) < (513833377)));
                arr_6 [i_0] [i_0] = ((/* implicit */long long int) (~((+(((/* implicit */int) (signed char)(-127 - 1)))))));
                var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) arr_3 [i_0 - 1] [i_0 + 1] [i_0 + 1]))) != (((/* implicit */int) var_9)))))));
                var_21 = ((/* implicit */int) var_0);
            }
        } 
    } 
    var_22 = ((/* implicit */short) (!(((((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)123)), (var_11)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 18157705753943906510ULL)) ? (((/* implicit */unsigned long long int) 1950585219U)) : (var_15))))))));
    var_23 &= ((/* implicit */signed char) max((-8388608), (262142)));
}

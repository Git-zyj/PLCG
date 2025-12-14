/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182732
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) var_6))));
        arr_2 [i_0] [i_0] &= ((/* implicit */unsigned char) ((unsigned int) arr_0 [i_0]));
    }
    for (long long int i_1 = 0; i_1 < 23; i_1 += 4) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((signed char) var_10)))));
        var_14 = arr_4 [i_1] [i_1];
        var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) min(((((-(((/* implicit */int) var_4)))) * (((/* implicit */int) (!(((/* implicit */_Bool) -542689972912052974LL))))))), (((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_1 [i_1]))))))))))));
        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) (-(var_0))))));
    }
    var_17 = ((((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned char) ((signed char) var_0)))))) ? ((-(min((var_3), (((/* implicit */long long int) var_9)))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) (+(((/* implicit */int) var_4))))) <= (4089653014510475368LL))))));
}

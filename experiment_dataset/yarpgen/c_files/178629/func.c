/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178629
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
    var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) var_1))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_1] [1] = ((/* implicit */short) (unsigned char)255);
                var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 11764657508632110130ULL)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
                var_14 = ((/* implicit */unsigned long long int) -1LL);
                arr_6 [i_0 - 1] [i_1] = ((/* implicit */long long int) var_2);
            }
        } 
    } 
    var_15 = ((/* implicit */int) (+(524287U)));
}

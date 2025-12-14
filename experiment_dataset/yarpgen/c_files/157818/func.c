/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157818
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
    var_17 += ((/* implicit */signed char) (+(3621001935713769804LL)));
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_14)))) : (((long long int) var_11))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (unsigned short i_2 = 2; i_2 < 19; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [i_0] [i_2 + 3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -303477411)) ? (max((((/* implicit */unsigned int) var_5)), (arr_7 [i_2 + 1] [i_2 + 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
                    var_19 -= (+(var_9));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */signed char) var_5);
}

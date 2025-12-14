/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15910
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
    var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) max((((/* implicit */int) var_9)), ((~(((/* implicit */int) (_Bool)1)))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)105)), (5227373796868492217LL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (min(((-(var_4))), (((/* implicit */unsigned int) var_16))))));
                arr_6 [i_1] [(unsigned short)3] [i_1] = (!(((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */signed char) var_10)), (var_2)))) * (((((/* implicit */int) var_2)) + (((/* implicit */int) var_11))))))));
            }
        } 
    } 
}

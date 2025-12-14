/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140577
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            for (unsigned short i_2 = 1; i_2 < 20; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_1 - 1] [i_1] [i_2 + 1] &= min((var_4), (var_4));
                    var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((min((((/* implicit */int) var_10)), (((arr_1 [i_1]) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_12)))))) / (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)0)), (max((var_6), (arr_4 [i_1] [i_1])))))))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) ((var_1) << (((((var_5) + (1966040180))) - (49))))))))), (((((/* implicit */_Bool) (unsigned char)76)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)100)) <= (((/* implicit */int) (unsigned char)53)))))))))))));
    var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) (_Bool)0))));
}

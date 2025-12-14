/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100601
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
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */long long int) 5U);
                    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)24928)) < (((/* implicit */int) (unsigned short)24915))))) - (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_7)) : (((((/* implicit */int) arr_5 [i_0])) + (((/* implicit */int) (unsigned short)40621))))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */_Bool) ((unsigned int) -75026066));
    var_21 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) min(((unsigned short)57237), ((unsigned short)40608)))) ? (((/* implicit */int) var_14)) : (min((((/* implicit */int) var_12)), (124)))))));
    var_22 = var_10;
}

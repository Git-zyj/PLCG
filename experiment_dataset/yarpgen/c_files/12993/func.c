/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12993
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
    var_20 -= ((/* implicit */long long int) max((((((/* implicit */int) var_10)) / (((/* implicit */int) var_11)))), (((/* implicit */int) var_12))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned short i_2 = 3; i_2 < 22; i_2 += 2) 
            {
                {
                    var_21 |= ((/* implicit */short) max((((((/* implicit */_Bool) var_16)) ? (66060288) : (((/* implicit */int) arr_5 [i_2] [i_2 - 2])))), (((/* implicit */int) ((signed char) (unsigned short)14281)))));
                    arr_10 [i_0] [i_1] [i_2] &= ((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_2] [i_2 - 2] [i_2 + 1])) % ((+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_12)) : (var_9)))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */signed char) ((max((((/* implicit */int) var_7)), ((~(((/* implicit */int) (unsigned short)55795)))))) | (((/* implicit */int) max((var_13), (var_5))))));
    var_23 = max((((/* implicit */int) (((~(((/* implicit */int) var_2)))) == (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)63))) <= (var_14))))))), (var_9));
}

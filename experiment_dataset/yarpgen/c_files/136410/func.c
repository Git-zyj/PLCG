/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136410
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
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (var_6) : (var_8)))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_7))))) ? (var_5) : (((((/* implicit */_Bool) ((var_16) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_10))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_16))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_1))))) ? (var_13) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_12)))))))) ? (((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) var_17)) ? (var_18) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_16))))) ? (var_17) : (((/* implicit */int) var_2)))))));
                arr_6 [6] [i_1] = ((/* implicit */signed char) var_16);
                arr_7 [i_0] [i_0] [(signed char)0] = ((/* implicit */_Bool) var_14);
                arr_8 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_4) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_12)) : (var_14)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) var_13)) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) : (((var_9) ? (var_18) : (var_18)))))));
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) var_11);
    /* LoopSeq 1 */
    for (long long int i_2 = 0; i_2 < 17; i_2 += 3) 
    {
        arr_11 [8LL] [i_2] = ((/* implicit */unsigned int) var_11);
        var_22 -= ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_9)) : (((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_9)) : (var_17))) : (((/* implicit */int) var_16))))));
        var_23 = ((/* implicit */unsigned long long int) var_3);
    }
}

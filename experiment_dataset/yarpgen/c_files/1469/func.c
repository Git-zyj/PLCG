/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1469
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
    var_14 |= ((/* implicit */int) var_8);
    var_15 = ((/* implicit */unsigned long long int) var_7);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 16; i_2 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (long long int i_3 = 1; i_3 < 13; i_3 += 2) /* same iter space */
                    {
                        var_16 = ((/* implicit */unsigned char) var_9);
                        var_17 = ((/* implicit */unsigned char) max((((/* implicit */int) min((((/* implicit */short) var_12)), (max((var_10), (((/* implicit */short) var_8))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))) ? (((((/* implicit */_Bool) var_8)) ? (var_2) : (((/* implicit */int) var_12)))) : (((/* implicit */int) min((((/* implicit */short) var_1)), (var_10))))))));
                    }
                    for (long long int i_4 = 1; i_4 < 13; i_4 += 2) /* same iter space */
                    {
                        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_7) : (((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_8)))) : (((((/* implicit */_Bool) var_5)) ? (var_2) : (((/* implicit */int) var_5))))));
                        arr_13 [i_4] = ((/* implicit */long long int) var_7);
                    }
                    for (long long int i_5 = 1; i_5 < 13; i_5 += 2) /* same iter space */
                    {
                        var_19 = ((/* implicit */unsigned long long int) ((var_9) ? (((/* implicit */int) min((var_1), (var_8)))) : (min((((/* implicit */int) (signed char)88)), (-499514954)))));
                        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) min((-8029044860280840702LL), (((/* implicit */long long int) -499514954)))))));
                        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_11))) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))) ? (((((/* implicit */_Bool) 499514963)) ? (8029044860280840732LL) : (((/* implicit */long long int) 499514955)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (var_7) : (((/* implicit */int) var_13)))))));
                        var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) var_8))));
                    }
                    var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) var_5))));
                }
            } 
        } 
    } 
}

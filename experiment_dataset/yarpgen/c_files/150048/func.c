/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150048
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
    var_16 = ((/* implicit */unsigned int) (-((+(((/* implicit */int) (!(var_15))))))));
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    arr_7 [i_2] [i_2] [i_2] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_11)))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        var_17 *= ((/* implicit */short) (~((~(((/* implicit */int) var_14))))));
                        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (~(var_2)))) ? (((var_9) ? (var_0) : (((/* implicit */unsigned long long int) var_6)))) : (((/* implicit */unsigned long long int) var_13)))))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_4 = 0; i_4 < 23; i_4 += 4) 
                    {
                        var_19 = ((/* implicit */short) min((var_19), (var_12)));
                        arr_12 [13U] [13U] [i_0] [i_4] [i_0] |= (!(((/* implicit */_Bool) (+(var_1)))));
                    }
                    arr_13 [i_0 + 1] [i_1] [i_2] = ((/* implicit */unsigned char) (+((-(((var_9) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_8)))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_5 = 0; i_5 < 23; i_5 += 2) 
                    {
                        arr_17 [i_5] [i_0 - 1] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (var_8)))) ? (((/* implicit */unsigned long long int) (~(var_10)))) : (var_1)));
                        arr_18 [i_1] [(unsigned short)16] [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_14)) : (var_10)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) : ((-(var_0)))));
                        var_20 = ((/* implicit */short) (-((~(var_0)))));
                    }
                    /* vectorizable */
                    for (unsigned int i_6 = 0; i_6 < 23; i_6 += 2) 
                    {
                        var_21 = ((/* implicit */unsigned long long int) var_15);
                        var_22 = ((/* implicit */signed char) (~((-(var_11)))));
                    }
                }
            } 
        } 
    } 
}

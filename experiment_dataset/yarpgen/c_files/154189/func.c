/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154189
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
    var_19 = ((/* implicit */unsigned int) var_2);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    arr_6 [i_0] [i_0] [12LL] = ((/* implicit */unsigned char) (+(min((arr_4 [i_2] [i_2] [i_2]), (((/* implicit */unsigned long long int) (+(var_8))))))));
                    var_20 *= ((/* implicit */short) var_6);
                    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) min((min((((/* implicit */unsigned int) var_9)), (var_3))), (((/* implicit */unsigned int) var_11))))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_10)) : (min((arr_4 [i_0] [i_0] [i_2]), (((/* implicit */unsigned long long int) var_18))))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_3 = 3; i_3 < 21; i_3 += 4) 
                    {
                        arr_9 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_14)));
                        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(var_18)))) ? (arr_5 [i_0] [i_1 - 1] [i_2] [i_3 - 1]) : (((/* implicit */long long int) (-(var_0))))));
                        var_23 = ((/* implicit */unsigned short) var_5);
                    }
                    /* vectorizable */
                    for (unsigned short i_4 = 1; i_4 < 18; i_4 += 3) 
                    {
                        arr_12 [i_0] [i_1] [0LL] [i_4] = var_3;
                        arr_13 [i_0] [i_0] [i_1] [i_1] [i_2] [i_4] = ((/* implicit */unsigned short) var_0);
                    }
                    arr_14 [i_0] [i_1 - 1] [i_2] [i_2] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_11))));
                }
            } 
        } 
    } 
}

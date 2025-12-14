/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147103
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 10; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    var_10 = ((/* implicit */unsigned int) min((var_10), (((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) - (-1491385673)))) ? (((/* implicit */int) max((var_6), (((/* implicit */unsigned short) var_1))))) : (((/* implicit */int) var_6))))), (((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (((/* implicit */long long int) 3990705851U)) : (min((var_4), (((/* implicit */long long int) var_2)))))))))));
                    var_11 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-31187)) ? (3990705851U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 4; i_3 < 13; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [i_1] [(short)5] [i_3] [i_4] = ((/* implicit */short) ((int) 1048560U));
                                var_12 = ((/* implicit */short) (unsigned char)225);
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_16 [i_0] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((long long int) var_4))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) + (var_4)))))));
    }
    var_13 = ((/* implicit */long long int) var_2);
    var_14 = min((min((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) < (4LL)))), (min((((/* implicit */long long int) var_1)), (-9223372036854775801LL))))), (((/* implicit */long long int) var_2)));
}

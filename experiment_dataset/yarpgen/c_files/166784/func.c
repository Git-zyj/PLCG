/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166784
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
    var_10 &= ((/* implicit */unsigned long long int) var_0);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 14; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 2; i_2 < 15; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (short i_4 = 2; i_4 < 15; i_4 += 4) 
                        {
                            {
                                var_11 = ((/* implicit */signed char) var_1);
                                arr_15 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~((-(var_0)))))) ? (((/* implicit */long long int) max((-306585373), (((/* implicit */int) var_8))))) : (var_9)));
                            }
                        } 
                    } 
                } 
                var_12 = ((/* implicit */short) max(((~(((((/* implicit */long long int) ((/* implicit */int) var_6))) + (arr_8 [i_1] [i_1] [i_1]))))), (((/* implicit */long long int) arr_3 [i_0] [i_0] [i_0]))));
                var_13 |= ((/* implicit */signed char) min((min((((/* implicit */unsigned long long int) (+(var_0)))), ((-(arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]))))), (((/* implicit */unsigned long long int) ((((var_9) + (((/* implicit */long long int) 306585373)))) - (((/* implicit */long long int) ((/* implicit */int) var_1))))))));
                var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) ((((/* implicit */int) var_7)) >> (((max((((/* implicit */long long int) ((unsigned int) var_5))), (((var_9) ^ (((/* implicit */long long int) 306585371)))))) - (1293131468LL))))))));
            }
        } 
    } 
    var_15 *= ((/* implicit */unsigned short) max((((((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) -306585374)) : (var_9))) < (((/* implicit */long long int) max((var_3), (var_4)))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) -306585369)))) < ((~(var_5)))))));
    var_16 |= ((/* implicit */short) (~(((/* implicit */int) var_7))));
    var_17 |= ((((/* implicit */int) var_6)) >> (((-306585373) + (306585375))));
}

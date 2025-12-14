/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102999
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 18; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) arr_0 [i_1]))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) (+(((/* implicit */int) var_12))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)0), (((/* implicit */unsigned short) var_12)))))) : (min((var_4), (((/* implicit */unsigned long long int) arr_9 [i_0])))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_1), (var_5)))) ? (var_1) : (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))))))));
                                var_15 = ((/* implicit */_Bool) arr_2 [i_1]);
                                arr_12 [i_0] [i_1] [i_2] [i_3] [(unsigned short)10] = ((/* implicit */short) arr_8 [i_0] [i_1] [i_1] [i_1 - 2]);
                                var_16 |= ((/* implicit */unsigned long long int) arr_6 [i_1 - 1] [i_1 - 2] [i_4] [i_4]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */short) (~(((/* implicit */int) var_12))));
    var_18 = ((/* implicit */unsigned int) (short)10744);
    var_19 ^= ((/* implicit */unsigned char) var_3);
}

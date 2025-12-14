/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148672
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
    var_12 = ((/* implicit */unsigned char) -3434485689243596000LL);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_8))))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_1))))) : ((+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_6)))))));
                                arr_13 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((max((var_6), (((/* implicit */unsigned int) 1073741824)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)127)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)43623)))))))) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))));
                                arr_14 [i_4] [5] [i_4] [1ULL] [i_4] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(var_6)))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_0))))) : ((~(var_2)))));
                            }
                        } 
                    } 
                } 
                var_14 = ((/* implicit */unsigned long long int) (~((((+(var_7))) - (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))))));
                arr_15 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) (~(max((var_10), (((/* implicit */int) (short)-113))))));
                var_15 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(4095U))))));
                var_16 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1))));
            }
        } 
    } 
}

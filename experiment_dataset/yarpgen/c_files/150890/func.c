/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150890
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
    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) (-(((/* implicit */int) ((var_15) != (((((/* implicit */_Bool) -413955939123141930LL)) ? (((/* implicit */int) (short)-13682)) : (((/* implicit */int) (short)0))))))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned int i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 15; i_2 += 3) 
            {
                {
                    arr_9 [i_2] [i_2] [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_8) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (4343260171901060021ULL)))) ? (((((/* implicit */int) (unsigned short)35544)) - (((/* implicit */int) arr_7 [i_0] [i_2])))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_1 [i_0]))))))) - (((arr_5 [i_2] [i_1 + 2]) - (arr_5 [i_2] [i_1 + 3])))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 1; i_4 < 12; i_4 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */_Bool) (-(((/* implicit */int) (short)-1))));
                                var_21 ^= ((/* implicit */long long int) ((((2923416652589363117LL) >= (((/* implicit */long long int) (-2147483647 - 1))))) || (((((/* implicit */int) (_Bool)1)) != (var_1)))));
                                arr_16 [15LL] [(_Bool)0] [i_1 + 3] [i_2] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_8 [i_1 + 3] [i_2 - 1] [i_2])) - (max((min((var_9), (((/* implicit */int) var_8)))), (max((8388607), (((/* implicit */int) arr_1 [i_2 + 1]))))))));
                                var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((_Bool) (!(((/* implicit */_Bool) (unsigned short)30014))))))));
                                var_23 = ((/* implicit */unsigned int) (_Bool)1);
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */_Bool) max(((unsigned short)12625), (((/* implicit */unsigned short) (short)23283))));
                    var_25 = ((/* implicit */unsigned char) (+(max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_0))))), (var_17)))));
                    var_26 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [i_0] [i_1] [i_1 + 1] [i_2]))) : (max((((/* implicit */unsigned int) (unsigned short)35539)), (arr_11 [i_2 - 1])))))));
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */unsigned int) var_1);
    var_28 = ((/* implicit */signed char) ((var_17) + (((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_18))))))))));
}

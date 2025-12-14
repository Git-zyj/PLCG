/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140840
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
    for (int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            {
                var_20 = ((-1276375253) + (((/* implicit */int) (short)-5993)));
                var_21 *= ((/* implicit */signed char) max((2988918466U), (((/* implicit */unsigned int) (short)-1))));
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    for (int i_3 = 3; i_3 < 20; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 3; i_4 < 20; i_4 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */long long int) ((((/* implicit */int) arr_7 [8ULL] [i_3] [i_2])) < (((/* implicit */int) (!(((/* implicit */_Bool) 1306048829U)))))));
                                var_23 = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) min((4232988443340199911ULL), (var_10)))) || (((/* implicit */_Bool) min((2988918466U), (arr_11 [i_4 + 1] [i_3] [i_2] [i_2] [i_1] [i_1] [i_0]))))))), (min((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)0))))), (max((var_13), (var_11)))))));
                                var_24 = ((/* implicit */short) min((((/* implicit */unsigned int) (~(((/* implicit */int) (short)6081))))), (2988918466U)));
                            }
                        } 
                    } 
                } 
                arr_13 [i_0] = ((/* implicit */signed char) max(((+(((/* implicit */int) ((0ULL) > (5114950096650474807ULL)))))), (536870911)));
                arr_14 [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) max((-379896930), (0))))));
            }
        } 
    } 
    var_25 = ((/* implicit */short) (+(((/* implicit */int) (short)-2252))));
    var_26 = ((/* implicit */short) min((((/* implicit */unsigned long long int) var_2)), (var_3)));
    var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((-3403455461892028096LL), (((/* implicit */long long int) 1306048829U))))) ? (max((((/* implicit */long long int) -1074020639)), (-3403455461892028096LL))) : (((/* implicit */long long int) var_18))))) ? (var_15) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0)))))) ? (((((/* implicit */_Bool) var_17)) ? (var_15) : (((/* implicit */long long int) var_2)))) : (((/* implicit */long long int) ((((((/* implicit */int) (signed char)-5)) + (2147483647))) << (((var_14) - (11277161606797569926ULL))))))))));
}

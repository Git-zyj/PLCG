/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146200
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
    var_10 = ((/* implicit */unsigned short) var_0);
    var_11 = (signed char)-95;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 10; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) ((unsigned char) ((int) arr_1 [i_0 - 2]))))));
                var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) ((var_7) & (((((/* implicit */_Bool) ((arr_1 [10ULL]) + (((/* implicit */int) var_4))))) ? (((((/* implicit */_Bool) 11509730680953662364ULL)) ? (6937013392755889252ULL) : (6937013392755889252ULL))) : (((11509730680953662337ULL) << (((6937013392755889289ULL) - (6937013392755889261ULL))))))))))));
                var_14 = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) arr_1 [i_0 - 4])) ? (((/* implicit */int) var_1)) : (arr_1 [i_0 - 4]))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        {
                            var_15 *= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((11509730680953662317ULL) < (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32764))) + (6937013392755889273ULL))))))) != (var_7)));
                            var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) min((((((/* implicit */int) var_5)) ^ (((/* implicit */int) arr_8 [i_0] [i_0])))), (((((/* implicit */_Bool) arr_8 [i_0] [i_0])) ? (((/* implicit */int) arr_8 [i_0] [i_0])) : (((/* implicit */int) arr_8 [i_0] [i_0])))))))));
                            var_17 = ((/* implicit */signed char) var_3);
                            var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((var_1) ? (((/* implicit */long long int) ((arr_1 [i_0]) ^ (((/* implicit */int) (unsigned short)33125))))) : (((var_1) ? (arr_7 [i_1] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))))) ? (((/* implicit */int) (short)32763)) : (((/* implicit */int) arr_10 [i_1] [i_1] [i_2] [i_0] [(short)6]))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */int) arr_5 [i_0] [i_1] [i_1] [i_1]);
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) <= (var_3))))));
}

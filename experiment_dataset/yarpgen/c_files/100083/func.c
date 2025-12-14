/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100083
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
    for (int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            {
                var_13 |= ((/* implicit */signed char) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) min((arr_4 [8ULL]), (arr_4 [8LL])))) : (((/* implicit */int) arr_4 [(unsigned short)0]))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        {
                            arr_10 [i_1 - 1] [i_1] [i_2] [i_3] [i_1] [i_1] = ((/* implicit */unsigned short) min((min((((/* implicit */int) arr_1 [i_0] [i_3])), (((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_0 [i_1] [i_2])))))), (((((/* implicit */_Bool) ((var_10) - (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2])))))) ? (((/* implicit */int) (unsigned char)223)) : (max((var_2), (((/* implicit */int) var_5))))))));
                            var_14 = ((/* implicit */short) max((((((/* implicit */int) var_3)) / (((/* implicit */int) arr_6 [i_1 + 2])))), (((/* implicit */int) min((((/* implicit */short) arr_6 [i_1 - 1])), (arr_0 [i_1 + 1] [i_1 - 1]))))));
                            var_15 = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */int) var_3)) + (((/* implicit */int) var_1)))));
                        }
                    } 
                } 
                arr_11 [i_1] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) var_8)) <= (((/* implicit */int) var_5))))) >= (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (short)32767)))) > (var_11))))));
            }
        } 
    } 
    var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) (-(((/* implicit */int) var_6)))))));
}

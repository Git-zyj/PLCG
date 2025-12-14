/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154702
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
    var_16 = ((/* implicit */unsigned int) var_6);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 18; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 4; i_3 < 20; i_3 += 3) 
                    {
                        for (signed char i_4 = 2; i_4 < 21; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_2] [i_2] [i_1] = ((/* implicit */signed char) max((((/* implicit */long long int) (unsigned short)0)), (((long long int) min((814259335U), (((/* implicit */unsigned int) var_12)))))));
                                arr_14 [i_4 + 1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((int) 2147483647))) <= (min((arr_12 [(signed char)16] [i_0 + 1] [i_3 + 1] [(signed char)16]), (((/* implicit */unsigned int) (signed char)-113))))));
                                var_17 = ((/* implicit */signed char) min((((/* implicit */long long int) (signed char)-97)), (-7583869932410769248LL)));
                                arr_15 [i_0] [i_1] [i_2 + 3] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 + 1] [i_2] [i_3])) ? (((((/* implicit */_Bool) arr_5 [(unsigned short)4])) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))))) : (((/* implicit */long long int) arr_12 [i_1 - 1] [i_2 + 1] [i_3 - 4] [i_4 + 1])))))));
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_1] [i_2 - 1] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_1 - 1] [i_2])) ? (((((/* implicit */_Bool) -3192578766407134973LL)) ? (18014364149743616LL) : (((/* implicit */long long int) arr_2 [i_0] [6] [i_0])))) : (((((/* implicit */_Bool) var_7)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */long long int) ((unsigned short) (+(((/* implicit */int) var_6)))));
}

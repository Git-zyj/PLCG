/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121807
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 12; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 14; i_4 += 2) 
                        {
                            {
                                arr_13 [i_0] [i_3] [i_2] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (2704958218U) : (var_5)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1590009077U)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)24187))))) : (arr_12 [i_0] [i_1] [i_2] [i_3] [i_4]))))));
                                var_10 = ((/* implicit */long long int) max((var_10), (((/* implicit */long long int) arr_8 [i_0]))));
                                var_11 = ((/* implicit */unsigned short) 1590009082U);
                                arr_14 [i_0] [i_2] [i_3] [7ULL] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [(unsigned short)11] [(unsigned char)4]))) >= (2704958231U))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1 + 2] [i_1]))) : (9429958963115035445ULL)))) ? (2704958214U) : (2704958231U)));
                            }
                        } 
                    } 
                    var_12 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(min((2704958231U), (((/* implicit */unsigned int) arr_10 [i_0] [i_1] [i_1] [(unsigned short)11] [13ULL])))))))));
                }
            } 
        } 
    } 
    var_13 *= ((/* implicit */unsigned long long int) ((short) ((1590009083U) <= (1590009082U))));
    var_14 = ((/* implicit */unsigned int) max(((((~(((/* implicit */int) var_6)))) / (((/* implicit */int) (unsigned char)214)))), ((~(((/* implicit */int) var_2))))));
}

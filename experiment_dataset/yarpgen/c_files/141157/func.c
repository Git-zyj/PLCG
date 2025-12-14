/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141157
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
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_5)), (max((8352456766804177541LL), (var_16)))))) ? (max((((/* implicit */long long int) 4294967295U)), (-1LL))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)20166))))) : (max((-2401400690581546408LL), (((/* implicit */long long int) (signed char)-104))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_19 -= max((((/* implicit */long long int) (~(1777641195)))), (((((/* implicit */_Bool) 5720504302717612266LL)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-9144))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 2; i_2 < 20; i_2 += 1) 
                {
                    for (unsigned short i_3 = 2; i_3 < 21; i_3 += 3) 
                    {
                        {
                            arr_11 [i_2] [i_1] [i_1] [i_3] [i_2] = ((/* implicit */short) max(((((!(((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_1] [i_3])))) ? (((((/* implicit */_Bool) (unsigned char)170)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)27667))))) : (((((/* implicit */_Bool) var_4)) ? (arr_2 [i_0] [i_1] [i_2]) : (4164900997U))))), (((/* implicit */unsigned int) min((((/* implicit */int) (short)0)), (-747717989))))));
                            arr_12 [i_0] [i_2] [i_2] [i_2] [i_3] [i_3] = ((/* implicit */int) min((((/* implicit */short) (signed char)-32)), ((short)0)));
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 &= ((/* implicit */unsigned long long int) var_14);
    var_21 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) min((var_6), (var_6)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) : (((((/* implicit */_Bool) var_0)) ? (var_17) : (((/* implicit */int) var_10))))))));
}

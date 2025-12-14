/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146763
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
    var_20 = ((/* implicit */_Bool) ((unsigned long long int) (unsigned short)65535));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 7; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 10; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5))))) : (((((arr_2 [i_0]) ? (8070450532247928832ULL) : (((/* implicit */unsigned long long int) 2125402124U)))) + (((unsigned long long int) arr_4 [i_0 + 4] [i_0] [i_1 - 2]))))));
                arr_5 [i_0] = ((((/* implicit */_Bool) max((min((((/* implicit */int) (unsigned short)65535)), (var_2))), (max((arr_4 [i_0] [i_0] [i_1]), (((/* implicit */int) arr_3 [i_0]))))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) (signed char)111)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    for (int i_3 = 4; i_3 < 8; i_3 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (short)-8)) ? (((/* implicit */int) arr_8 [i_0])) : (((/* implicit */int) max((((/* implicit */short) arr_9 [i_0] [i_1 + 1] [i_1 + 1] [i_0])), ((short)14547)))))), (((/* implicit */int) (!(((/* implicit */_Bool) 2125402133U)))))));
                            var_23 = ((/* implicit */unsigned short) arr_2 [i_0]);
                        }
                    } 
                } 
                arr_11 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(arr_10 [i_0])))) && (((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned char)254)) ? (((/* implicit */int) (short)14537)) : (((/* implicit */int) (signed char)7)))), (((/* implicit */int) (short)-26994)))))));
            }
        } 
    } 
}

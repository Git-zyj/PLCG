/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150762
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
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (long long int i_2 = 2; i_2 < 12; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                arr_11 [i_0] [i_1] [i_4] [i_4] [i_4] [i_4] [i_0] = (+(((((/* implicit */_Bool) ((3388319446U) % (4294967290U)))) ? (var_6) : (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (2016058830U))))));
                                arr_12 [i_2] [i_3] [i_3] [i_3] [i_4] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) 486092824U)) && (((/* implicit */_Bool) 3441148144155573134LL))))), ((unsigned short)52110)))) ? ((+(((/* implicit */int) ((unsigned short) var_0))))) : (((/* implicit */int) (unsigned short)26989))));
                                arr_13 [i_0] [i_3] [i_3] = min((var_11), (((unsigned short) var_11)));
                                arr_14 [i_0] [i_1] [i_2 + 2] [i_2] [(unsigned short)10] [i_3] [i_4] = max((((/* implicit */long long int) arr_0 [i_1])), (((((/* implicit */_Bool) 9223372036854775807LL)) ? (9223372036854775807LL) : (((/* implicit */long long int) 4294967295U)))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */unsigned int) min((var_14), ((~(min((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)27017))))), (var_9)))))));
                    var_15 = ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_2 + 1])) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [(unsigned short)10] [i_1] [i_1]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)32767)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)38547)))))))) : (max((((((/* implicit */_Bool) (unsigned short)56745)) ? (((/* implicit */long long int) 451246905U)) : (-5427847989974589714LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) 0LL)) ? (var_9) : (arr_7 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((-5897322778224184692LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32767)))))) ? (((((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned int) var_7))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (451246924U)))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32767))) : (var_2))))) : (((long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)0)))))));
}

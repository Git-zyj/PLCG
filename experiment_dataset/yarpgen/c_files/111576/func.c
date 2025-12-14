/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111576
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
    var_12 = ((/* implicit */unsigned char) (((-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_8)))))) % (((((/* implicit */_Bool) 12229623281422477155ULL)) ? (((/* implicit */int) (unsigned char)27)) : (((/* implicit */int) (signed char)122))))));
    var_13 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) (+(var_4)))) : (max((((/* implicit */unsigned int) var_4)), (var_10)))))) ? (((/* implicit */int) ((short) (+(1180550226U))))) : (max(((~(((/* implicit */int) (signed char)-11)))), (max((((/* implicit */int) (unsigned short)0)), (-1806531657)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) (signed char)122)), ((unsigned char)127)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 15141395344330850122ULL)))) : (max((var_9), (((/* implicit */unsigned long long int) arr_1 [i_0 - 1]))))));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) arr_1 [(short)4]))));
                    var_16 = ((/* implicit */unsigned short) ((15U) | (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) (!(((/* implicit */_Bool) var_2))))), (var_0)))))));
                    arr_10 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */long long int) arr_6 [i_2]);
                }
                arr_11 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_3 [i_0 + 1]);
            }
        } 
    } 
}

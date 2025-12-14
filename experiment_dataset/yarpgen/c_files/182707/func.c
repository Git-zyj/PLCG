/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182707
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
    var_12 -= ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_4) < (var_6))))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_6))))), (((/* implicit */unsigned int) max((((/* implicit */int) max((var_8), (var_5)))), ((~(((/* implicit */int) var_10)))))))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((short) arr_4 [(unsigned char)2]))) ? (((long long int) var_0)) : (((/* implicit */long long int) ((arr_4 [(unsigned short)2]) << (((var_0) - (4059595169U)))))))))))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    for (unsigned char i_3 = 4; i_3 < 16; i_3 += 3) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned int) max(((~(((/* implicit */int) arr_1 [i_0])))), (((/* implicit */int) max((arr_1 [i_0]), (arr_1 [i_0]))))));
                            arr_11 [i_0] = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */int) max((var_10), (var_8)))) * (((/* implicit */int) max((((/* implicit */unsigned short) arr_10 [i_0] [i_0])), (arr_3 [i_0])))))));
                        }
                    } 
                } 
                var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) min((var_9), (((/* implicit */unsigned short) arr_0 [i_0] [i_1]))))), (min((((/* implicit */unsigned int) arr_8 [i_0] [(unsigned short)4])), (var_3)))))) ? (((/* implicit */int) ((((/* implicit */int) arr_3 [(short)10])) == (((/* implicit */int) max((arr_8 [(unsigned short)10] [(unsigned short)10]), (arr_6 [i_0 + 2] [i_0 - 1] [i_0 + 2] [(signed char)4]))))))) : (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [6U]))) : (arr_2 [i_0 + 1] [i_0]))))))))));
            }
        } 
    } 
}

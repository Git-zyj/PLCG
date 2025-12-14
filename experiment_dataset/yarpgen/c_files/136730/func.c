/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136730
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
    var_14 = ((/* implicit */_Bool) max((var_14), ((!(((/* implicit */_Bool) (unsigned short)44493))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (unsigned char i_2 = 1; i_2 < 21; i_2 += 4) 
            {
                {
                    var_15 = ((((((/* implicit */_Bool) arr_0 [i_2 + 1])) ? (arr_4 [i_1]) : (var_6))) >> ((((~(((((/* implicit */_Bool) var_7)) ? (3593277365U) : (((/* implicit */unsigned int) -188180653)))))) - (701689875U))));
                    var_16 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((_Bool) arr_3 [i_0] [i_1] [i_2 - 1])))));
                    var_17 = ((/* implicit */long long int) ((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) : (4063232U))))) % (((/* implicit */int) ((min((arr_6 [i_1] [i_1] [i_1]), (((/* implicit */unsigned int) arr_0 [i_0])))) != (var_0))))));
                    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) var_8))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 21; i_3 += 2) 
                    {
                        for (short i_4 = 1; i_4 < 20; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((min((((/* implicit */unsigned int) arr_13 [i_2 - 1] [i_3 - 1] [i_0])), (868893793U))) >> (((((/* implicit */int) min((arr_13 [i_2 + 1] [i_3 - 1] [i_0]), (arr_13 [i_2 + 1] [i_3 - 1] [i_0])))) - (16161))))))));
                                arr_14 [i_0] [i_1] [i_1] [i_2] [i_1] [i_4 + 1] = ((/* implicit */signed char) min(((-(min((((/* implicit */long long int) (signed char)-66)), (var_6))))), (((/* implicit */long long int) ((short) arr_13 [i_2] [i_2] [i_1])))));
                                var_20 = ((/* implicit */unsigned int) min((((/* implicit */int) min((arr_2 [i_4 - 1]), (arr_2 [i_4 - 1])))), (((((/* implicit */int) arr_2 [i_4 + 1])) % (((/* implicit */int) arr_2 [i_4 + 1]))))));
                                var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) 2666016843U))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}

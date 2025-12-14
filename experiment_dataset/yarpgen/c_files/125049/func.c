/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125049
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
    var_17 = ((/* implicit */short) (signed char)95);
    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) 8646911284551352320ULL)) ? (((var_0) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-121))))) : ((+(var_9))))))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */unsigned int) ((short) (-(((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) : (arr_5 [i_0] [i_0] [i_1]))))));
                var_20 &= ((/* implicit */signed char) ((((/* implicit */int) min((arr_2 [i_0 - 2]), (arr_2 [i_0 - 1])))) + (((/* implicit */int) min((arr_3 [i_0]), (((/* implicit */unsigned short) arr_1 [i_0])))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 15; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        {
                            arr_12 [i_2] [i_2] [i_2] [i_1] [i_2] = min(((-(((var_1) ^ (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0 + 1]))))))), (((long long int) var_12)));
                            var_21 = ((/* implicit */unsigned int) var_5);
                        }
                    } 
                } 
                arr_13 [i_0] [i_1] [i_1] = ((/* implicit */short) var_13);
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) var_9);
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172877
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
    for (int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */int) ((short) ((((/* implicit */int) max(((signed char)-43), ((signed char)15)))) > (((/* implicit */int) min((var_3), (((/* implicit */unsigned short) (signed char)(-127 - 1)))))))));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    for (unsigned int i_3 = 1; i_3 < 11; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 3; i_4 < 11; i_4 += 2) 
                        {
                            {
                                arr_13 [6ULL] [i_2] &= ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) max((((/* implicit */long long int) var_3)), (var_4)))) ? (((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_3] [i_3])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (signed char)10)))) : (((/* implicit */int) arr_0 [i_3 + 1] [i_3])))), (max((arr_10 [i_4 + 1] [i_3 + 1]), (((/* implicit */int) ((arr_3 [i_0] [i_0] [i_0]) >= (((/* implicit */long long int) var_9)))))))));
                                arr_14 [i_0] [i_0] [i_2] [(unsigned char)7] [i_4] [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) == (((((/* implicit */_Bool) 7957875379156753579ULL)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (signed char)-29))))))), (((unsigned long long int) 14746680615271944777ULL))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) < (max((0ULL), (((/* implicit */unsigned long long int) var_7))))))))));
}

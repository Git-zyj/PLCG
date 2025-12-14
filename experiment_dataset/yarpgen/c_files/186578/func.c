/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186578
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
    var_10 = ((/* implicit */signed char) var_5);
    var_11 -= ((/* implicit */int) var_5);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    arr_7 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [10] [10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (16171657529752693212ULL)))) ? (((/* implicit */int) (signed char)43)) : (((/* implicit */int) (signed char)-43))))) ? ((-(arr_1 [i_0 + 2]))) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [(unsigned char)1])))));
                    arr_8 [i_0] [12U] [i_2] |= (+(min((arr_5 [(unsigned char)4] [i_0 + 2] [i_2]), (((/* implicit */long long int) ((arr_3 [i_0] [i_1] [6ULL]) > (((/* implicit */int) arr_4 [i_0] [i_1]))))))));
                }
            } 
        } 
    } 
    var_12 &= ((/* implicit */signed char) max((((var_3) & (((/* implicit */long long int) ((/* implicit */int) var_0))))), (((/* implicit */long long int) var_2))));
    var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) var_6))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174028
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
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) -5269521414768875606LL)))) ? (var_3) : (((unsigned long long int) var_17))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((((/* implicit */unsigned long long int) var_0)) & (var_11)))))) : (((((/* implicit */_Bool) ((var_8) | (((/* implicit */int) var_17))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)32767)) | (var_8)))) : (((var_10) >> (((/* implicit */int) var_13))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((-615905481702669299LL) != (((/* implicit */long long int) ((/* implicit */int) ((signed char) (signed char)7))))));
                    var_19 = ((/* implicit */unsigned short) (signed char)-8);
                    var_20 -= ((/* implicit */unsigned int) ((0LL) != (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0])))));
                }
            } 
        } 
    } 
    var_21 -= ((/* implicit */unsigned char) var_2);
    var_22 = ((/* implicit */unsigned short) max((max((var_17), (((/* implicit */signed char) ((((/* implicit */int) var_7)) < (((/* implicit */int) var_17))))))), (var_15)));
}

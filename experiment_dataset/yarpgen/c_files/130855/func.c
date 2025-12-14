/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130855
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
    var_19 += ((/* implicit */unsigned short) var_16);
    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (~((~(((var_6) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) var_12))))))))))));
    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) var_12))));
    var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) var_3))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    var_23 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (+(681532780U)))) ? (((/* implicit */unsigned long long int) (-(-1167628170)))) : (((((/* implicit */_Bool) (+(var_1)))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [9ULL]))) : (arr_0 [i_1 + 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))));
                    var_24 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((131071LL), (((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_1 + 3])))))))) ? (((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (max((arr_0 [(unsigned short)10]), (((/* implicit */unsigned long long int) arr_1 [i_0])))) : (((/* implicit */unsigned long long int) arr_3 [i_1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [8ULL])))));
                }
            } 
        } 
    } 
}

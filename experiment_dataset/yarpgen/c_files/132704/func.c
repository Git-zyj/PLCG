/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132704
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
    var_13 = ((/* implicit */unsigned short) var_2);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */int) arr_1 [i_1])) >= (((/* implicit */int) arr_0 [i_0] [(unsigned short)12])))));
                var_15 = ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_0 [i_0] [i_0]))))) : (min((((((/* implicit */_Bool) var_8)) ? (arr_4 [i_0] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1]))))), (arr_4 [i_0] [i_0]))));
                arr_5 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_2 [i_1]) : (arr_2 [i_0])))) ? ((~((+(var_3))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) arr_0 [i_0] [i_0])), (var_12)))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned int) (short)(-32767 - 1));
}

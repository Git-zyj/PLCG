/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162806
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
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [(unsigned short)8] [i_1])) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) arr_4 [i_1] [(short)3]))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) arr_1 [i_1]))))) : (((((/* implicit */_Bool) (unsigned short)25116)) ? (2941839707U) : (((/* implicit */unsigned int) 2)))))) | (((((/* implicit */_Bool) 7)) ? (arr_2 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1 + 1]))))))))));
                var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)0) ? (((((/* implicit */_Bool) 1019217206U)) ? (((/* implicit */int) arr_1 [(unsigned char)10])) : (((/* implicit */int) arr_0 [i_1 - 1])))) : ((-(((/* implicit */int) arr_1 [i_0]))))))) ? (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_4 [i_1 + 1] [(_Bool)1])) ? (1353127604U) : (((/* implicit */unsigned int) -1))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)30337)) ? (-25) : (((/* implicit */int) arr_4 [i_0] [i_1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (6920780895474551490ULL)))));
                arr_5 [(unsigned char)8] = ((/* implicit */short) (unsigned char)89);
                arr_6 [(short)19] [i_1] = ((/* implicit */unsigned long long int) arr_3 [i_0] [i_0]);
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) (short)-15680);
    var_20 = ((/* implicit */int) var_14);
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)12195)) ? (((/* implicit */int) (short)32760)) : (((/* implicit */int) ((((/* implicit */long long int) var_8)) <= (var_6))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115434
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
    var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) var_2))));
    var_19 = ((/* implicit */int) var_17);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [(unsigned short)14] [(unsigned short)14] [i_1] = ((/* implicit */short) (((+(((/* implicit */int) (!(((/* implicit */_Bool) 921633618U))))))) & (((/* implicit */int) (!(((/* implicit */_Bool) (+(var_7)))))))));
                arr_5 [(short)12] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))))) ? (((((/* implicit */_Bool) ((((/* implicit */long long int) 134217727)) | (arr_2 [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) : (min((((/* implicit */unsigned long long int) arr_3 [i_0] [i_0] [i_1])), (var_11))))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_14)), (arr_2 [i_0] [i_0]))))));
            }
        } 
    } 
}

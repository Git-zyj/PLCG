/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18491
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
    var_20 = ((/* implicit */_Bool) ((int) min(((-(((/* implicit */int) (signed char)53)))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_13)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 24; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            {
                var_21 = ((/* implicit */signed char) min((((((/* implicit */_Bool) min(((unsigned short)8), (((/* implicit */unsigned short) (signed char)-62))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)162)))))) : (7311476847376836813LL))), (((((/* implicit */long long int) min((var_19), (((/* implicit */int) (_Bool)0))))) / (min((((/* implicit */long long int) var_6)), (var_12)))))));
                var_22 = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (arr_2 [i_1 + 4]))))));
                arr_4 [(_Bool)1] = ((/* implicit */_Bool) min((min((((((/* implicit */long long int) var_6)) + (arr_3 [i_0]))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65528)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)3273))))))), (((/* implicit */long long int) (signed char)62))));
                var_23 = ((/* implicit */_Bool) ((int) min(((unsigned short)8), (((/* implicit */unsigned short) ((_Bool) var_4))))));
            }
        } 
    } 
}

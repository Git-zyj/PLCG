/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179747
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */signed char) ((((264933401U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)173))))) + (min((max((2204618298U), (((/* implicit */unsigned int) (unsigned char)0)))), (((/* implicit */unsigned int) var_4))))));
                var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned long long int) var_3))))) ? (min((((/* implicit */unsigned int) var_2)), (var_6))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_0])))))))))) : (var_15)));
                var_21 = ((/* implicit */_Bool) min((var_21), (((((/* implicit */int) min(((unsigned short)55016), (((/* implicit */unsigned short) (_Bool)1))))) < (((((/* implicit */int) arr_2 [(unsigned char)0])) * (((/* implicit */int) arr_2 [(_Bool)1]))))))));
                arr_4 [i_0] = ((/* implicit */short) min((((((/* implicit */int) (signed char)-87)) * (((/* implicit */int) arr_3 [i_1] [i_1] [i_0])))), (((/* implicit */int) var_10))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned char) var_15);
}

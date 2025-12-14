/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121281
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
    var_13 = ((/* implicit */unsigned int) var_2);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) ((signed char) var_12)))))) ? (((((/* implicit */_Bool) arr_0 [(unsigned char)2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)5108))) : (min((var_6), (((/* implicit */unsigned long long int) var_8)))))) : (((/* implicit */unsigned long long int) min((-658719331), (((/* implicit */int) (short)5125)))))));
                arr_7 [i_0] [i_0] &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? ((-(-2145195822))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1]))))))))));
                var_14 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((short) (!(((/* implicit */_Bool) var_5))))))));
            }
        } 
    } 
}

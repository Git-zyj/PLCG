/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184870
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
    var_17 = var_15;
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_18 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_2 [i_0])))))))) ? (((((((/* implicit */int) var_6)) != (((/* implicit */int) arr_0 [i_0])))) ? (((((/* implicit */_Bool) (unsigned char)192)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)31)))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_1 [i_1])))))) : (((/* implicit */int) max((((/* implicit */unsigned char) ((((/* implicit */int) arr_3 [i_0] [i_1] [(unsigned char)6])) < (((/* implicit */int) var_9))))), (var_4))))));
                arr_4 [(unsigned char)12] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)224)) ? (((/* implicit */int) (unsigned char)254)) : (((/* implicit */int) (unsigned char)36))));
            }
        } 
    } 
    var_19 = min(((unsigned char)243), (((/* implicit */unsigned char) ((((/* implicit */int) var_12)) == (((((/* implicit */_Bool) (unsigned char)209)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)255))))))));
    var_20 = min(((unsigned char)176), (var_4));
}

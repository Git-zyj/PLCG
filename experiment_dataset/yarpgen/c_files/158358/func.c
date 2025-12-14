/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158358
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((3497619736U), (((/* implicit */unsigned int) arr_1 [i_1]))))) ? (var_1) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_4 [i_2] [i_1 + 1] [(short)6] [i_0]))))))))));
                    var_20 = ((/* implicit */_Bool) max((3497619728U), (((/* implicit */unsigned int) (unsigned char)8))));
                    var_21 ^= ((((/* implicit */_Bool) (~((+(4125181624944409825LL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_0] [i_1] [i_0]))))))))) : (max(((~(var_1))), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1 + 2] [i_0])))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) (~(797347560U))))));
    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned long long int) ((short) var_13)))))) ? (var_9) : (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_9)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) var_0))))))))));
}

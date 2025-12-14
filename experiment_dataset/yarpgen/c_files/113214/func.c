/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113214
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
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_20 = arr_1 [(signed char)8] [(signed char)8];
                var_21 = ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0] [i_0])) + (((/* implicit */int) arr_3 [i_0] [i_1]))))) && (((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_0] [i_1])))))))));
                arr_4 [(signed char)3] = arr_2 [i_0] [i_1];
                var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) min((((/* implicit */unsigned char) arr_2 [(signed char)12] [(signed char)5])), (arr_0 [i_0] [i_0])))) ^ (((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((/* implicit */int) min((arr_0 [i_0] [i_1]), (((/* implicit */unsigned char) arr_3 [i_0] [i_0]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0])))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned char) var_18);
    var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) min((var_19), (((/* implicit */unsigned char) ((((/* implicit */int) var_1)) <= (((/* implicit */int) var_5)))))))) : (((/* implicit */int) ((((((/* implicit */int) var_0)) & (((/* implicit */int) var_19)))) >= ((~(((/* implicit */int) var_19))))))))))));
    var_25 = ((/* implicit */unsigned char) var_18);
    var_26 = ((/* implicit */signed char) var_19);
}

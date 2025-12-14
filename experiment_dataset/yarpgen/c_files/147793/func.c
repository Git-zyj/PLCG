/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147793
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
    var_11 = var_6;
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (signed char i_1 = 4; i_1 < 9; i_1 += 2) 
        {
            for (signed char i_2 = 1; i_2 < 7; i_2 += 3) 
            {
                {
                    arr_6 [(signed char)2] [i_2] [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)46)) ? (((/* implicit */int) (signed char)42)) : (((/* implicit */int) (signed char)8))));
                    var_12 = ((signed char) arr_4 [i_2]);
                    var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) (((~(((/* implicit */int) min(((signed char)-5), ((signed char)31)))))) >= (((/* implicit */int) max((arr_3 [i_1 - 2]), (arr_1 [i_2 + 3])))))))));
                    arr_7 [i_2] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) max(((signed char)11), (var_4)))) : (((/* implicit */int) (signed char)4)))) < (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (signed char)4))))))))));
                    arr_8 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) max(((signed char)-76), ((signed char)-107)))) : ((-(((/* implicit */int) (signed char)74))))));
                }
            } 
        } 
    } 
}

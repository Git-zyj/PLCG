/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134635
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
    var_14 &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_11))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    arr_6 [i_1] = ((/* implicit */long long int) (!(((((/* implicit */unsigned int) (-(((/* implicit */int) arr_5 [i_0] [i_0] [i_1] [19U]))))) > (((((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_0 [i_0] [i_1])))))));
                    arr_7 [18ULL] [i_1] [i_0] [i_2] = ((/* implicit */short) ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_2 [i_0] [i_1]))))) % (max((min((arr_0 [i_1] [i_2]), (((/* implicit */unsigned int) arr_2 [i_0] [i_1])))), ((~(var_0)))))));
                    var_15 = ((/* implicit */unsigned int) min((var_15), (((((/* implicit */_Bool) max((arr_4 [i_0] [i_1] [i_2]), (var_8)))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_0] [i_2]))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_12))) & (arr_3 [i_0] [i_0]))) : ((~(arr_4 [i_0] [i_1] [i_2]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(var_5)))) ? ((-(((/* implicit */int) (short)32767)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))))))));
                }
            } 
        } 
    } 
}

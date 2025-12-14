/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139047
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
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    arr_6 [(signed char)1] [i_1] [i_0] = ((/* implicit */unsigned int) arr_4 [i_0] [i_0] [i_0] [i_0]);
                    arr_7 [0U] &= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) max((arr_3 [10U]), (((/* implicit */long long int) arr_4 [i_2] [i_2] [i_1] [i_0]))))) ? (((/* implicit */int) arr_0 [i_1] [6ULL])) : (((/* implicit */int) max((arr_4 [4ULL] [i_1] [i_2 + 1] [i_2]), (((/* implicit */signed char) arr_0 [i_0] [(_Bool)1]))))))), (min((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))), (((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_0 [i_0] [4U]))))))));
                    arr_8 [i_0] [(unsigned char)3] [i_0] = min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) (short)24271))) ? (((/* implicit */int) ((arr_3 [i_0]) < (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_1] [i_2 + 1])))))) : (((/* implicit */int) ((unsigned char) (short)-6)))))), (var_10));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (((((_Bool)0) && (((/* implicit */_Bool) var_10)))) || (((/* implicit */_Bool) var_9))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_4)))))));
}

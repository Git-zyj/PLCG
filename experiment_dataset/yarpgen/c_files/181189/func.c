/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181189
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
    var_16 = ((/* implicit */unsigned char) var_14);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    arr_6 [i_0] |= ((/* implicit */long long int) (~(((16646144) | (((/* implicit */int) (short)29789))))));
                    var_17 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) (unsigned short)124))))) > (((((/* implicit */long long int) ((/* implicit */int) arr_1 [(short)7]))) | (var_12)))))) ^ (((/* implicit */int) var_11))));
                    arr_7 [i_0] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_11))))) ? ((+(((((/* implicit */int) arr_5 [i_0] [i_1 - 1] [i_2] [i_1])) | (((/* implicit */int) arr_2 [i_0] [i_1] [i_2 + 1])))))) : (((/* implicit */int) arr_5 [i_1] [i_1 - 1] [i_1] [i_0]))));
                    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? ((+(((/* implicit */int) arr_1 [14])))) : ((+(((((/* implicit */int) var_15)) - (((/* implicit */int) var_9))))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((((/* implicit */int) var_6)) & (((((/* implicit */_Bool) 11163047543958894681ULL)) ? (var_7) : (((/* implicit */int) var_11)))))) + (((/* implicit */int) var_6)))))));
}

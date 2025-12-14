/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170211
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 13; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) ((unsigned int) min((((/* implicit */unsigned int) var_3)), ((~(var_10))))));
                    arr_10 [i_1] [i_1] [i_0] [i_2] = ((/* implicit */unsigned int) (+((-(((/* implicit */int) var_5))))));
                    var_17 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */int) min(((signed char)48), (arr_2 [i_1] [i_1])))) | (arr_8 [i_0] [i_1 - 3])))), (min((((/* implicit */long long int) (signed char)48)), (arr_3 [i_1 + 1])))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */short) var_13);
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~((((_Bool)0) ? (((/* implicit */int) (short)4808)) : (0)))))) ? (((/* implicit */long long int) var_13)) : (min((((/* implicit */long long int) ((((/* implicit */_Bool) 254981350483175684LL)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)164)))))), (((((/* implicit */long long int) ((/* implicit */int) var_5))) | (-9195331681650947980LL)))))));
    var_20 = ((/* implicit */long long int) min((((/* implicit */unsigned short) var_14)), ((unsigned short)39820)));
}

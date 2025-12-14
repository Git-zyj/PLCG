/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116621
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) (+(min((((/* implicit */unsigned long long int) max(((signed char)37), (arr_1 [i_0])))), (min((((/* implicit */unsigned long long int) var_7)), (var_5)))))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((10ULL), (var_1))))));
        var_20 = ((/* implicit */signed char) ((_Bool) ((unsigned long long int) (~(var_1)))));
        arr_4 [i_0] = ((/* implicit */unsigned char) arr_0 [i_0] [i_0]);
    }
    for (signed char i_1 = 0; i_1 < 10; i_1 += 1) 
    {
        arr_7 [i_1] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_1) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1])))))) ? (((/* implicit */int) arr_0 [i_1] [i_1])) : (((((/* implicit */int) var_2)) | (((/* implicit */int) var_17))))))) ? (((/* implicit */unsigned long long int) (~(min((-1), (((/* implicit */int) arr_0 [i_1] [(signed char)2]))))))) : ((~(min((((/* implicit */unsigned long long int) arr_5 [i_1])), (arr_6 [i_1] [7LL]))))));
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (signed char i_3 = 1; i_3 < 6; i_3 += 3) 
            {
                {
                    var_21 = ((/* implicit */signed char) ((unsigned long long int) var_11));
                    var_22 = ((min(((+(((/* implicit */int) arr_5 [i_1])))), (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_5 [3ULL])))))) >= ((~((~(((/* implicit */int) arr_8 [i_2] [(signed char)7] [i_3 + 1])))))));
                }
            } 
        } 
    }
    var_23 ^= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) min(((+(((/* implicit */int) var_19)))), (((/* implicit */int) var_8))))), (var_18)));
    var_24 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((_Bool) (-(((/* implicit */int) (unsigned char)0))))))));
}

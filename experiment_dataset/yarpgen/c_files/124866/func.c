/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124866
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
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                var_15 = ((((/* implicit */_Bool) (~((~(var_1)))))) ? (max((((((/* implicit */_Bool) var_8)) ? (arr_5 [i_1] [i_0]) : (((/* implicit */int) var_14)))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_5)))))) : (arr_1 [i_0] [i_1]));
                var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_5 [i_0] [i_0])), (arr_0 [i_1])))) ? (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_6 [(unsigned short)13] [i_1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_9)))), (max((((/* implicit */int) arr_2 [i_1])), (var_1)))))) : (max((arr_0 [i_1]), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)8301))))))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) var_2)) | ((~((-(((/* implicit */int) var_0))))))));
    var_18 = ((/* implicit */int) ((unsigned long long int) max(((-(var_7))), (((/* implicit */int) ((unsigned short) var_8))))));
    var_19 |= ((/* implicit */unsigned char) var_5);
    var_20 = var_10;
}

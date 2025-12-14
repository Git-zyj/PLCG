/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111008
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
    var_10 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((~(268427264))), ((~(7340032)))))) ? (((((/* implicit */_Bool) ((unsigned long long int) (signed char)120))) ? (((((/* implicit */_Bool) 7340035)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4095))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0 + 2] [i_1] [i_0 - 1])) ? (((/* implicit */int) (signed char)107)) : (((/* implicit */int) arr_4 [i_0] [i_1] [i_0 - 1]))))) : (((((/* implicit */_Bool) (+(arr_0 [i_0] [i_0])))) ? (max((((/* implicit */unsigned long long int) (unsigned char)0)), (var_8))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))));
                var_11 = ((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned long long int) (~((+((-(arr_1 [i_0]))))))))));
                var_12 = ((/* implicit */int) ((unsigned char) (~(arr_1 [i_0 + 1]))));
            }
        } 
    } 
    var_13 -= ((/* implicit */_Bool) ((long long int) var_5));
}

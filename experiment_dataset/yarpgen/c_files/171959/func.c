/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171959
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
    var_14 = ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) * (var_0)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_0] = max((((((((/* implicit */int) (unsigned short)17911)) & (((/* implicit */int) var_9)))) << (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_12))))), (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (signed char)112))))));
                    var_15 = ((/* implicit */signed char) min((((/* implicit */int) ((((/* implicit */_Bool) (short)-8495)) && (((/* implicit */_Bool) 1113352849666755065LL))))), ((+(arr_1 [i_0] [i_0])))));
                    arr_9 [i_0] [i_0] [i_0] [(unsigned char)8] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) 0)) ? (-33305224) : (((/* implicit */int) (unsigned short)17911))))));
                    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) 14500278485398906703ULL)) ? (((/* implicit */int) (unsigned short)2942)) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1113352849666755048LL)) ? (-5918875838634643629LL) : (-1LL)))))))));
                    arr_10 [i_2] [i_0] [i_2] = ((((/* implicit */_Bool) var_6)) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_9)))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned char) max((((int) ((_Bool) var_4))), (((/* implicit */int) var_8))));
}

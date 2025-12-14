/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18933
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
    var_12 &= ((/* implicit */unsigned short) ((unsigned long long int) ((((((/* implicit */_Bool) 5329963618469798179LL)) ? (var_2) : (((/* implicit */unsigned long long int) var_0)))) >= (((/* implicit */unsigned long long int) var_3)))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) (~(((/* implicit */int) max((var_8), ((signed char)95)))))))));
                    var_14 = ((/* implicit */unsigned short) max(((-(arr_2 [i_0] [i_1]))), (((((/* implicit */_Bool) ((unsigned short) 15U))) ? ((~(var_9))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) + (var_5)))))));
                    var_15 = ((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [i_2]);
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */int) ((min((((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)180))))), (var_6))) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (((var_10) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))))));
}

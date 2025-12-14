/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123601
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
    var_13 ^= ((/* implicit */unsigned char) (~(0ULL)));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-4096)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)30))) : (3250628076U)));
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 7; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    arr_8 [i_1] [i_1] = ((((/* implicit */_Bool) arr_3 [i_0 - 2])) ? (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_4 [i_1 - 1])) : (((/* implicit */int) arr_0 [i_2] [(short)9]))))), (-3328518441430419065LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(6632307401808076652LL)))))))));
                    var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)1))))) ? (var_6) : (((/* implicit */unsigned long long int) ((long long int) (-(10111011360914883737ULL))))))))));
                    var_16 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1))))) * (min((((((/* implicit */_Bool) (unsigned char)100)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))), (((unsigned long long int) (unsigned short)0))))));
                    arr_9 [i_1] = ((/* implicit */long long int) var_2);
                }
            } 
        } 
    }
    for (long long int i_3 = 1; i_3 < 22; i_3 += 1) 
    {
        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((10111011360914883741ULL), (((/* implicit */unsigned long long int) -891455031811509754LL))))) ? (-4415649126724023667LL) : (((/* implicit */long long int) min((277006758U), (((/* implicit */unsigned int) (+(((/* implicit */int) (short)-19958))))))))));
        arr_12 [i_3] = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((unsigned short) arr_10 [i_3 - 1] [i_3 + 2]))), (((long long int) arr_10 [i_3 + 1] [i_3 + 1]))));
    }
    var_18 += ((/* implicit */short) var_1);
    var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_12) & (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))));
}

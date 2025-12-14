/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151858
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
    var_13 = ((/* implicit */short) var_4);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(817097903)))) ? (((/* implicit */int) ((short) (+(((/* implicit */int) (unsigned char)242)))))) : ((((_Bool)1) ? (((/* implicit */int) (short)7)) : (((/* implicit */int) var_11))))));
                    var_15 = var_3;
                    var_16 -= ((/* implicit */short) (+(2042609843139408369LL)));
                    /* LoopSeq 1 */
                    for (short i_3 = 1; i_3 < 18; i_3 += 1) 
                    {
                        var_17 -= ((/* implicit */_Bool) (~((+(arr_10 [i_0] [16U] [i_2] [i_2] [i_3])))));
                        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((2042609843139408369LL), (((/* implicit */long long int) (-(((/* implicit */int) (short)3)))))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) min((var_0), (((/* implicit */short) arr_4 [i_2] [i_2]))))))) : (((((/* implicit */int) ((unsigned char) arr_2 [i_1] [i_3 - 1]))) & (var_9)))));
                    }
                    var_19 = ((/* implicit */long long int) (~(((/* implicit */int) var_4))));
                }
            } 
        } 
    } 
}

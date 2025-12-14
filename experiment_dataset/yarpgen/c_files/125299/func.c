/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125299
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 3; i_1 < 18; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    arr_6 [i_0] [(signed char)5] [i_2] [i_0] = arr_2 [i_0] [i_0];
                    var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0 - 1]))) / (((unsigned int) arr_5 [i_0] [i_0] [i_0])))))));
                }
            } 
        } 
        var_15 = ((/* implicit */_Bool) max((var_15), (((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (unsigned char)145))))) < (((/* implicit */int) ((_Bool) var_2)))))));
        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0] [9U] [i_0]))) ^ (var_2)));
        var_17 &= ((/* implicit */unsigned int) ((_Bool) arr_5 [i_0 + 1] [i_0] [i_0]));
        arr_7 [i_0] [i_0] = ((_Bool) (unsigned char)255);
    }
    var_18 = ((/* implicit */unsigned long long int) var_13);
    var_19 = ((/* implicit */unsigned int) max((var_19), (var_2)));
    var_20 = ((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */unsigned char) var_0)), (var_9)))) >> (((var_2) - (2267159928U)))));
    var_21 = ((/* implicit */_Bool) (-((((+(((/* implicit */int) (_Bool)1)))) / (((/* implicit */int) var_12))))));
}

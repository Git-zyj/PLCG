/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124639
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
    for (unsigned int i_0 = 4; i_0 < 22; i_0 += 2) 
    {
        var_17 = ((/* implicit */unsigned short) var_8);
        arr_4 [i_0 + 1] |= (~(((/* implicit */int) ((unsigned short) (-(arr_3 [i_0]))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 11; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    var_18 += ((/* implicit */unsigned short) (~(((((/* implicit */int) var_9)) / (((/* implicit */int) (unsigned char)167))))));
                    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) (((+(arr_2 [4U]))) | (((/* implicit */unsigned int) (-(((/* implicit */int) (short)8775))))))))));
                }
            } 
        } 
        arr_15 [i_1] = ((arr_11 [i_1] [i_1] [i_1]) / (((/* implicit */int) (signed char)121)));
    }
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */int) var_9)) % (((/* implicit */int) var_7))))) | (((long long int) ((((/* implicit */_Bool) var_5)) && (var_4))))));
    var_21 = ((/* implicit */short) (-(var_12)));
    var_22 = ((/* implicit */unsigned int) var_1);
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182578
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
    var_15 = var_10;
    var_16 = ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) ((unsigned short) max((((/* implicit */unsigned long long int) var_3)), (var_5))))) : (((/* implicit */int) var_11)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) var_5))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (unsigned short i_2 = 2; i_2 < 21; i_2 += 4) 
            {
                for (unsigned int i_3 = 4; i_3 < 21; i_3 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (int i_4 = 2; i_4 < 18; i_4 += 3) /* same iter space */
                        {
                            var_18 = ((/* implicit */unsigned int) ((unsigned char) var_13));
                            arr_12 [i_0] [i_1] [i_0] [(short)1] [i_0] = ((/* implicit */int) (~(var_3)));
                            var_19 = ((/* implicit */long long int) (-(((/* implicit */int) var_2))));
                        }
                        for (int i_5 = 2; i_5 < 18; i_5 += 3) /* same iter space */
                        {
                            var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((unsigned long long int) var_6)))));
                            arr_16 [i_3] [i_3] [i_3] [i_3] [i_3] |= ((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) var_3)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))));
                        }
                        var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_5))));
                    }
                } 
            } 
        } 
        arr_17 [i_0] = (-(var_3));
        arr_18 [i_0] = (-(var_9));
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122055
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 7; i_1 += 2) 
        {
            for (short i_2 = 1; i_2 < 9; i_2 += 4) 
            {
                {
                    arr_7 [i_1] = ((/* implicit */unsigned char) var_2);
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_12 += ((/* implicit */_Bool) max((min((((/* implicit */unsigned int) (~(((/* implicit */int) arr_6 [i_1] [(unsigned char)4] [i_1]))))), (min((((/* implicit */unsigned int) arr_4 [1LL])), (arr_3 [i_1]))))), ((~(var_5)))));
                        arr_11 [i_0] [i_1] [i_2 + 1] [i_3] = ((/* implicit */unsigned char) ((_Bool) min(((unsigned char)51), (((/* implicit */unsigned char) (_Bool)0)))));
                        var_13 *= arr_2 [i_2 - 1] [i_3] [i_2 - 1];
                    }
                }
            } 
        } 
    } 
    var_14 ^= min((((/* implicit */unsigned int) var_0)), ((~(((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) & (var_3))))));
    var_15 = ((/* implicit */unsigned char) var_8);
    var_16 = ((/* implicit */unsigned char) var_6);
    var_17 += ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) var_9)) >= ((-(((/* implicit */int) var_9))))))) != (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_10))))))));
}

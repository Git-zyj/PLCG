/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121485
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    arr_9 [i_1] [i_1] = var_12;
                    arr_10 [i_1] [i_1] = ((/* implicit */unsigned char) ((min((((/* implicit */unsigned long long int) (unsigned char)31)), (2330162590460085977ULL))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32539)))));
                    var_18 -= (((-(var_0))) << (((5935708564085478942ULL) - (5935708564085478913ULL))));
                }
            } 
        } 
        arr_11 [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [6] [i_0] [6]))) / (1055531162664960ULL))));
        var_19 = ((/* implicit */unsigned int) (unsigned short)63790);
    }
    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((long long int) (-((+(((/* implicit */int) var_14))))))))));
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) var_4))) ? (max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)-5480)) : (((/* implicit */int) var_10)))), (((var_6) ? (var_13) : (((/* implicit */int) var_10)))))) : (((/* implicit */int) var_5))));
    var_22 = ((/* implicit */unsigned long long int) var_1);
}

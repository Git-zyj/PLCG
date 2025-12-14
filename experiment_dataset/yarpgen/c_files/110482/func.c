/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110482
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
    for (long long int i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_11 *= ((/* implicit */unsigned char) ((((((9621124846486563410ULL) << (((((/* implicit */int) (unsigned short)1224)) - (1201))))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0] [i_0])) | (((/* implicit */int) var_2))))))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)34)) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_4 [i_0 - 2] [i_1] [i_2])))))))));
                    var_12 = ((/* implicit */unsigned short) (signed char)-64);
                    /* LoopSeq 1 */
                    for (signed char i_3 = 1; i_3 < 7; i_3 += 3) 
                    {
                        var_13 = ((((/* implicit */int) arr_1 [i_0 + 1] [i_3 + 3])) ^ (((/* implicit */int) ((_Bool) var_8))));
                        arr_8 [i_0] = ((/* implicit */unsigned char) arr_5 [i_0 + 1] [i_1] [i_2] [i_1]);
                        var_14 = (~(((/* implicit */int) arr_3 [i_0 - 1] [(unsigned char)2] [i_3])));
                        var_15 = ((/* implicit */int) (signed char)-64);
                    }
                }
            } 
        } 
    } 
    var_16 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((var_3) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))), (var_5)))) ? (((/* implicit */int) ((unsigned char) ((var_5) >> (((((/* implicit */int) (short)12002)) - (11946))))))) : (((/* implicit */int) min((((/* implicit */short) ((var_10) != (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))), (var_8))))));
}

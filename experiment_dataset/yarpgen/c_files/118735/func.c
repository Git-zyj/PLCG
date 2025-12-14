/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118735
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
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned short i_1 = 4; i_1 < 10; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        var_12 += (~(((((/* implicit */_Bool) arr_1 [i_1 - 3] [i_1 - 3])) ? (((/* implicit */int) arr_9 [i_1 + 1] [i_3] [i_1 + 1])) : (((/* implicit */int) (unsigned short)23900)))));
                        var_13 = ((/* implicit */unsigned int) ((var_0) - (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 2ULL)) || (((/* implicit */_Bool) 2ULL))))))));
                    }
                    arr_11 [(signed char)9] [i_1] [(signed char)9] = ((/* implicit */signed char) ((((/* implicit */int) arr_9 [i_0] [i_1] [i_0])) > (max((((((/* implicit */_Bool) (short)30165)) ? (((/* implicit */int) (short)31624)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1] [i_1])))))))));
                    arr_12 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (short)-2874);
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) min((var_6), (((/* implicit */unsigned char) var_3))))) < (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)-30165)) : (((/* implicit */int) var_4))))))))));
    var_15 += ((/* implicit */int) (!(((/* implicit */_Bool) var_6))));
}

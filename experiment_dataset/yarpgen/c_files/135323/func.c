/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135323
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
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))));
    var_17 = ((/* implicit */unsigned short) ((max((max((var_5), (((/* implicit */unsigned long long int) (unsigned short)37361)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)28175))) ^ (var_8))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((min((-1869381237), (((/* implicit */int) (unsigned short)28175)))) > (((/* implicit */int) (unsigned short)28169))))))));
    var_18 = ((long long int) var_8);
    var_19 |= min((((/* implicit */unsigned long long int) var_9)), (((min((var_8), (((/* implicit */unsigned long long int) var_0)))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 20; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */_Bool) var_4);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        arr_11 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_13) > (var_7)))))));
                        arr_12 [i_1] [i_2] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_1 + 1])) ? (((/* implicit */int) arr_4 [i_0 + 1])) : (((/* implicit */int) (unsigned short)37361))));
                        var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_12))));
                        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((_Bool) arr_6 [i_0] [i_3])))));
                    }
                    var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((unsigned short) ((signed char) ((var_13) % (((/* implicit */long long int) 4294967290U)))))))));
                }
            } 
        } 
    } 
}

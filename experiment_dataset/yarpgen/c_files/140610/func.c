/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140610
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
    var_20 = var_15;
    var_21 = ((/* implicit */unsigned char) var_15);
    var_22 = ((/* implicit */int) (_Bool)1);
    var_23 |= var_16;
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            {
                var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned long long int) arr_2 [i_0] [i_1 + 1]))))) && (((/* implicit */_Bool) var_5))));
                var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */int) min((arr_3 [i_0] [i_1]), (((/* implicit */unsigned char) var_19))))) ^ ((+(((/* implicit */int) arr_3 [i_1 + 1] [i_0])))))))));
                var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) min((((/* implicit */unsigned short) arr_0 [i_0] [i_1 + 3])), (min((((unsigned short) var_2)), (((/* implicit */unsigned short) arr_3 [i_1 + 3] [i_0])))))))));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 2; i_2 < 18; i_2 += 2) 
                {
                    arr_6 [i_0] [i_0] [i_2 - 1] [i_2] &= min((min((var_6), (((/* implicit */unsigned long long int) min((var_0), (((/* implicit */unsigned int) (_Bool)1))))))), (((/* implicit */unsigned long long int) var_9)));
                    arr_7 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */_Bool) ((signed char) ((unsigned short) ((((/* implicit */_Bool) var_8)) ? (arr_4 [i_1 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2] [i_1 + 3])))))));
                    var_27 = ((/* implicit */long long int) 9398374128113193009ULL);
                    var_28 = ((/* implicit */unsigned short) var_4);
                }
            }
        } 
    } 
}

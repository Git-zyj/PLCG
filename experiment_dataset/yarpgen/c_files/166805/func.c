/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166805
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
    for (short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        arr_12 [i_3] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_7 [i_0])) : ((+((+(((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_2] [i_2] [i_3]))))))));
                        arr_13 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned short) var_10);
                        var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) max((((((((/* implicit */_Bool) arr_8 [i_0] [i_1])) && (((/* implicit */_Bool) var_3)))) ? (max((((/* implicit */unsigned long long int) var_9)), (13139048283200807360ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2] [i_1] [i_1]))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_14))))))))));
                    }
                    var_16 *= ((/* implicit */short) (~(arr_4 [i_0] [i_0] [(signed char)7] [i_0])));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (+(var_11)))) ? (((long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) 0U)) : (var_13)))) : (((/* implicit */long long int) ((/* implicit */int) var_3)))));
}

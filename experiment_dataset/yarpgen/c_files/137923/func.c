/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137923
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
    var_14 = ((/* implicit */int) min((min((((unsigned int) 1547994126)), (((/* implicit */unsigned int) 127)))), (((/* implicit */unsigned int) ((340667853) + (((((/* implicit */int) (signed char)14)) | (((/* implicit */int) var_7)))))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 3) /* same iter space */
    {
        var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) ((1073741820U) >= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)15))))))));
        var_16 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-49))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [(signed char)19]))))) : (max((arr_0 [i_0]), (((/* implicit */long long int) ((((-1156617027) + (2147483647))) >> (((((/* implicit */int) (signed char)-39)) + (51))))))))));
    }
    for (signed char i_1 = 0; i_1 < 24; i_1 += 3) /* same iter space */
    {
        var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) 1101012872281338942ULL))));
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 24; i_2 += 3) 
        {
            for (int i_3 = 0; i_3 < 24; i_3 += 1) 
            {
                {
                    arr_9 [22] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(-1156617027)))) ? (arr_0 [2U]) : ((~(arr_7 [i_1] [(signed char)16])))));
                    arr_10 [(signed char)22] [(signed char)22] [(signed char)22] [i_1] |= ((/* implicit */signed char) (+(min((((/* implicit */int) (signed char)-49)), (arr_2 [6])))));
                }
            } 
        } 
    }
    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) -1156617019))));
}

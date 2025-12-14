/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116479
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
    var_19 = ((/* implicit */unsigned int) var_12);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        arr_3 [(unsigned char)6] = ((/* implicit */long long int) 1073741808U);
        arr_4 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)38)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))), (var_15))))));
        var_20 = ((/* implicit */long long int) (unsigned short)17032);
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) var_0)) + (((/* implicit */int) (unsigned char)216))));
            arr_9 [(unsigned short)6] = ((/* implicit */_Bool) arr_8 [(unsigned char)1]);
        }
    }
    for (unsigned int i_2 = 0; i_2 < 12; i_2 += 4) 
    {
        arr_12 [i_2] = ((/* implicit */unsigned short) var_13);
        var_22 = ((/* implicit */unsigned short) (+(2982365549U)));
        arr_13 [i_2] = ((/* implicit */unsigned int) ((unsigned short) ((unsigned short) arr_1 [i_2] [i_2])));
    }
    var_23 = ((/* implicit */unsigned long long int) var_4);
}

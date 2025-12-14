/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130389
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
    var_15 = ((/* implicit */unsigned long long int) max(((-2147483647 - 1)), (var_9)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 14; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_1] [(unsigned char)8] [i_2] = ((/* implicit */int) var_8);
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        var_16 -= var_4;
                        var_17 += ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 2147483647)) ? (arr_7 [i_2 + 1] [i_2] [i_2 - 1]) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))) / (2147483647)));
                        arr_11 [i_0] [i_0] [i_2] = ((/* implicit */long long int) ((((/* implicit */unsigned int) (-(((/* implicit */int) ((10916540379977249574ULL) <= (((/* implicit */unsigned long long int) 2147483647)))))))) + (max((arr_9 [i_3] [i_3] [i_3] [14LL]), (((/* implicit */unsigned int) max((((/* implicit */int) arr_0 [i_1])), (arr_6 [i_0] [i_2] [i_0]))))))));
                        arr_12 [i_0] [i_0] [i_1] [i_2] [i_3] = min((((((/* implicit */int) (unsigned char)0)) / (((/* implicit */int) var_11)))), (((((/* implicit */_Bool) (signed char)16)) ? (((/* implicit */int) arr_4 [i_2 + 1])) : (((/* implicit */int) arr_4 [i_3])))));
                    }
                }
            } 
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154243
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
    for (unsigned long long int i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 17; i_2 += 4) 
            {
                {
                    var_11 -= ((/* implicit */unsigned char) ((((arr_5 [i_0 + 1] [i_0 - 1]) & (arr_5 [i_0 - 1] [i_0 + 1]))) - (((arr_5 [i_0 - 1] [i_0 + 1]) * (arr_5 [i_0 - 1] [i_0 + 1])))));
                    var_12 |= ((/* implicit */_Bool) ((((((/* implicit */int) arr_7 [i_0 - 1] [i_2 - 1] [(unsigned char)17] [i_1])) << (((((/* implicit */int) arr_7 [i_0 - 1] [i_2 - 1] [i_2] [i_0])) - (192))))) - (((((/* implicit */int) arr_7 [i_0 - 1] [i_2 + 1] [i_1] [i_2 - 1])) * (((/* implicit */int) arr_4 [i_2 - 1] [i_0 - 1]))))));
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_6 [i_2 + 1])) % (((/* implicit */int) arr_6 [i_2 + 1])))) - (((/* implicit */int) ((((/* implicit */int) arr_6 [i_2 - 1])) < (((/* implicit */int) arr_6 [i_2 - 1]))))))))));
                        arr_12 [17] [i_2] [i_1] [i_0 + 1] &= ((/* implicit */long long int) arr_6 [i_1]);
                        arr_13 [i_0] [i_0] [i_2 - 1] [17ULL] |= ((((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) && (((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2 - 1] [i_1])))))) * (((/* implicit */int) ((((unsigned long long int) arr_8 [8] [i_1] [i_1] [i_0])) < (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_3])) % (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_3])))))))));
                    }
                    var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((short) ((signed char) arr_7 [i_2] [i_2 - 1] [i_2 + 1] [i_2]))))));
                }
            } 
        } 
    } 
    var_15 &= ((/* implicit */unsigned char) var_2);
}

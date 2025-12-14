/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143243
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
    var_16 = ((/* implicit */unsigned long long int) var_0);
    var_17 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_3))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    for (unsigned int i_3 = 1; i_3 < 18; i_3 += 3) 
                    {
                        {
                            arr_13 [i_2] [i_1] [i_0 - 1] [i_3] [i_1] [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned int) (!(((/* implicit */_Bool) var_4))))))));
                            var_18 = ((/* implicit */unsigned char) min((min((arr_3 [i_0 + 1] [i_0 - 2]), (arr_3 [i_0 - 2] [i_0 - 2]))), ((~(arr_3 [i_0 - 2] [i_0 + 1])))));
                        }
                    } 
                } 
                var_19 *= ((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_1] [i_0 + 1]);
                var_20 = ((/* implicit */unsigned char) max((var_20), (((unsigned char) max((((/* implicit */unsigned long long int) arr_6 [i_1] [i_0 + 1])), (arr_11 [i_0] [i_0] [i_1] [i_0]))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 1) 
    {
        for (unsigned long long int i_5 = 1; i_5 < 13; i_5 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_6 = 0; i_6 < 16; i_6 += 3) 
                {
                    var_21 = ((/* implicit */unsigned char) arr_11 [i_5 + 2] [i_5 + 3] [i_5] [i_5 + 1]);
                    arr_22 [i_4] [i_5] [i_5] [(unsigned char)12] = ((/* implicit */unsigned char) ((unsigned int) ((_Bool) 2127606889)));
                    var_22 = ((/* implicit */unsigned char) min(((-(((/* implicit */int) arr_18 [i_6] [i_5] [i_5 + 2])))), (((((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_8)))) ? (((/* implicit */int) arr_15 [i_5])) : (((/* implicit */int) var_2))))));
                }
                arr_23 [i_4] [i_5] [i_4] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) var_1)))))));
                var_23 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_5 + 1] [i_5 + 2]))) >= (min((arr_17 [i_4]), (((/* implicit */unsigned long long int) arr_8 [i_4] [i_5] [i_4] [i_5])))))))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) >= (1177723712U)))), (var_10))))));
}

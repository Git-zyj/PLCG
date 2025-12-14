/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187551
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
    var_14 = ((/* implicit */unsigned long long int) 1821682536743758727LL);
    /* LoopSeq 1 */
    for (int i_0 = 3; i_0 < 17; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (unsigned char i_2 = 4; i_2 < 17; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 2) 
                {
                    {
                        arr_10 [i_0] [i_1] [i_1] [i_1] [(unsigned short)0] = ((/* implicit */long long int) var_7);
                        var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((((/* implicit */long long int) ((unsigned int) var_8))) * (var_3))))));
                        var_16 = ((/* implicit */_Bool) (+((-2147483647 - 1))));
                        var_17 -= ((/* implicit */unsigned long long int) arr_3 [i_0] [i_2] [3ULL]);
                    }
                } 
            } 
        } 
        var_18 &= ((/* implicit */short) (~((((~(arr_1 [i_0]))) & ((-(var_7)))))));
        /* LoopSeq 2 */
        for (int i_4 = 1; i_4 < 18; i_4 += 2) 
        {
            var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) arr_9 [i_4]))));
            var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_12 [i_0 + 1] [i_0 + 1] [i_4 + 1])) : (((/* implicit */int) arr_12 [i_0 + 1] [i_0 + 1] [i_4 + 1]))))) + (max((((/* implicit */unsigned long long int) var_3)), (var_7))))))));
        }
        for (int i_5 = 0; i_5 < 19; i_5 += 4) 
        {
            arr_15 [i_0] [i_0] [i_5] = ((_Bool) (~(arr_5 [i_0 - 2] [i_0 - 3] [i_0])));
            arr_16 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) var_9);
            arr_17 [i_0] [i_0] = ((/* implicit */unsigned char) var_13);
            arr_18 [i_5] = var_13;
            arr_19 [i_0] [i_0] [i_0] = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) ((short) arr_6 [i_0 - 3] [(short)13] [i_5]))) ? (((1821682536743758715LL) + (((/* implicit */long long int) ((/* implicit */int) var_12))))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_3 [i_0] [i_0] [2ULL]))))))));
        }
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+((~(18446744073709551615ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((short) 1527012068U))))) : (arr_14 [i_0 - 2] [i_0 - 2])));
    }
    var_22 -= ((/* implicit */unsigned long long int) var_9);
}

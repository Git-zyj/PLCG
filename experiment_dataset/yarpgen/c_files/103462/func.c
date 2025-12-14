/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103462
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [i_0])) >= (((/* implicit */int) arr_1 [i_0]))));
        arr_3 [i_0] &= 947638977;
        var_10 = min((min((((/* implicit */int) (_Bool)1)), (-809410673))), (((((((/* implicit */_Bool) var_0)) ? (809410671) : (0))) / (((((/* implicit */int) arr_1 [i_0])) + (((/* implicit */int) arr_1 [i_0])))))));
    }
    for (int i_1 = 2; i_1 < 20; i_1 += 2) 
    {
        /* LoopSeq 1 */
        for (int i_2 = 0; i_2 < 21; i_2 += 3) 
        {
            /* LoopSeq 1 */
            for (int i_3 = 0; i_3 < 21; i_3 += 4) 
            {
                var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1 - 1])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1 - 1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_4 [i_1 + 1])))))));
                arr_12 [i_2] [7U] [i_1 - 2] [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */int) var_4)), (min((-1391175026), (1391175025))))))));
            }
            arr_13 [i_1] [5U] [i_2] = ((/* implicit */long long int) var_2);
            arr_14 [i_2] [i_2] = ((/* implicit */int) ((((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4))))) & (min((arr_10 [i_2] [i_2]), (((/* implicit */unsigned long long int) arr_7 [i_2])))))) != (arr_10 [i_2] [i_2])));
        }
        var_12 = ((/* implicit */signed char) -6038705891989768652LL);
    }
    var_13 |= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_0) : (((/* implicit */int) var_3))))) ? ((-2147483647 - 1)) : (((/* implicit */int) var_4))))));
    /* LoopSeq 1 */
    for (int i_4 = 0; i_4 < 18; i_4 += 4) 
    {
        var_14 = ((/* implicit */int) ((((/* implicit */unsigned int) ((var_0) / (((/* implicit */int) arr_6 [i_4] [(signed char)9]))))) / (min((((/* implicit */unsigned int) arr_6 [i_4] [i_4])), (2179640255U)))));
        var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((-1222487555), (0)))) ? (((/* implicit */int) arr_6 [i_4] [i_4])) : (((((/* implicit */int) var_3)) + (((/* implicit */int) var_1)))))) & ((-(((/* implicit */int) ((arr_10 [i_4] [i_4]) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_4] [i_4] [i_4])))))))))))));
        var_16 *= ((/* implicit */int) ((min((((/* implicit */unsigned int) ((((/* implicit */int) var_2)) & (var_6)))), (((var_7) ? (2916007452U) : (((/* implicit */unsigned int) 447246960)))))) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_4] [i_4] [i_4])) ? (((/* implicit */int) arr_11 [i_4] [i_4] [i_4])) : (((/* implicit */int) arr_11 [i_4] [i_4] [i_4])))))));
    }
}

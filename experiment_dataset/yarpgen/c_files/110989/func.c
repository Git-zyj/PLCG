/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110989
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
    for (long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            var_18 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_12)) ? (((10013003603370600525ULL) * (5585031088230504935ULL))) : (((/* implicit */unsigned long long int) (+(arr_1 [i_0])))))) * (((/* implicit */unsigned long long int) ((unsigned int) min((576460717943685120ULL), (((/* implicit */unsigned long long int) (short)(-32767 - 1)))))))));
            arr_4 [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_2 [i_0])))) <= (((unsigned long long int) var_14))));
        }
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (short)-19148)) : (-21)))), (arr_3 [i_0] [i_0])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) 6871127311251061057LL)) ? (1467363604U) : (((/* implicit */unsigned int) 2116715610)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (20) : (((/* implicit */int) arr_2 [i_0])))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) -6871127311251061057LL)) ? (-1631160548) : (((/* implicit */int) (short)32760))))) ? (((/* implicit */long long int) arr_3 [i_0] [i_0])) : (((var_12) >> (((-21) + (49)))))))));
    }
    for (unsigned long long int i_2 = 1; i_2 < 10; i_2 += 3) 
    {
        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((((/* implicit */_Bool) arr_5 [i_2 + 1] [i_2 + 1])) ? (arr_5 [i_2 - 1] [i_2 + 1]) : (arr_5 [i_2 + 2] [i_2 - 1]))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_5 [i_2 + 1] [i_2 + 1]) > (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32761))))))))))));
        var_21 = (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2 - 1]))) / (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2]))) - (arr_5 [i_2 + 1] [i_2 - 1])))))));
        var_22 = ((/* implicit */unsigned long long int) ((signed char) (~(arr_8 [i_2] [i_2 + 2]))));
        arr_9 [i_2] = ((/* implicit */short) arr_8 [i_2] [i_2]);
    }
    var_23 = ((/* implicit */unsigned long long int) var_15);
}

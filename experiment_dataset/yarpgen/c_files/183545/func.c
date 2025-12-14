/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183545
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
    var_10 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) var_5)) ? (var_7) : (var_7))), (((/* implicit */long long int) ((((/* implicit */int) var_4)) * (((/* implicit */int) (short)22957))))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_11 = ((/* implicit */signed char) arr_2 [i_0]);
        var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) ((((/* implicit */_Bool) (short)-22878)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((((/* implicit */_Bool) var_9)) && (var_3))), (var_3))))) : (18446744073709551609ULL))))));
        /* LoopSeq 4 */
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            var_13 = ((/* implicit */unsigned char) ((min((((/* implicit */unsigned long long int) ((arr_2 [i_0]) ? (arr_0 [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1])))))), (var_1))) > (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_2 [i_0])), (max(((unsigned short)17593), (((/* implicit */unsigned short) (_Bool)1))))))))));
            var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) var_9))));
        }
        for (unsigned int i_2 = 0; i_2 < 12; i_2 += 1) /* same iter space */
        {
            var_15 |= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */signed char) arr_2 [i_0])), (arr_3 [i_0] [i_0] [i_2])))) ? (min((((/* implicit */unsigned long long int) (_Bool)0)), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_2] [i_0]))) ^ (var_1))))) : (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]))));
            arr_7 [i_0] [i_2] &= ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(var_1))))));
        }
        for (unsigned int i_3 = 0; i_3 < 12; i_3 += 1) /* same iter space */
        {
            var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))) && (((/* implicit */_Bool) (unsigned short)47943))))))))));
            var_17 = ((/* implicit */unsigned int) var_9);
        }
        for (unsigned int i_4 = 0; i_4 < 12; i_4 += 1) /* same iter space */
        {
            var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */int) arr_10 [(_Bool)1])) ^ (arr_9 [i_0]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_12 [4ULL] [7ULL] [i_4])))))))) : (((/* implicit */int) arr_5 [i_0] [i_4] [i_4]))));
            var_19 = ((arr_6 [i_0]) && (((/* implicit */_Bool) ((((208215536) / (((/* implicit */int) var_4)))) | (((arr_9 [i_0]) ^ (((/* implicit */int) var_2))))))));
            arr_15 [i_0] [i_0] |= ((/* implicit */unsigned int) arr_3 [i_0] [i_0] [i_4]);
        }
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149320
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
    var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) var_11))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            var_13 = ((/* implicit */unsigned short) min((arr_2 [i_0]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2908630493U)) ? (((/* implicit */int) arr_0 [i_0])) : (1963776534))))));
            var_14 = ((/* implicit */unsigned int) max((var_14), (((4047487670U) | (247479617U)))));
        }
        arr_8 [i_0] = ((/* implicit */unsigned long long int) ((min((arr_1 [i_0] [i_0]), (((/* implicit */long long int) ((unsigned char) arr_5 [i_0] [i_0]))))) | (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) arr_5 [i_0] [i_0])))))) : (max((arr_2 [i_0]), (((/* implicit */unsigned int) arr_4 [i_0])))))))));
        var_15 *= ((/* implicit */unsigned int) arr_6 [i_0] [i_0]);
    }
    for (unsigned short i_2 = 3; i_2 < 21; i_2 += 3) 
    {
        arr_12 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [i_2] [i_2])) * (((/* implicit */int) ((((/* implicit */int) arr_9 [i_2])) <= (((/* implicit */int) arr_11 [i_2] [i_2])))))))) <= (((((unsigned long long int) arr_11 [i_2] [i_2])) & (((/* implicit */unsigned long long int) min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) 4047487639U)))))))));
        var_16 = ((/* implicit */unsigned int) min((((unsigned long long int) arr_10 [i_2] [i_2 - 2])), (((/* implicit */unsigned long long int) ((int) arr_10 [i_2] [i_2])))));
        /* LoopSeq 1 */
        for (long long int i_3 = 2; i_3 < 18; i_3 += 2) 
        {
            var_17 = ((/* implicit */unsigned short) ((unsigned long long int) max((((int) arr_15 [i_2] [i_3] [i_2])), (((/* implicit */int) arr_15 [i_3 - 2] [i_3 - 2] [i_3 - 2])))));
            var_18 = ((/* implicit */unsigned char) ((short) min((((/* implicit */int) arr_9 [i_3])), (((int) arr_9 [i_3])))));
        }
    }
    /* LoopSeq 1 */
    for (unsigned int i_4 = 3; i_4 < 13; i_4 += 2) 
    {
        arr_18 [i_4] = arr_7 [i_4] [i_4] [i_4 + 1];
        var_19 -= ((/* implicit */unsigned char) ((((((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_4] [i_4] [i_4])) && (arr_14 [i_4] [i_4])))) * (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_4] [i_4] [i_4])) || (((/* implicit */_Bool) arr_2 [i_4]))))))) + (((/* implicit */int) ((_Bool) arr_14 [i_4] [i_4])))));
        var_20 = min((min((arr_17 [i_4]), (arr_17 [i_4]))), (((/* implicit */unsigned int) ((((/* implicit */long long int) arr_17 [i_4])) == (arr_3 [i_4 - 1])))));
    }
    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) 1963776534)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)12734))) : (1707010687U)));
    var_22 = ((/* implicit */unsigned long long int) var_6);
}

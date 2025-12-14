/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176210
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        var_13 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((max((var_12), (((/* implicit */unsigned int) arr_0 [i_0])))) >= (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) : (((((/* implicit */_Bool) ((long long int) 0U))) ? (arr_0 [i_0 - 1]) : ((+(arr_0 [i_0])))))));
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 8207210614060889815LL)) ? (min((((((/* implicit */_Bool) arr_1 [i_0])) ? (var_1) : (((/* implicit */unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) var_12)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-119)))));
    }
    var_14 = ((/* implicit */_Bool) var_12);
    /* LoopSeq 1 */
    for (unsigned char i_1 = 0; i_1 < 17; i_1 += 4) 
    {
        var_15 = ((/* implicit */int) (-(var_6)));
        arr_6 [i_1] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) max((arr_5 [i_1]), (arr_5 [i_1]))))) - (((long long int) (signed char)15))));
        arr_7 [i_1] |= ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned long long int) (signed char)-36))))) ? (((/* implicit */int) ((arr_5 [i_1]) && (((/* implicit */_Bool) var_10))))) : (((/* implicit */int) ((((/* implicit */int) (signed char)-25)) != (((/* implicit */int) (signed char)-109))))))));
    }
    /* LoopNest 2 */
    for (unsigned short i_2 = 1; i_2 < 20; i_2 += 3) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 2) 
        {
            {
                arr_15 [i_2 + 2] [i_3] = ((/* implicit */signed char) min((min((var_9), (((/* implicit */unsigned long long int) arr_13 [i_2 - 1])))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_2 + 2]))) : (var_6)))));
                var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) arr_9 [i_2 + 3])) != (((/* implicit */int) arr_13 [i_2 - 1]))))) >> (((min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_11 [i_2])))), (((/* implicit */int) arr_8 [i_2])))) + (85)))));
                var_17 = ((/* implicit */unsigned char) (+(min((((/* implicit */unsigned int) arr_14 [i_2] [i_2] [i_2 - 1])), (var_12)))));
            }
        } 
    } 
}

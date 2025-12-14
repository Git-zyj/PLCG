/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176174
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
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    var_17 |= ((((/* implicit */_Bool) max((((/* implicit */int) var_16)), (max((((/* implicit */int) arr_1 [i_1] [i_0])), (arr_7 [i_0] [i_0] [i_2] [i_2])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((signed char)-34), (((/* implicit */signed char) ((((/* implicit */int) var_13)) != (((/* implicit */int) var_8))))))))) : (arr_5 [i_2] [(signed char)2] [i_0]));
                    arr_8 [i_2] |= ((((/* implicit */_Bool) (signed char)-34)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_12))))) : (arr_5 [i_2] [i_1] [i_0]));
                }
            } 
        } 
        var_18 &= ((/* implicit */unsigned short) var_16);
        /* LoopSeq 3 */
        for (short i_3 = 0; i_3 < 22; i_3 += 2) 
        {
            arr_13 [i_0] |= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (+(arr_7 [i_0] [i_0] [i_3] [(unsigned short)9])))) ? (((((/* implicit */int) arr_11 [i_0] [i_0] [i_3])) / (((/* implicit */int) (signed char)42)))) : (arr_7 [i_0] [i_0] [i_3] [i_0]))) >> (((((/* implicit */int) arr_1 [i_3] [i_0])) - (62474)))));
            var_19 |= ((/* implicit */unsigned char) arr_11 [i_0] [6ULL] [i_0]);
        }
        for (unsigned char i_4 = 0; i_4 < 22; i_4 += 2) 
        {
            var_20 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) (signed char)34)), (arr_10 [i_0] [i_4])))), (var_5)));
            var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_2 [(unsigned short)10])), (arr_5 [i_0] [i_4] [i_4])))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((long long int) arr_9 [i_0] [14ULL]))) != (((unsigned long long int) arr_7 [i_0] [i_0] [i_0] [(unsigned short)1]))))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_4])) || (((/* implicit */_Bool) arr_4 [i_0] [i_4] [i_4]))))) : (((/* implicit */int) var_11))))));
            var_22 = ((/* implicit */long long int) arr_9 [i_0] [i_0]);
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            arr_19 [i_5] [i_5] = ((/* implicit */unsigned char) var_6);
            arr_20 [i_0] [i_5] = ((/* implicit */unsigned long long int) ((unsigned short) -1521822137));
            var_23 ^= ((/* implicit */long long int) arr_14 [i_0] [19] [i_5]);
            arr_21 [i_0] [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (!(((/* implicit */_Bool) -1521822137))))) : (((/* implicit */int) ((unsigned short) arr_1 [i_0] [i_0])))))) ? (((/* implicit */int) arr_16 [i_0] [i_5] [i_5])) : (((/* implicit */int) (signed char)-30))));
        }
    }
    var_24 ^= (!((_Bool)1));
}

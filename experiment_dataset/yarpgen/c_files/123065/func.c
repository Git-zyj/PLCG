/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123065
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) (-(((min((((/* implicit */long long int) (signed char)-64)), (arr_1 [i_0]))) * (((/* implicit */long long int) ((/* implicit */int) (unsigned char)191))))))))));
                var_20 = ((/* implicit */int) arr_2 [i_1]);
                var_21 = ((/* implicit */long long int) (+((((+(6915467486678041802ULL))) + (((11531276587031509796ULL) + (6915467486678041802ULL)))))));
            }
        } 
    } 
    var_22 ^= ((/* implicit */unsigned int) var_4);
    var_23 = ((/* implicit */_Bool) var_10);
    /* LoopSeq 2 */
    for (short i_2 = 0; i_2 < 12; i_2 += 2) 
    {
        var_24 = ((/* implicit */unsigned char) (-(17340676923265628055ULL)));
        arr_8 [(unsigned char)2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) 6915467486678041820ULL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [6] [(short)1]))) : (max((11531276587031509786ULL), (((/* implicit */unsigned long long int) var_11))))))) ? (((/* implicit */unsigned long long int) 19U)) : ((~(var_4))));
        var_25 = ((/* implicit */long long int) min((((((/* implicit */_Bool) 11531276587031509786ULL)) ? (((/* implicit */int) arr_7 [i_2] [i_2])) : (((/* implicit */int) arr_6 [i_2] [i_2])))), (((/* implicit */int) min((var_5), (((/* implicit */short) arr_6 [i_2] [i_2])))))));
    }
    for (unsigned long long int i_3 = 2; i_3 < 16; i_3 += 1) 
    {
        arr_12 [(short)14] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((18446744073709551613ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_3] [i_3])) || (((/* implicit */_Bool) var_6)))))))) ? ((-(((/* implicit */int) (unsigned char)24)))) : (((/* implicit */int) ((_Bool) ((unsigned long long int) 11531276587031509819ULL))))));
        var_26 -= ((/* implicit */signed char) var_10);
        var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_9 [i_3 + 2] [15LL]), (max((arr_9 [7LL] [i_3 + 2]), (arr_9 [i_3 - 2] [4ULL])))))) ? (((((1454397424668605774ULL) >= (arr_10 [i_3 + 1] [i_3]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) : (1549499247754267361ULL))) : (((((((/* implicit */int) var_7)) >= (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */unsigned long long int) min((0U), (((/* implicit */unsigned int) var_0))))) : (arr_10 [i_3 - 1] [3U])))));
    }
}

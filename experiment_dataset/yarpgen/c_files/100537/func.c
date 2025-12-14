/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100537
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                arr_5 [i_0] [(signed char)10] = ((/* implicit */unsigned long long int) arr_3 [i_1] [i_1]);
                var_19 ^= ((/* implicit */_Bool) max((max((((/* implicit */long long int) max((arr_2 [7ULL]), (arr_2 [i_0])))), (max((arr_1 [i_0]), (((/* implicit */long long int) arr_2 [(unsigned short)6])))))), (((/* implicit */long long int) max((arr_4 [i_0]), (arr_4 [i_0]))))));
                arr_6 [(signed char)0] [i_1] [i_1] = ((/* implicit */unsigned long long int) max((max(((~(((/* implicit */int) arr_3 [i_1] [i_1])))), (((/* implicit */int) max((arr_4 [i_0]), (arr_4 [i_0])))))), (((/* implicit */int) arr_0 [i_1]))));
            }
        } 
    } 
    var_20 = (+(max((((/* implicit */int) var_16)), (var_5))));
    /* LoopSeq 1 */
    for (int i_2 = 3; i_2 < 8; i_2 += 2) 
    {
        var_21 = ((/* implicit */unsigned int) max((max((max((((/* implicit */long long int) arr_4 [i_2])), (arr_1 [i_2]))), (((/* implicit */long long int) arr_3 [i_2 + 2] [i_2])))), (((/* implicit */long long int) arr_2 [i_2]))));
        var_22 ^= ((/* implicit */unsigned short) (~(max((max((arr_7 [2LL]), (arr_9 [(unsigned char)8]))), (max((((/* implicit */unsigned long long int) arr_0 [i_2])), (arr_8 [0LL])))))));
    }
}

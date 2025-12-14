/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188373
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
    var_20 = ((/* implicit */unsigned long long int) var_3);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                arr_4 [i_0] = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_0 + 1])) ^ (((/* implicit */int) arr_3 [i_0 + 2]))))) ^ ((~(arr_0 [i_0 + 1] [i_0 + 1])))));
                arr_5 [2LL] = arr_1 [i_0 + 1];
                var_21 = ((/* implicit */int) max((var_16), (var_16)));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned int) (+(2216885090750093976ULL)));
    /* LoopSeq 2 */
    for (unsigned char i_2 = 0; i_2 < 25; i_2 += 3) 
    {
        var_23 = ((/* implicit */long long int) (~(min((var_7), (arr_6 [i_2] [i_2])))));
        var_24 = ((/* implicit */signed char) min((arr_6 [i_2] [i_2]), (arr_6 [i_2] [i_2])));
    }
    for (signed char i_3 = 0; i_3 < 20; i_3 += 1) 
    {
        arr_11 [(signed char)0] [i_3] = ((/* implicit */int) (!(((/* implicit */_Bool) max((arr_8 [i_3] [9ULL]), (arr_6 [i_3] [i_3]))))));
        var_25 = ((/* implicit */unsigned char) var_10);
        var_26 += ((/* implicit */signed char) ((min((arr_8 [9] [4ULL]), (((/* implicit */unsigned long long int) arr_7 [i_3])))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_3])))));
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163606
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
    var_10 = ((/* implicit */signed char) 5ULL);
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0])) + (((/* implicit */int) (!(((/* implicit */_Bool) min((arr_1 [i_0]), (var_6)))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            var_11 = ((/* implicit */_Bool) ((signed char) 18446744073709551611ULL));
            arr_6 [i_1] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_1]))));
            var_12 = ((/* implicit */unsigned int) arr_1 [i_1]);
            var_13 = ((/* implicit */int) ((((/* implicit */_Bool) 3ULL)) ? (((((/* implicit */_Bool) (signed char)-63)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (18446744073709551585ULL))) : (5ULL)));
        }
        arr_7 [i_0] = ((/* implicit */signed char) 3ULL);
    }
    for (signed char i_2 = 1; i_2 < 22; i_2 += 1) 
    {
        arr_10 [i_2] [i_2] = ((/* implicit */unsigned int) (((-(max((18446744073709551610ULL), (arr_8 [i_2]))))) ^ (min((((/* implicit */unsigned long long int) 3477400891U)), (max((arr_8 [i_2]), (((/* implicit */unsigned long long int) 3477400897U))))))));
        var_14 |= ((/* implicit */unsigned int) (((_Bool)1) ? ((-(var_1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) (unsigned char)26)), ((short)-24665)))))));
        arr_11 [i_2] = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)-82))));
        arr_12 [i_2] = ((/* implicit */unsigned long long int) 6709737973369628920LL);
    }
}

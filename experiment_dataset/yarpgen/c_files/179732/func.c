/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179732
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
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)-32752)) == (((/* implicit */int) (short)-1544))));
    /* LoopSeq 2 */
    for (short i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        var_20 = ((/* implicit */unsigned int) arr_0 [i_0]);
        var_21 = ((/* implicit */unsigned int) (((+(((/* implicit */int) arr_0 [i_0 + 1])))) % ((-(((/* implicit */int) ((((/* implicit */int) (_Bool)0)) <= (((/* implicit */int) arr_1 [i_0])))))))));
    }
    for (unsigned short i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        arr_5 [i_1] = ((/* implicit */_Bool) arr_2 [i_1] [i_1]);
        var_22 = ((/* implicit */unsigned char) max(((+(arr_3 [i_1]))), (((/* implicit */unsigned long long int) min((-2147483646), (((/* implicit */int) (_Bool)1)))))));
        arr_6 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_16)) ? (arr_2 [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_1]))))), (((/* implicit */long long int) arr_1 [i_1]))))) ? (((/* implicit */int) (short)-20206)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) 3221225472U)) > (274877906943ULL))))));
    }
}

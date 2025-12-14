/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107858
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
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) max((((/* implicit */int) (unsigned short)38840)), (902415701)))) < (556848403U)));
    var_16 = min((var_4), (((/* implicit */int) var_2)));
    var_17 &= ((unsigned char) var_7);
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        var_18 = ((/* implicit */_Bool) (signed char)92);
        arr_2 [i_0] = ((/* implicit */unsigned int) var_7);
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) arr_0 [i_0]);
        /* LoopSeq 1 */
        for (unsigned int i_1 = 1; i_1 < 23; i_1 += 3) 
        {
            var_19 = ((/* implicit */unsigned short) 964997812884527082LL);
            var_20 *= ((/* implicit */unsigned char) ((((/* implicit */int) var_2)) - (((/* implicit */int) var_2))));
        }
    }
    for (unsigned int i_2 = 0; i_2 < 15; i_2 += 3) 
    {
        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) min((min((max((((/* implicit */short) arr_7 [i_2])), (arr_8 [i_2] [i_2]))), (((/* implicit */short) ((((/* implicit */int) (short)-26669)) < (((/* implicit */int) (short)26659))))))), (((/* implicit */short) min(((_Bool)0), (var_10)))))))));
        arr_10 [i_2] = ((/* implicit */int) arr_5 [i_2]);
        var_22 = ((/* implicit */int) max((min(((+(arr_4 [i_2] [i_2] [2ULL]))), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) arr_1 [i_2] [i_2]))));
    }
}

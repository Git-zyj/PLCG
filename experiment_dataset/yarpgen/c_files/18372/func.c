/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18372
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
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) % (((((/* implicit */unsigned long long int) arr_1 [7])) + (var_7))))) ^ (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)16)))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            var_11 -= ((/* implicit */long long int) (-(((((/* implicit */_Bool) var_2)) ? (arr_1 [i_0]) : (var_8)))));
            arr_5 [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)153))));
            var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [i_0] [i_1])))))));
        }
        var_13 = ((/* implicit */unsigned char) arr_1 [i_0]);
        var_14 = (-(max((var_8), (((/* implicit */int) arr_0 [i_0] [i_0])))));
    }
    var_15 = ((/* implicit */int) var_2);
}

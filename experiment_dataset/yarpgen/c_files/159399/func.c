/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159399
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
    var_10 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_9))) & (((((/* implicit */_Bool) 1886241038)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_5)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (min(((+(var_0))), (((/* implicit */unsigned int) ((((/* implicit */int) var_8)) & (-1449708382))))))));
    var_11 = ((/* implicit */int) var_8);
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 3; i_0 < 18; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) (-(arr_0 [i_0 + 1])));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            var_12 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_0 - 3])) - (((/* implicit */int) arr_1 [i_0 + 3]))));
            var_13 = ((((/* implicit */int) (unsigned char)15)) / (arr_4 [i_0 + 2] [i_0] [i_1]));
            var_14 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_4 [19ULL] [i_0] [0])) ? (8388607) : (((/* implicit */int) arr_1 [(_Bool)0]))))));
        }
        var_15 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (arr_0 [i_0 + 2]) : (((((/* implicit */_Bool) var_8)) ? (12553693741240953181ULL) : (arr_0 [i_0])))));
    }
    var_16 = ((/* implicit */long long int) (-(11572147582733172905ULL)));
}

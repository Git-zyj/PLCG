/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15471
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
    var_14 = ((/* implicit */unsigned int) var_2);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        var_15 |= ((/* implicit */signed char) var_3);
        var_16 -= ((/* implicit */_Bool) ((((/* implicit */int) var_10)) << (((((((/* implicit */int) (signed char)-1)) + (22))) - (13)))));
        /* LoopSeq 4 */
        for (int i_1 = 1; i_1 < 14; i_1 += 4) /* same iter space */
        {
            arr_6 [i_0] [3ULL] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-59)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (arr_1 [i_0] [4ULL])))) ? (((((/* implicit */_Bool) (unsigned char)122)) ? (var_1) : (9223372036854775788LL))) : (((/* implicit */long long int) (-(((/* implicit */int) (signed char)-72)))))));
            var_17 = ((/* implicit */_Bool) (~(((/* implicit */int) var_6))));
        }
        for (int i_2 = 1; i_2 < 14; i_2 += 4) /* same iter space */
        {
            var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_4 [i_2 + 3] [i_2 + 3] [i_2 + 3]))));
            /* LoopSeq 1 */
            for (unsigned int i_3 = 3; i_3 < 16; i_3 += 3) 
            {
                var_19 = ((/* implicit */signed char) 4494822623120683765LL);
                var_20 = ((/* implicit */unsigned long long int) (~(var_1)));
            }
        }
        for (int i_4 = 1; i_4 < 14; i_4 += 4) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)122)) - (((/* implicit */int) var_9))));
            arr_15 [(_Bool)1] [(_Bool)1] [(short)14] |= ((/* implicit */_Bool) (-(((((/* implicit */int) var_0)) & (((/* implicit */int) var_11))))));
            var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) arr_5 [i_4 + 2] [i_0 + 3])))))));
        }
        for (unsigned int i_5 = 3; i_5 < 17; i_5 += 3) 
        {
            var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) (+((-(((/* implicit */int) var_13)))))))));
            arr_19 [i_0] = ((/* implicit */signed char) ((((arr_14 [i_0 + 1]) + (9223372036854775807LL))) >> (0)));
            var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((unsigned char) ((1338640908) % (((/* implicit */int) (unsigned short)28804))))))));
        }
    }
    var_25 = var_12;
}

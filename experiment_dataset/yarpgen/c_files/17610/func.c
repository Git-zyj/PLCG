/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17610
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
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        arr_2 [i_0] = ((((/* implicit */_Bool) ((unsigned int) arr_1 [(short)2]))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) arr_1 [i_0]))))) : (((/* implicit */int) arr_1 [i_0])));
        var_20 -= (((-(((/* implicit */int) arr_1 [i_0])))) % (((/* implicit */int) ((unsigned short) var_8))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    var_21 |= arr_5 [(signed char)8] [(short)20] [i_2];
                    var_22 |= ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((-1930097601) + (((/* implicit */int) arr_3 [i_0] [i_1 + 1] [(signed char)4]))))) / (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)55037))) ^ (arr_5 [16ULL] [i_1 - 1] [i_2])))))) ? (((unsigned int) ((arr_4 [i_0] [(short)8] [i_0]) % (((/* implicit */int) arr_0 [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)115))));
                    arr_7 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) (-(4294967271U)));
                    arr_8 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_2] [i_1 - 1] [i_1])) ? (((/* implicit */int) ((signed char) var_18))) : (((((/* implicit */int) arr_3 [i_0] [i_0] [i_1])) / (((/* implicit */int) arr_3 [13] [i_1] [i_1]))))));
                }
            } 
        } 
        arr_9 [i_0] = ((/* implicit */unsigned short) (-((+(((/* implicit */int) (signed char)44))))));
    }
    var_23 = ((/* implicit */unsigned int) var_3);
}

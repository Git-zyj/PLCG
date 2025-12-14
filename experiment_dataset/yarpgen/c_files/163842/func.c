/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163842
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
    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) var_7))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned int i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    arr_7 [3ULL] [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_1]))) : (3339948889U)));
                    var_18 = ((/* implicit */unsigned short) arr_4 [i_0] [i_0] [i_0]);
                    arr_8 [i_2] [i_1] = ((/* implicit */unsigned char) arr_1 [i_0]);
                }
                /* vectorizable */
                for (short i_3 = 2; i_3 < 21; i_3 += 4) 
                {
                    arr_13 [i_0] [(_Bool)1] [i_3] [i_3] |= ((/* implicit */unsigned short) arr_10 [i_0] [i_1] [i_3]);
                    arr_14 [18LL] [i_1] [i_0] = ((/* implicit */unsigned char) ((arr_1 [(_Bool)1]) >= (((/* implicit */long long int) ((/* implicit */int) ((0LL) >= (-2584987698901001933LL)))))));
                    var_19 |= ((long long int) -13LL);
                }
                var_20 = ((/* implicit */unsigned int) arr_3 [(unsigned char)17] [(unsigned char)17]);
            }
        } 
    } 
    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) max(((unsigned char)64), (var_16))))))) ? (min((((/* implicit */long long int) var_0)), (0LL))) : (((/* implicit */long long int) min((((/* implicit */unsigned int) var_9)), (var_2))))));
}

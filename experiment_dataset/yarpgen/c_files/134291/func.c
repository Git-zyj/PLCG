/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134291
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
    for (unsigned long long int i_0 = 1; i_0 < 24; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) -518201582))));
                arr_4 [(unsigned char)16] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_14) >> ((((-(((/* implicit */int) arr_0 [i_1])))) + (94)))))) ? (max(((+(((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) ((518201582) > (((/* implicit */int) arr_3 [i_0] [i_1]))))))) : (((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? ((-(var_2))) : ((-(((/* implicit */int) arr_3 [i_0] [i_1]))))))));
                var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) arr_1 [i_1]))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_2 = 2; i_2 < 13; i_2 += 3) 
    {
        arr_7 [(unsigned short)2] &= (~(((/* implicit */int) arr_0 [i_2])));
        var_19 &= ((/* implicit */int) ((((((/* implicit */_Bool) arr_5 [i_2])) ? (arr_2 [(_Bool)1] [i_2] [i_2]) : (((/* implicit */unsigned long long int) 2573216684U)))) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [(short)12] [(unsigned char)14])))));
        var_20 |= ((/* implicit */_Bool) (-(arr_5 [i_2 + 3])));
        arr_8 [i_2] [6LL] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_2] [(_Bool)1])) ? (((((/* implicit */_Bool) -518201582)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2] [i_2]))) : (arr_2 [0LL] [0LL] [i_2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2 - 1] [i_2 + 2])))));
    }
}

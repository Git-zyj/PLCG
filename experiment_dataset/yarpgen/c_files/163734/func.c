/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163734
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
    var_20 = ((/* implicit */unsigned long long int) (unsigned char)28);
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        arr_4 [(unsigned char)9] [i_0] &= ((/* implicit */unsigned long long int) ((((/* implicit */int) (!((_Bool)1)))) % (arr_1 [i_0])));
        arr_5 [i_0] [i_0] = arr_0 [i_0];
        arr_6 [i_0] = ((4486007441326080ULL) * (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0])));
        arr_7 [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)184))));
    }
    for (int i_1 = 0; i_1 < 23; i_1 += 2) 
    {
        var_21 *= ((/* implicit */_Bool) (+((~(arr_9 [i_1])))));
        arr_12 [i_1] &= ((/* implicit */unsigned long long int) ((long long int) max((((((/* implicit */_Bool) (unsigned char)99)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))), (arr_11 [i_1]))));
        var_22 = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((arr_8 [i_1] [i_1]) + (4720684169848123020LL)))));
    }
    var_23 |= ((/* implicit */long long int) var_15);
    /* LoopNest 2 */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        for (int i_3 = 0; i_3 < 18; i_3 += 1) 
        {
            {
                arr_18 [i_2] [i_2] = (i_2 % 2 == zero) ? ((((-(arr_13 [i_2 - 1]))) >> (((((/* implicit */_Bool) arr_13 [(_Bool)1])) ? (((/* implicit */int) arr_14 [i_2])) : (((/* implicit */int) arr_14 [i_2])))))) : ((((-(arr_13 [i_2 - 1]))) >> (((((((/* implicit */_Bool) arr_13 [(_Bool)1])) ? (((/* implicit */int) arr_14 [i_2])) : (((/* implicit */int) arr_14 [i_2])))) - (113)))));
                var_24 *= ((/* implicit */unsigned long long int) ((((long long int) ((((/* implicit */int) (unsigned char)90)) & (((/* implicit */int) (_Bool)1))))) * (((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) arr_11 [i_2]))) & (((/* implicit */int) ((arr_15 [10] [i_3]) || (((/* implicit */_Bool) arr_11 [i_2]))))))))));
                arr_19 [i_2] [i_2] = ((/* implicit */unsigned long long int) ((long long int) min((arr_8 [i_2 - 1] [i_2 - 1]), (arr_8 [i_2 - 1] [i_2 - 1]))));
            }
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14649
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
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */long long int) arr_1 [i_0] [10U]);
                arr_7 [i_1] = ((/* implicit */unsigned int) ((long long int) var_7));
                arr_8 [i_0] [i_1] [i_0] = ((/* implicit */long long int) (((~(arr_2 [i_0] [i_0] [i_1]))) >> ((((~(arr_1 [i_0] [i_1]))) - (1126593319U)))));
                arr_9 [10LL] [10LL] = min((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) arr_5 [i_0] [2LL] [i_0])))))) < (var_6)))), (((((/* implicit */_Bool) (-(arr_3 [14LL] [i_1] [8LL])))) ? (61572651155456LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (arr_4 [12LL] [i_1] [6U]) : (1772257505U)))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (long long int i_2 = 2; i_2 < 11; i_2 += 3) 
    {
        arr_13 [i_2] = ((/* implicit */unsigned int) var_4);
        arr_14 [i_2] = ((/* implicit */long long int) arr_4 [i_2] [i_2] [12LL]);
        arr_15 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_2 - 1] [i_2 - 1] [14LL])) && (((/* implicit */_Bool) ((unsigned int) min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) 3078765727U))))))));
        arr_16 [11LL] [i_2] = ((long long int) (~(arr_0 [i_2] [i_2])));
    }
    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 1) 
    {
        arr_21 [4LL] [i_3] &= ((/* implicit */long long int) (~(arr_20 [i_3])));
        arr_22 [4LL] |= var_10;
    }
}

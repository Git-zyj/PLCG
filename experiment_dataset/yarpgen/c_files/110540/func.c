/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110540
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
    var_17 ^= (-(var_2));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_18 = ((/* implicit */int) min((var_18), ((((!(((/* implicit */_Bool) -16777216)))) ? (((int) var_0)) : (arr_2 [i_0])))));
        var_19 = -16777216;
        arr_4 [i_0] = ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_1 [i_0]) : (arr_0 [i_0]));
    }
    /* LoopNest 2 */
    for (int i_1 = 3; i_1 < 13; i_1 += 2) 
    {
        for (int i_2 = 1; i_2 < 14; i_2 += 2) 
        {
            {
                arr_9 [1] [i_1] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) -16777217)) ? (510) : (-16777216)))) ? ((-(arr_7 [i_2 + 1] [i_1 - 2]))) : ((-(arr_7 [i_2] [i_1]))));
                arr_10 [i_1] [i_2] = min((((/* implicit */int) (!(((/* implicit */_Bool) 16777216))))), ((-(371527955))));
                arr_11 [i_1] [i_2 - 1] = min((max((arr_6 [i_2 + 1] [i_1 - 1]), (arr_6 [i_2 - 1] [i_1 + 2]))), ((+(arr_6 [i_2 + 1] [i_1 - 1]))));
            }
        } 
    } 
    var_20 = max((max(((-(1785234480))), (((((/* implicit */_Bool) 1533146719)) ? (1995089168) : (371527955))))), (-2147483644));
}

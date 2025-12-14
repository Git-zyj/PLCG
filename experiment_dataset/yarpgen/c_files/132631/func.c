/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132631
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
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */long long int) max((-1583288395), (((/* implicit */int) arr_5 [i_0] [i_0]))));
                var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+((-(arr_0 [i_0])))))) ? (((/* implicit */long long int) 189782366)) : (((((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) var_7)) : (-5237471997060848678LL))) / (((/* implicit */long long int) (+(arr_1 [i_0]))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (short i_2 = 0; i_2 < 25; i_2 += 1) 
    {
        var_19 ^= ((/* implicit */short) (~(-1420484857)));
        var_20 = ((/* implicit */unsigned char) (((((~(((/* implicit */int) var_3)))) + (2147483647))) >> (((/* implicit */int) min((arr_8 [i_2]), (arr_8 [i_2]))))));
    }
}

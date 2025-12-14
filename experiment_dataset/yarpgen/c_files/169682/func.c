/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169682
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 22; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */int) (((_Bool)0) ? (arr_5 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_2 + 1] [i_2 + 1])))));
                    arr_9 [i_0] [i_0] &= ((((/* implicit */_Bool) ((arr_6 [i_1] [i_2 - 1] [i_2] [i_2]) | (arr_6 [i_1] [i_2 - 1] [i_2] [i_2])))) ? (min((((/* implicit */int) min((((/* implicit */short) (_Bool)0)), (arr_3 [i_0] [i_0])))), (arr_6 [i_2 - 1] [i_2] [i_2] [i_0]))) : (((/* implicit */int) arr_7 [i_0] [i_1] [i_1] [i_2 - 2])));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(min((((/* implicit */int) (short)28)), (var_13))))))));
    var_21 = ((/* implicit */unsigned short) (~(var_1)));
}

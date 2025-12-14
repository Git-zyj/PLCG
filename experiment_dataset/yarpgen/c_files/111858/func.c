/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111858
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
    var_12 = ((/* implicit */_Bool) ((long long int) ((((/* implicit */int) ((((/* implicit */int) var_8)) < (((/* implicit */int) var_3))))) >> (((((/* implicit */int) var_3)) * (((/* implicit */int) var_11)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                var_13 |= ((((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) 1615261166)), (1988328198U))))))) << (((((/* implicit */int) arr_3 [i_0] [i_1] [4])) + (74))));
                arr_4 [i_0] [i_1] = ((/* implicit */_Bool) min((((/* implicit */int) arr_2 [i_0])), ((~(((/* implicit */int) max((((/* implicit */unsigned short) (short)-312)), (arr_0 [i_0]))))))));
                arr_5 [6LL] [i_1] [i_1] &= ((/* implicit */short) (unsigned char)255);
            }
        } 
    } 
    var_14 = ((/* implicit */_Bool) (~(((/* implicit */int) var_1))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146349
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
    var_15 = ((/* implicit */long long int) ((unsigned long long int) (-(((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) var_13)) : (var_11))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (int i_2 = 2; i_2 < 21; i_2 += 1) 
            {
                {
                    var_16 += ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((((/* implicit */int) (signed char)-62)) + (2147483647))) >> (((-6994565758999061063LL) + (6994565758999061091LL)))))) != (max((arr_4 [i_0] [i_1] [i_2 + 1]), (arr_4 [i_0] [i_1] [i_2 + 2])))));
                    var_17 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned short) ((unsigned int) -1862520986))))));
                }
            } 
        } 
    } 
}

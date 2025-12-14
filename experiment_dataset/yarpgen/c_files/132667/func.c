/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132667
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 3; i_2 < 23; i_2 += 2) 
            {
                {
                    var_11 += ((unsigned char) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) arr_5 [i_2 - 3])) : (((/* implicit */int) var_5))));
                    arr_6 [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -810928788)) ? (4194303LL) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))) ? (-810928780) : (((((/* implicit */_Bool) 810928792)) ? (var_2) : (((/* implicit */int) var_8))))))) ? (((((/* implicit */_Bool) arr_1 [i_2 - 3])) ? (((/* implicit */int) arr_1 [i_2 - 3])) : (((/* implicit */int) (signed char)3)))) : (((/* implicit */int) var_1))));
                    arr_7 [i_1] [i_1] [i_2] = (short)3481;
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) -810928788))));
}

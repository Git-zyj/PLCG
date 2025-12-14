/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138533
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
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (int i_1 = 3; i_1 < 7; i_1 += 2) 
        {
            {
                arr_6 [i_1] = ((/* implicit */unsigned short) arr_4 [i_1]);
                arr_7 [i_1 - 2] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) 3781894664U)), (7231232090580244415LL)))), (arr_1 [i_1 + 4] [i_1 - 1])))) ? (((/* implicit */int) ((arr_1 [i_1 + 3] [i_1 + 3]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) : ((((+(((/* implicit */int) var_11)))) | (((/* implicit */int) (!(((/* implicit */_Bool) -3116048751522284404LL)))))))));
                arr_8 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((short)6), (((/* implicit */short) var_10))))) ? (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_3 [i_1] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1 - 1])))))) <= (var_3)));
                arr_9 [7ULL] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) ((long long int) (unsigned short)0)))) ? (((/* implicit */unsigned long long int) -3116048751522284404LL)) : (((((/* implicit */unsigned long long int) min((-3116048751522284404LL), (((/* implicit */long long int) var_11))))) | (min((arr_0 [i_1]), (var_6)))))));
            }
        } 
    } 
    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned long long int) ((unsigned short) (_Bool)1)))))) ? (((/* implicit */unsigned long long int) (-(((var_4) ? (var_8) : (((/* implicit */int) var_0))))))) : (((var_7) ? (((/* implicit */unsigned long long int) var_8)) : (var_6)))));
}

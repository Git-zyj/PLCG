/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100341
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
    for (short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) var_11))))), (((((/* implicit */int) (short)-4015)) & (((/* implicit */int) (unsigned short)21297))))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-22216))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (6035635335081407961ULL)))));
                var_18 -= ((/* implicit */short) min((arr_4 [i_1] [i_1] [(unsigned char)5]), (((arr_4 [i_0] [(short)12] [i_0]) - (arr_4 [i_0] [i_1] [i_1])))));
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) var_13);
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) ((unsigned short) (!(((/* implicit */_Bool) -6816323478597909322LL))))))));
    var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) (unsigned char)147))));
}

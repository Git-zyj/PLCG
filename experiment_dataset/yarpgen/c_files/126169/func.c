/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126169
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
    var_13 = ((/* implicit */int) min((max((max((((/* implicit */unsigned long long int) 4542452687774960090LL)), (var_12))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 1138341886U))))))), (((/* implicit */unsigned long long int) (-(1138341886U))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)127)), (arr_3 [i_0] [5ULL] [i_1])))) || (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((var_1) | (((/* implicit */int) var_3))))) ^ ((((_Bool)0) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))))));
                var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) (signed char)-127))));
                var_15 = ((/* implicit */int) min((((/* implicit */long long int) ((((((/* implicit */int) (unsigned short)65520)) ^ (arr_2 [i_0] [i_0] [i_1]))) >> (((((((/* implicit */_Bool) var_3)) ? (arr_2 [i_0] [i_1] [i_0]) : (-172561796))) - (1281703509)))))), ((~(5073125525044129587LL)))));
                arr_5 [1LL] &= ((/* implicit */int) arr_3 [i_0] [8] [i_1]);
            }
        } 
    } 
}

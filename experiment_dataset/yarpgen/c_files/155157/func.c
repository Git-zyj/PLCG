/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155157
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
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) var_0))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-15843)) ? (((/* implicit */int) (unsigned short)23908)) : (((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) (short)-28973)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (short)15927))))) : (((/* implicit */long long int) ((((/* implicit */int) var_10)) * (((/* implicit */int) var_0))))))))));
    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_2)), (var_9)))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */int) var_3)) | (((/* implicit */int) var_8))))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) (short)18))) <= (var_9))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_10))))) : (min((-3399154797729823080LL), (((/* implicit */long long int) var_7))))))) : (min((((/* implicit */unsigned long long int) var_9)), (13472042868489343464ULL)))));
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    var_14 = min((max((arr_0 [i_0 + 1]), (arr_0 [i_0 - 1]))), (((short) arr_5 [i_0] [i_0 - 2])));
                    arr_7 [i_0] [i_1] [i_0] = ((min(((_Bool)1), ((!(((/* implicit */_Bool) var_11)))))) ? (((/* implicit */unsigned long long int) 17179869183LL)) : (var_1));
                    var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) var_5))));
                }
            } 
        } 
    } 
}

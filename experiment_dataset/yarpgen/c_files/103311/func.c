/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103311
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
    for (unsigned int i_0 = 2; i_0 < 24; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                arr_7 [i_0] [i_1] [21ULL] = max((((((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [4ULL]))))) ? (arr_0 [i_0]) : (-1545323556776549667LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) min((((/* implicit */unsigned short) (short)27704)), ((unsigned short)43260)))) : (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)22296))))))));
                arr_8 [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) max((arr_1 [i_1] [12U]), (((/* implicit */unsigned int) (unsigned short)43260))))) / (arr_0 [i_0 - 1]))) >= (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)43260)))))));
                var_17 += ((/* implicit */unsigned short) 15639451251538593551ULL);
                var_18 = (~(arr_4 [i_1] [(short)1] [(_Bool)1]));
            }
        } 
    } 
    var_19 = (_Bool)0;
    var_20 = ((/* implicit */long long int) ((unsigned long long int) min((2807292822170958065ULL), (max((((/* implicit */unsigned long long int) (short)30651)), (13935163763586008094ULL))))));
}

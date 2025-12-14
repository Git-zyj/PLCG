/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154058
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
    var_12 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)-5410))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        arr_3 [i_0] = ((((((/* implicit */int) arr_2 [i_0])) & (((/* implicit */int) var_4)))) & (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_4)))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_13 = ((/* implicit */unsigned long long int) var_6);
            var_14 = ((/* implicit */int) ((unsigned short) ((((/* implicit */int) (short)-5429)) & (((/* implicit */int) var_5)))));
            var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-8)) ? (((/* implicit */int) (short)-5398)) : (-1696836804)));
        }
        arr_7 [i_0] [i_0] = ((/* implicit */signed char) -5109430114671388255LL);
        var_16 = ((/* implicit */short) ((signed char) var_3));
    }
    for (unsigned char i_2 = 2; i_2 < 20; i_2 += 2) 
    {
        arr_10 [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) (unsigned short)63972))))), (var_11)))) || (((/* implicit */_Bool) (-(arr_9 [i_2 + 1]))))));
        var_17 = ((/* implicit */unsigned long long int) (-(((((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_2] [i_2 - 1])) / (-267685290)))) - (((((/* implicit */_Bool) (signed char)36)) ? (arr_9 [i_2]) : (-2730064922248633461LL)))))));
    }
}

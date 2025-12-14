/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114471
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
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        arr_3 [i_0 - 1] [i_0] = ((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned long long int) (-(arr_1 [i_0])))), (min((10857639789952793137ULL), (7589104283756758479ULL))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_0 [i_0 + 1]) == (15326751308543750872ULL)))))));
        arr_4 [i_0] = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (min((((/* implicit */unsigned int) var_6)), (var_7))) : (20U))));
    }
    for (long long int i_1 = 0; i_1 < 13; i_1 += 3) 
    {
        var_10 -= ((/* implicit */unsigned short) (+(((var_3) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1])))))));
        /* LoopNest 2 */
        for (long long int i_2 = 1; i_2 < 11; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    var_11 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned long long int) arr_12 [i_2 + 1] [i_2 + 2] [i_2 + 2] [i_2 + 1])))));
                    arr_14 [i_1] [i_1] [i_3] = (+(max((((/* implicit */unsigned int) arr_11 [i_1] [i_1] [i_2] [i_1])), (((((/* implicit */_Bool) arr_11 [i_3] [i_2] [i_3] [i_2 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2]))) : (arr_9 [i_1] [i_2] [i_3]))))));
                    var_12 = ((/* implicit */unsigned short) (signed char)-16);
                }
            } 
        } 
        var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_1])) ? (var_2) : (min((((/* implicit */long long int) arr_7 [i_1])), (3356803882571474073LL))))))));
        var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)-30)), (9223372036854775807LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) (signed char)12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)70))) : (3119992765165800744ULL))) == (((/* implicit */unsigned long long int) var_2)))))) : ((-(((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */unsigned long long int) var_0)) : (var_3)))))));
        var_15 = ((/* implicit */unsigned int) arr_13 [i_1] [i_1] [i_1]);
    }
    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) (((~(((unsigned int) 2147483647)))) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_6))))))))));
}

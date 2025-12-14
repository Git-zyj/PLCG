/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131343
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
    /* vectorizable */
    for (short i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        arr_2 [4U] = ((/* implicit */short) (+(((((/* implicit */_Bool) (signed char)89)) ? (arr_0 [i_0]) : (((/* implicit */int) var_1))))));
        arr_3 [i_0 + 1] |= ((/* implicit */short) ((((/* implicit */int) arr_1 [i_0 - 1])) >= (((/* implicit */int) ((short) (_Bool)1)))));
    }
    for (short i_1 = 0; i_1 < 20; i_1 += 2) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned short) ((arr_4 [i_1] [i_1]) > ((-(((/* implicit */int) (unsigned short)59080))))));
        var_10 = ((/* implicit */unsigned int) max((var_10), (((/* implicit */unsigned int) min((arr_5 [i_1]), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)6452))))))))));
    }
    var_11 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) max((((((/* implicit */_Bool) -864396039)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)4)))), (var_4)))), (var_2)));
    var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(16288865307890882307ULL)))) ? (((/* implicit */unsigned long long int) ((max((var_3), (((/* implicit */unsigned int) var_9)))) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) 74007208U)) ? (var_9) : (var_4))))))) : (((((((/* implicit */_Bool) (signed char)62)) ? (16288865307890882307ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)6449))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)59084)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 2) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                arr_13 [i_2] [i_3] = ((/* implicit */signed char) min((((/* implicit */unsigned short) (signed char)54)), ((unsigned short)6437)));
                arr_14 [i_2] [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)12205))) > (1073479680U)));
            }
        } 
    } 
}

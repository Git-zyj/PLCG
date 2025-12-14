/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186537
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
    for (short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1] [i_0]))) : (arr_5 [i_2] [i_1] [i_2] [i_2])))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)36)), (8730622497245191396ULL)))) ? (((unsigned long long int) arr_1 [i_0])) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)32767)) ? (3372545853228304311LL) : (((/* implicit */long long int) 0U))))))) : (((/* implicit */unsigned long long int) max(((-(var_4))), (((/* implicit */long long int) arr_0 [i_0] [i_0])))))));
                    var_17 = (((!(((/* implicit */_Bool) var_0)))) ? (((unsigned long long int) ((((/* implicit */int) (unsigned char)150)) + (((/* implicit */int) (_Bool)1))))) : (max((((/* implicit */unsigned long long int) -8381550934851962101LL)), (((unsigned long long int) 9716121576464360220ULL)))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */_Bool) ((unsigned int) max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_1)), (var_0)))), (((((/* implicit */_Bool) var_11)) ? (var_14) : (((/* implicit */unsigned long long int) var_13)))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144240
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
    var_16 = ((/* implicit */_Bool) min((12232784634845181951ULL), (((/* implicit */unsigned long long int) 33554431))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        arr_2 [i_0] [14ULL] = ((/* implicit */unsigned int) (+(arr_0 [i_0])));
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                for (unsigned short i_3 = 1; i_3 < 14; i_3 += 2) 
                {
                    {
                        arr_10 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_6 [i_0] [i_3 + 1]), (arr_6 [i_0] [i_1])))) ? ((+(arr_6 [i_1] [i_2]))) : (((((/* implicit */_Bool) arr_6 [i_1] [i_3])) ? (arr_6 [i_0] [i_1]) : (arr_6 [i_2] [i_3 + 2])))));
                        var_17 = ((/* implicit */short) max((((((/* implicit */_Bool) (unsigned short)51774)) ? (((/* implicit */long long int) 1448270795U)) : ((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) arr_9 [i_3 - 1] [i_2] [i_2] [i_3 + 1]))));
                        var_18 = ((/* implicit */unsigned long long int) (-((~(((/* implicit */int) arr_3 [i_0]))))));
                        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2] [i_3 + 2])) || (max((((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) var_10)))), (((arr_1 [i_0]) != (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))))));
                    }
                } 
            } 
        } 
    }
}

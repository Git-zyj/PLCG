/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148998
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
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        arr_4 [i_0 + 3] [i_0 + 3] = ((/* implicit */short) (~(min((((/* implicit */unsigned long long int) 7404191428403737735LL)), (min((((/* implicit */unsigned long long int) (unsigned short)511)), (arr_1 [i_0 - 1] [i_0 - 1])))))));
        arr_5 [(_Bool)1] [i_0] = ((/* implicit */unsigned int) ((signed char) (+(-262649736))));
        var_10 = min((1418038394), (1418038394));
        arr_6 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1924299148U)) ? (0U) : (((/* implicit */unsigned int) 1418038394))))) ? (((/* implicit */long long int) 1418038394)) : (min((((((/* implicit */_Bool) 717625665190277354LL)) ? (((/* implicit */long long int) -1418038368)) : (2454951195436290239LL))), (((/* implicit */long long int) 8372224)))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    arr_14 [i_1] [i_1] [i_1] = ((/* implicit */signed char) arr_10 [i_1 + 2]);
                    var_11 = ((/* implicit */long long int) min((var_11), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_1 + 2] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_1 - 1] [i_1] [i_1] [i_2]))) : (((((/* implicit */_Bool) arr_12 [i_1 - 1] [i_1] [i_1 - 1] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_1 - 1] [i_1] [i_2] [i_1]))) : (331274077U))))))));
                }
            } 
        } 
    }
    var_12 = ((/* implicit */unsigned short) 1418038407);
}

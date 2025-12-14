/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106300
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
    for (unsigned char i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 23; i_1 += 3) 
        {
            for (unsigned int i_2 = 3; i_2 < 24; i_2 += 3) 
            {
                for (unsigned int i_3 = 0; i_3 < 25; i_3 += 3) 
                {
                    {
                        var_12 = ((/* implicit */unsigned int) var_4);
                        arr_11 [i_0] [i_0] [i_1] [i_2] [i_2] [i_3] = ((((((/* implicit */_Bool) arr_1 [i_1 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) (unsigned char)161)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)79))) : (1239575137U))))) <= (((/* implicit */unsigned int) (+(((/* implicit */int) ((1239575140U) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)145))))))))));
                    }
                } 
            } 
        } 
        var_13 |= ((/* implicit */int) 2013265920U);
        var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0]))) - (min((((/* implicit */long long int) (_Bool)1)), (arr_6 [i_0] [i_0] [i_0] [i_0])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) var_9))))))) : (((((/* implicit */_Bool) min((var_8), (arr_8 [i_0] [i_0] [i_0] [i_0])))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0]))) & (arr_9 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))));
    }
    var_15 = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 18430639264277398201ULL)) ? (((/* implicit */long long int) (+(((/* implicit */int) var_0))))) : (min((((/* implicit */long long int) var_5)), (4149393135987455289LL))))));
}

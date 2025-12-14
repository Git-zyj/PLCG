/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180272
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
    var_14 = ((/* implicit */long long int) min(((-(((/* implicit */int) (_Bool)1)))), ((-(((/* implicit */int) var_5))))));
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_10) / (((/* implicit */int) var_1))))) ? (((/* implicit */unsigned int) ((var_13) / (-1339958982)))) : (min((((/* implicit */unsigned int) var_5)), (402653184U)))));
    var_16 = ((/* implicit */_Bool) (+(((/* implicit */int) ((short) (+(1589992342)))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((arr_0 [i_1] [i_2]) == (((/* implicit */unsigned int) min((max((((/* implicit */int) (_Bool)0)), ((-2147483647 - 1)))), (((/* implicit */int) max(((short)-1), (((/* implicit */short) (_Bool)0)))))))))))));
                    var_18 = ((/* implicit */int) max((var_18), (((int) (-(2978894898U))))));
                    arr_8 [i_0] [i_1] [i_2] |= ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)40292)) % (((/* implicit */int) (_Bool)1))));
                    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) min((747901561), (((/* implicit */int) (_Bool)0)))))));
                }
            } 
        } 
    } 
}

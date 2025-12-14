/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105380
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (long long int i_2 = 2; i_2 < 19; i_2 += 1) 
            {
                {
                    arr_10 [i_2 + 1] [i_2] [i_2 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_6 [3])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (1333670565989315229ULL)));
                    arr_11 [i_0] [i_1] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) != (17113073507720236361ULL)))) << (((/* implicit */int) (_Bool)1)))))));
                    var_19 += ((/* implicit */unsigned long long int) (~(((arr_8 [i_2 - 1] [i_2 - 2] [i_2 - 2] [i_2 + 1]) & (arr_8 [i_2 + 2] [(unsigned short)4] [i_2 + 2] [i_2 + 1])))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned int) var_12);
    var_21 = ((/* implicit */unsigned long long int) (+((((-(-25965053))) << (((/* implicit */int) var_13))))));
}

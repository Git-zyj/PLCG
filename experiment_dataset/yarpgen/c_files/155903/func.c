/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155903
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
    var_17 = ((/* implicit */unsigned long long int) var_7);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (unsigned int i_2 = 4; i_2 < 15; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_2] [i_2 - 3] = ((/* implicit */unsigned char) arr_5 [16U]);
                    var_18 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_4 [i_0] [i_1] [i_2 - 4]))) | (((14183856547180094552ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0])))))))) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) 18446744073709551615ULL))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0]))) : (arr_6 [i_2] [i_2] [i_1] [i_2 - 2]))))));
                    var_19 = ((/* implicit */unsigned short) (~(8216691301761371909ULL)));
                    arr_8 [i_0] [i_1] [i_1] [i_2 + 1] &= ((/* implicit */unsigned int) (_Bool)0);
                    arr_9 [i_2] [i_2] = ((/* implicit */_Bool) (~(max((arr_4 [i_0] [i_1] [i_2 - 4]), (((/* implicit */unsigned long long int) var_2))))));
                }
            } 
        } 
    } 
    var_20 = var_12;
}

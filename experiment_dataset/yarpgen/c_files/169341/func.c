/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169341
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
    var_15 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (-(-1238257660023230384LL)))), (min((0ULL), (18446744073709551610ULL)))));
    var_16 ^= ((/* implicit */unsigned char) var_8);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned long long int) min((arr_0 [i_3]), (((/* implicit */short) ((unsigned char) arr_0 [7ULL])))));
                                arr_12 [i_0] [i_0] [10LL] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) arr_10 [i_4] [i_0] [i_2] [(unsigned short)11] [7LL]);
                                var_18 ^= ((/* implicit */unsigned short) (~(((unsigned long long int) 18446744073709551599ULL))));
                                var_19 += ((/* implicit */long long int) ((unsigned char) 18446744073709551599ULL));
                                arr_13 [i_0] [i_2 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((((/* implicit */_Bool) (signed char)-1)) ? (18446744073709551612ULL) : (985789649632016385ULL))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)0)))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned char) min((14ULL), (0ULL)));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */long long int) (+(-412169365)));
}

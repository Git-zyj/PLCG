/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181507
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
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */long long int) var_3);
                var_16 = ((/* implicit */long long int) (_Bool)1);
                /* LoopNest 3 */
                for (int i_2 = 4; i_2 < 14; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 16; i_4 += 3) 
                        {
                            {
                                arr_13 [i_0] [i_2] = ((/* implicit */short) max((((/* implicit */int) var_10)), (((((/* implicit */_Bool) 6419813037234004942LL)) ? (2147483647) : (((/* implicit */int) (_Bool)1))))));
                                var_17 = ((((/* implicit */int) (_Bool)1)) * (((int) (-(((/* implicit */int) (_Bool)1))))));
                                var_18 = ((/* implicit */short) (~(((((/* implicit */int) var_7)) / (((/* implicit */int) (signed char)-37))))));
                            }
                        } 
                    } 
                } 
                var_19 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 6419813037234004942LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) - (((/* implicit */int) arr_9 [i_0] [i_0] [i_1] [i_1] [i_1] [i_1]))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) 6419813037234004942LL);
    var_21 = (!(((/* implicit */_Bool) ((var_14) ? (6419813037234004942LL) : (9223372036854775807LL)))));
    var_22 += ((/* implicit */unsigned short) min(((~(((/* implicit */int) (unsigned char)241)))), (((((/* implicit */int) ((_Bool) 988524016U))) ^ (((((/* implicit */int) (signed char)-21)) & (((/* implicit */int) var_10))))))));
}

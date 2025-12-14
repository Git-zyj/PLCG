/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15942
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
    var_15 ^= ((/* implicit */unsigned int) ((((((/* implicit */int) var_6)) + (2147483647))) >> (((var_5) - (5794050523736512663LL)))));
    var_16 += (unsigned short)12025;
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            {
                                var_17 *= ((/* implicit */signed char) max((((/* implicit */long long int) (signed char)52)), (min((var_5), (((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_3])) == (((/* implicit */int) (unsigned short)60932)))))))));
                                var_18 ^= ((/* implicit */unsigned int) min((((/* implicit */int) arr_4 [i_0 + 2])), (((((/* implicit */_Bool) arr_7 [i_2])) ? ((~(((/* implicit */int) arr_1 [i_0] [i_4])))) : (((/* implicit */int) arr_8 [i_3] [i_3] [i_2] [i_3]))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (int i_7 = 3; i_7 < 16; i_7 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? ((~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_15 [(unsigned short)6] [i_1] [4ULL] [i_1] [i_0])) : (((/* implicit */int) arr_0 [i_5])))))) : (((/* implicit */int) max((arr_4 [i_0 + 2]), (arr_19 [(signed char)10] [4U] [i_5] [(signed char)10])))))))));
                                var_20 -= ((/* implicit */_Bool) ((int) (signed char)-4));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}

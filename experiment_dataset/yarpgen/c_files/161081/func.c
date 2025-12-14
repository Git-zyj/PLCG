/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161081
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
    for (int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_13 -= ((/* implicit */_Bool) arr_1 [3U]);
                var_14 *= min((max((arr_2 [i_1 - 1] [i_1]), (arr_2 [i_1 - 1] [i_1 - 1]))), (((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_1 - 1] [i_1 - 1])) && ((_Bool)1)))));
                var_15 = (-(((((/* implicit */int) (unsigned char)218)) >> (((/* implicit */int) var_12)))));
                var_16 = ((/* implicit */unsigned short) (-(((/* implicit */int) max(((unsigned char)218), (((/* implicit */unsigned char) arr_3 [i_1 - 1] [i_1 - 1])))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 10; i_2 += 4) 
    {
        for (int i_3 = 1; i_3 < 9; i_3 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 3; i_4 < 9; i_4 += 3) 
                {
                    for (int i_5 = 2; i_5 < 7; i_5 += 3) 
                    {
                        {
                            arr_16 [i_4] [(_Bool)1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_13 [i_2] [i_4 - 1] [i_4] [i_3 + 1]), (((/* implicit */int) arr_12 [i_4] [i_4 - 3] [i_4] [i_3 - 1]))))) ? (max((677288912), (((/* implicit */int) (unsigned char)216)))) : (((((/* implicit */int) arr_12 [i_4] [i_4 - 3] [i_4] [i_3 + 1])) ^ (((/* implicit */int) arr_12 [i_4] [i_4 - 3] [i_4] [i_3 + 1]))))));
                            var_17 *= ((/* implicit */_Bool) ((((/* implicit */int) var_8)) << (((var_4) + (739563120757770440LL)))));
                            arr_17 [i_4] [i_5] [i_3] [(short)0] = ((-1753386683285810044LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16016))));
                        }
                    } 
                } 
                var_18 = ((((/* implicit */_Bool) (-(arr_15 [i_3 + 1] [i_3 + 1] [i_2] [(short)4] [i_3 + 1])))) ? (((((/* implicit */_Bool) var_9)) ? (arr_15 [i_3 + 1] [2] [i_2] [i_3 + 1] [i_3]) : (arr_15 [i_3 + 1] [i_3 - 1] [i_2] [i_3] [i_3]))) : (((((arr_15 [i_3 + 1] [i_3 + 1] [i_2] [i_2] [i_2]) + (2147483647))) >> (((((/* implicit */int) (unsigned short)13683)) - (13671))))));
            }
        } 
    } 
    var_19 -= ((/* implicit */signed char) var_0);
}

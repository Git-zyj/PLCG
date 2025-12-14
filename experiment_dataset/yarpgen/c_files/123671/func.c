/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123671
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
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)24796))) & (arr_2 [i_1 + 2])))) == (((((/* implicit */unsigned long long int) -1369088011)) ^ (1490869245623580313ULL)))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 2; i_2 < 19; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((1369088010) - (((/* implicit */int) arr_14 [i_0] [i_1] [i_2] [i_4] [i_2 + 1]))))), (((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_4)), (arr_10 [i_4] [i_1] [i_4] [i_4])))) - (13383616278455563355ULL)))));
                                var_14 ^= ((/* implicit */signed char) (-((-(var_10)))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_5 = 0; i_5 < 20; i_5 += 3) 
                {
                    for (long long int i_6 = 0; i_6 < 20; i_6 += 4) 
                    {
                        {
                            var_15 = ((/* implicit */long long int) max((((((/* implicit */int) arr_3 [i_1] [i_1] [i_1])) - (((/* implicit */int) arr_3 [i_1] [i_1 - 1] [i_1])))), ((-((~(-269614619)))))));
                            var_16 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)8692)) ? (((/* implicit */int) (unsigned short)19098)) : (1369088010)));
                            var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((3256116069U), (((/* implicit */unsigned int) (short)8702)))))));
                            var_18 = ((/* implicit */long long int) (+((-(arr_8 [i_1] [i_1 + 1] [i_1 - 1] [i_1])))));
                            arr_22 [i_1] [i_1] [i_5] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_0)) ? (var_8) : (7676479824661084490LL))) == (((/* implicit */long long int) (+(450182272U))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 = ((((/* implicit */long long int) ((((/* implicit */_Bool) ((var_9) & (((/* implicit */unsigned int) ((/* implicit */int) (short)8688)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_9)))) & (((((/* implicit */_Bool) (~(var_6)))) ? ((~(var_8))) : (((/* implicit */long long int) var_7)))));
    var_20 = ((/* implicit */unsigned long long int) var_10);
    /* LoopNest 2 */
    for (long long int i_7 = 0; i_7 < 24; i_7 += 2) 
    {
        for (unsigned int i_8 = 1; i_8 < 22; i_8 += 2) 
        {
            {
                var_21 = (~((~(arr_27 [i_7] [i_8 + 1]))));
                var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_24 [i_8 - 1] [i_8 - 1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [i_8 + 1] [i_8 - 1])))))) : (min((((/* implicit */unsigned int) (unsigned short)0)), (arr_23 [i_7])))));
            }
        } 
    } 
}

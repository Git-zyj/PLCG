/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122605
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */signed char) max((((/* implicit */unsigned int) min(((unsigned char)6), (((/* implicit */unsigned char) (signed char)-7))))), (((3688746027U) | (((/* implicit */unsigned int) ((/* implicit */int) (short)-8836)))))));
                var_14 = var_2;
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 17; i_2 += 3) 
                {
                    for (short i_3 = 1; i_3 < 17; i_3 += 3) 
                    {
                        {
                            var_15 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (unsigned char)20))))) ? (((/* implicit */int) var_12)) : ((-(((/* implicit */int) var_6))))));
                            var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) min((((/* implicit */long long int) min((0U), (((/* implicit */unsigned int) (unsigned char)250))))), (((3LL) ^ (((/* implicit */long long int) 4252058499U)))))))));
                            var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1776801096855431431LL)) ? (((/* implicit */int) (short)-1)) : (4080)))) ? (((/* implicit */long long int) max(((-(-4099))), (((/* implicit */int) ((signed char) (unsigned char)0)))))) : (var_8))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) var_12))));
    /* LoopNest 2 */
    for (unsigned short i_4 = 0; i_4 < 19; i_4 += 3) 
    {
        for (long long int i_5 = 2; i_5 < 18; i_5 += 2) 
        {
            {
                var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((((/* implicit */int) (short)32750)) / (((/* implicit */int) (_Bool)1)))))));
                arr_21 [i_4] [i_5] [i_4] = ((((/* implicit */_Bool) -4081)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (unsigned char)4)));
                var_20 += ((/* implicit */unsigned char) arr_7 [i_4] [i_4] [1ULL] [i_4]);
                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+((-(2026480390U)))))) && (((/* implicit */_Bool) ((long long int) var_1)))));
                var_22 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)159))))) ? (min((((/* implicit */long long int) var_2)), (arr_12 [i_5 + 1] [i_5] [i_5 + 1]))) : ((+(((long long int) arr_15 [(unsigned char)12]))))));
            }
        } 
    } 
}

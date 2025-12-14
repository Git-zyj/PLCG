/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141897
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
    var_18 += ((/* implicit */unsigned int) var_10);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 4; i_2 < 22; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 4; i_3 < 23; i_3 += 2) 
                    {
                        {
                            var_19 *= ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_0] [i_1] [i_2 - 1] [(signed char)10] [i_3 - 4] [i_1])) << (((((/* implicit */int) (unsigned short)8192)) - (8188)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_0])))))) : (min((var_8), (((/* implicit */unsigned int) arr_5 [i_0] [i_0] [i_0] [i_0])))))));
                            var_20 = ((/* implicit */signed char) max((var_20), (var_15)));
                            arr_11 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) 0U)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) ((3367791271U) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)60)))))))))));
                            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((var_5) || (((/* implicit */_Bool) ((unsigned long long int) -848023284))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_3 [i_0]), (arr_3 [i_3 - 3]))))) : (((4269679976U) | (4294967287U))))))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */long long int) min(((~(4294967295U))), (((/* implicit */unsigned int) arr_1 [i_0] [i_0]))));
                var_23 |= ((/* implicit */unsigned char) arr_8 [i_0] [i_0] [i_1] [i_0]);
                var_24 = var_16;
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned int) ((((/* implicit */int) var_0)) - (((/* implicit */int) var_4))));
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 16; i_4 += 3) 
    {
        for (short i_5 = 0; i_5 < 16; i_5 += 3) 
        {
            {
                var_26 *= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_14 [0ULL])) >> (((((/* implicit */int) var_13)) - (14977)))))) ^ (var_6)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_10 [i_4] [i_4] [i_4] [i_4])) ? (arr_2 [i_4] [i_4] [i_4]) : (268435455LL))) >= (((/* implicit */long long int) ((848023284) / (((/* implicit */int) arr_12 [i_5]))))))))) : (((arr_6 [i_4] [i_5] [23U] [i_4]) / (((/* implicit */long long int) 4294967276U))))));
                arr_19 [i_4] = ((/* implicit */long long int) 4294967273U);
                var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) arr_0 [i_4] [i_4]))));
            }
        } 
    } 
}

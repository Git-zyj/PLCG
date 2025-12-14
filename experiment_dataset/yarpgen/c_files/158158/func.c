/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158158
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
    var_18 = ((/* implicit */unsigned short) (+((+(-3LL)))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        {
                            var_19 ^= ((/* implicit */unsigned int) arr_7 [i_0] [i_0] [i_2]);
                            var_20 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (var_12) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)56170)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0])))))) : (min((72057044282114048LL), (72057044282114050LL))))))));
                            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_17))) < (((var_10) ? (arr_2 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) min((var_9), (((/* implicit */short) arr_8 [7U] [(_Bool)1] [i_2] [i_2] [i_2]))))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_4 = 3; i_4 < 23; i_4 += 4) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 3) 
                    {
                        {
                            arr_13 [i_4] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_4] [i_1] [i_4 + 1] [i_5])) ? (min((((/* implicit */int) var_11)), (arr_7 [i_5] [(short)18] [i_0]))) : (((/* implicit */int) arr_6 [i_0] [i_4] [i_4 + 1]))))) ? (((/* implicit */int) ((_Bool) arr_6 [i_0] [i_4] [i_4 + 1]))) : (((((/* implicit */int) min((var_7), (((/* implicit */short) arr_8 [i_0] [i_1] [i_4 - 1] [i_4] [i_5]))))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) 8369558609151275336LL))))))));
                            arr_14 [i_5] [i_4] [i_4 - 2] [i_4] [i_0] = (i_4 % 2 == 0) ? (((/* implicit */short) (+((((((((~(2147483647))) + (2147483647))) + (2147483647))) >> (((((/* implicit */int) arr_11 [i_4] [i_4] [i_4] [i_5])) - (23865)))))))) : (((/* implicit */short) (+((((((((~(2147483647))) + (2147483647))) + (2147483647))) >> (((((((/* implicit */int) arr_11 [i_4] [i_4] [i_4] [i_5])) - (23865))) - (13009))))))));
                            var_22 += ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_4 + 1] [i_5])) ? (((1577354734U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)100)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)103))))))))));
                            arr_15 [i_0] [i_0] [i_0] [i_0] [i_4] = ((/* implicit */unsigned int) var_17);
                            var_23 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)135)) ? (((/* implicit */long long int) 3610121584U)) : (-5323927717449435110LL)));
                        }
                    } 
                } 
                arr_16 [i_0] [i_1] = ((((((/* implicit */_Bool) max((arr_7 [i_0] [i_0] [i_0]), (((/* implicit */int) var_14))))) && (((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_6)))))) || (((/* implicit */_Bool) max((((unsigned int) 4278190080U)), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)3)) || (var_16))))))));
            }
        } 
    } 
}

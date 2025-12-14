/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171002
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
    for (unsigned long long int i_0 = 4; i_0 < 20; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 21; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 21; i_3 += 1) 
                    {
                        for (short i_4 = 1; i_4 < 19; i_4 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_5 [i_0 + 1] [i_0] [i_0]))))) != (min(((~(arr_7 [i_0] [i_0] [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1395110325)) ? (((/* implicit */long long int) -1546827644)) : (-1LL))))))));
                                var_16 ^= 10142154987247036665ULL;
                                var_17 = ((/* implicit */unsigned long long int) ((int) ((_Bool) 4294967295U)));
                                arr_13 [i_0] [i_0] [0ULL] [(_Bool)1] &= ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) (short)13573))))))) : (min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)223)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)39))) * (16719559036562863780ULL))))));
                            }
                        } 
                    } 
                    var_18 &= ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_4)))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) 6983306736621694571LL)))) : ((-9223372036854775807LL - 1LL))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 4) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 4) 
                        {
                            {
                                arr_21 [i_2] [i_6] = max((1727185037146687836ULL), (((/* implicit */unsigned long long int) 831544203)));
                                arr_22 [i_6] [i_2] [i_2] [i_2] [(_Bool)1] = max((((((arr_19 [i_0] [i_0] [i_0] [i_0] [i_0]) / (((/* implicit */long long int) ((/* implicit */int) var_5))))) / (((/* implicit */long long int) ((((/* implicit */unsigned int) -831544225)) / (var_10)))))), (((long long int) min((((/* implicit */unsigned long long int) var_0)), (14797786009017434035ULL)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (short i_7 = 1; i_7 < 23; i_7 += 3) 
    {
        for (short i_8 = 0; i_8 < 25; i_8 += 4) 
        {
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                {
                    var_19 += ((/* implicit */_Bool) ((int) ((_Bool) 831544225)));
                    var_20 = ((/* implicit */long long int) min((((/* implicit */int) ((arr_24 [i_7]) != (arr_24 [i_7])))), ((-(((/* implicit */int) arr_27 [i_7 - 1]))))));
                }
            } 
        } 
    } 
    var_21 = var_6;
    var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((var_9) + (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) ^ (140737488355327ULL)))) ? (((var_6) ? (((/* implicit */unsigned long long int) 130862373)) : (3648958064692117580ULL))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) (_Bool)0)), (-353109353)))))))))));
}

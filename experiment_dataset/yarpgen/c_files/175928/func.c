/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175928
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (signed char i_1 = 4; i_1 < 17; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 2; i_2 < 15; i_2 += 4) 
                {
                    for (int i_3 = 3; i_3 < 17; i_3 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned long long int) ((unsigned char) -37647350));
                            arr_8 [i_3] [i_2] [i_1 - 3] [i_0] [i_3] = ((/* implicit */int) var_4);
                            arr_9 [i_3] [i_2 + 4] [i_3] [i_3] [i_0] [i_0] = ((/* implicit */_Bool) var_6);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_4 = 0; i_4 < 19; i_4 += 2) 
                {
                    for (unsigned short i_5 = 1; i_5 < 16; i_5 += 1) 
                    {
                        {
                            arr_14 [i_5] [16] [i_1] [i_4] [(_Bool)1] = ((/* implicit */_Bool) var_16);
                            arr_15 [i_5] [i_5] [i_5] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_13 [i_5] [i_5] [i_4] [i_0])) ? (((/* implicit */unsigned long long int) arr_6 [i_0] [i_0])) : (((((/* implicit */_Bool) arr_13 [(_Bool)1] [i_4] [i_1 + 2] [i_0])) ? (8181789201965940516ULL) : (((/* implicit */unsigned long long int) arr_10 [i_0] [i_1 - 2] [i_4] [i_5])))))) >= (((/* implicit */unsigned long long int) arr_13 [i_5 + 3] [i_1 + 1] [i_4] [i_5]))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_10)) : (var_8)))) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) (short)-21987)) ? (var_12) : (((/* implicit */int) var_0))))))) * (var_11)));
}

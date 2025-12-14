/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160243
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 9; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_2 = 3; i_2 < 9; i_2 += 3) 
                {
                    var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) (+((+(((/* implicit */int) arr_7 [i_2 - 3] [i_2 + 1] [i_2 - 1] [i_2 - 1])))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 8; i_3 += 4) 
                    {
                        for (short i_4 = 2; i_4 < 7; i_4 += 1) 
                        {
                            {
                                var_16 = (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)32))))));
                                arr_15 [i_0] [i_1] [i_3] [i_3 - 1] [i_4] |= ((/* implicit */unsigned char) (-((+(((/* implicit */int) var_9))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 1; i_5 < 8; i_5 += 3) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 10; i_6 += 1) 
                        {
                            {
                                arr_22 [i_0] [i_0] [i_2] [i_0] [(_Bool)1] = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) 3663157019U))))));
                                arr_23 [i_0] [(_Bool)0] [i_2 - 2] [i_2] [i_2 - 3] [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) (~(-1865304723))))));
                                var_17 = ((/* implicit */long long int) (+((+(1226263796)))));
                            }
                        } 
                    } 
                }
                arr_24 [i_0] = (+(((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (short)-12)))))))));
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 9; i_7 += 2) 
                {
                    for (int i_8 = 2; i_8 < 8; i_8 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_10 [i_7] [i_7 - 1] [i_7] [i_7 - 1])))))));
                            var_19 = ((/* implicit */_Bool) (-((~((~(((/* implicit */int) (short)-12))))))));
                        }
                    } 
                } 
                var_20 ^= (~((-(((/* implicit */int) var_8)))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) (!(var_9))))));
    var_22 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_8)))))));
    var_23 = ((/* implicit */unsigned int) var_13);
    var_24 = ((/* implicit */unsigned short) var_12);
}

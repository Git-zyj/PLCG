/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172160
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
    var_11 = ((/* implicit */unsigned int) var_0);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 10; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 13; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        for (long long int i_4 = 1; i_4 < 12; i_4 += 2) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned int) 17623181710870547102ULL);
                                var_13 = ((/* implicit */_Bool) ((max((4026253026011364915ULL), (var_8))) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
                                arr_15 [i_3] = ((/* implicit */_Bool) arr_3 [i_0] [i_0]);
                                arr_16 [i_1] [i_3] [i_3] [i_1] [i_3] [i_1] = ((/* implicit */unsigned int) max(((-(((/* implicit */int) var_0)))), (((/* implicit */int) arr_14 [i_0] [i_1] [i_1] [i_1] [i_1] [i_4]))));
                            }
                        } 
                    } 
                } 
                var_14 &= ((/* implicit */unsigned int) (((~(3059209076U))) <= (arr_3 [i_0] [i_0])));
                /* LoopNest 3 */
                for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 4) 
                {
                    for (long long int i_6 = 1; i_6 < 11; i_6 += 4) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                arr_24 [i_0] [i_5] [i_5] [i_6] [i_6 + 2] |= ((/* implicit */unsigned long long int) 280441394);
                                var_15 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_9))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_16 *= ((/* implicit */unsigned short) (+(((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) var_10))) + (var_5))) <= (min((((/* implicit */long long int) var_1)), (var_5))))))));
    var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) var_5))));
    var_18 &= ((/* implicit */short) var_1);
}

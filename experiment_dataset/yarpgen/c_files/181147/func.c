/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181147
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
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 24; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_0] [9U] = ((/* implicit */long long int) arr_3 [i_1 - 1]);
                var_11 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)0))) * (min((min((185730180U), (var_6))), (((/* implicit */unsigned int) ((var_10) <= (((/* implicit */unsigned int) 1536)))))))));
            }
        } 
    } 
    var_12 = ((/* implicit */_Bool) ((var_0) * (((/* implicit */long long int) min((((var_10) / (var_10))), (((/* implicit */unsigned int) ((unsigned char) (unsigned char)6))))))));
    /* LoopNest 2 */
    for (unsigned char i_2 = 4; i_2 < 9; i_2 += 3) 
    {
        for (long long int i_3 = 0; i_3 < 13; i_3 += 1) 
        {
            {
                arr_11 [i_3] [1U] [1U] |= ((/* implicit */unsigned char) min((((/* implicit */int) min((arr_1 [i_2 - 3] [i_2 + 1]), ((short)0)))), (((((/* implicit */int) (unsigned char)228)) % (((/* implicit */int) (unsigned char)228))))));
                /* LoopNest 2 */
                for (short i_4 = 0; i_4 < 13; i_4 += 1) 
                {
                    for (unsigned short i_5 = 3; i_5 < 11; i_5 += 3) 
                    {
                        {
                            arr_17 [(signed char)12] [(signed char)12] |= ((/* implicit */unsigned char) arr_3 [i_2]);
                            arr_18 [i_2] [i_2 - 2] [i_2] [i_2] [(signed char)0] |= ((/* implicit */short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_3] [i_3] [i_3] [i_3])) || (((/* implicit */_Bool) var_7))))), (max((var_10), (((/* implicit */unsigned int) (unsigned short)57695))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_6 = 2; i_6 < 18; i_6 += 1) 
    {
        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
        {
            {
                var_13 = arr_1 [i_6] [i_6];
                arr_24 [i_6] [i_6] = ((/* implicit */_Bool) arr_20 [i_7] [i_6 - 1]);
                /* LoopNest 3 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    for (signed char i_9 = 2; i_9 < 15; i_9 += 1) 
                    {
                        for (short i_10 = 0; i_10 < 19; i_10 += 2) 
                        {
                            {
                                arr_35 [i_6 - 1] [i_9] [i_10] [i_9 + 1] [i_10] = ((min((min((((/* implicit */unsigned long long int) (_Bool)1)), (var_7))), (max((((/* implicit */unsigned long long int) var_6)), (18446744073709551615ULL))))) <= (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_7)) ? (var_10) : (arr_22 [(unsigned short)14]))), (1011154548U)))));
                                arr_36 [i_6] [i_9] = ((/* implicit */unsigned int) ((unsigned short) (unsigned short)34610));
                                var_14 *= ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)30926)) : (-812806051)))))) ? (min((min((arr_30 [i_6] [12LL] [18LL] [i_9 + 2] [i_9] [i_10]), (var_6))), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) > (var_6)))))) : (1307499531U)));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}

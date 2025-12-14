/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133435
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
    for (unsigned short i_0 = 3; i_0 < 16; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 17; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            {
                                arr_16 [i_3] [i_1] [i_4] [i_3] [i_4] = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_12 [i_0 - 2] [i_0 - 2] [i_0 - 1] [i_0] [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [(short)3] [i_2] [i_1]))) : ((~(4527127787898170606LL))));
                                var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((4527127787898170586LL) > (-4527127787898170600LL))))));
                                var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_4) ? (arr_9 [i_3 - 1] [i_1] [i_2] [i_3] [i_4]) : (arr_9 [i_3 - 1] [i_1] [17] [i_2] [i_2])))) || (((/* implicit */_Bool) ((((/* implicit */int) var_11)) & (((/* implicit */int) arr_11 [i_3 - 2] [i_3 - 2] [i_2] [i_3 - 2] [(short)9])))))));
                                var_18 += ((/* implicit */unsigned long long int) min((((long long int) ((((/* implicit */unsigned long long int) 9598614)) & (arr_4 [i_0] [i_4])))), (((long long int) arr_14 [i_0] [i_0 - 2] [i_0 - 1] [i_3 - 2] [(unsigned short)6]))));
                                arr_17 [i_4] [i_3] [i_2] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) (short)12777)), (((int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [(signed char)13] [i_0 - 1] [i_0] [i_0]))) : (8488550043479864270LL)));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */long long int) min((var_19), (4527127787898170606LL)));
                    var_20 = ((/* implicit */unsigned long long int) min((arr_13 [i_0] [i_0] [i_1] [i_2] [i_2]), (((/* implicit */unsigned char) arr_5 [i_2]))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_5 = 0; i_5 < 20; i_5 += 2) 
    {
        for (int i_6 = 1; i_6 < 19; i_6 += 2) 
        {
            {
                var_21 = ((/* implicit */short) min((max((4527127787898170604LL), (-4527127787898170600LL))), (((/* implicit */long long int) max((((/* implicit */unsigned short) (signed char)0)), ((unsigned short)35380))))));
                /* LoopNest 3 */
                for (unsigned int i_7 = 0; i_7 < 20; i_7 += 2) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 20; i_8 += 2) 
                    {
                        for (int i_9 = 0; i_9 < 20; i_9 += 2) 
                        {
                            {
                                arr_33 [i_5] [i_6] [i_7] [i_8] [i_9] = ((/* implicit */short) (_Bool)0);
                                arr_34 [i_7] [i_7] [i_5] = ((/* implicit */_Bool) arr_27 [i_5] [i_5] [i_5] [(unsigned short)10] [i_5]);
                                var_22 = ((/* implicit */int) arr_32 [i_5] [i_5] [i_5] [i_5] [i_5]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}

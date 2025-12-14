/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16475
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
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 13; i_1 += 2) 
        {
            for (unsigned short i_2 = 2; i_2 < 11; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */long long int) var_12);
                    var_16 -= ((/* implicit */unsigned char) 8423836961689037223ULL);
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 11; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 14; i_4 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned char) var_10);
                                arr_14 [i_0] [8LL] [i_2] [(_Bool)1] = ((/* implicit */signed char) arr_2 [i_3]);
                                arr_15 [13LL] [i_3] = ((/* implicit */_Bool) (~(((/* implicit */int) (!((!(((/* implicit */_Bool) (short)23565)))))))));
                                arr_16 [i_0] [i_1] [i_2 - 2] [9] [i_2 - 2] = ((/* implicit */int) 10U);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned int) 7626302788621697255LL);
    /* LoopNest 3 */
    for (short i_5 = 1; i_5 < 10; i_5 += 2) 
    {
        for (unsigned int i_6 = 1; i_6 < 11; i_6 += 2) 
        {
            for (signed char i_7 = 0; i_7 < 12; i_7 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 0; i_8 < 12; i_8 += 2) 
                    {
                        for (short i_9 = 2; i_9 < 9; i_9 += 2) 
                        {
                            {
                                arr_31 [i_6] [i_6] [i_7] = ((/* implicit */signed char) (-(arr_19 [i_5 + 1] [i_6])));
                                arr_32 [i_9] [i_9] &= ((/* implicit */int) var_5);
                                var_19 = ((/* implicit */int) var_10);
                                arr_33 [i_6 - 1] [i_7] [i_6] = ((/* implicit */_Bool) arr_13 [i_5] [i_6] [i_7] [i_8] [i_9]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_10 = 0; i_10 < 12; i_10 += 2) 
                    {
                        for (short i_11 = 1; i_11 < 9; i_11 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */int) arr_13 [i_5 + 2] [i_6] [i_6] [i_11] [i_10]);
                                var_21 = ((/* implicit */long long int) (+(((/* implicit */int) var_12))));
                                var_22 = ((/* implicit */unsigned int) arr_20 [(unsigned char)6] [i_6 - 1] [i_5]);
                                var_23 = ((/* implicit */long long int) (short)25376);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_12 = 0; i_12 < 12; i_12 += 2) 
                    {
                        for (unsigned int i_13 = 2; i_13 < 11; i_13 += 2) 
                        {
                            {
                                var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) (short)-25377))));
                                var_25 = ((/* implicit */signed char) (+(((/* implicit */int) (short)25387))));
                                var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) var_14))));
                                arr_45 [i_5 + 1] [i_6] [i_6] [6LL] [i_7] [i_12] [i_5 + 1] = min((min((((/* implicit */long long int) min((((/* implicit */short) var_7)), ((short)25389)))), (arr_2 [i_13 - 2]))), (((/* implicit */long long int) var_9)));
                                var_27 = ((/* implicit */int) (short)-25376);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}

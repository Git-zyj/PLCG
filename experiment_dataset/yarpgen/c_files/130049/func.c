/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130049
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
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            {
                var_16 = (~(((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) -463638700)))))));
                /* LoopNest 3 */
                for (short i_2 = 2; i_2 < 17; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) max((max((((/* implicit */unsigned int) var_14)), (104981894U))), (((/* implicit */unsigned int) (unsigned char)208))))), (min((((/* implicit */long long int) var_6)), ((~(arr_7 [i_0] [i_1] [i_2])))))));
                                var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_4 [i_1])) < (arr_0 [i_0]))) ? (arr_0 [i_0]) : (((/* implicit */int) arr_4 [i_3]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_2 + 2] [i_1 + 1] [i_2] [i_1 + 1])) ? (((/* implicit */int) arr_5 [i_1] [i_1 - 1])) : (-463638700)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_5 [i_1] [i_4]), (((/* implicit */short) arr_1 [i_3])))))) ^ (17270475089559662620ULL)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) var_4);
    /* LoopNest 2 */
    for (unsigned short i_5 = 0; i_5 < 23; i_5 += 3) 
    {
        for (long long int i_6 = 0; i_6 < 23; i_6 += 1) 
        {
            {
                arr_14 [i_6] [i_6] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)45)) ? (((/* implicit */int) (unsigned short)34585)) : (463638699)));
                /* LoopNest 3 */
                for (unsigned int i_7 = 0; i_7 < 23; i_7 += 3) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 23; i_8 += 3) 
                    {
                        for (unsigned int i_9 = 0; i_9 < 23; i_9 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((short) max((((/* implicit */long long int) (+(((/* implicit */int) arr_17 [i_6] [i_6] [i_6]))))), ((~(arr_16 [i_7] [i_8] [i_9])))))))));
                                var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) (short)-30682))));
                            }
                        } 
                    } 
                } 
                var_22 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_15 [i_5] [i_6] [i_5])) ? (arr_20 [i_6] [i_6] [i_6] [i_5] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (short)(-32767 - 1))))))) >= (((/* implicit */unsigned long long int) max((((/* implicit */int) ((arr_22 [i_6]) == (arr_22 [i_5])))), ((-(((/* implicit */int) (signed char)-127)))))))));
                var_23 |= ((/* implicit */unsigned short) ((int) max((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)63169)) || (((/* implicit */_Bool) arr_22 [i_5]))))), (((int) (unsigned short)63169)))));
                var_24 = (unsigned char)50;
            }
        } 
    } 
}

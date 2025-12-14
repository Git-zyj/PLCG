/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131594
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
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [5LL] [i_2] [i_2] = ((/* implicit */_Bool) ((((arr_9 [i_0] [i_1] [i_2]) ? ((+(var_10))) : (627716699))) | ((+(((/* implicit */int) arr_9 [i_0] [i_1] [i_2]))))));
                    var_20 = ((((((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (signed char)77)) : (((/* implicit */int) arr_1 [(short)7])))) != (((/* implicit */int) ((((/* implicit */int) var_7)) <= (((/* implicit */int) (unsigned short)31852))))))) ? ((-((+(((/* implicit */int) (short)-24721)))))) : (((((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) * (((((/* implicit */_Bool) var_13)) ? (var_10) : (((/* implicit */int) var_17)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 11; i_4 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) (!(((130899595U) < (((/* implicit */unsigned int) ((/* implicit */int) (short)-5196))))))))));
                                var_22 = arr_13 [i_2];
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_23 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (395422184) : (var_6)))) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 261888)) >= (10273541504216007295ULL))))));
    var_24 = ((/* implicit */signed char) (((((((~(1820012752))) & (((/* implicit */int) (signed char)-122)))) + (2147483647))) << (((((/* implicit */int) var_2)) - (3405)))));
    /* LoopNest 2 */
    for (unsigned char i_5 = 0; i_5 < 13; i_5 += 3) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            {
                /* LoopNest 3 */
                for (int i_7 = 3; i_7 < 12; i_7 += 4) 
                {
                    for (int i_8 = 0; i_8 < 13; i_8 += 3) 
                    {
                        for (long long int i_9 = 0; i_9 < 13; i_9 += 4) 
                        {
                            {
                                arr_30 [i_5] = ((/* implicit */int) (unsigned char)9);
                                arr_31 [i_5] [i_6] [i_7] [i_5] [i_9] [(unsigned char)12] = ((/* implicit */long long int) max(((-((-(((/* implicit */int) arr_17 [2LL])))))), (max((min((var_18), (1756574596))), (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) 1111559136U)))))))));
                            }
                        } 
                    } 
                } 
                var_25 ^= ((/* implicit */long long int) var_2);
                arr_32 [i_5] = ((/* implicit */unsigned long long int) var_7);
                /* LoopNest 2 */
                for (int i_10 = 2; i_10 < 11; i_10 += 1) 
                {
                    for (int i_11 = 0; i_11 < 13; i_11 += 2) 
                    {
                        {
                            var_26 = (~(min((((((/* implicit */int) arr_24 [i_5])) & (((/* implicit */int) arr_24 [(unsigned char)9])))), (((/* implicit */int) arr_36 [i_5] [4] [4] [i_10 - 1] [i_10] [12])))));
                            var_27 = ((/* implicit */signed char) (+(-1582520521)));
                            var_28 = ((/* implicit */int) 17886343204327448240ULL);
                            var_29 = ((/* implicit */long long int) (+(((/* implicit */int) min((var_17), (((/* implicit */signed char) arr_28 [i_5])))))));
                        }
                    } 
                } 
                var_30 = ((/* implicit */signed char) max((min((((/* implicit */long long int) ((((/* implicit */int) (signed char)-15)) < (((/* implicit */int) arr_26 [i_6] [i_5] [i_5] [(signed char)6] [i_5]))))), (min((((/* implicit */long long int) (unsigned short)56860)), (var_4))))), (max((var_12), (((/* implicit */long long int) -2029919580))))));
            }
        } 
    } 
    var_31 = ((/* implicit */unsigned char) var_3);
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116214
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
    for (unsigned char i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 23; i_1 += 4) 
        {
            {
                arr_5 [i_1] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)65534)) << (((var_8) - (1559814808)))))) * ((-(var_6)))))) : (((18446744073709551615ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-12045)))))));
                /* LoopNest 2 */
                for (long long int i_2 = 4; i_2 < 24; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        {
                            var_13 = ((/* implicit */signed char) min(((-(arr_2 [i_0 + 2]))), (((/* implicit */unsigned int) max((arr_4 [i_1 + 2] [i_2 - 4]), (((/* implicit */short) var_0)))))));
                            var_14 = ((/* implicit */unsigned int) min((var_14), (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (min((arr_2 [i_0 - 1]), (((/* implicit */unsigned int) min((-1931116797), (((/* implicit */int) var_4)))))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 25; i_4 += 2) 
                {
                    for (int i_5 = 2; i_5 < 22; i_5 += 3) 
                    {
                        {
                            var_15 = ((/* implicit */_Bool) ((((((/* implicit */int) arr_15 [i_0 + 1])) << (((((/* implicit */int) (unsigned short)8499)) - (8486))))) << ((((((~(496))) + (514))) - (10)))));
                            arr_16 [i_5] [i_5] [i_4] [i_5] = ((/* implicit */unsigned int) min(((+(((/* implicit */int) (_Bool)1)))), ((((-(((/* implicit */int) arr_8 [i_0] [i_1 - 1] [i_4])))) * (((/* implicit */int) var_1))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        for (signed char i_7 = 0; i_7 < 11; i_7 += 3) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                    {
                        for (unsigned int i_10 = 0; i_10 < 11; i_10 += 4) 
                        {
                            {
                                arr_34 [i_10] [i_10] [i_8] [i_10] [i_6] |= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (3500691058063208417ULL)))));
                                var_16 = (((!(((/* implicit */_Bool) (signed char)-120)))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((max(((unsigned char)0), (((/* implicit */unsigned char) (_Bool)1)))), (((/* implicit */unsigned char) arr_21 [i_6])))))) : (min((((/* implicit */unsigned int) max((arr_0 [i_10]), (var_8)))), (((((/* implicit */_Bool) -1218421308)) ? (arr_18 [i_6]) : (1517523615U))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    for (short i_12 = 0; i_12 < 11; i_12 += 4) 
                    {
                        {
                            arr_43 [i_12] [i_7] [i_6] [i_7] [i_6] = ((/* implicit */signed char) (unsigned char)15);
                            var_17 *= ((/* implicit */unsigned long long int) max(((~(((/* implicit */int) (short)6332)))), (((((/* implicit */int) (signed char)50)) << (((((/* implicit */int) arr_36 [i_7] [i_11] [i_12])) - (26279)))))));
                            var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) (+(((min((var_6), (5U))) << (((((/* implicit */int) (unsigned char)3)) << (((/* implicit */int) (_Bool)1)))))))))));
                            arr_44 [i_6] [i_11] [i_7] [i_12] = ((/* implicit */int) ((((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) arr_37 [i_6] [i_6] [i_11] [i_12])) : (((/* implicit */int) var_5))))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) * (15247858663912056475ULL))))) << ((((-(var_8))) + (1559814867)))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (int i_13 = 1; i_13 < 10; i_13 += 4) 
                {
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        for (unsigned int i_15 = 0; i_15 < 11; i_15 += 1) 
                        {
                            {
                                var_19 ^= ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (unsigned short)22197)))) ? (((/* implicit */unsigned int) min(((+(((/* implicit */int) (signed char)-123)))), (((/* implicit */int) max(((unsigned short)30903), (((/* implicit */unsigned short) arr_20 [i_6])))))))) : (((268313786U) << (((892368186) - (892368157)))))));
                                var_20 &= ((/* implicit */signed char) var_10);
                                arr_53 [i_7] [i_7] [i_7] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) min((((/* implicit */signed char) arr_52 [i_6] [i_7] [i_7])), (var_4))))))), (arr_25 [i_6])));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (short i_16 = 1; i_16 < 7; i_16 += 1) 
                {
                    for (unsigned int i_17 = 3; i_17 < 9; i_17 += 3) 
                    {
                        {
                            arr_60 [i_7] [i_7] [i_7] = ((/* implicit */unsigned long long int) arr_52 [i_7] [i_16] [i_7]);
                            arr_61 [i_16] [i_7] [i_7] [i_16] [i_6] [(signed char)4] |= ((/* implicit */unsigned int) (((((-(min((65535), (((/* implicit */int) (unsigned short)62886)))))) + (2147483647))) << (((((/* implicit */int) (signed char)86)) - (86)))));
                            arr_62 [i_7] [i_16] [i_16] [i_6] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((9765252249098112282ULL), (((/* implicit */unsigned long long int) var_7))))) ? ((~(((5765868747237278704LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1040))))))) : (((/* implicit */long long int) (-(min((arr_50 [i_6] [i_7] [i_6] [i_16] [i_16] [i_17] [i_17]), (var_8))))))));
                        }
                    } 
                } 
                var_21 &= ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65535)) << (((/* implicit */int) (_Bool)1))));
            }
        } 
    } 
}

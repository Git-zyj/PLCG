/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12539
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
    for (short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) (_Bool)1))));
                            var_18 = ((/* implicit */long long int) max((var_18), (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_2 [i_0] [i_0] [i_0])) >= (((/* implicit */int) (unsigned short)0)))))) + (((arr_5 [i_1]) / (((/* implicit */long long int) ((/* implicit */int) ((4413312760911226643ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-16252)))))))))))));
                            var_19 = ((/* implicit */unsigned long long int) min((((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2] [i_3]))) < (((((/* implicit */_Bool) -4101004436018363690LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_3] [1ULL] [i_0]))) : (arr_8 [i_0] [i_0] [i_0] [i_0] [i_2] [i_2])))))), (((signed char) arr_6 [i_0] [i_0]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_4 = 4; i_4 < 7; i_4 += 3) 
                {
                    for (long long int i_5 = 2; i_5 < 9; i_5 += 3) 
                    {
                        {
                            arr_16 [i_0] [i_0] = (+(((/* implicit */int) arr_10 [i_4 + 4] [i_4 + 4] [i_4 + 4] [i_5 + 1])));
                            var_20 = ((/* implicit */unsigned short) (~(((arr_8 [i_5 - 2] [i_4 + 2] [i_4 + 2] [i_1] [i_0] [i_0]) / (((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_0] [i_0])) | (((/* implicit */int) (_Bool)1)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_6 = 0; i_6 < 13; i_6 += 2) 
    {
        for (int i_7 = 0; i_7 < 13; i_7 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                {
                    for (unsigned short i_9 = 0; i_9 < 13; i_9 += 2) 
                    {
                        {
                            var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_24 [i_8] [i_8 - 1] [i_8] [i_9])) ? (((/* implicit */int) (short)-4630)) : (((/* implicit */int) var_9))))), (((((/* implicit */_Bool) -1200768183)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_8] [i_8 - 1] [4LL] [i_6]))) : (arr_25 [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8 - 1]))))))));
                            var_22 |= ((/* implicit */signed char) min((((((/* implicit */_Bool) (short)-4630)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_18 [i_6] [i_9])) != (((/* implicit */int) arr_20 [i_6] [i_6])))))) : (arr_25 [i_7] [i_8 - 1] [i_8 - 1] [i_8 - 1]))), (((/* implicit */unsigned int) min((((((/* implicit */int) (short)4630)) != (((/* implicit */int) arr_23 [i_6] [i_9])))), (var_1))))));
                            var_23 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) arr_18 [i_6] [i_7]))))) ? (((((/* implicit */int) arr_22 [i_6] [i_6] [i_8 - 1] [i_9])) + (((/* implicit */int) arr_18 [i_9] [i_7])))) : (((((/* implicit */int) arr_22 [i_6] [i_7] [i_8 - 1] [i_9])) - (((/* implicit */int) var_13))))));
                            var_24 *= ((/* implicit */long long int) (~((-(var_3)))));
                            var_25 = ((/* implicit */int) var_13);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_10 = 0; i_10 < 13; i_10 += 1) 
                {
                    for (unsigned short i_11 = 1; i_11 < 10; i_11 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */signed char) (-(((/* implicit */int) var_13))));
                            var_27 = ((/* implicit */short) var_2);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (long long int i_12 = 1; i_12 < 11; i_12 += 1) 
                {
                    for (unsigned short i_13 = 0; i_13 < 13; i_13 += 4) 
                    {
                        for (short i_14 = 2; i_14 < 12; i_14 += 4) 
                        {
                            {
                                var_28 |= ((/* implicit */_Bool) (-(arr_35 [i_12 - 1] [i_14] [i_14 + 1] [i_14 - 1])));
                                var_29 = ((/* implicit */_Bool) ((unsigned int) min((12187962975015808486ULL), (((/* implicit */unsigned long long int) arr_38 [i_6] [i_6] [i_7] [i_13] [i_13] [i_14 + 1] [i_14 - 1])))));
                                var_30 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_24 [i_6] [i_12] [i_7] [i_14])) ? (((/* implicit */int) arr_24 [i_13] [i_13] [i_13] [i_13])) : (((/* implicit */int) (short)-4630))))), (min((((/* implicit */unsigned int) arr_24 [i_12] [i_7] [i_6] [i_6])), (var_5)))));
                                var_31 = ((/* implicit */int) arr_31 [i_7] [i_7] [i_7] [i_7]);
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_15 = 0; i_15 < 13; i_15 += 4) 
                {
                    for (int i_16 = 1; i_16 < 12; i_16 += 1) 
                    {
                        for (int i_17 = 2; i_17 < 12; i_17 += 2) 
                        {
                            {
                                var_32 += ((/* implicit */signed char) (short)13317);
                                arr_49 [i_7] [i_15] = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)39300))));
                                var_33 = ((/* implicit */int) min(((!(((/* implicit */_Bool) ((unsigned short) (unsigned short)23611))))), ((_Bool)1)));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}

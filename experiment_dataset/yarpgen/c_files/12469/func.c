/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12469
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
    for (unsigned char i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 7; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_0 + 2] [(signed char)4] = ((/* implicit */long long int) arr_2 [i_0] [0] [i_1]);
                arr_5 [i_0 + 1] = ((/* implicit */int) var_1);
                var_10 = ((/* implicit */short) max((((((/* implicit */_Bool) var_5)) ? (max((arr_1 [i_0]), (var_9))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))), ((~(max((var_9), (((/* implicit */unsigned int) var_5))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 23; i_2 += 4) 
    {
        for (unsigned char i_3 = 0; i_3 < 23; i_3 += 3) 
        {
            {
                arr_12 [i_2] [(_Bool)1] [i_2] &= arr_11 [i_2] [i_2] [i_3];
                /* LoopNest 3 */
                for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 4) 
                {
                    for (int i_5 = 0; i_5 < 23; i_5 += 4) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 23; i_6 += 3) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned int) 0LL);
                                var_12 = ((/* implicit */long long int) min((var_12), (((long long int) max((arr_15 [i_2]), (((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) arr_20 [18LL] [(unsigned char)0] [18LL] [i_5] [i_5] [i_5] [i_5])) : (((/* implicit */int) arr_16 [i_2])))))))));
                                var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) (((~(((/* implicit */int) (short)-2485)))) >> (((((/* implicit */_Bool) 13198456825183440915ULL)) ? (((((((/* implicit */int) (short)-2486)) + (2147483647))) >> (((((/* implicit */int) arr_19 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])) - (39))))) : (((/* implicit */int) arr_10 [i_4])))))))));
                                arr_22 [i_2] [i_2] [i_4] [i_2] [i_2] &= ((unsigned char) ((((/* implicit */_Bool) ((arr_13 [i_2] [i_3] [i_4] [i_2]) + (((/* implicit */unsigned int) var_4))))) ? (((/* implicit */long long int) min((((/* implicit */int) var_1)), (var_4)))) : (((((/* implicit */_Bool) arr_9 [i_5] [i_3])) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2])))))));
                            }
                        } 
                    } 
                } 
                var_14 = ((/* implicit */signed char) var_2);
                /* LoopNest 2 */
                for (unsigned int i_7 = 0; i_7 < 23; i_7 += 3) 
                {
                    for (unsigned short i_8 = 0; i_8 < 23; i_8 += 2) 
                    {
                        {
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (unsigned int i_9 = 1; i_9 < 21; i_9 += 3) 
                            {
                                arr_29 [i_3] = ((/* implicit */signed char) -578030787220593404LL);
                                var_15 = ((/* implicit */short) var_9);
                                var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)127)) ? (arr_17 [i_2] [i_2] [(signed char)3] [15] [15] [i_9 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
                                var_17 = ((/* implicit */unsigned char) (-(-5064334678980588639LL)));
                                arr_30 [i_3] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1250068092U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_8]))) : (0LL))))));
                            }
                            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                            {
                                var_18 = ((/* implicit */_Bool) (~(0LL)));
                                var_19 = max((((short) max((((/* implicit */unsigned int) (_Bool)0)), (var_7)))), (((/* implicit */short) (((~(((/* implicit */int) var_3)))) != (((/* implicit */int) var_6))))));
                                var_20 *= arr_13 [i_2] [i_7] [i_7] [i_2];
                                arr_34 [i_3] [i_3] [16U] [i_10] = ((/* implicit */signed char) arr_15 [i_2]);
                            }
                            for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                            {
                                var_21 *= ((/* implicit */short) arr_37 [i_11] [i_3] [(short)20] [i_7] [16] [(short)20]);
                                var_22 += ((/* implicit */short) min((var_9), (((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2]))) >= (arr_37 [10U] [i_2] [i_3] [i_7] [i_8] [i_11])))))));
                                var_23 |= ((/* implicit */unsigned int) ((((/* implicit */int) arr_18 [i_7] [i_7] [i_7] [i_11 - 1] [i_11 - 1] [i_8] [i_8])) - (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)0)))))));
                            }
                            arr_38 [i_3] [i_7] = ((/* implicit */unsigned int) min(((-(((/* implicit */int) arr_8 [i_7])))), (((/* implicit */int) min((((/* implicit */unsigned char) ((signed char) arr_37 [i_2] [4ULL] [(signed char)13] [i_2] [i_2] [i_2]))), (var_1))))));
                            var_24 = ((/* implicit */unsigned char) arr_27 [(signed char)4] [(signed char)4] [i_7] [i_8] [i_8]);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_12 = 1; i_12 < 10; i_12 += 1) 
    {
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            {
                var_25 += ((/* implicit */signed char) (!(((/* implicit */_Bool) max(((~(204350065))), (-204350078))))));
                var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((int) ((unsigned long long int) var_9))))));
            }
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134506
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
    for (unsigned short i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 4; i_2 < 9; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        {
                            var_11 = ((/* implicit */unsigned char) ((((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)234))))) - (arr_5 [i_0] [i_2] [i_3])));
                            var_12 = ((/* implicit */long long int) min(((~(((/* implicit */int) (signed char)-115)))), ((+(((/* implicit */int) (_Bool)1))))));
                            var_13 = ((/* implicit */unsigned short) (signed char)-118);
                            var_14 *= ((/* implicit */_Bool) min(((+(arr_4 [i_0] [i_1]))), (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)15733))) + ((-(arr_3 [i_1] [(unsigned short)5])))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_4 = 4; i_4 < 8; i_4 += 1) 
                {
                    for (signed char i_5 = 3; i_5 < 7; i_5 += 2) 
                    {
                        {
                            var_15 ^= arr_4 [i_4 - 1] [i_5];
                            var_16 = ((/* implicit */unsigned short) max((((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) max((arr_7 [i_0] [i_0] [(signed char)2]), (arr_2 [i_0]))))))), (((signed char) ((unsigned short) arr_1 [i_1] [i_1 - 1])))));
                            arr_14 [i_4] = arr_6 [i_0] [i_1] [i_4 - 2] [i_5];
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_6 = 2; i_6 < 7; i_6 += 1) 
                {
                    for (unsigned short i_7 = 0; i_7 < 10; i_7 += 2) 
                    {
                        for (unsigned short i_8 = 1; i_8 < 6; i_8 += 2) 
                        {
                            {
                                arr_24 [i_0 + 2] [i_0 + 2] [3LL] [i_7] [i_8] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((-89772642424186566LL), (((/* implicit */long long int) (_Bool)1))))) ? ((+(((/* implicit */int) (unsigned char)0)))) : (((/* implicit */int) max((max((((/* implicit */unsigned short) (signed char)-97)), (var_4))), (((/* implicit */unsigned short) var_7)))))));
                                var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((unsigned char) min((min((arr_3 [i_7] [i_1]), (89772642424186566LL))), (((/* implicit */long long int) min((var_8), (var_8))))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_9 = 0; i_9 < 25; i_9 += 4) 
    {
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    for (unsigned short i_12 = 0; i_12 < 25; i_12 += 4) 
                    {
                        {
                            var_18 = var_5;
                            var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_34 [i_9] [i_10] [i_9] [i_9] [i_12])) || (((/* implicit */_Bool) (~(((/* implicit */int) var_9)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_13 = 0; i_13 < 25; i_13 += 3) 
                {
                    for (unsigned short i_14 = 4; i_14 < 21; i_14 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) <= (var_2)))) > (((/* implicit */int) ((((/* implicit */int) arr_36 [i_9] [i_10] [i_10] [i_10])) >= (((/* implicit */int) arr_30 [i_14] [i_10] [i_10]))))))))));
                            arr_42 [i_10] = ((/* implicit */unsigned char) arr_37 [i_9] [i_9] [i_10]);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned short i_15 = 1; i_15 < 23; i_15 += 3) 
                {
                    for (signed char i_16 = 0; i_16 < 25; i_16 += 1) 
                    {
                        for (unsigned short i_17 = 1; i_17 < 24; i_17 += 4) 
                        {
                            {
                                arr_52 [i_9] [i_9] [i_9] [i_9] [i_10] [(signed char)0] [i_9] = ((/* implicit */unsigned short) min((((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) arr_46 [i_15])), (var_2))))))), (max((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (-89772642424186545LL))), (((/* implicit */long long int) ((signed char) arr_39 [i_10] [i_10] [i_10] [i_16] [i_10])))))));
                                var_21 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((arr_48 [i_9] [i_10] [i_9]) + (9223372036854775807LL))) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_39 [i_9] [i_10] [i_15] [i_16] [i_15])))))))) ? (((/* implicit */int) var_3)) : (max((((((/* implicit */int) arr_35 [i_10] [i_10] [i_10] [i_10] [i_9])) * (((/* implicit */int) arr_36 [i_9] [i_15] [i_9] [i_17])))), (((/* implicit */int) arr_45 [i_15] [i_15 + 2] [i_15 - 1] [i_15] [i_17 + 1] [i_17 - 1]))))));
                                var_22 = ((/* implicit */long long int) max((((/* implicit */unsigned short) var_5)), (arr_43 [i_9] [i_9])));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}

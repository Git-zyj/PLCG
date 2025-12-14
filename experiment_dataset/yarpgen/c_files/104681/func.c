/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104681
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
    for (short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)23035)) ? (((((/* implicit */_Bool) -11)) ? (arr_3 [i_0] [i_1]) : (((/* implicit */long long int) arr_0 [i_1] [i_1])))) : (arr_1 [i_0]))))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    for (long long int i_3 = 2; i_3 < 23; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 21; i_4 += 1) 
                        {
                            {
                                arr_16 [i_1] [i_1] = ((/* implicit */long long int) (-(arr_12 [i_4 + 1] [i_0] [i_3] [i_0] [i_0] [i_0])));
                                var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) var_12))));
                                var_16 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+((-(-5862558926688484801LL)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (arr_14 [i_2] [i_2] [i_1])))) ? (((/* implicit */int) ((unsigned char) arr_3 [i_3] [4]))) : (((((/* implicit */_Bool) -8230706969065764744LL)) ? (((/* implicit */int) (short)950)) : (((/* implicit */int) (_Bool)1))))))) : (min((var_1), (((/* implicit */long long int) (+(var_4))))))));
                                var_17 ^= ((/* implicit */unsigned long long int) max(((!(((/* implicit */_Bool) var_7)))), ((!(((/* implicit */_Bool) var_7))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_5 = 0; i_5 < 12; i_5 += 1) 
    {
        for (signed char i_6 = 0; i_6 < 12; i_6 += 3) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_7 = 0; i_7 < 12; i_7 += 3) 
                {
                    for (unsigned long long int i_8 = 1; i_8 < 8; i_8 += 1) 
                    {
                        for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 1) 
                        {
                            {
                                arr_30 [i_5] [i_6] [i_7] [i_5] [i_6] [i_9] = ((/* implicit */unsigned long long int) arr_24 [i_5]);
                                arr_31 [i_9] [4ULL] [i_7] [4ULL] [i_5] |= ((/* implicit */long long int) ((int) max((((/* implicit */long long int) arr_13 [i_8 + 4] [i_8] [i_8] [i_8 + 1])), (max((((/* implicit */long long int) (_Bool)1)), (arr_23 [i_9] [i_7] [i_5]))))));
                                var_18 |= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_11 [i_5] [i_8 + 1] [i_8] [i_8 + 1] [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)106))) : (((unsigned long long int) var_1))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_10 = 1; i_10 < 11; i_10 += 1) 
                {
                    for (unsigned short i_11 = 0; i_11 < 12; i_11 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((max((((/* implicit */long long int) (unsigned short)22988)), (var_8))), (((/* implicit */long long int) ((((/* implicit */int) var_2)) - (((/* implicit */int) arr_9 [i_5] [i_6] [i_10] [0])))))))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_24 [(unsigned char)4])), (((unsigned char) var_2)))))) : (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (signed char)6)) : (((/* implicit */int) (unsigned short)55984))))) ? (6934970796170246279LL) : (-2128694976083574822LL))))))));
                            arr_37 [8LL] [8LL] &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_3))));
                            arr_38 [i_5] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((signed char) (short)-951))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (short)17402))) : (var_7))) : (var_9))) - ((-(arr_33 [i_10 + 1] [i_10 + 1] [i_10 + 1])))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_12 = 0; i_12 < 12; i_12 += 1) 
                {
                    for (int i_13 = 0; i_13 < 12; i_13 += 3) 
                    {
                        {
                            arr_44 [i_6] [i_6] [(signed char)0] [(unsigned short)0] &= ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((unsigned char) ((arr_12 [i_5] [i_5] [(signed char)0] [i_5] [i_5] [i_5]) >= (((/* implicit */unsigned int) var_12)))))) : (((/* implicit */int) ((arr_21 [i_5]) >= (((((/* implicit */unsigned int) ((/* implicit */int) (short)950))) - (arr_12 [i_5] [i_6] [i_12] [4LL] [i_5] [4LL])))))));
                            var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)50)) ? (((/* implicit */int) (short)15360)) : (281088312))))));
                            var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((((((long long int) arr_6 [(short)4] [i_5])) + (9223372036854775807LL))) >> (((((/* implicit */int) ((unsigned short) (((-2147483647 - 1)) + (((/* implicit */int) (unsigned short)17458)))))) - (17441))))))));
                            arr_45 [i_5] [i_5] [i_12] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)20321)) ? (((/* implicit */unsigned int) min((var_12), ((~(((/* implicit */int) (signed char)114))))))) : (((arr_26 [i_5] [i_6] [i_12] [i_13] [i_13] [i_13]) >> (((var_8) - (4385178310591306270LL)))))));
                            arr_46 [i_5] [i_5] [i_5] [i_5] = ((((((((/* implicit */_Bool) (unsigned short)6807)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_6]))) : (arr_3 [i_5] [i_5]))) + (9223372036854775807LL))) >> (((((/* implicit */int) (short)-9330)) / (var_0))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_14 = 0; i_14 < 12; i_14 += 3) 
                {
                    for (signed char i_15 = 2; i_15 < 10; i_15 += 3) 
                    {
                        {
                            var_22 ^= ((/* implicit */signed char) var_5);
                            var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) max((arr_36 [i_5] [i_5]), (((/* implicit */unsigned int) var_11)))))));
                        }
                    } 
                } 
            }
        } 
    } 
}

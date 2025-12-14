/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127942
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
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 4; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned int) (unsigned short)50159);
                                var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((arr_10 [i_1] [i_4 + 1] [i_4 - 1] [i_4 - 1] [i_4 + 1] [i_4 - 1] [(unsigned char)5]), (arr_10 [i_3] [i_4 - 4] [i_4 - 2] [i_4] [i_4 - 3] [i_4 - 4] [9]))))));
                                var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((-2395901077486698485LL) / (((/* implicit */long long int) ((/* implicit */int) (short)30720))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 3) 
                {
                    for (unsigned int i_6 = 0; i_6 < 12; i_6 += 1) 
                    {
                        for (int i_7 = 0; i_7 < 12; i_7 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned long long int) arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                                var_23 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((arr_16 [i_1]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_5] [i_1] [i_7])))))) ? (((((/* implicit */int) (short)-941)) / (1255265028))) : (((/* implicit */int) (unsigned char)63))))));
                                var_24 *= ((/* implicit */signed char) max((-2272081217849880253LL), (((/* implicit */long long int) 536869888))));
                                var_25 = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((short)-30720), (((/* implicit */short) arr_9 [i_5]))))) ? (((((/* implicit */_Bool) (unsigned char)76)) ? (((/* implicit */int) (short)224)) : (((/* implicit */int) (unsigned char)246)))) : (((/* implicit */int) min(((short)30720), (((/* implicit */short) var_18)))))))) / (arr_2 [i_7] [i_1] [i_7])));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_8 = 0; i_8 < 10; i_8 += 4) 
    {
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (long long int i_10 = 2; i_10 < 8; i_10 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_11 = 1; i_11 < 8; i_11 += 4) 
                    {
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            {
                                var_26 = ((/* implicit */short) ((var_17) ^ (((/* implicit */long long int) min(((~(((/* implicit */int) var_4)))), (((/* implicit */int) var_4)))))));
                                arr_35 [i_8] [i_8] [i_8] [i_8] [i_8] |= max((((/* implicit */long long int) (unsigned short)20875)), (max((max((((/* implicit */long long int) (unsigned char)10)), (arr_19 [i_11] [(unsigned char)5] [i_11] [i_11] [i_11] [i_11 + 1]))), (((/* implicit */long long int) (!(var_18)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 10; i_13 += 3) 
                    {
                        for (int i_14 = 2; i_14 < 9; i_14 += 1) 
                        {
                            {
                                arr_42 [i_9] [i_9] = ((/* implicit */unsigned short) var_14);
                                arr_43 [i_9] [i_9] [i_9] [(signed char)5] [i_9] [i_9] = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) arr_7 [i_8] [i_8] [i_10] [i_14 + 1] [i_10 - 2] [i_13])) || (((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)63)), (arr_27 [(unsigned short)0] [i_10])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_15 = 2; i_15 < 8; i_15 += 4) 
                    {
                        for (int i_16 = 0; i_16 < 10; i_16 += 2) 
                        {
                            {
                                var_27 = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)31)) / (((((/* implicit */_Bool) ((unsigned short) (unsigned char)4))) ? (((/* implicit */int) arr_6 [i_10 - 1] [i_15 - 2])) : ((+(((/* implicit */int) arr_50 [i_8] [i_15 - 2] [i_8] [i_15] [i_8] [i_15] [(signed char)8]))))))));
                                var_28 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((arr_40 [i_10 - 2] [i_10 + 1] [i_9] [i_10 + 2] [i_10 + 2]) - (((/* implicit */int) var_7))))), (((((/* implicit */_Bool) max((((/* implicit */short) var_5)), (var_8)))) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_10 - 1])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}

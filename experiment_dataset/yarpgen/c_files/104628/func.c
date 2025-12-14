/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104628
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
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 23; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 22; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_1 + 1] [i_2] = ((/* implicit */unsigned short) (-((~((~(861683686U)))))));
                    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (min(((~(((/* implicit */int) arr_7 [i_0] [i_2] [i_1] [i_0])))), ((~(((/* implicit */int) arr_2 [i_0] [i_0])))))) : (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)23)), ((unsigned char)2))))));
                    arr_10 [i_0] = ((/* implicit */signed char) ((((/* implicit */long long int) (+(((/* implicit */int) min(((unsigned short)0), (((/* implicit */unsigned short) (signed char)-1)))))))) ^ (arr_8 [i_0] [i_0] [i_0])));
                    arr_11 [i_0] [i_1 + 1] [i_0] [i_0] = (!(((/* implicit */_Bool) (~(((/* implicit */int) var_3))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_2)))) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (min((var_7), (var_5))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (-(652050540)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((_Bool) var_11))))))));
    var_15 = ((/* implicit */unsigned char) var_0);
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_3 = 2; i_3 < 15; i_3 += 3) 
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 16; i_4 += 2) 
        {
            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
            {
                {
                    var_16 = (+((((_Bool)1) ? (((/* implicit */long long int) -253872649)) : (9057066349034724606LL))));
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 16; i_6 += 3) 
                    {
                        for (unsigned int i_7 = 0; i_7 < 16; i_7 += 3) 
                        {
                            {
                                var_17 ^= ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) arr_4 [i_4])) == (arr_19 [i_3] [i_5 - 1] [i_5 - 1] [i_4]))))));
                                arr_26 [i_3] [i_4] [i_5] [i_5] [i_5] = ((/* implicit */short) (+(5565999313321537028LL)));
                                var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_19 [14LL] [i_5 - 1] [i_7] [i_5])) ? (((/* implicit */int) arr_1 [i_5 - 1])) : (((/* implicit */int) ((unsigned short) arr_22 [i_3] [i_4] [i_5 - 1] [i_5] [i_6] [i_7])))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [(short)13])) || (((/* implicit */_Bool) arr_19 [i_3] [i_5] [i_5] [i_5]))));
                    /* LoopSeq 1 */
                    for (short i_8 = 1; i_8 < 14; i_8 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_9 = 0; i_9 < 16; i_9 += 1) 
                        {
                            var_20 = 2147483647;
                            var_21 = arr_17 [i_8];
                            arr_31 [(unsigned short)9] [i_4] [0LL] [i_5] [i_9] = ((/* implicit */unsigned char) arr_13 [i_5 - 1] [i_5 - 1]);
                        }
                        for (unsigned char i_10 = 0; i_10 < 16; i_10 += 2) 
                        {
                            arr_34 [i_3] [i_4] [i_5] [i_5] [i_8] [i_10] [i_10] = ((arr_12 [i_3 + 1]) + (arr_12 [i_3 - 2]));
                            arr_35 [i_3] [i_5] [i_5] = ((/* implicit */signed char) ((long long int) arr_0 [i_5]));
                        }
                        for (signed char i_11 = 0; i_11 < 16; i_11 += 3) 
                        {
                            arr_39 [i_5] [i_8] [i_4] [i_4] [i_5] = ((/* implicit */unsigned short) (signed char)4);
                            arr_40 [i_3 + 1] [i_5] [i_5] [i_5] [11] = ((/* implicit */signed char) -5565999313321537029LL);
                        }
                        arr_41 [(signed char)15] [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_19 [i_3 - 2] [i_3 - 2] [i_5 - 1] [i_5])) ? (arr_17 [(unsigned char)10]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_8 + 2] [i_5])))));
                        var_22 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_14 [i_3 + 1] [i_3 + 1])) : (arr_28 [i_3 - 1])));
                    }
                    var_23 = (~(var_5));
                }
            } 
        } 
        arr_42 [i_3] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_27 [i_3]))));
        var_24 = ((/* implicit */_Bool) 1797930039U);
    }
}

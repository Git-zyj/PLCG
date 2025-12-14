/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170685
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
    var_13 = ((/* implicit */unsigned short) var_2);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */int) (~(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -4449216320563470151LL)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_3 [i_0]))))) : (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) 0LL))))))));
                /* LoopSeq 4 */
                for (unsigned int i_2 = 0; i_2 < 14; i_2 += 2) 
                {
                    var_14 = max(((((+(arr_4 [i_2] [i_1]))) * (((/* implicit */unsigned int) min((((/* implicit */int) arr_2 [i_2] [i_0])), (var_7)))))), (((/* implicit */unsigned int) (_Bool)1)));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 14; i_4 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-4534))) : (16U)));
                                var_16 = ((/* implicit */unsigned int) ((min((((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_1] [i_2] [i_3]))))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)0)) : (arr_9 [i_1] [i_3] [i_2]))))) >> (((((/* implicit */int) var_4)) + (29888)))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */_Bool) ((unsigned char) ((int) 4ULL)));
                }
                for (signed char i_5 = 1; i_5 < 12; i_5 += 1) /* same iter space */
                {
                    arr_17 [i_1] [i_5] = ((/* implicit */int) ((arr_4 [i_0] [i_5]) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((min((arr_4 [i_0] [i_1]), (((/* implicit */unsigned int) var_1)))) >= (((/* implicit */unsigned int) ((/* implicit */int) min(((signed char)75), (((/* implicit */signed char) arr_13 [i_0] [i_0] [i_0] [i_1] [i_5]))))))))))));
                    var_18 = ((/* implicit */unsigned char) (~(((unsigned long long int) ((arr_13 [i_5] [i_5] [i_1] [i_1] [i_0]) ? (((/* implicit */int) (short)12316)) : (((/* implicit */int) var_3)))))));
                }
                for (signed char i_6 = 1; i_6 < 12; i_6 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 1) 
                    {
                        for (long long int i_8 = 0; i_8 < 14; i_8 += 2) 
                        {
                            {
                                arr_28 [i_6] [i_6] = ((/* implicit */unsigned int) ((signed char) 2944750950930670788LL));
                                var_19 = ((((arr_26 [i_6] [i_6] [i_6] [i_6] [i_6 - 1]) | (arr_26 [i_0] [i_6] [i_6] [i_6] [i_6 + 2]))) < (((((/* implicit */_Bool) arr_26 [i_6] [i_6] [i_6] [i_6] [i_6 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_1] [i_6] [i_6] [i_6] [i_6 + 1]))) : (arr_26 [i_0] [i_1] [i_1] [i_6] [i_6 + 2]))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (+(arr_23 [i_0] [i_6] [i_6] [i_1] [i_1])))), (min((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)31)) - (((/* implicit */int) (short)16248))))), ((-(18259059551972863205ULL)))))));
                }
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    var_21 = ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)7))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)105)))))) + (min((var_2), (((/* implicit */unsigned long long int) -1420168773902684886LL)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_9])) ? (((/* implicit */int) ((_Bool) arr_0 [i_1]))) : (((/* implicit */int) arr_15 [i_9] [i_1] [i_1] [i_0]))))));
                    /* LoopNest 2 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */_Bool) min((-1LL), (((/* implicit */long long int) (~(((/* implicit */int) arr_11 [i_11] [i_10] [i_9])))))));
                                arr_39 [i_10] [i_10] [i_10] [i_9] [i_1] [i_1] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) arr_7 [i_0] [i_10]))) ? (((((/* implicit */_Bool) arr_7 [i_0] [i_9])) ? (arr_7 [i_9] [i_10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)118))))) : (((/* implicit */unsigned long long int) (~(-1621411162505876195LL))))));
                                var_23 = ((/* implicit */short) ((((/* implicit */long long int) (+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_2 [i_1] [i_1])) : (var_5)))))) == (min((((/* implicit */long long int) arr_11 [i_9] [i_1] [i_9])), (((long long int) var_5))))));
                                arr_40 [i_10] = ((/* implicit */unsigned short) (~(((/* implicit */int) min((((/* implicit */short) (unsigned char)19)), (arr_16 [i_9]))))));
                            }
                        } 
                    } 
                    arr_41 [i_1] = ((/* implicit */signed char) var_11);
                    var_24 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)63170)) ? (((/* implicit */int) ((((arr_25 [i_0] [i_0] [i_0] [i_0] [i_1]) >> (((6891742934363720388LL) - (6891742934363720377LL))))) <= (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)0)))))))) : ((((+(((/* implicit */int) var_10)))) / ((~(arr_29 [i_9])))))));
                }
                var_25 = ((/* implicit */signed char) arr_19 [i_1] [i_1] [i_0] [i_0]);
            }
        } 
    } 
}

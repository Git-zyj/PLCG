/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165318
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
    var_12 = ((/* implicit */short) var_8);
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (long long int i_2 = 4; i_2 < 15; i_2 += 2) 
            {
                {
                    var_13 = ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)188))))) ? (((((/* implicit */int) var_1)) ^ (((/* implicit */int) (unsigned char)38)))) : (arr_8 [i_2] [i_2 - 3] [i_2 - 2]));
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (short i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            var_14 = ((/* implicit */int) var_6);
                            var_15 = ((/* implicit */signed char) ((((/* implicit */int) arr_3 [i_4])) - (max((((/* implicit */int) max(((unsigned char)0), (((/* implicit */unsigned char) (signed char)-11))))), (((arr_10 [i_4] [i_3] [i_2 - 3] [i_1] [i_0]) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (_Bool)1))))))));
                            var_16 &= ((/* implicit */signed char) ((long long int) var_7));
                        }
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_5 = 2; i_5 < 15; i_5 += 4) 
                        {
                            var_17 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_15 [i_0] [i_2 - 4] [i_3])) - (((/* implicit */int) var_6))));
                            var_18 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_10 [i_5] [i_5 - 2] [i_5] [i_5] [i_5])) : (((/* implicit */int) (unsigned short)255))));
                            var_19 = ((/* implicit */long long int) ((unsigned int) (unsigned char)68));
                            var_20 = ((/* implicit */int) var_7);
                        }
                        var_21 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((0U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_2] [i_2 + 1] [i_2 - 1] [i_2] [i_2])))))), (((arr_11 [i_3] [i_1] [i_2] [i_3] [5ULL]) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))));
                        var_22 = ((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) (unsigned char)175))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (arr_6 [i_1] [i_1]))))));
                        var_23 = ((/* implicit */unsigned char) arr_5 [i_0] [14] [i_0]);
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 4) 
                    {
                        var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_17 [i_0] [i_1] [i_2] [9ULL] [i_0])))), (((/* implicit */int) var_5))))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned char)55))))) & (((unsigned long long int) arr_18 [i_0] [i_1] [i_2 - 1] [i_2] [i_6])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)241)) : (-378803804))))))))));
                        var_25 ^= ((/* implicit */unsigned char) (((((-(arr_13 [i_0 - 2] [i_0 - 2] [i_0] [i_0 + 1] [i_0 - 2] [i_0] [i_0]))) == (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)255))))))) ? (((((/* implicit */_Bool) ((int) var_7))) ? ((~(((/* implicit */int) arr_0 [i_0])))) : (arr_16 [i_2 - 3] [i_0 - 2] [i_2] [i_6] [i_6]))) : (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 8589803520LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-65))) : (-4788696010493108484LL)))))));
                    }
                    for (long long int i_7 = 0; i_7 < 17; i_7 += 4) 
                    {
                        var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((min((-8589803531LL), (((/* implicit */long long int) arr_4 [i_1] [i_2])))), (((/* implicit */long long int) (+(((/* implicit */int) var_3)))))))) ? (((/* implicit */int) arr_2 [i_2 - 4])) : (((/* implicit */int) var_7))));
                        /* LoopSeq 1 */
                        for (unsigned int i_8 = 0; i_8 < 17; i_8 += 1) 
                        {
                            var_27 *= ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_1] [i_2] [i_2 - 4])) ? (((/* implicit */int) arr_10 [i_2 - 4] [i_2 - 3] [i_2] [i_2 - 4] [i_2 - 4])) : (((/* implicit */int) arr_10 [i_0 - 2] [i_0 - 2] [i_1] [i_0 - 2] [i_2 - 4])))), (((/* implicit */int) min(((unsigned char)68), (((/* implicit */unsigned char) arr_10 [i_0] [i_0] [i_0] [i_1] [i_2 - 4])))))));
                            var_28 = ((/* implicit */int) (unsigned char)49);
                        }
                        var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((8510689094824813665LL), (((/* implicit */long long int) (unsigned char)210))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */int) (signed char)-1)) ^ (((/* implicit */int) var_10)))) : (((/* implicit */int) var_3))))) : (4140992423531224422ULL))))));
                    }
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_9 = 0; i_9 < 17; i_9 += 4) 
    {
        for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
        {
            for (unsigned int i_11 = 0; i_11 < 17; i_11 += 3) 
            {
                {
                    /* LoopSeq 4 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
                    {
                        var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) arr_0 [i_9]))));
                        var_31 += ((/* implicit */int) (unsigned char)234);
                        var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) ((unsigned int) max((arr_12 [i_9] [i_10] [i_11] [i_12] [i_12] [i_12]), (arr_12 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])))))));
                    }
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
                    {
                        var_33 *= ((/* implicit */unsigned short) max((max((((/* implicit */unsigned int) ((int) arr_23 [13] [i_10] [i_10] [i_10] [i_10] [i_11] [i_13]))), (((((/* implicit */_Bool) (short)-19708)) ? (927030290U) : (((/* implicit */unsigned int) -183955047)))))), (((/* implicit */unsigned int) (_Bool)1))));
                        var_34 -= ((/* implicit */unsigned long long int) ((unsigned char) min((((/* implicit */unsigned long long int) (~(25165824U)))), (((unsigned long long int) -183955038)))));
                        var_35 += ((/* implicit */unsigned int) var_9);
                        var_36 |= ((/* implicit */unsigned int) ((long long int) var_10));
                    }
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
                    {
                        var_37 += ((/* implicit */unsigned char) arr_26 [i_10 + 1] [i_11]);
                        var_38 ^= ((/* implicit */int) min((((unsigned long long int) ((((/* implicit */_Bool) (unsigned char)191)) ? (var_2) : (((/* implicit */unsigned long long int) arr_33 [i_9] [i_10 + 1] [i_10 + 1] [i_9]))))), (((/* implicit */unsigned long long int) min((arr_33 [i_10 + 1] [i_10] [i_11] [i_14]), (((/* implicit */int) arr_22 [i_10 + 1] [i_14] [i_11] [i_14])))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_15 = 0; i_15 < 17; i_15 += 1) 
                    {
                        var_39 -= ((/* implicit */unsigned long long int) ((unsigned char) arr_34 [i_9] [i_9]));
                        var_40 = ((/* implicit */short) min((var_40), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1978589355)) ? (((/* implicit */long long int) 2507554981U)) : (-1LL)))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_6 [i_10] [i_10 + 1]))))));
                    }
                    var_41 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_22 [i_10 + 1] [i_10 + 1] [i_10 + 1] [i_10 + 1])) ? (((/* implicit */int) arr_10 [i_10] [i_10 + 1] [i_10 + 1] [i_10] [i_10])) : (((/* implicit */int) arr_22 [i_10 + 1] [i_10 + 1] [i_10 + 1] [i_10 + 1])))) - (((/* implicit */int) ((_Bool) arr_25 [i_10 + 1])))));
                }
            } 
        } 
    } 
}

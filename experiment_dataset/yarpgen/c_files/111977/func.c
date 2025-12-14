/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111977
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 24; i_1 += 3) 
        {
            {
                arr_6 [i_1] = ((/* implicit */int) (~(max((((/* implicit */unsigned int) 332294403)), (((((/* implicit */_Bool) var_1)) ? (arr_2 [i_1] [i_1 - 1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1] [i_0])))))))));
                /* LoopNest 3 */
                for (short i_2 = 4; i_2 < 23; i_2 += 2) 
                {
                    for (int i_3 = 4; i_3 < 24; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            {
                                arr_14 [(_Bool)1] [(_Bool)1] [i_1] [i_3] [i_4] = -1987869975;
                                arr_15 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) arr_8 [i_0] [i_0] [i_1] [i_0]);
                            }
                        } 
                    } 
                } 
                /* LoopSeq 4 */
                for (unsigned char i_5 = 0; i_5 < 25; i_5 += 3) 
                {
                    /* LoopNest 2 */
                    for (short i_6 = 0; i_6 < 25; i_6 += 2) 
                    {
                        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                        {
                            {
                                arr_25 [i_7 - 1] [i_6] [i_5] [i_5] [i_5] [i_6] [i_0] &= ((/* implicit */short) (~(arr_1 [i_7])));
                                arr_26 [i_6] [i_6] [i_1] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */int) ((-1523281018656147905LL) > (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65534)))));
                                arr_27 [i_0] [(unsigned char)15] [i_0] [i_1] [i_0] = min((min((((/* implicit */unsigned long long int) 2095561406501937158LL)), (11005659237875385400ULL))), (((/* implicit */unsigned long long int) (-((+(arr_4 [i_5] [i_5] [i_1])))))));
                                arr_28 [i_0] [i_1] [(_Bool)1] [i_6] [i_1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned char) (_Bool)1)))));
                                arr_29 [i_0] [i_1 - 1] [i_1] [i_1] [i_6] [i_7 - 1] = ((/* implicit */_Bool) (-(max((arr_20 [i_0] [i_1 + 1] [i_1 - 2] [i_7 - 1] [i_1] [i_7 - 1]), (((/* implicit */unsigned int) var_10))))));
                            }
                        } 
                    } 
                    arr_30 [i_1] [i_1] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_24 [16ULL] [16ULL] [i_1] [i_0] [i_1 - 1])) ? (-2095561406501937167LL) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1 - 2] [i_1])))))));
                }
                for (unsigned long long int i_8 = 0; i_8 < 25; i_8 += 2) 
                {
                    arr_33 [i_0] [i_1] [(unsigned short)11] = ((/* implicit */_Bool) arr_32 [i_1 + 1] [i_1 - 2] [i_1 - 2]);
                    arr_34 [i_1] [i_8] = max((2095561406501937163LL), (((/* implicit */long long int) -1289105313)));
                    arr_35 [i_1] [i_1] = ((/* implicit */_Bool) max((((/* implicit */long long int) (-(var_5)))), (max((-2095561406501937167LL), (((/* implicit */long long int) (unsigned short)64124))))));
                }
                for (int i_9 = 0; i_9 < 25; i_9 += 2) 
                {
                    /* LoopNest 2 */
                    for (long long int i_10 = 0; i_10 < 25; i_10 += 2) 
                    {
                        for (unsigned char i_11 = 0; i_11 < 25; i_11 += 3) 
                        {
                            {
                                arr_45 [i_0] [i_1] [i_0] = ((/* implicit */int) arr_42 [i_0] [i_1]);
                                arr_46 [i_11] [i_1] [20] [i_1] [i_0] = ((/* implicit */unsigned char) var_5);
                                arr_47 [i_0] [i_0] [i_0] [i_10] [i_0] = ((/* implicit */int) max((((unsigned long long int) 2095561406501937166LL)), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_5)) / (-2095561406501937167LL))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 25; i_12 += 3) 
                    {
                        for (unsigned char i_13 = 4; i_13 < 24; i_13 += 3) 
                        {
                            {
                                arr_55 [i_1] = var_5;
                                arr_56 [i_1] [i_1] [i_12] [i_12] [i_12] = ((/* implicit */short) ((unsigned long long int) min((((/* implicit */short) ((-2095561406501937164LL) == (arr_52 [i_0] [i_0] [i_0] [i_0] [i_0])))), (min(((short)13552), (((/* implicit */short) var_2)))))));
                                arr_57 [i_9] [i_1 - 1] [i_9] [i_12] [i_9] = ((/* implicit */long long int) max((((/* implicit */int) max((arr_37 [i_1 + 1]), (((/* implicit */short) var_8))))), (((((/* implicit */_Bool) arr_54 [i_1] [i_1] [i_1 + 1] [i_1 - 2] [i_1] [i_1 - 2] [i_13 - 1])) ? (((/* implicit */int) arr_54 [0LL] [0LL] [i_1 - 2] [(_Bool)1] [i_1] [i_1 + 1] [i_13 - 3])) : (((/* implicit */int) arr_5 [i_1 - 1] [i_1]))))));
                            }
                        } 
                    } 
                    arr_58 [i_0] [i_1] [i_0] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((min((2095561406501937163LL), (arr_52 [i_9] [i_9] [i_0] [i_1] [i_0]))), (((/* implicit */long long int) arr_1 [i_1 - 2]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_9 [i_0] [i_0])))) : (((2095561406501937180LL) | (((/* implicit */long long int) ((((/* implicit */int) var_10)) + (((/* implicit */int) arr_51 [i_0] [i_0] [i_1] [i_1] [i_9] [i_9])))))))));
                    arr_59 [i_1] [15] [i_9] [4] = ((/* implicit */signed char) ((max((((/* implicit */long long int) arr_48 [i_1] [i_1 - 1] [i_1 + 1])), (min((-2095561406501937159LL), (((/* implicit */long long int) arr_10 [i_9] [i_9] [i_9] [i_9] [i_9])))))) % (((((/* implicit */_Bool) arr_1 [i_1 - 1])) ? (max((2095561406501937163LL), (((/* implicit */long long int) var_7)))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_23 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]), (((/* implicit */short) (unsigned char)211))))))))));
                }
                /* vectorizable */
                for (int i_14 = 3; i_14 < 24; i_14 += 3) 
                {
                    arr_62 [i_14] [(_Bool)1] [(_Bool)1] [i_0] |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_37 [i_14 + 1])) ? (((/* implicit */int) arr_37 [i_14 + 1])) : (((/* implicit */int) arr_37 [i_14 - 3]))));
                    arr_63 [i_0] [i_1 - 1] [14] [i_14 - 1] = ((/* implicit */int) ((((int) arr_36 [(short)0] [(short)0])) <= (((/* implicit */int) var_7))));
                    arr_64 [i_1] = ((/* implicit */unsigned long long int) arr_0 [i_0] [i_1]);
                    arr_65 [i_1] [i_1] [i_1] = ((/* implicit */short) ((arr_1 [i_1 - 1]) / (((((/* implicit */_Bool) arr_17 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_53 [i_14] [i_1 - 2] [i_1] [i_1 - 1] [i_0]))))));
                    /* LoopNest 2 */
                    for (signed char i_15 = 0; i_15 < 25; i_15 += 1) 
                    {
                        for (signed char i_16 = 0; i_16 < 25; i_16 += 1) 
                        {
                            {
                                arr_71 [(signed char)22] [i_1] [i_1] [i_14] [i_1] [i_16] = arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0];
                                arr_72 [i_1] [i_14 + 1] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_70 [i_0] [i_1] [i_1 + 1] [i_15] [i_16] [i_1]))));
                                arr_73 [22ULL] [14U] [i_1] [22ULL] = ((/* implicit */unsigned char) ((long long int) var_4));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_17 = 2; i_17 < 16; i_17 += 2) 
    {
        for (short i_18 = 3; i_18 < 16; i_18 += 4) 
        {
            for (unsigned char i_19 = 0; i_19 < 17; i_19 += 2) 
            {
                {
                    arr_83 [i_17] [i_17 - 2] [i_17] [i_17 + 1] = ((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_41 [i_18 - 2] [i_18 - 2])), (arr_2 [i_18 - 2] [i_19] [i_17])))) == (((((/* implicit */_Bool) (~(((/* implicit */int) arr_48 [i_19] [i_18] [i_17]))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) + (arr_22 [i_17]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_17 - 1] [i_17]))))));
                    arr_84 [i_18] = ((/* implicit */short) var_11);
                    arr_85 [i_19] [i_19] [i_19] = (!((!(((_Bool) var_10)))));
                }
            } 
        } 
    } 
}

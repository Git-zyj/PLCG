/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180747
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
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 4; i_2 < 17; i_2 += 1) 
                {
                    for (unsigned int i_3 = 3; i_3 < 14; i_3 += 3) 
                    {
                        {
                            var_19 -= max((((((/* implicit */int) arr_8 [i_3 + 1])) - (((/* implicit */int) var_3)))), (((/* implicit */int) min((((/* implicit */short) arr_8 [i_3 + 3])), (arr_1 [i_3 - 2])))));
                            arr_12 [i_3] [i_0] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (unsigned short)7)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) (short)-31917))))) : (((/* implicit */int) min(((short)-31901), (((/* implicit */short) var_2)))))))));
                            var_20 ^= ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [(unsigned char)6])) && (((/* implicit */_Bool) min((((/* implicit */unsigned int) min((var_4), (arr_0 [i_2])))), (var_1))))));
                            arr_13 [i_0] [i_0] [(signed char)8] |= ((/* implicit */unsigned char) ((var_14) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) (unsigned char)133)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_14))))));
                        }
                    } 
                } 
                arr_14 [i_0] [i_1] [i_0] = ((/* implicit */short) min((min((((/* implicit */int) (_Bool)1)), (arr_11 [i_0] [i_0]))), (((/* implicit */int) arr_1 [i_0]))));
                /* LoopNest 2 */
                for (long long int i_4 = 1; i_4 < 15; i_4 += 2) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 3) 
                    {
                        {
                            arr_19 [(short)1] [(short)1] [i_0] [i_0] [5U] [8] = ((/* implicit */_Bool) min((((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) 253441226)) || (((/* implicit */_Bool) -1057245771)))))))), (5734941975506007521LL)));
                            arr_20 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) 972968727)) ? (((/* implicit */int) (signed char)121)) : (-1057245754))), ((((~(((/* implicit */int) (short)31901)))) & (((((/* implicit */int) var_14)) | (1799789470)))))));
                            arr_21 [(signed char)4] [(signed char)4] [i_4] [i_4] [i_4 + 3] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_18 [i_4 + 3] [i_4 + 3] [i_4 + 3] [i_4 + 3])) ? (((((/* implicit */_Bool) arr_18 [i_4 + 1] [i_4 + 2] [i_4 + 1] [i_4 + 2])) ? (((/* implicit */int) arr_18 [i_4 + 2] [i_4 + 2] [i_4 + 1] [i_4 + 2])) : (((/* implicit */int) arr_18 [i_4 + 3] [i_4 - 1] [i_4 + 3] [i_4 - 1])))) : (((((/* implicit */_Bool) arr_18 [i_4 - 1] [i_4 + 1] [i_4 + 1] [i_4 + 2])) ? (((/* implicit */int) var_13)) : (1057245755)))));
                            arr_22 [i_0] [i_1] [i_4 - 1] [i_1] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)32756)) : (1057245766))) << (((/* implicit */int) ((((/* implicit */int) var_3)) >= (((/* implicit */int) (short)-8787)))))))) || (((/* implicit */_Bool) var_8))));
                        }
                    } 
                } 
                var_21 += ((/* implicit */int) arr_7 [i_0]);
                arr_23 [i_0] = ((/* implicit */short) ((min((min((var_8), (((/* implicit */unsigned int) var_15)))), (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-22)) & (((/* implicit */int) var_6))))))) & (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        for (short i_7 = 0; i_7 < 17; i_7 += 2) 
        {
            {
                /* LoopNest 3 */
                for (int i_8 = 1; i_8 < 16; i_8 += 1) 
                {
                    for (unsigned char i_9 = 0; i_9 < 17; i_9 += 1) 
                    {
                        for (unsigned int i_10 = 2; i_10 < 13; i_10 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) (~(min((((3745660910U) << (((1799789474) - (1799789453))))), (((/* implicit */unsigned int) (unsigned short)15429)))))))));
                                arr_37 [i_6] [i_6] [i_9] [i_10] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) min((var_16), (arr_18 [i_10] [i_10 + 4] [i_10 + 2] [i_10]))))) <= (((((/* implicit */unsigned int) (+(((/* implicit */int) var_2))))) & (((960U) + (((/* implicit */unsigned int) -1057245789))))))));
                                arr_38 [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */int) min((((min((7628906982577239924ULL), (((/* implicit */unsigned long long int) arr_17 [i_7] [i_7] [i_8 - 1] [i_9] [i_7])))) * (min((2774211951797731538ULL), (((/* implicit */unsigned long long int) var_2)))))), (((((/* implicit */_Bool) arr_25 [6LL] [i_8 - 1])) ? (14506231777977494675ULL) : (((/* implicit */unsigned long long int) (+(-1799789473))))))));
                                var_23 -= ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) min((var_18), (((/* implicit */unsigned int) var_7))))) ? (arr_32 [i_10 + 4] [i_10] [(short)5] [(short)5] [(short)5] [i_10]) : (min((arr_32 [i_9] [i_7] [i_8] [i_9] [i_10] [i_7]), (((/* implicit */int) (unsigned short)15580)))))));
                            }
                        } 
                    } 
                } 
                arr_39 [i_6] [i_7] |= ((/* implicit */unsigned long long int) min((arr_1 [i_6]), (((/* implicit */short) arr_30 [i_6] [i_6] [i_6]))));
                /* LoopNest 2 */
                for (unsigned int i_11 = 0; i_11 < 17; i_11 += 4) 
                {
                    for (unsigned int i_12 = 3; i_12 < 16; i_12 += 1) 
                    {
                        {
                            arr_45 [2LL] [i_7] [i_6] [2LL] = ((/* implicit */int) min((1431743582042537545ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_31 [i_12] [(short)1] [i_11] [i_12 - 3])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_34 [i_6] [i_6] [i_6] [i_12 - 3])))))));
                            arr_46 [i_6] [i_6] = ((((((/* implicit */_Bool) arr_8 [i_12 - 3])) ? (1799789466) : (arr_25 [i_12 - 2] [i_7]))) == (((/* implicit */int) max((((/* implicit */unsigned char) var_7)), (arr_18 [i_12 + 1] [i_12 - 1] [i_12 - 1] [i_12 + 1])))));
                            var_24 = ((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) ((/* implicit */int) min((var_10), (var_15))))) * (((8098652931226752399ULL) >> (((/* implicit */int) var_16)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_12] [i_12] [i_12 + 1] [15U])) ? (((/* implicit */int) arr_42 [(short)6] [i_7] [i_12 - 2] [i_12])) : (((/* implicit */int) arr_42 [i_6] [i_7] [i_12 - 3] [i_12])))))));
                            arr_47 [i_6] [i_7] [i_6] [i_12 - 3] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_18 [i_6] [(signed char)10] [i_11] [i_12 - 3])) > (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_7 [i_12 - 1])) : (((/* implicit */int) arr_7 [i_12 - 1]))))));
                        }
                    } 
                } 
            }
        } 
    } 
}

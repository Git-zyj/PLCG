/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166267
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 13; i_1 += 2) 
        {
            for (int i_2 = 2; i_2 < 14; i_2 += 2) 
            {
                {
                    arr_7 [i_2 + 1] [i_1 + 1] [i_0] = ((/* implicit */unsigned long long int) var_6);
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            {
                                arr_14 [i_2] [i_2] = ((/* implicit */unsigned short) (~(var_2)));
                                arr_15 [i_0] [4U] [i_2] [4U] [i_4] [i_4] = ((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-2)) >= (((/* implicit */int) (signed char)-106)))) ? (((((/* implicit */_Bool) 4294967295U)) ? (4095ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)38065))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (((_Bool)0) && (((/* implicit */_Bool) -228262331))))))));
                                arr_16 [i_3] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (short)21905)) - (((/* implicit */int) (signed char)111))));
                                arr_17 [i_0] [(unsigned short)4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) 2489872687U)))) ? (((arr_1 [i_4]) / (arr_5 [i_3] [i_2] [i_1] [i_0]))) : (arr_3 [i_0] [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) && (((((/* implicit */int) (short)9549)) < (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0])))))))) : (((unsigned int) arr_4 [i_1 + 2] [i_1] [i_1 - 1]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 16; i_5 += 3) 
                    {
                        for (int i_6 = 0; i_6 < 16; i_6 += 4) 
                        {
                            {
                                arr_24 [i_1] [i_1] [i_5] [i_6] = ((/* implicit */long long int) arr_2 [i_0] [i_6]);
                                arr_25 [i_0] [i_0] [i_0] [i_5] [(unsigned short)10] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) arr_3 [i_1 - 1] [i_2 - 1])) == (min((((/* implicit */unsigned int) arr_12 [i_5] [i_1] [i_5] [i_5] [i_6] [i_6])), (var_2))))) ? (((/* implicit */int) ((unsigned char) (signed char)102))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_2 + 1] [i_1 + 1] [i_1 + 1] [i_0])))))));
                                arr_26 [i_5] [i_1] [i_1] = ((/* implicit */int) var_5);
                                arr_27 [i_0] [i_1] [i_2 - 1] [i_2] [i_1] = ((/* implicit */unsigned int) ((unsigned short) (-(arr_19 [i_2 + 2] [i_2 + 1] [i_2 - 1] [i_2 - 1]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)0))));
    /* LoopNest 2 */
    for (unsigned short i_7 = 3; i_7 < 21; i_7 += 4) 
    {
        for (signed char i_8 = 0; i_8 < 25; i_8 += 4) 
        {
            {
                arr_32 [i_7] [i_8] [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) max((max((((/* implicit */long long int) var_13)), (8782690601718879597LL))), (((/* implicit */long long int) (signed char)15))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_28 [i_7 + 4] [i_8])) * (((/* implicit */int) arr_28 [i_7 + 1] [i_7 + 1]))))) : (max((max((((/* implicit */unsigned long long int) -5897296151962210390LL)), (0ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_29 [i_7])) ? (333433489) : (((/* implicit */int) (unsigned char)5)))))))));
                arr_33 [i_7] [i_7] [i_7] = max((arr_29 [i_7]), ((~(((var_3) / (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_7] [18U]))))))));
                /* LoopNest 2 */
                for (unsigned short i_9 = 3; i_9 < 24; i_9 += 3) 
                {
                    for (unsigned short i_10 = 0; i_10 < 25; i_10 += 3) 
                    {
                        {
                            arr_40 [i_8] [i_9] [i_8] [i_8] |= ((/* implicit */unsigned char) (((_Bool)1) ? (4169764801U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)27425)))));
                            arr_41 [i_7] [i_8] = ((/* implicit */unsigned short) 8522380316808156432LL);
                        }
                    } 
                } 
                arr_42 [i_8] &= ((/* implicit */unsigned short) (+(-4065225725735953256LL)));
                /* LoopNest 3 */
                for (unsigned char i_11 = 0; i_11 < 25; i_11 += 2) 
                {
                    for (int i_12 = 0; i_12 < 25; i_12 += 3) 
                    {
                        for (long long int i_13 = 4; i_13 < 24; i_13 += 2) 
                        {
                            {
                                arr_50 [i_11] = ((/* implicit */unsigned int) ((unsigned short) (~(((((/* implicit */_Bool) -272872830)) ? (((/* implicit */long long int) arr_37 [i_7] [i_8] [i_11] [i_12] [(signed char)11] [i_13])) : (arr_29 [i_13]))))));
                                arr_51 [i_7] [i_8] [i_7] [i_12] [i_13] = min((min((((unsigned short) var_0)), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)-1))))))), (((/* implicit */unsigned short) arr_45 [i_7])));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_16 &= ((/* implicit */_Bool) var_2);
}

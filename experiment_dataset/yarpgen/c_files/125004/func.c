/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125004
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
    var_10 = ((/* implicit */signed char) var_0);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) 1417124567U)) % (18446744073709551615ULL)));
                var_12 += ((/* implicit */signed char) (~(((/* implicit */int) ((((262143LL) % (((/* implicit */long long int) ((/* implicit */int) (short)-13262))))) <= (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_5))))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */unsigned long long int) ((((-1868264220) + (2147483647))) >> (((((/* implicit */int) arr_7 [(unsigned short)10])) - (187)))))) : (var_0))))));
                                arr_11 [16] [i_1] [3U] [i_2] [i_3] [i_4] = ((/* implicit */unsigned long long int) (_Bool)1);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 22; i_5 += 2) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 22; i_6 += 1) 
                        {
                            {
                                arr_16 [i_6] [i_1] [i_2] [(signed char)1] [(signed char)1] [(unsigned short)17] [i_2] = ((/* implicit */signed char) ((arr_3 [(_Bool)1] [i_2] [i_1]) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
                                arr_17 [i_2] [i_5] [i_6] = (unsigned char)218;
                            }
                        } 
                    } 
                }
                for (unsigned int i_7 = 0; i_7 < 22; i_7 += 1) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        for (short i_9 = 3; i_9 < 18; i_9 += 2) 
                        {
                            {
                                arr_27 [i_9 + 1] [i_1] [(unsigned char)8] [i_1] [i_0] &= ((/* implicit */unsigned short) max(((-(((/* implicit */int) var_3)))), (((/* implicit */int) (short)-8800))));
                                arr_28 [i_7] [i_1] [i_9] = min((((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) var_1)) ? (8788891730749810088LL) : (((/* implicit */long long int) 3143378212U)))))), ((((-(7106053153354318701ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65528))))));
                                var_14 = ((/* implicit */unsigned char) (_Bool)1);
                                arr_29 [i_7] = ((/* implicit */int) arr_10 [i_9] [21LL]);
                            }
                        } 
                    } 
                    arr_30 [i_1] [i_1] |= ((((/* implicit */_Bool) ((unsigned long long int) var_7))) ? (((218108697U) / (((/* implicit */unsigned int) ((/* implicit */int) (short)8778))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) -1868264218)) ? (var_0) : (arr_1 [i_0]))) == (((/* implicit */unsigned long long int) -1868264224)))))));
                    var_15 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 742133503U)) % (((((/* implicit */unsigned long long int) 693234803U)) - (arr_1 [i_0])))));
                    /* LoopSeq 3 */
                    for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
                    {
                        arr_33 [20] [i_1] [i_0] [i_7] = ((/* implicit */_Bool) arr_0 [i_7]);
                        arr_34 [i_0] [i_1] [i_7] [i_1] [i_7] = ((/* implicit */long long int) (-(((/* implicit */int) (signed char)-30))));
                    }
                    /* vectorizable */
                    for (unsigned short i_11 = 0; i_11 < 22; i_11 += 1) 
                    {
                        arr_38 [i_11] [i_1] [(short)20] [i_1] [(short)20] |= ((/* implicit */unsigned char) ((arr_22 [(short)6] [i_1] [i_1] [i_11]) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0])))))));
                        var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_7])) >> (((((((/* implicit */_Bool) var_3)) ? (4343718841266609702ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) - (4343718841266609699ULL))))))));
                    }
                    for (unsigned int i_12 = 0; i_12 < 22; i_12 += 2) 
                    {
                        var_17 *= ((/* implicit */_Bool) min(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((693234791U) >= ((~(3601732505U))))))));
                        arr_43 [i_7] [17LL] [i_7] [i_1] [i_0] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~((~(((/* implicit */int) (unsigned char)6))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 2097151))))) : (((((/* implicit */_Bool) arr_21 [i_7])) ? (((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_12])) ? (((/* implicit */int) arr_40 [i_0] [i_7] [i_0] [i_0])) : (((/* implicit */int) var_9)))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))));
                    }
                }
                var_18 = ((((/* implicit */int) ((var_0) == (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-9239)))))) == (((/* implicit */int) arr_13 [(unsigned char)16] [(unsigned char)16] [20LL] [i_1])));
            }
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15718
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (int i_2 = 2; i_2 < 18; i_2 += 3) 
            {
                {
                    arr_7 [i_2 + 1] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (~(arr_4 [i_2 - 2] [i_2 - 2] [i_2 - 2])))) ? ((~(((((/* implicit */_Bool) 8682151567392451332ULL)) ? (((/* implicit */unsigned long long int) arr_3 [i_0])) : (1539258624235026491ULL))))) : (((/* implicit */unsigned long long int) -360109792))));
                    var_15 -= (-(((/* implicit */int) arr_6 [i_2 - 2] [i_2] [i_2] [i_2 - 1])));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */int) max(((~(max((((/* implicit */long long int) var_2)), (var_7))))), (((/* implicit */long long int) ((unsigned short) (~(1199650291096323527ULL)))))));
    var_17 = ((/* implicit */unsigned char) -885154141);
    var_18 = ((/* implicit */int) (-(var_14)));
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 19; i_3 += 2) 
    {
        for (long long int i_4 = 0; i_4 < 19; i_4 += 2) 
        {
            for (unsigned short i_5 = 0; i_5 < 19; i_5 += 4) 
            {
                {
                    var_19 = ((/* implicit */long long int) max((min((min((((/* implicit */int) var_8)), (266127550))), (((/* implicit */int) var_8)))), (389108267)));
                    /* LoopSeq 2 */
                    for (int i_6 = 1; i_6 < 17; i_6 += 1) /* same iter space */
                    {
                        var_20 = ((/* implicit */long long int) ((((min((4655594330148809333ULL), (((/* implicit */unsigned long long int) var_8)))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_6)))))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_6 + 1] [i_6] [i_6 + 1] [(unsigned short)3])) ? (var_7) : (((/* implicit */long long int) ((((/* implicit */_Bool) 17247093782613228089ULL)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)19)))))))))));
                        var_21 += ((/* implicit */_Bool) var_10);
                        /* LoopSeq 2 */
                        for (unsigned char i_7 = 0; i_7 < 19; i_7 += 4) 
                        {
                            var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)0)) ? (389108267) : (((/* implicit */int) (unsigned short)39354))));
                            var_23 = ((/* implicit */unsigned int) max((var_23), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_3] [i_6 + 1])) ? (arr_0 [i_6 + 2]) : (((/* implicit */unsigned int) arr_14 [i_6 - 1] [i_6 - 1]))))) ? (((arr_0 [i_6 + 2]) + (((/* implicit */unsigned int) arr_10 [i_3] [i_6 + 2])))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (var_3) : (((/* implicit */int) var_12)))))))));
                            var_24 = ((/* implicit */int) 17247093782613228089ULL);
                            arr_22 [i_3] [i_3] [i_5] [(unsigned short)10] [i_7] &= ((/* implicit */unsigned short) var_2);
                        }
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_25 = ((/* implicit */int) ((((/* implicit */_Bool) var_3)) ? (var_2) : (1122941452U)));
                            var_26 = ((((/* implicit */_Bool) ((long long int) ((unsigned short) arr_0 [i_3])))) ? (((/* implicit */unsigned long long int) ((long long int) -885154141))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 1357396237U)) | (1199650291096323538ULL)))) ? (((((/* implicit */_Bool) 16421365403998909127ULL)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_3] [0LL] [8] [i_8]))))) : (((/* implicit */unsigned long long int) 0U)))));
                            var_27 = ((int) -336839116);
                        }
                    }
                    /* vectorizable */
                    for (int i_9 = 1; i_9 < 17; i_9 += 1) /* same iter space */
                    {
                        var_28 = (unsigned char)3;
                        /* LoopSeq 2 */
                        for (unsigned int i_10 = 0; i_10 < 19; i_10 += 4) 
                        {
                            var_29 = -1689158569;
                            var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) (~(arr_21 [4LL] [i_9 + 1] [i_9 - 1] [i_4]))))));
                            var_31 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_27 [i_9 + 1] [i_9] [i_9] [i_9] [i_9 + 2])) ? (var_0) : (((/* implicit */unsigned long long int) arr_27 [i_9 + 1] [i_9] [12] [12] [i_9 + 2]))));
                            var_32 = ((/* implicit */int) ((((/* implicit */_Bool) 0)) || (((/* implicit */_Bool) arr_26 [i_3] [i_3] [i_3] [i_5] [i_9] [i_3]))));
                            var_33 = ((/* implicit */unsigned char) arr_15 [i_3] [i_3] [i_9]);
                        }
                        for (unsigned long long int i_11 = 1; i_11 < 17; i_11 += 1) 
                        {
                            arr_33 [i_11] [i_9] [10LL] [i_4] [i_11] = ((/* implicit */long long int) (~(arr_26 [14] [i_11 + 1] [i_11 + 2] [i_11 + 1] [i_11] [i_9 - 1])));
                            var_34 = ((((/* implicit */_Bool) var_12)) ? (-266127550) : (((/* implicit */int) arr_25 [i_11 + 1] [i_9 + 2] [i_9] [i_9] [i_4])));
                        }
                    }
                }
            } 
        } 
    } 
}

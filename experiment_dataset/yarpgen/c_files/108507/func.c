/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108507
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
    for (short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 21; i_2 += 4) /* same iter space */
                {
                    arr_7 [12] [i_1] [i_2] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((signed char) ((signed char) (unsigned short)65535))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_11 = (~(((/* implicit */int) var_10)));
                                var_12 -= ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */int) var_0)), (((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */int) arr_3 [i_2])) : (((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_3]))))))) && (((/* implicit */_Bool) ((unsigned short) var_7)))));
                                var_13 &= ((/* implicit */long long int) (-(((((/* implicit */_Bool) ((((/* implicit */int) var_0)) & (arr_1 [i_2])))) ? (((((/* implicit */_Bool) arr_0 [i_2])) ? (arr_6 [(unsigned char)18] [i_1] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_2] [i_3])) || (arr_8 [8ULL] [i_2] [i_1] [i_0])))))))));
                                var_14 = arr_1 [5U];
                            }
                        } 
                    } 
                }
                for (short i_5 = 0; i_5 < 21; i_5 += 4) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_6 = 0; i_6 < 21; i_6 += 2) /* same iter space */
                    {
                        var_15 -= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_1] [i_5] [i_6])) && (((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_5]))))), (min((((/* implicit */unsigned long long int) min((arr_9 [i_0] [1] [i_0] [i_6]), (((/* implicit */unsigned int) arr_8 [i_1] [i_1] [i_1] [i_1]))))), (((unsigned long long int) (unsigned short)65535))))));
                        var_16 = ((/* implicit */_Bool) min((1251340570U), (((/* implicit */unsigned int) (unsigned short)65535))));
                        arr_18 [i_0] [i_1] = ((/* implicit */unsigned short) min((min((((/* implicit */unsigned int) (unsigned short)1)), (3043626700U))), (((/* implicit */unsigned int) (~(arr_16 [i_0] [i_1] [i_5] [i_6] [(signed char)6] [i_1]))))));
                        var_17 = ((/* implicit */signed char) (~((-(2969783753643316308ULL)))));
                    }
                    for (unsigned int i_7 = 0; i_7 < 21; i_7 += 2) /* same iter space */
                    {
                        var_18 = ((/* implicit */signed char) ((((min((3991492373U), (((/* implicit */unsigned int) 1354497998)))) > (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1))))))) ? (((/* implicit */int) (((!(((/* implicit */_Bool) (unsigned char)7)))) || (((/* implicit */_Bool) var_5))))) : (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) -4367747667870777461LL)) ? (((/* implicit */int) (unsigned short)2159)) : (((/* implicit */int) (unsigned short)7))))))));
                        var_19 |= ((/* implicit */short) (((+(arr_5 [i_0] [i_1] [i_5] [i_7]))) + (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_9 [(short)7] [i_1] [i_5] [(unsigned char)4]))))));
                        var_20 = ((/* implicit */int) var_9);
                    }
                    for (unsigned int i_8 = 0; i_8 < 21; i_8 += 2) /* same iter space */
                    {
                        var_21 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned short) (unsigned char)249)))));
                        var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) arr_12 [i_1] [i_1]))));
                        var_23 ^= ((/* implicit */long long int) (unsigned char)196);
                        var_24 *= ((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_1] [i_5])) * (((((/* implicit */_Bool) arr_14 [i_5] [i_0] [i_5])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_14 [i_1] [i_5] [i_8]))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 3; i_9 < 20; i_9 += 2) 
                    {
                        for (int i_10 = 3; i_10 < 20; i_10 += 4) 
                        {
                            {
                                var_25 = ((/* implicit */int) ((((((/* implicit */_Bool) min((arr_26 [i_10] [i_9] [i_5] [i_1]), (((/* implicit */unsigned int) arr_25 [i_0] [i_5] [i_0]))))) ? (min((((/* implicit */unsigned int) (unsigned char)0)), (arr_26 [(unsigned short)11] [i_1] [i_5] [i_9]))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((signed char)127), (arr_2 [i_10] [i_1]))))))) * (((unsigned int) ((_Bool) 2147483647)))));
                                arr_29 [i_0] [i_1] [i_1] [i_5] [i_9] [i_10] [i_10] = ((/* implicit */unsigned short) (+(((min((var_8), (((/* implicit */unsigned long long int) (unsigned short)2)))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_11 = 2; i_11 < 18; i_11 += 4) 
                    {
                        for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                        {
                            {
                                arr_35 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((arr_19 [i_12 - 1] [i_12] [i_12] [18ULL] [i_12]) < (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) ? (arr_19 [i_12 - 1] [(_Bool)1] [(_Bool)1] [i_12] [i_12]) : (min((arr_19 [i_12 - 1] [i_12] [(unsigned char)1] [17U] [i_12]), (((/* implicit */unsigned int) (_Bool)0))))));
                                var_26 = ((/* implicit */int) min((var_26), (((arr_10 [(_Bool)0] [i_0] [i_11 + 1] [i_12 - 1] [i_12] [i_12]) ? (((arr_10 [i_5] [i_0] [i_11 + 1] [i_12 - 1] [i_11 + 1] [i_12]) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_10 [i_11] [i_11] [i_11 + 3] [i_12 - 1] [i_12] [i_12])))) : (-1)))));
                                arr_36 [i_0] = ((/* implicit */_Bool) arr_34 [i_0] [i_1] [i_5] [i_11] [i_1]);
                                arr_37 [i_0] [i_0] [i_5] [i_5] [i_5] = ((/* implicit */long long int) -1);
                            }
                        } 
                    } 
                }
                var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) (signed char)58)) ? (18115785172066212127ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)148)))))))));
                /* LoopNest 2 */
                for (signed char i_13 = 0; i_13 < 21; i_13 += 4) 
                {
                    for (int i_14 = 0; i_14 < 21; i_14 += 4) 
                    {
                        {
                            arr_43 [7] [i_1] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)29))) ^ (arr_32 [i_0] [i_1] [i_1] [i_13] [i_13] [i_14] [i_14])));
                            var_28 += ((/* implicit */unsigned int) (+(((/* implicit */int) var_10))));
                        }
                    } 
                } 
                var_29 = ((/* implicit */unsigned short) ((unsigned char) (-(((((/* implicit */_Bool) var_8)) ? (9223372036854775807LL) : (((/* implicit */long long int) arr_34 [i_0] [(short)19] [(short)19] [i_0] [18])))))));
            }
        } 
    } 
    var_30 = ((/* implicit */int) min((var_30), (((min((((/* implicit */int) (signed char)58)), ((~(-1327342055))))) >> (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)92)), (var_8)))) ? ((-(((/* implicit */int) var_6)))) : (((/* implicit */int) (unsigned short)20))))))));
    var_31 = ((/* implicit */signed char) var_3);
}

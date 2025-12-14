/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176330
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
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((var_8) < (((/* implicit */long long int) ((/* implicit */int) var_6))))) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) (signed char)42)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (min((min((10455440893362830324ULL), (((/* implicit */unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) (~(var_1))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((unsigned short) ((6023631804116441210ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))));
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 2) 
                {
                    var_17 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+((-(arr_1 [i_0])))))) ? (((unsigned long long int) (-(((/* implicit */int) arr_2 [i_0] [i_1]))))) : (((/* implicit */unsigned long long int) ((unsigned int) var_3)))));
                    var_18 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_1 - 2] [i_1 - 2] [i_1 - 2])) ? (min((((/* implicit */unsigned long long int) arr_2 [i_1 + 1] [i_1 + 1])), (max((((/* implicit */unsigned long long int) (unsigned short)20360)), (arr_1 [i_1]))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_5 [i_1 - 1] [i_1 - 2])))))));
                    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) arr_7 [i_0] [i_0] [(short)12]))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 10; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                arr_12 [i_4] [i_3] [i_2] [i_3] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1 - 1] [i_3 + 1])) ? (((/* implicit */unsigned long long int) -6340885893391081930LL)) : (10455440893362830308ULL)))) ? (7991303180346721308ULL) : (10455440893362830335ULL)));
                                var_20 |= ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 10455440893362830324ULL)) ? (10455440893362830352ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))) ? (((12423112269593110431ULL) << (((((/* implicit */int) (unsigned short)21285)) - (21276))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)21285))) ^ (12423112269593110431ULL))))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_3 + 3] [i_1 - 1] [i_1 - 1] [i_1 - 1])) ? (arr_10 [i_3 + 4] [i_1 - 1] [i_1 - 2] [i_1 - 1]) : (arr_10 [i_3 + 2] [i_1 + 1] [i_1 + 1] [i_1 + 1]))))));
                                arr_13 [i_3] = ((/* implicit */signed char) var_0);
                                var_21 -= ((/* implicit */unsigned short) 12423112269593110431ULL);
                            }
                        } 
                    } 
                }
                for (int i_5 = 0; i_5 < 14; i_5 += 1) 
                {
                    arr_17 [i_5] = ((/* implicit */unsigned short) (~((-(min((arr_11 [i_0] [i_0] [i_0] [i_1 - 2] [i_5] [i_1 - 2] [i_5]), (((/* implicit */int) var_0))))))));
                    var_22 -= ((/* implicit */short) ((((/* implicit */_Bool) 7991303180346721291ULL)) ? (((unsigned int) max(((unsigned short)65524), (((/* implicit */unsigned short) var_6))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 12423112269593110393ULL))))));
                }
                for (unsigned short i_6 = 0; i_6 < 14; i_6 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 0; i_7 < 14; i_7 += 4) 
                    {
                        for (unsigned short i_8 = 0; i_8 < 14; i_8 += 2) 
                        {
                            {
                                var_23 = min((((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned short) (unsigned char)55))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_5))) | (arr_9 [i_6]))) : (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)0))))))), (((/* implicit */long long int) (~((~(arr_24 [i_0] [i_0] [i_1] [i_0] [i_7] [i_8])))))));
                                var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_9)), (12423112269593110431ULL))))))))))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(arr_0 [i_1 - 2] [(unsigned short)11])))) ? (max((12423112269593110450ULL), (((/* implicit */unsigned long long int) (signed char)1)))) : (((/* implicit */unsigned long long int) (-(arr_0 [i_1 - 1] [(unsigned short)0]))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_9 = 0; i_9 < 14; i_9 += 1) 
                    {
                        arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */long long int) (~(-1005668747)));
                        var_26 = ((/* implicit */signed char) max((var_26), (var_3)));
                    }
                    for (unsigned long long int i_10 = 0; i_10 < 14; i_10 += 2) 
                    {
                        var_27 += ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) arr_6 [i_1 + 1] [i_1] [i_1 - 1])) ? (((/* implicit */int) arr_6 [i_1 + 1] [i_1] [i_1 - 1])) : (((/* implicit */int) var_6)))));
                        /* LoopSeq 1 */
                        for (long long int i_11 = 4; i_11 < 12; i_11 += 2) 
                        {
                            var_28 += ((/* implicit */unsigned int) ((unsigned char) 4198967619654315652LL));
                            arr_35 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_22 [i_0] [i_0] [i_10] [i_11])) | (((/* implicit */int) (unsigned short)19845))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_0))))) : (arr_30 [i_1 - 1] [i_1 - 1] [i_1 - 2] [i_1] [i_1]))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_4 [i_11 - 4] [i_11 - 2])) <= (((/* implicit */int) var_4))))))));
                            arr_36 [i_0] [(signed char)3] [i_1 + 1] [i_6] [i_10] [(signed char)3] = ((/* implicit */long long int) (+(6386116180160112664ULL)));
                            var_29 += ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_10]))) + ((~(max((((/* implicit */unsigned int) var_7)), (arr_27 [7LL] [(unsigned char)7] [(short)7] [(unsigned char)7])))))));
                        }
                    }
                    /* LoopNest 2 */
                    for (long long int i_12 = 0; i_12 < 14; i_12 += 2) 
                    {
                        for (int i_13 = 1; i_13 < 11; i_13 += 1) 
                        {
                            {
                                var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) (+(((/* implicit */int) (!(((((/* implicit */_Bool) arr_1 [(unsigned char)8])) || (((/* implicit */_Bool) var_3))))))))))));
                                var_31 = ((/* implicit */int) var_8);
                                var_32 = ((/* implicit */long long int) (-(max((arr_15 [i_0] [i_1 - 1] [(_Bool)1]), (arr_15 [i_6] [i_1 - 2] [i_1 - 2])))));
                                arr_43 [i_0] [i_1] [i_6] [i_12] [i_1] [i_12] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_6) ? (max((((/* implicit */unsigned long long int) var_0)), (12423112269593110462ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)31)) - (((/* implicit */int) var_6)))))))) ? ((-(((((/* implicit */int) var_12)) + (((/* implicit */int) var_0)))))) : (((/* implicit */int) (signed char)-2))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}

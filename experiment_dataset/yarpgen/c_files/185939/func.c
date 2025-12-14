/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185939
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
    var_14 = min((((/* implicit */int) var_10)), (min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)142)) : (((/* implicit */int) (unsigned char)142)))), (((int) var_13)))));
    var_15 = ((unsigned char) ((((var_2) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)21))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)62)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */short) min((((/* implicit */unsigned short) (unsigned char)118)), ((unsigned short)65535)));
                /* LoopSeq 3 */
                /* vectorizable */
                for (int i_2 = 0; i_2 < 21; i_2 += 1) /* same iter space */
                {
                    arr_8 [i_0] [i_1] [i_0] [i_0] = ((((/* implicit */_Bool) (unsigned short)34919)) ? (((/* implicit */int) (unsigned short)30637)) : (arr_7 [i_1]));
                    var_17 = ((/* implicit */unsigned long long int) arr_5 [i_0] [i_1]);
                }
                for (int i_3 = 0; i_3 < 21; i_3 += 1) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (int i_4 = 3; i_4 < 20; i_4 += 3) 
                    {
                        var_18 = ((/* implicit */unsigned long long int) min(((-(var_4))), (((/* implicit */long long int) min((((/* implicit */unsigned short) (unsigned char)147)), (min(((unsigned short)30615), (((/* implicit */unsigned short) arr_9 [i_1] [i_1])))))))));
                        arr_14 [i_1] [i_1] [i_1] = ((int) ((unsigned short) arr_12 [i_0] [i_1] [i_4 - 2] [i_4] [i_1]));
                        arr_15 [i_0] [i_0] [i_1] [i_0] [i_0] [10LL] = arr_12 [i_0] [i_0] [i_0] [i_0] [6];
                    }
                    for (unsigned int i_5 = 2; i_5 < 20; i_5 += 3) 
                    {
                        arr_18 [i_1] [(unsigned char)10] &= ((/* implicit */int) ((short) (unsigned char)62));
                        var_19 -= ((/* implicit */unsigned char) (short)-15273);
                    }
                    /* vectorizable */
                    for (unsigned char i_6 = 0; i_6 < 21; i_6 += 3) 
                    {
                        var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 862136079))));
                        /* LoopSeq 2 */
                        for (int i_7 = 1; i_7 < 20; i_7 += 1) 
                        {
                            var_21 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 33554424)) ? (((/* implicit */long long int) arr_22 [8ULL] [i_1] [i_1] [i_1] [i_1])) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) 653818063U)) : (var_4)))));
                            var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)28)) ? (1471355104U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)30624)))))) ? (((/* implicit */int) (short)-10352)) : (((((/* implicit */int) var_12)) & (((/* implicit */int) var_1)))))))));
                            var_23 = ((/* implicit */int) ((((/* implicit */_Bool) var_8)) ? (arr_12 [i_0] [i_1] [i_3] [(unsigned short)5] [(_Bool)1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)106)))));
                        }
                        for (unsigned char i_8 = 1; i_8 < 20; i_8 += 1) 
                        {
                            var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) ((arr_0 [i_1]) >= (arr_0 [i_3]))))));
                            var_25 &= ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) (unsigned char)113)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_12 [i_0] [i_0] [i_3] [i_0] [i_6]))));
                        }
                    }
                    var_26 = ((((/* implicit */int) (unsigned short)65531)) * ((((!(((/* implicit */_Bool) var_3)))) ? (((/* implicit */int) arr_19 [i_0] [i_0] [i_0])) : (((/* implicit */int) (unsigned char)232)))));
                }
                for (int i_9 = 0; i_9 < 21; i_9 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 17; i_10 += 4) 
                    {
                        for (int i_11 = 0; i_11 < 21; i_11 += 3) 
                        {
                            {
                                var_27 = ((/* implicit */int) (short)-15256);
                                arr_35 [i_11] [i_11] [i_11] [i_1] [i_11] [i_11] = ((/* implicit */unsigned int) max((((long long int) ((((/* implicit */_Bool) (unsigned char)1)) ? (947433161364175555ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_11] [7ULL] [i_0])))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_30 [i_10 + 1] [i_1] [i_10 + 2] [i_10 + 4] [i_10 + 3])))))));
                                var_28 = ((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) arr_32 [i_10 + 1] [i_10 + 4] [i_10 + 2] [i_10] [i_10 + 3]))) > (arr_10 [i_10 + 2] [i_10 + 4] [(unsigned char)4] [i_10 + 4]))) ? (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)30630), ((unsigned short)34911))))) : ((+(arr_10 [i_10 + 3] [i_10 + 3] [(short)16] [i_10 + 4])))));
                            }
                        } 
                    } 
                    arr_36 [i_1] = ((/* implicit */unsigned short) var_2);
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_12 = 2; i_12 < 21; i_12 += 3) 
    {
        arr_41 [i_12] = ((/* implicit */long long int) (-((~(arr_40 [i_12] [i_12 - 1])))));
        var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_40 [i_12] [i_12])))) ? (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (unsigned char)24)) ? (((/* implicit */int) (unsigned char)184)) : (arr_40 [i_12] [i_12])))))) : (((((/* implicit */_Bool) min(((unsigned short)30596), (((/* implicit */unsigned short) var_0))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_37 [i_12])) ? (2727932157U) : (((/* implicit */unsigned int) arr_39 [i_12]))))) : (max((var_7), (((/* implicit */unsigned long long int) arr_38 [i_12]))))))));
        arr_42 [i_12] = ((/* implicit */long long int) arr_39 [i_12 - 2]);
    }
}

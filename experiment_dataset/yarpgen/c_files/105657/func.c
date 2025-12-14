/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105657
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
    var_11 = ((/* implicit */_Bool) (+(((unsigned int) var_9))));
    var_12 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((((/* implicit */int) var_6)) <= (var_4))) ? (((((/* implicit */_Bool) (unsigned char)222)) ? (224U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        arr_3 [(unsigned char)24] [i_0] = ((/* implicit */long long int) (+(((var_5) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [(short)1] [i_0]))))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                for (unsigned char i_3 = 0; i_3 < 25; i_3 += 2) 
                {
                    {
                        arr_11 [i_3] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) (+((+(arr_7 [i_0])))));
                        /* LoopSeq 2 */
                        for (signed char i_4 = 2; i_4 < 23; i_4 += 2) 
                        {
                            arr_15 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((arr_10 [i_4 + 2]) != (var_8))))));
                            arr_16 [i_0] [i_2] [i_2] [i_3] [i_1] = ((/* implicit */unsigned short) (unsigned char)74);
                            arr_17 [i_0] [i_1] [i_2] [i_3] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) <= (3157707805U))))) ^ (((var_3) & (((/* implicit */unsigned int) var_4))))))) ? (((((/* implicit */_Bool) arr_12 [i_4 + 2] [i_4 + 1] [i_4 + 1] [i_4 - 1] [i_4])) ? (arr_12 [i_4 + 2] [i_4 - 2] [i_4 - 1] [i_4 - 1] [i_4]) : (arr_12 [i_4 - 1] [i_4 - 2] [i_4 + 2] [i_4 + 2] [0LL]))) : (((/* implicit */unsigned int) (+(max((((/* implicit */int) var_6)), (arr_5 [i_0]))))))));
                            arr_18 [i_1] [i_4] = ((/* implicit */_Bool) (+((+(((/* implicit */int) arr_0 [i_4 + 2]))))));
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            arr_21 [i_0] [i_1] [i_2] [i_2] [i_5] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min(((unsigned char)74), ((unsigned char)250))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) arr_6 [i_3])) : (arr_20 [15ULL] [15ULL] [15ULL] [i_3] [i_5])))) ? (((/* implicit */unsigned long long int) var_3)) : (arr_20 [i_0] [i_0] [i_0] [i_3] [i_5])))));
                            arr_22 [i_1] [i_3] [i_1] = ((/* implicit */int) max((((/* implicit */unsigned int) (unsigned char)231)), (((((/* implicit */_Bool) (unsigned short)30)) ? (((/* implicit */unsigned int) (~(arr_5 [i_0])))) : (3758096384U)))));
                            arr_23 [i_0] [i_0] [i_1] [i_1] [i_1] [i_3] [i_1] = ((_Bool) (((((+(var_4))) + (2147483647))) << ((((+(((/* implicit */int) (unsigned char)184)))) - (184)))));
                            arr_24 [i_0] [i_1] [i_2] [i_3] [i_5] = ((/* implicit */long long int) var_4);
                        }
                        /* LoopSeq 4 */
                        for (unsigned short i_6 = 4; i_6 < 24; i_6 += 1) 
                        {
                            arr_27 [i_0] [i_2] [(_Bool)1] [i_0] = ((/* implicit */_Bool) arr_2 [i_3]);
                            arr_28 [i_0] [i_2] [i_1] = arr_14 [i_0] [i_0] [i_1] [i_1] [i_2] [i_0] [i_6];
                            arr_29 [i_1] [i_1] [i_2] = var_4;
                        }
                        /* vectorizable */
                        for (short i_7 = 0; i_7 < 25; i_7 += 3) 
                        {
                            arr_33 [i_3] [i_2] = ((/* implicit */int) var_2);
                            arr_34 [i_0] [13ULL] [i_1] [13ULL] [13ULL] [i_3] [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U)))))));
                            arr_35 [i_7] [i_1] [i_3] [i_2] [i_2] [i_1] [i_0] = (!(((/* implicit */_Bool) (short)6751)));
                            arr_36 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)42))))) : (((arr_9 [i_3]) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_9))))));
                        }
                        /* vectorizable */
                        for (int i_8 = 2; i_8 < 24; i_8 += 1) 
                        {
                            arr_40 [i_8] [i_3] [i_1] [(signed char)6] [i_0] = ((/* implicit */int) (-(arr_10 [i_8 + 1])));
                            arr_41 [i_1] = ((/* implicit */long long int) (+(((/* implicit */int) (signed char)35))));
                            arr_42 [i_0] [(_Bool)1] [i_1] [4LL] [(unsigned char)3] = ((/* implicit */unsigned int) var_9);
                            arr_43 [i_8] [(signed char)3] [20] [i_1] [i_1] [i_0] [11LL] = ((/* implicit */short) (signed char)31);
                        }
                        for (unsigned int i_9 = 0; i_9 < 25; i_9 += 2) 
                        {
                            arr_46 [i_0] [i_1] [i_3] [i_3] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-8)) + (2147483647))) >> (((arr_10 [i_0]) - (719162302344649450LL)))))) ? ((-(arr_5 [i_9]))) : (((/* implicit */int) ((short) arr_32 [i_0] [i_1] [(_Bool)1] [i_3] [i_1])))));
                            arr_47 [i_0] [i_1] [i_2] [i_1] [(short)15] = ((/* implicit */short) ((((/* implicit */_Bool) (~(min((arr_12 [23ULL] [i_3] [(unsigned char)5] [(signed char)6] [(unsigned char)5]), (((/* implicit */unsigned int) arr_1 [3] [i_1]))))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_1))))) : (((unsigned int) (-(((/* implicit */int) (unsigned char)224)))))));
                        }
                    }
                } 
            } 
        } 
    }
    var_13 = ((/* implicit */short) (+(((((/* implicit */_Bool) min((1959828446U), (var_10)))) ? (((/* implicit */int) ((unsigned short) var_9))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)17))))))));
}

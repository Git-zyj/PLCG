/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133558
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
    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4))))), (((((/* implicit */_Bool) var_6)) ? (var_3) : (((/* implicit */unsigned long long int) var_0)))))))));
    var_14 += ((/* implicit */unsigned int) (unsigned short)33583);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [(_Bool)1] &= ((/* implicit */unsigned int) min((((/* implicit */int) min(((unsigned short)37), (((/* implicit */unsigned short) (signed char)53))))), ((+(((/* implicit */int) (unsigned short)65501))))));
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned long long int) var_7))))) ? (max((arr_2 [i_2]), (arr_5 [i_0] [i_1] [i_2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2751341249U))))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_12) != (((/* implicit */unsigned long long int) var_0)))))) : (((unsigned long long int) ((int) var_10)))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        arr_11 [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)0))));
                        var_15 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65498))) | (var_12)));
                    }
                    /* LoopSeq 3 */
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        var_16 = ((/* implicit */unsigned char) 2004330998U);
                        arr_16 [i_1] [i_1] [i_2] [i_4] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_14 [i_2 - 1] [i_2 - 1] [i_4 - 1] [i_4 - 1])) + (((/* implicit */int) ((unsigned short) (short)12134)))))) && (((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned int) 1733714221)) : (18U)))))));
                    }
                    for (signed char i_5 = 0; i_5 < 12; i_5 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (signed char i_6 = 0; i_6 < 12; i_6 += 2) 
                        {
                            arr_23 [i_0] [i_0] [(_Bool)1] [i_2] [i_5] [i_6] [i_1] = ((/* implicit */_Bool) 13334268555837058804ULL);
                            var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_1) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)95)))))) ? (max((var_1), (((/* implicit */unsigned long long int) (unsigned short)31956)))) : ((+(13746487153569504913ULL))))))));
                        }
                        for (int i_7 = 0; i_7 < 12; i_7 += 1) 
                        {
                            arr_27 [i_1] = (+(((/* implicit */int) arr_25 [i_1] [i_2])));
                            arr_28 [i_0] [i_1] [i_2] [i_2] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_1] [i_7])) ? (((unsigned long long int) max((((/* implicit */unsigned int) (_Bool)1)), (4294967291U)))) : (((((/* implicit */_Bool) max((arr_0 [i_1] [i_7]), (((/* implicit */unsigned long long int) var_6))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_11))))) : (var_3)))));
                        }
                        /* vectorizable */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            arr_33 [i_0] [i_1] = ((/* implicit */signed char) (unsigned short)33601);
                            arr_34 [i_0] [i_0] [i_1] [i_2] [i_5] [i_8] = ((/* implicit */long long int) (unsigned short)16);
                            var_18 = ((/* implicit */int) (-(((unsigned int) 2962842629352376309ULL))));
                        }
                        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) max(((+(((/* implicit */int) (signed char)-1)))), (var_10)))) ? (((/* implicit */int) (signed char)-9)) : (((/* implicit */int) ((((/* implicit */_Bool) (short)-12116)) && (((/* implicit */_Bool) 2004330998U)))))));
                        /* LoopSeq 1 */
                        for (signed char i_9 = 0; i_9 < 12; i_9 += 4) 
                        {
                            var_20 = ((/* implicit */int) min((((arr_29 [i_0] [i_2] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2] [i_2 - 1]) / (((/* implicit */unsigned long long int) 8388607U)))), (max((((/* implicit */unsigned long long int) (unsigned char)0)), (18446744073709551610ULL)))));
                            var_21 = ((/* implicit */_Bool) 11780445918866098883ULL);
                            arr_39 [i_1] [(unsigned short)10] [i_2] [(signed char)7] [i_5] [i_9] = ((/* implicit */short) var_8);
                            arr_40 [i_0] [i_1] [i_0] [i_5] [i_9] = ((/* implicit */unsigned long long int) var_4);
                            arr_41 [i_0] [i_1] [i_0] [i_1] [i_2 - 1] [i_5] [i_9] = ((/* implicit */int) 2751341231U);
                        }
                    }
                    for (unsigned long long int i_10 = 0; i_10 < 12; i_10 += 2) 
                    {
                        var_22 += ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-12134))) : (4108668865U)))) % (4398046511103LL)))) ? (((((/* implicit */int) min(((unsigned char)14), (((/* implicit */unsigned char) (_Bool)1))))) >> (((((/* implicit */int) arr_26 [i_0] [i_0] [i_0] [i_2] [i_2 - 1])) - (144))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) arr_35 [i_0] [i_10] [i_1] [8ULL] [i_10] [i_10])))))));
                        var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((signed char) arr_37 [(_Bool)0] [i_10]))) ? (((/* implicit */unsigned long long int) (~(1710603338U)))) : (arr_29 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1] [(unsigned short)6] [i_10]))), ((+(arr_5 [i_0] [i_0] [i_2]))))))));
                    }
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) 824079093U)) >= (max((var_3), (((/* implicit */unsigned long long int) 1710012757))))))) > (((/* implicit */int) var_11))));
}

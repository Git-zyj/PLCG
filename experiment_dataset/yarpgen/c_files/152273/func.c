/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152273
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
    for (short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 7; i_2 += 4) 
            {
                {
                    arr_10 [i_1] [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) % ((~(max((((/* implicit */unsigned long long int) var_1)), (arr_0 [i_0] [i_1])))))));
                    var_16 -= ((/* implicit */short) (-((-((-(var_0)))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 1) 
    {
        for (unsigned int i_4 = 0; i_4 < 16; i_4 += 1) 
        {
            {
                arr_15 [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_14 [i_4] [(_Bool)1])) ? (arr_14 [i_4] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_3] [i_4]))) >= (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)49))) - (arr_14 [i_4] [i_4])))))))));
                /* LoopNest 2 */
                for (unsigned short i_5 = 0; i_5 < 16; i_5 += 3) 
                {
                    for (signed char i_6 = 1; i_6 < 13; i_6 += 2) 
                    {
                        {
                            arr_22 [i_3] [i_3] [i_5] [i_4] = ((/* implicit */signed char) (+(min(((-(arr_18 [i_6] [i_4] [i_4] [i_3]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-31673)) * (((/* implicit */int) (unsigned short)16983)))))))));
                            arr_23 [i_4] = ((/* implicit */long long int) ((_Bool) max((var_12), (((/* implicit */int) ((((/* implicit */int) arr_13 [i_3] [i_4])) == (((/* implicit */int) arr_12 [i_3]))))))));
                            /* LoopSeq 1 */
                            for (short i_7 = 0; i_7 < 16; i_7 += 2) 
                            {
                                arr_27 [i_3] [i_5] [i_7] [i_6] [i_7] [i_4] = ((/* implicit */unsigned short) max((arr_18 [i_3] [(short)11] [i_4] [i_7]), ((((_Bool)1) ? (((/* implicit */unsigned long long int) 3002637304573889926LL)) : (arr_18 [i_6 + 1] [i_5] [i_4] [i_5])))));
                                var_17 = ((/* implicit */_Bool) max((var_17), (((arr_14 [i_7] [i_5]) >= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_5] [i_5] [i_7] [i_6 + 2])) || (((/* implicit */_Bool) arr_18 [i_3] [i_3] [i_7] [i_5]))))))))));
                                arr_28 [i_4] [i_4] [(unsigned short)1] [i_7] = ((/* implicit */unsigned short) (~(((/* implicit */int) min((arr_26 [i_4] [i_4]), (((/* implicit */unsigned char) arr_17 [i_5] [i_4])))))));
                                arr_29 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = arr_13 [i_5] [i_7];
                            }
                            /* LoopSeq 4 */
                            for (signed char i_8 = 0; i_8 < 16; i_8 += 2) 
                            {
                                var_18 = ((/* implicit */long long int) min((var_5), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1)))))));
                                var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (-((~(1576548448835074168LL))))))));
                                arr_32 [i_4] [i_4] = ((/* implicit */short) arr_20 [i_3] [i_4] [i_4] [i_6]);
                            }
                            /* vectorizable */
                            for (short i_9 = 0; i_9 < 16; i_9 += 2) /* same iter space */
                            {
                                arr_35 [i_4] [i_4] [i_5] [i_4] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) arr_31 [i_5]))) ^ (((/* implicit */int) arr_24 [i_9] [i_5] [i_5] [i_4] [i_4] [i_3]))));
                                arr_36 [i_3] [i_4] [i_4] [i_4] [i_9] [i_6] = ((/* implicit */unsigned int) ((1576548448835074159LL) == (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) < (arr_18 [i_4] [i_4] [i_4] [i_4])))))));
                                arr_37 [i_4] [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */int) arr_33 [i_3] [(short)6] [i_5] [i_4] [i_3])) % ((~(((/* implicit */int) (unsigned short)65524))))));
                            }
                            for (short i_10 = 0; i_10 < 16; i_10 += 2) /* same iter space */
                            {
                                var_20 = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) > (max((arr_18 [i_3] [i_5] [i_4] [i_10]), (((/* implicit */unsigned long long int) (unsigned short)29380)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_39 [i_4] [i_6 - 1] [i_6 + 3] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [(short)0] [i_4] [(short)0] [i_4] [i_10]))) : (var_5))) > (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))))))) : ((~(1576548448835074168LL)))));
                                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) -1576548448835074169LL)) ? (1478537517) : (((/* implicit */int) (short)32744))));
                            }
                            for (short i_11 = 0; i_11 < 16; i_11 += 2) /* same iter space */
                            {
                                arr_44 [(signed char)4] [(signed char)4] [(unsigned char)15] [i_6 + 1] [i_4] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (135434953U)));
                                var_22 = ((/* implicit */signed char) (-(((/* implicit */int) ((unsigned char) arr_24 [i_3] [i_5] [i_6 + 2] [i_6 + 3] [i_6 + 1] [i_6 + 2])))));
                                var_23 = ((/* implicit */unsigned short) (~(((int) ((((/* implicit */unsigned long long int) arr_34 [i_3] [i_4] [i_4] [i_4] [i_3] [i_11])) & (var_10))))));
                                arr_45 [i_3] [i_4] [(short)0] [i_3] [(unsigned short)12] = ((/* implicit */_Bool) arr_12 [i_11]);
                            }
                        }
                    } 
                } 
            }
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164505
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
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)56016))) : (var_14)))) ? (((/* implicit */int) ((unsigned short) arr_5 [(unsigned short)3] [i_1]))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)56016)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)9519))) : (((((/* implicit */_Bool) arr_1 [(unsigned char)0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_5 [i_1] [i_0]) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)29384))))))) : (var_13)))));
                arr_6 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0])) + (var_12)));
                /* LoopNest 2 */
                for (unsigned short i_2 = 2; i_2 < 12; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (unsigned short i_4 = 0; i_4 < 13; i_4 += 2) 
                            {
                                var_18 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) 18055611039600511107ULL)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_4])))))));
                                var_19 = ((((/* implicit */_Bool) arr_3 [i_1 - 1] [i_1 - 1] [i_2 - 1])) ? (var_9) : (((/* implicit */unsigned long long int) arr_3 [i_1 - 1] [i_1 - 1] [i_2 - 1])));
                                var_20 = ((/* implicit */unsigned short) (~(var_16)));
                                arr_16 [12ULL] [i_1] [0] [i_3] [12ULL] [i_1] [i_1] = ((/* implicit */int) 4650398748063800491ULL);
                            }
                            for (unsigned char i_5 = 0; i_5 < 13; i_5 += 3) 
                            {
                                arr_20 [i_0] [i_1] [i_0] [2U] [i_2] [i_3] [i_5] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_1])) ? (((/* implicit */unsigned long long int) (-(arr_7 [i_0] [i_5] [i_2])))) : (391133034109040483ULL))), ((+(5543827983862375213ULL)))));
                                var_21 *= ((/* implicit */unsigned long long int) min(((unsigned short)56016), (((unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_1 - 1] [i_2] [i_0]))) * (391133034109040473ULL))))));
                                var_22 = max((((unsigned char) var_15)), (((/* implicit */unsigned char) ((((/* implicit */int) arr_15 [i_2 - 2] [i_1] [i_2 - 2] [i_1] [i_1 - 1])) > (((/* implicit */int) arr_4 [i_1 - 1] [i_1 - 1]))))));
                                var_23 *= ((/* implicit */int) (~((~((+(var_13)))))));
                            }
                            var_24 = ((/* implicit */unsigned short) var_5);
                            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((var_16) < (((/* implicit */long long int) var_8)))))))) : (((long long int) ((unsigned long long int) var_11)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_26 = ((/* implicit */int) ((_Bool) var_8));
    var_27 = var_15;
}

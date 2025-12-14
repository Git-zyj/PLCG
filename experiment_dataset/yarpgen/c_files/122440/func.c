/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122440
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
    var_11 += ((/* implicit */short) var_3);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 21; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 24; i_1 += 3) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)113)) ? (((/* implicit */int) (unsigned char)47)) : (((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) var_0))));
                arr_5 [i_0 + 4] [i_0 + 2] [i_0 + 4] = arr_2 [i_0] [i_0];
                /* LoopSeq 4 */
                for (unsigned int i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 25; i_4 += 1) 
                        {
                            {
                                var_12 = max((((/* implicit */unsigned short) (short)-2512)), (min((max(((unsigned short)21265), (((/* implicit */unsigned short) (_Bool)1)))), (arr_7 [i_1 + 1] [i_1 - 1] [i_1] [i_1]))));
                                var_13 = ((/* implicit */short) max(((+(((((/* implicit */_Bool) var_7)) ? (1880721556) : (((/* implicit */int) var_7)))))), (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) (unsigned char)254)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_6))))))));
                                var_14 += ((/* implicit */unsigned char) (_Bool)1);
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */unsigned int) max((((var_5) == (((/* implicit */long long int) ((/* implicit */int) (unsigned char)60))))), (min(((_Bool)1), ((_Bool)1)))));
                }
                for (unsigned short i_5 = 0; i_5 < 25; i_5 += 4) 
                {
                    var_16 += ((/* implicit */signed char) (((((_Bool)1) ? (((/* implicit */int) arr_7 [i_0] [i_1 - 2] [i_0] [i_0])) : (((/* implicit */int) var_1)))) >= ((((_Bool)1) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_10 [i_0 + 4]))))));
                    arr_15 [i_0 - 1] [i_0 - 1] [i_0 - 1] = ((/* implicit */unsigned short) ((unsigned int) (+((((_Bool)1) ? (((/* implicit */int) (unsigned short)8423)) : (((/* implicit */int) var_3)))))));
                }
                for (int i_6 = 1; i_6 < 24; i_6 += 1) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                    {
                        for (unsigned char i_8 = 0; i_8 < 25; i_8 += 1) 
                        {
                            {
                                var_17 += ((/* implicit */unsigned long long int) min((var_5), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned long long int) arr_0 [i_0]))))))));
                                arr_23 [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_10 [i_0 + 2])), (((((/* implicit */_Bool) arr_20 [i_0] [i_1] [i_6 - 1] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_13 [i_0 + 3] [i_0 + 3] [i_0 + 3] [i_0 + 3])))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_2)) <= (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)209)))))))) : (((((/* implicit */long long int) ((/* implicit */int) var_2))) * (max((((/* implicit */long long int) var_4)), (var_5))))));
                                var_18 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(min((var_0), (arr_11 [i_0] [i_7] [i_7])))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)58)) : (((/* implicit */int) (_Bool)1))))))));
                                arr_24 [i_8] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */int) min((((/* implicit */unsigned int) (unsigned char)216)), (max((((/* implicit */unsigned int) (unsigned char)1)), (((((/* implicit */_Bool) (short)-24485)) ? (1432859247U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)252)))))))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */_Bool) var_5);
                }
                /* vectorizable */
                for (unsigned int i_9 = 0; i_9 < 25; i_9 += 1) 
                {
                    var_20 += ((/* implicit */unsigned char) ((signed char) 3855153751U));
                    var_21 = ((/* implicit */short) ((((/* implicit */int) arr_6 [i_0] [i_1 - 2] [i_0 + 3])) == (((/* implicit */int) arr_20 [i_0] [i_1 + 1] [i_9] [i_1 - 1]))));
                    var_22 += ((((/* implicit */_Bool) ((short) var_5))) ? (((/* implicit */int) arr_9 [i_0] [i_1] [i_9] [i_9])) : ((+(((/* implicit */int) (_Bool)1)))));
                    arr_27 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-27585)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)37033)))));
                    var_23 = ((/* implicit */short) (!(var_10)));
                }
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_8)))) ? (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_8)), ((unsigned short)21305)))) && (((/* implicit */_Bool) (short)-18060))))) : (((/* implicit */int) (!(((/* implicit */_Bool) min((var_2), (((/* implicit */short) (_Bool)1))))))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124657
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (int i_2 = 2; i_2 < 24; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 23; i_3 += 2) 
                    {
                        for (long long int i_4 = 1; i_4 < 24; i_4 += 1) 
                        {
                            {
                                arr_11 [(signed char)24] [(signed char)24] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)63430)) ? (2722187322U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-89)))));
                                arr_12 [i_0] [i_0] [i_1] [i_0] [(short)10] [(short)10] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0)))))) > (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) 1572779979U)) : (var_5)))))) & (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [23LL] [23LL] [i_2] [(short)5] [(short)5]))) + (var_4)))) ? (((-2132829973) & (((/* implicit */int) (unsigned char)70)))) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_1] [(unsigned char)21] [(unsigned char)9] [i_4]))))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */long long int) ((max((4562433861582548137ULL), (((/* implicit */unsigned long long int) min((2722187322U), (((/* implicit */unsigned int) (unsigned short)4096))))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_7 [i_0] [i_0] [i_0] [i_1]) > (((/* implicit */unsigned long long int) 2145386496U))))))));
                    var_16 = ((/* implicit */long long int) (!(((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) arr_2 [i_2 - 1] [i_1] [i_0]))))));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 25; i_5 += 3) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) min((((unsigned int) arr_13 [i_2 - 1])), (min((arr_16 [i_2 + 1] [12LL] [i_2 + 1] [i_2 - 2] [8ULL] [i_2] [i_2 + 1]), (1572779973U))))))));
                                arr_18 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) ((unsigned int) ((_Bool) (unsigned char)188)));
                                var_18 = ((/* implicit */unsigned int) min((var_18), (((((/* implicit */_Bool) (~(var_3)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (unsigned short)65529))))) : (max((var_14), (arr_13 [i_0])))))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) < (((((/* implicit */_Bool) 16171301372785355317ULL)) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)65529)) - (((/* implicit */int) (unsigned char)70))))) : (arr_16 [i_2] [(unsigned char)16] [10U] [i_0] [(unsigned char)2] [(unsigned char)16] [i_0]))))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)40)) & (((/* implicit */int) (unsigned short)65518))));
    var_21 = ((/* implicit */short) var_11);
}

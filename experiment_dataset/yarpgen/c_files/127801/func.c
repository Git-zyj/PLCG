/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127801
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
    for (unsigned int i_0 = 3; i_0 < 21; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 25; i_2 += 4) /* same iter space */
                {
                    arr_9 [i_0] [i_0] [i_0] [i_0 - 3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) (~(4492520813311648723LL))))) ? (arr_6 [(unsigned char)4] [(unsigned char)4]) : (((/* implicit */long long int) arr_7 [i_0 + 1]))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 25; i_4 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0 - 2] [i_0 - 3])) ? (arr_6 [i_0 - 1] [i_0 - 1]) : (arr_6 [i_0 - 1] [i_0 - 3])))) ? ((-(arr_6 [i_0 - 2] [i_0 - 2]))) : (((((/* implicit */_Bool) arr_6 [i_0 - 1] [i_0 + 3])) ? (arr_6 [i_0 + 3] [i_0 + 1]) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))));
                                var_21 = ((((/* implicit */_Bool) (~(((/* implicit */int) ((short) (unsigned short)26744)))))) ? (((/* implicit */long long int) ((((/* implicit */int) ((arr_7 [i_3]) > (((/* implicit */unsigned int) ((/* implicit */int) (short)4341)))))) | ((~(((/* implicit */int) (short)32767))))))) : (max(((+(arr_6 [i_1] [i_4]))), (((/* implicit */long long int) ((4261100710U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65524)))))))));
                                var_22 = ((/* implicit */long long int) (unsigned short)65530);
                            }
                        } 
                    } 
                    arr_15 [i_0 - 1] [i_0] [i_0] [i_0] = (unsigned char)84;
                }
                for (short i_5 = 0; i_5 < 25; i_5 += 4) /* same iter space */
                {
                    var_23 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_5])))) && (((/* implicit */_Bool) max((((/* implicit */long long int) arr_2 [i_0])), (arr_0 [i_0] [i_0 + 1]))))));
                    arr_19 [i_0 - 2] [i_0] [i_5] = ((/* implicit */unsigned short) 2079678748U);
                    arr_20 [i_0] = var_8;
                }
                arr_21 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_11 [i_0 - 1] [i_1] [i_1] [i_1] [i_0 + 4] [i_0 - 1])) ? (((((/* implicit */_Bool) arr_11 [i_1] [(signed char)9] [(short)12] [i_1] [i_0 - 2] [i_0 - 2])) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0 + 3] [i_0 - 1] [i_0] [i_0 + 3] [i_0 - 1] [i_0 - 1]))))) : (((/* implicit */long long int) ((((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [i_1] [i_1] [i_0 + 1])) - (((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [i_0 + 1] [i_1] [i_0 + 1])))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_6 = 0; i_6 < 19; i_6 += 3) 
    {
        for (short i_7 = 3; i_7 < 16; i_7 += 4) 
        {
            {
                var_24 = ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_6] [i_6] [i_6]))) / (((((/* implicit */_Bool) arr_1 [i_6])) ? (((/* implicit */long long int) ((unsigned int) arr_18 [i_6]))) : (max((arr_0 [i_6] [i_7]), (((/* implicit */long long int) arr_16 [i_6])))))));
                /* LoopNest 2 */
                for (unsigned short i_8 = 0; i_8 < 19; i_8 += 4) 
                {
                    for (unsigned char i_9 = 3; i_9 < 17; i_9 += 3) 
                    {
                        {
                            arr_30 [i_6] [i_7] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) ((max((((/* implicit */long long int) (_Bool)1)), (arr_4 [i_6]))) < (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_6] [i_7 - 1] [i_6]))))))))) : (((/* implicit */int) arr_3 [(unsigned char)20] [i_7 + 2] [i_7 + 3]))));
                            /* LoopSeq 1 */
                            for (unsigned int i_10 = 0; i_10 < 19; i_10 += 1) 
                            {
                                var_25 = (short)9608;
                                arr_34 [i_10] [i_6] [i_8] [i_6] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((var_8) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) / (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_8] [i_8] [i_8])))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-5813))) : (arr_0 [i_8] [i_8])));
                            }
                            var_26 = ((/* implicit */signed char) (+(((((/* implicit */int) max((((/* implicit */unsigned char) (signed char)113)), ((unsigned char)102)))) / (((/* implicit */int) ((((/* implicit */_Bool) 9223372036854775807LL)) || (((/* implicit */_Bool) var_4)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}

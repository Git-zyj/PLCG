/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160653
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 18; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) (!((!((!(((/* implicit */_Bool) (unsigned char)129))))))));
                    /* LoopSeq 4 */
                    for (unsigned short i_3 = 1; i_3 < 18; i_3 += 4) /* same iter space */
                    {
                        arr_11 [i_0] [i_2 - 1] [i_2 - 1] [1LL] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) ((arr_3 [i_0]) / (((/* implicit */int) arr_9 [i_0] [i_1 - 1] [i_2 - 1]))))) ? (((/* implicit */long long int) var_6)) : ((~(arr_4 [i_0] [i_0]))))) != (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))));
                        arr_12 [i_0] [i_1] [i_1] [i_1 - 1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) < (8676552829550171207ULL))))) : (((unsigned int) arr_3 [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1 - 1])))))) : (min((arr_6 [i_3 + 1] [i_2 - 1] [i_2 + 2] [i_1 - 1]), (((/* implicit */unsigned int) var_1))))));
                        arr_13 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_1 [i_1]), (((/* implicit */int) arr_5 [i_0] [i_0]))))) ? (((arr_3 [i_0]) - (((/* implicit */int) var_13)))) : (((((/* implicit */_Bool) 268402688)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)40776))))))) + (((((/* implicit */_Bool) (+(((/* implicit */int) (short)28))))) ? (min((((/* implicit */long long int) arr_3 [i_0])), (arr_4 [i_0] [i_3 + 1]))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)59721)) - (((/* implicit */int) arr_2 [(short)18])))))))));
                        var_16 += ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_4 [i_3] [i_0])) ? (((/* implicit */long long int) ((((/* implicit */int) arr_9 [6ULL] [4U] [i_0])) << (((var_10) - (988491899)))))) : (((((/* implicit */long long int) arr_6 [(signed char)19] [(signed char)19] [(unsigned short)0] [(unsigned short)10])) | (arr_4 [i_0] [i_1]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (-1933327063) : (((/* implicit */int) min((var_11), (arr_0 [i_3])))))))));
                    }
                    for (unsigned short i_4 = 1; i_4 < 18; i_4 += 4) /* same iter space */
                    {
                        var_17 -= ((/* implicit */unsigned int) ((9770191244159380401ULL) == (((/* implicit */unsigned long long int) (-(arr_10 [i_2 + 1] [i_4 + 1] [i_4] [(signed char)7]))))));
                        var_18 = ((/* implicit */unsigned short) arr_4 [i_0] [i_1 - 1]);
                        var_19 -= ((/* implicit */signed char) (+(((/* implicit */int) var_2))));
                        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) min((((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (short)-19187)))), (((arr_6 [i_4 + 1] [i_2 - 1] [i_2 - 1] [i_1 - 1]) >= (arr_6 [i_4 + 1] [i_2] [i_2 - 1] [i_1 - 1]))))))));
                        var_21 += ((_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) >= (((arr_6 [i_0] [i_1 - 1] [i_2] [i_4]) & (var_4)))));
                    }
                    for (unsigned short i_5 = 1; i_5 < 18; i_5 += 4) /* same iter space */
                    {
                        arr_18 [i_0] = ((/* implicit */unsigned int) (unsigned short)5814);
                        var_22 ^= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) ((long long int) arr_1 [i_2 - 1]))) && (((((/* implicit */int) arr_15 [i_0] [i_5 + 1])) >= (((/* implicit */int) var_11))))))) | ((~((-(var_8)))))));
                    }
                    for (unsigned short i_6 = 1; i_6 < 18; i_6 += 4) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (short i_7 = 0; i_7 < 20; i_7 += 3) 
                        {
                            arr_25 [i_0] = ((/* implicit */unsigned short) (((((_Bool)1) ? (((/* implicit */int) (unsigned char)6)) : (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)250)), (var_0)))))) < (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (unsigned short)7168)))))));
                            arr_26 [i_6 + 1] [i_6 + 1] [i_6] [(unsigned short)13] [i_6 - 1] [i_0] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (+(1872660357U)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)7148)) | (((/* implicit */int) (unsigned short)7148))))) : (var_15)))) & (((arr_10 [i_7] [(_Bool)1] [i_2 - 1] [i_0]) - (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_6 + 1] [i_0])))))));
                            var_23 -= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((arr_23 [i_0] [i_1] [i_6 - 1] [i_1 - 1] [i_0] [(unsigned char)16]) / (arr_23 [i_0] [i_0] [i_6 - 1] [i_2] [i_0] [10U])))) / (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned short)8192))))) * (((unsigned long long int) arr_6 [i_0] [i_0] [i_2] [i_6 - 1]))))));
                            arr_27 [i_0] [i_0] [i_0] [i_2] [i_6] [i_6] [(_Bool)1] = ((/* implicit */int) (~(-3528918081803785726LL)));
                            arr_28 [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) var_5))) & (((/* implicit */int) var_0))));
                        }
                        var_24 -= ((/* implicit */_Bool) (~((+((-(((/* implicit */int) (unsigned char)194))))))));
                    }
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */long long int) (+((+(((((var_8) + (2147483647))) << (((((/* implicit */int) var_2)) - (53179)))))))));
}

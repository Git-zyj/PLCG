/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105246
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
    var_15 = ((/* implicit */int) (~(var_9)));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    arr_7 [i_1] [i_1] [i_0] = ((/* implicit */_Bool) arr_2 [i_0 - 1] [i_1]);
                    /* LoopSeq 4 */
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        var_16 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_3 [i_0] [i_0 - 1] [i_0])) && (((/* implicit */_Bool) (+(arr_0 [i_3])))))) || (((/* implicit */_Bool) ((int) arr_8 [i_0 - 1] [i_0] [i_0] [i_0 - 1])))));
                        arr_10 [i_0] [i_0] [i_0] [i_3] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_3 [i_0] [i_0 + 1] [i_0])) * (((/* implicit */int) arr_3 [i_0] [i_0 - 1] [i_0 - 1])))) == (((/* implicit */int) ((((/* implicit */unsigned long long int) 1768858694)) <= (10180770830727811971ULL))))));
                    }
                    for (int i_4 = 0; i_4 < 20; i_4 += 2) 
                    {
                        var_17 = ((/* implicit */unsigned long long int) (((((((-(((/* implicit */int) arr_8 [i_0] [i_0] [i_2] [i_4])))) ^ (((/* implicit */int) arr_9 [i_0] [i_0 + 1])))) + (2147483647))) << (((((/* implicit */int) var_7)) - (1)))));
                        arr_15 [i_0] [i_1] [i_0] [i_4] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_9 [i_0 + 1] [i_0 + 1])) ? (((/* implicit */int) arr_12 [i_0 + 1] [i_0] [i_0] [i_0 + 1])) : (((/* implicit */int) arr_5 [i_0 + 1] [i_1] [i_2])))), (((/* implicit */int) ((((/* implicit */int) var_7)) == (((/* implicit */int) var_8)))))));
                        arr_16 [i_0 + 1] [i_1] [i_0] [i_4] [i_4] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0]))));
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                    {
                        arr_20 [i_0] [i_1] [i_1] [i_0] [i_1] [i_2] = (-(((/* implicit */int) arr_3 [i_0] [i_1] [i_1])));
                        arr_21 [i_0 + 1] [i_0 + 1] [i_2] [i_0] [i_0 + 1] = ((/* implicit */unsigned short) arr_8 [i_0] [i_0] [i_2] [i_5]);
                    }
                    /* vectorizable */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                    {
                        var_18 = ((/* implicit */_Bool) ((var_0) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
                        var_19 = ((/* implicit */unsigned char) var_0);
                        /* LoopSeq 2 */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            arr_27 [i_0] [i_7] [i_2] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 - 1] [i_0]))));
                            arr_28 [i_0] = ((((/* implicit */int) arr_26 [i_0] [i_1] [i_2] [i_6] [i_2] [i_1] [i_0])) * (((/* implicit */int) arr_26 [i_0] [i_6] [i_6] [i_2] [i_1] [i_0 - 1] [i_0])));
                        }
                        for (unsigned char i_8 = 0; i_8 < 20; i_8 += 1) 
                        {
                            arr_32 [i_0 + 1] [i_0 + 1] [i_0] [i_6] [i_8] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) - (arr_24 [i_0 - 1])));
                            arr_33 [i_0] [i_1] [i_2] [i_6] [i_0] = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */int) var_4)) | (301643518))));
                        }
                    }
                    var_20 = ((/* implicit */int) ((((/* implicit */int) arr_23 [i_0 - 1] [i_0] [i_2])) == (((((/* implicit */_Bool) 8265973242981739645ULL)) ? (((/* implicit */int) arr_23 [i_0 - 1] [i_0] [i_0 - 1])) : (((/* implicit */int) (unsigned short)58726))))));
                    arr_34 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0])) % (((/* implicit */int) arr_1 [i_0]))))), (((arr_24 [i_0 - 1]) >> (((arr_4 [i_0] [i_1] [i_0] [i_1]) - (6425042763031413382ULL)))))));
                }
            } 
        } 
    } 
}

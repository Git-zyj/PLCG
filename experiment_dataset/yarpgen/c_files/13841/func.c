/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13841
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
    /* LoopSeq 4 */
    for (unsigned short i_0 = 4; i_0 < 16; i_0 += 1) /* same iter space */
    {
        var_11 *= ((/* implicit */unsigned long long int) max((max((((/* implicit */unsigned int) ((arr_0 [i_0] [6ULL]) <= (arr_0 [i_0] [6])))), (arr_0 [i_0 + 4] [14ULL]))), (max((arr_0 [(unsigned short)16] [(unsigned short)16]), (((/* implicit */unsigned int) (+(((/* implicit */int) var_8)))))))));
        var_12 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (min((arr_1 [i_0 + 4] [i_0]), (arr_1 [i_0 + 4] [i_0 + 4]))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)34683)))))));
        var_13 *= min((((/* implicit */unsigned long long int) arr_0 [i_0 - 4] [(unsigned short)18])), (arr_1 [i_0] [i_0]));
    }
    /* vectorizable */
    for (unsigned short i_1 = 4; i_1 < 16; i_1 += 1) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_2 [i_1] [i_1 + 2]))));
        var_15 &= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3))))) - (((arr_0 [i_1] [(unsigned short)2]) + (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))));
    }
    for (unsigned short i_2 = 4; i_2 < 16; i_2 += 1) /* same iter space */
    {
        var_16 -= ((/* implicit */unsigned short) var_6);
        var_17 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)59721))));
    }
    for (unsigned short i_3 = 4; i_3 < 16; i_3 += 1) /* same iter space */
    {
        var_18 = (((~(max((var_0), (arr_4 [i_3 - 4]))))) & (((/* implicit */unsigned long long int) min(((~(1245975417))), (((/* implicit */int) max((var_8), (arr_7 [i_3] [i_3]))))))));
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(13135261017885254110ULL)))) || (((((/* implicit */_Bool) max(((unsigned short)33138), ((unsigned short)56222)))) || (((/* implicit */_Bool) (unsigned short)43397))))));
        /* LoopNest 3 */
        for (unsigned int i_4 = 1; i_4 < 19; i_4 += 4) 
        {
            for (unsigned short i_5 = 0; i_5 < 20; i_5 += 4) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 4) 
                {
                    {
                        var_20 ^= ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) (-(12319577793913990379ULL))))) / (arr_13 [i_4] [i_4] [i_4])));
                        /* LoopSeq 2 */
                        for (unsigned short i_7 = 3; i_7 < 19; i_7 += 1) 
                        {
                            var_21 = ((/* implicit */int) arr_18 [i_7 - 2] [i_3 + 4] [i_7] [i_3 + 4] [i_7] [i_4] [i_3 + 4]);
                            arr_20 [i_3] [i_3] [i_7] [i_3 - 4] [i_3 - 2] [i_3] = ((((/* implicit */unsigned long long int) ((unsigned int) arr_19 [i_7 - 2] [i_3]))) / (min((((/* implicit */unsigned long long int) arr_18 [i_4 + 1] [i_4 + 1] [i_4] [i_4] [i_7] [i_7] [i_4 + 1])), ((-(arr_15 [i_3 + 1] [i_3 + 1] [i_5] [i_6]))))));
                            var_22 ^= ((/* implicit */unsigned short) arr_4 [i_7]);
                            var_23 -= ((/* implicit */unsigned short) var_0);
                            var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_2 [i_3 - 3] [i_3 - 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_3]))) : (5232647742507968451ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1253855144U)) ? (arr_14 [i_6] [i_6] [i_6]) : (((/* implicit */int) arr_12 [i_4] [i_6] [i_7])))))))) ? (((((((/* implicit */int) (unsigned short)65535)) & (((/* implicit */int) (unsigned short)6447)))) ^ (((/* implicit */int) var_10)))) : (((((/* implicit */int) arr_7 [i_7] [i_3 + 4])) | (-1245975417))))))));
                        }
                        for (unsigned short i_8 = 2; i_8 < 19; i_8 += 1) 
                        {
                            var_25 = max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_5] [i_4]))) - (arr_1 [i_6] [i_6]))), (((unsigned long long int) arr_3 [i_5] [i_3])));
                            var_26 = ((/* implicit */unsigned long long int) arr_11 [i_3 - 1] [i_3 - 1] [i_4 + 1]);
                        }
                    }
                } 
            } 
        } 
        var_27 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3689))) & (max((((/* implicit */unsigned int) (unsigned short)4025)), (3274328639U)))));
        var_28 |= ((/* implicit */unsigned int) arr_4 [i_3 - 4]);
    }
    var_29 &= ((/* implicit */unsigned short) max((min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) - (var_6))), (var_7))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) | ((~(var_6)))))));
    var_30 |= (-(var_0));
}

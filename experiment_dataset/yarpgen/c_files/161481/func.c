/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161481
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
    var_12 = ((/* implicit */unsigned long long int) max((((((/* implicit */int) var_7)) + (((/* implicit */int) ((((/* implicit */int) var_0)) < (((/* implicit */int) var_7))))))), (((/* implicit */int) (unsigned short)64505))));
    var_13 -= ((/* implicit */_Bool) (((+(((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) * (12604230441478833815ULL))))) & (((/* implicit */unsigned long long int) max(((~(((/* implicit */int) var_7)))), (((/* implicit */int) var_0)))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 3) /* same iter space */
    {
        var_14 &= ((/* implicit */unsigned short) (~(((/* implicit */int) var_0))));
        var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0])) + (((/* implicit */int) (unsigned char)79))))) + (var_11)));
        arr_3 [i_0] [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) < (arr_1 [i_0] [i_0])));
    }
    for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 3) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned short) 71916856549572608ULL);
        arr_6 [i_1] &= ((/* implicit */unsigned short) var_3);
        arr_7 [i_1] = var_10;
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 2; i_2 < 11; i_2 += 4) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 3) 
            {
                for (long long int i_4 = 0; i_4 < 12; i_4 += 3) 
                {
                    {
                        arr_16 [i_3] [i_4] = ((/* implicit */long long int) var_7);
                        /* LoopSeq 3 */
                        for (unsigned long long int i_5 = 1; i_5 < 10; i_5 += 3) 
                        {
                            arr_19 [i_5] [i_4] [i_4] [i_1] [i_2] [i_4] [i_1] = ((min((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)1031))) & (var_1))), (((/* implicit */long long int) ((((/* implicit */_Bool) 8414327236726657409ULL)) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) (_Bool)0))))))) % (((/* implicit */long long int) (~(((((/* implicit */int) var_7)) & (((/* implicit */int) (unsigned short)8614))))))));
                            arr_20 [i_1] [i_2] [i_4] [i_4] [i_4] [i_5 + 2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_8 [i_3])), (((unsigned char) var_5))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) arr_15 [i_3] [i_4] [i_3])))) && (((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) (unsigned short)64505))))))) : (((((/* implicit */_Bool) (unsigned short)1048)) ? (((/* implicit */int) arr_5 [i_5 + 1] [i_2 + 1])) : (((/* implicit */int) arr_5 [i_1] [i_1]))))));
                            arr_21 [i_1] [i_4] [i_3] [i_4] [i_5] = ((/* implicit */long long int) var_8);
                            var_17 &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_5) ? (((/* implicit */int) arr_8 [i_5])) : (((/* implicit */int) arr_10 [i_1] [i_1]))))) ? (((arr_9 [3ULL] [i_3] [i_4]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1048))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_0), (var_7)))))))) ? (var_3) : (((/* implicit */unsigned long long int) ((long long int) var_10))));
                        }
                        for (long long int i_6 = 0; i_6 < 12; i_6 += 2) 
                        {
                            var_18 = ((/* implicit */unsigned char) (-(var_8)));
                            var_19 = ((max((var_9), (((/* implicit */long long int) arr_14 [i_1] [i_1] [(unsigned short)7] [i_2 - 1] [i_4] [i_4])))) >> (((((/* implicit */int) ((unsigned char) var_11))) - (49))));
                            arr_25 [i_1] [i_4] [i_4] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_6] [i_4] [i_3] [i_2 + 1] [i_4] [i_1])) ? (((((/* implicit */int) arr_24 [i_2 - 2] [i_4] [i_2 - 2])) & (((/* implicit */int) (unsigned short)34027)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_4] [i_2 + 1] [i_2] [i_2 - 1] [i_4])))))));
                        }
                        /* vectorizable */
                        for (long long int i_7 = 2; i_7 < 8; i_7 += 4) 
                        {
                            arr_28 [(_Bool)1] [i_4] [i_7] = ((/* implicit */long long int) arr_24 [i_1] [i_4] [(_Bool)1]);
                            var_20 = ((/* implicit */long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_1] [i_2] [i_3] [5ULL] [i_4] [i_7 + 4])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_4))))) < (arr_15 [i_2 + 1] [i_4] [i_2 + 1])));
                            arr_29 [i_1] [i_4] [(_Bool)1] [i_1] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)776)) & (((/* implicit */int) var_5))))) ? (((var_6) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_3))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_5))))))));
                        }
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_8 = 3; i_8 < 12; i_8 += 2) 
    {
        var_21 = (((!(((/* implicit */_Bool) var_1)))) && (((((/* implicit */_Bool) arr_30 [i_8 + 1] [i_8 + 3])) || (((/* implicit */_Bool) arr_30 [i_8 - 3] [i_8 - 1])))));
        arr_32 [i_8] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((unsigned long long int) (unsigned char)143))) || (((/* implicit */_Bool) ((long long int) (unsigned short)11764))))) && (((((/* implicit */_Bool) ((unsigned long long int) var_2))) && (((/* implicit */_Bool) ((unsigned long long int) var_8)))))));
    }
    for (unsigned char i_9 = 0; i_9 < 24; i_9 += 4) 
    {
        var_22 = ((/* implicit */long long int) min((arr_34 [i_9]), (((((/* implicit */_Bool) ((arr_34 [i_9]) & (((/* implicit */unsigned long long int) var_11))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_33 [i_9])) & (((/* implicit */int) var_0))))) : ((~(var_3)))))));
        arr_35 [i_9] [i_9] = ((/* implicit */long long int) 11527152038144350797ULL);
        var_23 = ((/* implicit */long long int) (unsigned short)21231);
        arr_36 [(unsigned short)17] [(unsigned short)17] = (!(((/* implicit */_Bool) ((unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)59069)))))));
    }
    var_24 ^= ((/* implicit */unsigned short) max((((var_8) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))), (((/* implicit */unsigned long long int) ((((long long int) var_7)) >= (min((((/* implicit */long long int) var_0)), (1073741792LL))))))));
}

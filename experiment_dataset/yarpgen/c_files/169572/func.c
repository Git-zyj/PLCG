/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169572
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
    var_19 = (((+(((((/* implicit */long long int) 1549738416U)) / (1954365713277672313LL))))) * (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_9) & (var_2)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_15))))) : (((var_2) >> (((1954365713277672313LL) - (1954365713277672285LL)))))))));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 4) /* same iter space */
    {
        var_20 |= arr_1 [i_0];
        arr_2 [i_0] = var_2;
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_17))) & (var_2)));
        var_21 -= ((/* implicit */signed char) ((4294967291U) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
    }
    for (unsigned int i_1 = 0; i_1 < 14; i_1 += 4) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [(signed char)8] [i_1])))))) <= (((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (var_14))))) ? (((/* implicit */long long int) max((var_14), (((/* implicit */unsigned int) var_18))))) : (((arr_0 [i_1] [i_1]) | (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1]))))))))));
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 14; i_2 += 2) 
        {
            for (short i_3 = 0; i_3 < 14; i_3 += 4) 
            {
                {
                    var_23 = (!(((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_1])))))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned char i_4 = 1; i_4 < 11; i_4 += 2) 
                    {
                        var_24 += ((/* implicit */signed char) var_7);
                        var_25 *= ((((((/* implicit */int) var_1)) * (((/* implicit */int) arr_9 [i_1] [i_2])))) >= (((/* implicit */int) ((((/* implicit */int) var_11)) < (((/* implicit */int) var_16))))));
                        var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) arr_10 [i_1]))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 2) 
                    {
                        var_27 = ((/* implicit */unsigned int) ((signed char) ((var_2) * (((/* implicit */unsigned int) ((/* implicit */int) var_0))))));
                        var_28 = ((/* implicit */_Bool) min((var_28), (arr_9 [i_3] [i_5])));
                        var_29 = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_15 [i_5] [i_5] [i_3] [i_3] [i_1] [i_1])) * (((/* implicit */int) var_10)))) <= (((/* implicit */int) arr_14 [(_Bool)1]))));
                        var_30 = ((/* implicit */unsigned char) var_14);
                    }
                    /* vectorizable */
                    for (unsigned short i_6 = 0; i_6 < 14; i_6 += 3) 
                    {
                        var_31 = ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_12 [i_1] [i_2] [i_1] [i_1])))) >= (var_14));
                        var_32 = ((/* implicit */unsigned long long int) var_14);
                        var_33 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_1])) ? (arr_0 [i_1] [i_1]) : (((/* implicit */long long int) var_14)))))));
                        var_34 = ((/* implicit */unsigned long long int) ((536870911ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_35 = ((/* implicit */unsigned int) max((var_35), (((/* implicit */unsigned int) var_17))));
                        var_36 = ((/* implicit */unsigned char) arr_12 [i_7] [(_Bool)1] [i_2] [i_1]);
                    }
                }
            } 
        } 
        arr_22 [i_1] = ((/* implicit */short) ((unsigned char) (unsigned short)39054));
        var_37 = ((/* implicit */signed char) ((unsigned short) var_12));
    }
    /* vectorizable */
    for (unsigned int i_8 = 0; i_8 < 14; i_8 += 4) /* same iter space */
    {
        var_38 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_8] [i_8] [i_8])) ? (((/* implicit */int) arr_7 [i_8] [i_8] [i_8])) : (((/* implicit */int) var_16))));
        arr_25 [i_8] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_20 [i_8] [i_8])) & (((/* implicit */int) arr_20 [i_8] [i_8]))));
        var_39 = ((/* implicit */unsigned short) var_6);
    }
    for (unsigned char i_9 = 1; i_9 < 20; i_9 += 4) 
    {
        var_40 = ((/* implicit */unsigned int) max((var_40), (((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) max((var_7), (((/* implicit */int) var_10)))))))))))));
        arr_28 [i_9] |= ((/* implicit */unsigned long long int) ((((arr_27 [i_9 + 2]) | (arr_27 [i_9 + 2]))) * (((arr_27 [i_9 + 2]) >> (((((/* implicit */int) var_15)) + (19867)))))));
        var_41 = ((/* implicit */unsigned char) max((var_41), (((/* implicit */unsigned char) ((arr_27 [i_9 - 1]) - (((((/* implicit */unsigned int) ((/* implicit */int) var_10))) - (arr_27 [i_9 + 1]))))))));
        arr_29 [i_9] [i_9 + 1] = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_26 [i_9])) - (((/* implicit */int) (_Bool)0))))) * (((arr_27 [i_9]) * (((/* implicit */unsigned int) ((/* implicit */int) var_15))))))));
        var_42 = ((/* implicit */unsigned short) arr_27 [i_9]);
    }
}

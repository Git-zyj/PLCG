/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187314
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
    var_20 = ((/* implicit */int) max((var_20), ((-((+(((/* implicit */int) var_17))))))));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_1 [i_0])), (arr_0 [i_0])))) ? (((/* implicit */int) var_14)) : (((((/* implicit */_Bool) ((3) << (((2915416311U) - (2915416289U)))))) ? (arr_1 [i_0]) : (arr_1 [i_0])))));
        arr_2 [i_0] &= arr_1 [i_0];
    }
    for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (short i_2 = 0; i_2 < 11; i_2 += 1) /* same iter space */
        {
            var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) max((min((((/* implicit */unsigned long long int) arr_3 [i_1] [3U])), (((unsigned long long int) arr_1 [i_1])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3542710254372574LL)) ? (((/* implicit */int) arr_5 [i_1] [i_1])) : (((/* implicit */int) (_Bool)0))))))))));
            arr_7 [1U] [10U] [i_1] = ((/* implicit */unsigned char) arr_6 [i_1] [i_2]);
        }
        for (short i_3 = 0; i_3 < 11; i_3 += 1) /* same iter space */
        {
            var_23 = ((/* implicit */short) 17792754914106276544ULL);
            var_24 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */int) (!(var_6)))) : (((((/* implicit */int) arr_3 [i_1] [i_3])) - (((/* implicit */int) arr_3 [i_1] [i_3]))))));
            var_25 = ((/* implicit */unsigned int) arr_1 [i_1]);
        }
        arr_10 [i_1] = ((/* implicit */_Bool) min(((+(((/* implicit */int) arr_5 [i_1] [i_1])))), ((~(((/* implicit */int) arr_3 [i_1] [i_1]))))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 3) /* same iter space */
    {
        var_26 = ((/* implicit */_Bool) ((short) min((((/* implicit */unsigned long long int) arr_0 [i_4])), (15694799689050440231ULL))));
        var_27 = ((/* implicit */unsigned long long int) min((((unsigned int) (!(((/* implicit */_Bool) arr_11 [i_4]))))), (((/* implicit */unsigned int) (!(arr_4 [i_4]))))));
    }
    for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 3) /* same iter space */
    {
        arr_18 [i_5] [i_5] = ((/* implicit */unsigned char) arr_9 [i_5] [i_5]);
        /* LoopSeq 1 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            /* LoopSeq 2 */
            for (signed char i_7 = 2; i_7 < 9; i_7 += 2) 
            {
                /* LoopSeq 2 */
                for (long long int i_8 = 0; i_8 < 11; i_8 += 2) 
                {
                    arr_31 [i_6] [i_6] [i_6] [i_5] = ((var_6) ? (2047) : (((/* implicit */int) (short)8471)));
                    /* LoopSeq 1 */
                    for (int i_9 = 3; i_9 < 9; i_9 += 2) 
                    {
                        var_28 = ((/* implicit */int) ((((/* implicit */_Bool) 0ULL)) || (((/* implicit */_Bool) min(((-(((/* implicit */int) arr_25 [i_6] [i_6])))), (((int) arr_19 [i_6])))))));
                        arr_35 [i_9] [i_6] [i_6] [i_6] [i_5] = ((/* implicit */int) arr_3 [5U] [i_6]);
                        arr_36 [i_5] [i_6] [i_7 + 2] [i_5] [i_9] = ((/* implicit */unsigned short) var_10);
                    }
                }
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    var_29 |= ((/* implicit */long long int) arr_8 [i_10]);
                    arr_39 [i_6] = ((/* implicit */int) (short)9387);
                }
                arr_40 [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) arr_28 [i_7 + 2] [i_7 - 2] [i_7] [i_7 - 2]))) ? (((/* implicit */unsigned long long int) var_16)) : (arr_33 [i_6] [i_5])));
            }
            for (unsigned short i_11 = 0; i_11 < 11; i_11 += 2) 
            {
                var_30 = ((/* implicit */int) var_6);
                var_31 = ((/* implicit */unsigned int) ((unsigned char) arr_12 [i_6]));
            }
            arr_43 [i_5] [i_5] [i_6] = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_32 [i_5])) <= (((/* implicit */int) arr_32 [i_5])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_32 [i_6]))))) : ((+(((/* implicit */int) arr_32 [i_5]))))));
            var_32 = ((/* implicit */unsigned short) max((var_18), (((arr_4 [i_5]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)34741))) : (var_4)))));
            arr_44 [i_5] [i_5] [i_6] = ((/* implicit */unsigned long long int) (short)-31126);
            /* LoopSeq 1 */
            for (signed char i_12 = 1; i_12 < 10; i_12 += 2) 
            {
                var_33 |= ((/* implicit */unsigned char) var_10);
                arr_47 [i_5] [i_6] [i_12] = ((/* implicit */unsigned long long int) arr_17 [i_6] [i_6]);
            }
        }
        arr_48 [i_5] [i_5] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_25 [10U] [i_5]))));
        var_34 -= ((/* implicit */unsigned short) ((((/* implicit */int) ((short) arr_29 [i_5] [6U] [i_5] [i_5]))) / ((((!((_Bool)1))) ? (1759238264) : (((/* implicit */int) ((short) arr_0 [i_5])))))));
    }
}

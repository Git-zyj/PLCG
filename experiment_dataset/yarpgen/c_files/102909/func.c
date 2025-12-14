/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102909
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_0]);
        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (arr_0 [i_0 - 1]) : (((/* implicit */long long int) var_13)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) min((arr_0 [8LL]), (((/* implicit */long long int) var_13)))))))))))));
        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]))));
        var_22 &= ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) var_2)) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 - 1]))));
        var_23 = ((/* implicit */unsigned int) arr_0 [i_0]);
    }
    var_24 |= ((/* implicit */_Bool) var_17);
    /* LoopSeq 3 */
    for (long long int i_1 = 0; i_1 < 10; i_1 += 2) 
    {
        var_25 -= ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_1] [15ULL])) - (((/* implicit */int) var_14))))) / ((((_Bool)1) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [7ULL]))) : (var_17))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_4 [i_1] [i_1])))))))));
        var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_1]))) : (4294967295U)))) ? (((var_14) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((/* implicit */int) arr_4 [i_1] [i_1])))) : (((/* implicit */int) min((((/* implicit */signed char) arr_1 [i_1] [i_1])), (arr_4 [i_1] [(unsigned char)9]))))));
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (short i_3 = 0; i_3 < 10; i_3 += 4) 
            {
                for (unsigned short i_4 = 0; i_4 < 10; i_4 += 2) 
                {
                    {
                        var_27 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3117466207273431404LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1] [i_1]))) : (arr_0 [i_3])))) && (((/* implicit */_Bool) max((((/* implicit */long long int) var_19)), (arr_0 [i_3])))));
                        arr_15 [i_1] [i_2] [i_3] [i_2] = ((long long int) (unsigned char)116);
                        arr_16 [i_2] [i_2] [i_2] [i_4] [8ULL] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_12 [i_1] [i_2] [i_2] [7LL])) ? (((/* implicit */int) arr_7 [i_2])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_19))))))) ^ (max((((int) var_7)), ((~(((/* implicit */int) (_Bool)1))))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_5 = 1; i_5 < 18; i_5 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 2) 
        {
            for (unsigned int i_7 = 1; i_7 < 18; i_7 += 4) 
            {
                {
                    var_28 = ((/* implicit */unsigned long long int) max((var_28), (((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_17 [i_7] [i_5])) ? (var_5) : (((/* implicit */long long int) var_16))))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (((arr_19 [i_5]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_5] [i_5 + 2] [i_7 + 1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))));
                    arr_26 [i_7] [i_7] = ((/* implicit */unsigned char) (-(((unsigned long long int) var_14))));
                }
            } 
        } 
        var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) (+(224324420))))));
        var_30 = ((/* implicit */signed char) (-(((unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_25 [i_5]))) < (var_18))))));
    }
    for (unsigned int i_8 = 2; i_8 < 20; i_8 += 4) 
    {
        arr_30 [i_8 + 2] = arr_27 [i_8 + 1];
        var_31 = min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_28 [i_8 + 4] [i_8 + 1])) ? (((/* implicit */int) arr_28 [i_8 + 3] [i_8 + 1])) : (var_10)))), ((-(max((var_5), (((/* implicit */long long int) var_10)))))));
        var_32 = ((/* implicit */unsigned long long int) max((max((((/* implicit */unsigned int) (_Bool)1)), (201326592U))), (((/* implicit */unsigned int) (unsigned char)117))));
        /* LoopSeq 3 */
        for (unsigned char i_9 = 0; i_9 < 24; i_9 += 2) /* same iter space */
        {
            var_33 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((unsigned int) (+(var_18))))) * (((unsigned long long int) (-(((/* implicit */int) arr_29 [i_8 - 1] [i_8 - 1])))))));
            arr_33 [i_8] [i_8 + 4] [i_8] = ((/* implicit */unsigned long long int) var_6);
        }
        for (unsigned char i_10 = 0; i_10 < 24; i_10 += 2) /* same iter space */
        {
            arr_37 [i_10] [i_8] = ((/* implicit */long long int) (+((-(((/* implicit */int) arr_29 [i_8 + 3] [i_8 + 2]))))));
            arr_38 [i_10] [i_10] [i_8] = ((/* implicit */unsigned char) ((_Bool) (~(((9223372036854775807LL) << (((((arr_34 [i_10]) + (4530140297965653139LL))) - (36LL))))))));
        }
        for (unsigned char i_11 = 0; i_11 < 24; i_11 += 2) /* same iter space */
        {
            arr_43 [i_8] = min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned char) var_3)))))), (((max((4245493091U), (((/* implicit */unsigned int) arr_29 [i_8] [i_11])))) + (((/* implicit */unsigned int) ((/* implicit */int) min((var_15), (((/* implicit */signed char) (_Bool)0)))))))));
            var_34 |= ((/* implicit */unsigned int) ((unsigned char) ((unsigned long long int) arr_36 [i_8] [i_8 + 1])));
            var_35 -= ((/* implicit */unsigned char) min((arr_41 [i_8 - 1] [i_8 - 1] [i_8]), (((/* implicit */unsigned int) ((arr_41 [i_8] [i_8 + 1] [i_8]) < (arr_41 [i_11] [i_8 + 3] [i_8]))))));
            var_36 ^= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_32 [i_8])))))) ^ (min((var_0), (((/* implicit */unsigned int) arr_39 [i_8 + 4] [i_8 + 3]))))));
        }
    }
}

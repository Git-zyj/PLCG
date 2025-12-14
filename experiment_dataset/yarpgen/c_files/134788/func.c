/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134788
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
    for (signed char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 |= ((/* implicit */unsigned short) max((max((arr_2 [i_0]), (((/* implicit */unsigned long long int) arr_0 [i_0])))), (((arr_2 [i_0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1])))))));
                arr_4 [i_1] = ((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1]))))) >> (((max((((/* implicit */unsigned long long int) arr_3 [i_1])), ((+(4865733326368797615ULL))))) - (4865733326368797584ULL))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (signed char i_2 = 2; i_2 < 10; i_2 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned char i_4 = 0; i_4 < 13; i_4 += 2) 
            {
                var_20 = ((/* implicit */unsigned long long int) min((var_20), (((((((/* implicit */_Bool) arr_8 [i_2])) ? (13581010747340753993ULL) : (((/* implicit */unsigned long long int) var_14)))) - (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-26646)))))))));
                var_21 |= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_2 + 3])) == (((/* implicit */int) arr_6 [i_2 + 3]))));
                var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((16352U) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2 + 2]))))))));
            }
            arr_12 [i_3] [i_3] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((((/* implicit */int) var_7)) % (((/* implicit */int) arr_7 [i_2]))))))) ? (max((arr_8 [i_2 + 1]), (arr_8 [i_2 - 2]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_17))))))));
        }
        arr_13 [i_2 + 1] = ((/* implicit */int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_9 [i_2 + 1] [i_2 + 3]))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_1 [i_2] [i_2])), (13581010747340753993ULL)))) ? (((/* implicit */unsigned long long int) (-(var_17)))) : ((~(13581010747340753993ULL)))))));
    }
    for (signed char i_5 = 2; i_5 < 10; i_5 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned char i_6 = 0; i_6 < 13; i_6 += 3) 
        {
            for (int i_7 = 0; i_7 < 13; i_7 += 1) 
            {
                for (unsigned long long int i_8 = 0; i_8 < 13; i_8 += 1) 
                {
                    {
                        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(13581010747340754001ULL)))) ? ((~(((/* implicit */int) arr_7 [i_5 + 3])))) : ((~(((/* implicit */int) arr_7 [i_5 + 2])))))))));
                        arr_25 [i_8] [i_8] [i_7] [i_8] [i_8] = ((/* implicit */signed char) (~(min((min((((/* implicit */unsigned long long int) var_8)), (13581010747340754001ULL))), (((/* implicit */unsigned long long int) arr_21 [i_5]))))));
                        /* LoopSeq 1 */
                        for (short i_9 = 2; i_9 < 12; i_9 += 2) 
                        {
                            var_24 ^= ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) -582778636))) || (((/* implicit */_Bool) (unsigned char)218))))) > (((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_22 [i_5] [i_5] [i_7] [i_9] [i_5] [i_9])))))))));
                            var_25 ^= ((/* implicit */unsigned char) (~((~(max((arr_26 [i_5 + 2] [i_5 + 2] [12] [i_5 + 2] [i_5] [i_5] [i_9]), (var_13)))))));
                        }
                    }
                } 
            } 
        } 
        var_26 *= ((/* implicit */short) 4865733326368797622ULL);
        var_27 += ((/* implicit */int) ((arr_20 [i_5] [(short)12] [i_5 + 2]) ? (max((((/* implicit */unsigned long long int) arr_1 [i_5] [i_5])), (13581010747340753971ULL))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_5 [i_5 + 2])))))));
        var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) (!(((/* implicit */_Bool) min((13340339499240825604ULL), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_16 [i_5])))))))))))));
    }
    for (unsigned short i_10 = 2; i_10 < 24; i_10 += 3) 
    {
        arr_32 [(unsigned char)8] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_31 [i_10 - 2] [i_10 - 1])) - (((/* implicit */int) arr_31 [i_10 + 1] [i_10 - 1]))))) ? (((((/* implicit */_Bool) arr_28 [i_10 + 1])) ? (13581010747340753971ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_10 - 1] [i_10 - 1]))))) : ((-(4865733326368797645ULL)))));
        var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) ((13581010747340753994ULL) / (var_4))))));
    }
    var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) (!(((/* implicit */_Bool) 4865733326368797615ULL)))))));
    var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) ((((_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((((/* implicit */_Bool) 13581010747340753982ULL)) || (((/* implicit */_Bool) 11153621919313061999ULL)))), (((((/* implicit */_Bool) 13581010747340753993ULL)) || (((/* implicit */_Bool) var_5)))))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned short) (short)32767)), (var_10)))) ? ((-(4865733326368797615ULL))) : (((/* implicit */unsigned long long int) var_14)))))))));
}

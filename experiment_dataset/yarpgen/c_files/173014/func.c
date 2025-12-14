/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173014
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
    var_12 = ((/* implicit */signed char) (_Bool)1);
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            arr_5 [i_0] [i_1] = ((/* implicit */unsigned int) var_5);
            arr_6 [i_1] = ((/* implicit */int) ((((((/* implicit */int) (short)2032)) >= (((/* implicit */int) (unsigned char)116)))) ? (((unsigned int) arr_4 [i_0] [i_0] [i_1])) : (((/* implicit */unsigned int) ((int) var_2)))));
            var_13 = ((((/* implicit */_Bool) 3641923713U)) ? (arr_2 [i_1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))));
        }
        var_14 -= ((/* implicit */short) ((((/* implicit */unsigned long long int) -35947801)) >= (arr_4 [i_0] [i_0] [i_0])));
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 1) 
    {
        var_15 = ((((/* implicit */_Bool) arr_8 [i_2] [i_2])) ? (((/* implicit */int) arr_8 [i_2] [i_2])) : (1394600519));
        var_16 *= ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((/* implicit */int) var_3))) >= (var_2))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_4 [i_2] [i_2] [i_2]) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2] [i_2]))))))) : ((+(3127974721U)))));
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
        {
            for (unsigned short i_4 = 0; i_4 < 13; i_4 += 3) 
            {
                {
                    arr_16 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) (~(((int) var_5))));
                    var_17 |= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_3] [i_3 + 1]))) >= (arr_2 [i_4] [i_3 + 1])));
                }
            } 
        } 
    }
    for (long long int i_5 = 1; i_5 < 16; i_5 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned char i_6 = 0; i_6 < 20; i_6 += 4) 
        {
            for (unsigned char i_7 = 0; i_7 < 20; i_7 += 4) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    {
                        arr_27 [i_8] [i_8] [i_6] [i_8] [i_5 - 1] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)139)) ? (((/* implicit */int) (unsigned char)63)) : (1394600515)));
                        /* LoopSeq 2 */
                        for (short i_9 = 0; i_9 < 20; i_9 += 1) /* same iter space */
                        {
                            var_18 = ((/* implicit */signed char) ((((((/* implicit */_Bool) 9140354263232151276LL)) || (((/* implicit */_Bool) var_5)))) ? (((/* implicit */int) ((((arr_18 [i_6]) || (((/* implicit */_Bool) -862345346)))) || (((/* implicit */_Bool) arr_29 [i_5 + 3] [i_5 + 2]))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((var_10) ? (((/* implicit */unsigned long long int) 3127974744U)) : (arr_21 [i_5 + 4] [i_5 + 4])))) && (((/* implicit */_Bool) arr_28 [i_8] [i_8])))))));
                            arr_31 [i_6] [i_5] [i_7] [i_8] [i_6] [i_9] [i_5] = ((/* implicit */int) (+(max((arr_19 [i_5 + 1]), (((/* implicit */unsigned long long int) var_9))))));
                        }
                        for (short i_10 = 0; i_10 < 20; i_10 += 1) /* same iter space */
                        {
                            arr_36 [i_5] [i_6] [i_7] [i_7] [i_8] [i_5] |= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (short)-2032)), (((16517965603895952708ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_5])))))));
                            var_19 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_29 [i_5 + 2] [i_5 + 1])) ? (arr_29 [i_5 + 4] [i_5 + 1]) : (arr_29 [i_5 + 4] [i_5 + 1]))) * (((arr_29 [i_5] [i_5 + 1]) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))));
                            arr_37 [i_8] [i_8] [i_8] = ((/* implicit */unsigned int) ((((unsigned int) (_Bool)1)) < (1166992551U)));
                        }
                    }
                } 
            } 
        } 
        arr_38 [i_5 + 3] |= ((/* implicit */unsigned char) (-(max((min((((/* implicit */unsigned long long int) 524287U)), (18446744073709551615ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2147483647ULL)) ? (((/* implicit */int) var_8)) : (-1))))))));
        arr_39 [i_5 + 1] = ((/* implicit */unsigned short) ((((4412058086786128000ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) ^ (((var_4) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))));
        arr_40 [i_5 + 1] = ((/* implicit */unsigned long long int) var_10);
        var_20 += ((/* implicit */int) min((((/* implicit */unsigned long long int) var_2)), (((((/* implicit */_Bool) ((long long int) (_Bool)0))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 3127974745U))))));
    }
}

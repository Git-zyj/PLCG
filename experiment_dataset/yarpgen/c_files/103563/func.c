/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103563
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
    var_15 *= ((/* implicit */unsigned long long int) var_7);
    /* LoopSeq 4 */
    for (int i_0 = 1; i_0 < 17; i_0 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) -1591853865)), (0ULL))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_1 [i_0 - 1] [i_0 + 3])) : (((/* implicit */int) arr_1 [i_0 + 3] [i_0 + 2])))))));
        arr_2 [i_0] [i_0 + 2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0 + 1]))))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) ((((/* implicit */int) ((var_14) < (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 + 1] [i_0])))))) > (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) >= (((/* implicit */int) arr_1 [i_0] [i_0]))))))))));
        /* LoopNest 2 */
        for (short i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_2] [i_2] [i_2] = ((/* implicit */int) ((((unsigned int) ((((/* implicit */_Bool) 16U)) ? (8U) : (((/* implicit */unsigned int) var_4))))) << (((((/* implicit */int) arr_0 [i_1])) - (13851)))));
                    var_17 = (~(((/* implicit */int) ((short) arr_3 [i_1 - 1] [i_1 + 2] [i_1 + 2]))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 4) 
        {
            var_18 *= ((/* implicit */short) 4294967278U);
            /* LoopNest 2 */
            for (unsigned long long int i_4 = 2; i_4 < 16; i_4 += 4) 
            {
                for (int i_5 = 0; i_5 < 20; i_5 += 1) 
                {
                    {
                        arr_15 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) max((((/* implicit */int) (((!(((/* implicit */_Bool) 9U)))) || (((/* implicit */_Bool) (+(var_6))))))), ((((~(var_12))) | ((~(((/* implicit */int) arr_0 [i_0]))))))));
                        arr_16 [i_0] [i_0] = ((/* implicit */unsigned int) (-(min((((/* implicit */unsigned long long int) arr_12 [i_3] [i_4] [i_3] [i_0])), (arr_11 [i_0] [i_3] [i_4] [i_5])))));
                    }
                } 
            } 
        }
    }
    for (int i_6 = 1; i_6 < 17; i_6 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned int) arr_0 [i_6]);
        var_20 = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_6 + 3]))) ^ (((((/* implicit */_Bool) 4728109011285982171ULL)) ? (((/* implicit */unsigned long long int) var_12)) : (arr_7 [i_6] [i_6] [i_6] [i_6]))))) > (((((/* implicit */_Bool) arr_5 [i_6] [i_6 + 2] [i_6])) ? (arr_11 [i_6] [i_6] [i_6] [i_6]) : (((/* implicit */unsigned long long int) (+(var_6))))))));
    }
    for (int i_7 = 1; i_7 < 17; i_7 += 1) /* same iter space */
    {
        arr_23 [i_7] = ((/* implicit */unsigned int) arr_13 [i_7 + 1] [i_7 + 2]);
        /* LoopSeq 1 */
        for (unsigned char i_8 = 0; i_8 < 20; i_8 += 2) 
        {
            var_21 -= arr_3 [i_7 + 1] [i_8] [i_8];
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_9 = 1; i_9 < 19; i_9 += 4) 
            {
                arr_29 [i_7] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(arr_19 [i_7])))) ? (((/* implicit */unsigned long long int) arr_6 [i_7 + 1] [i_9 + 1] [i_9 + 1] [i_9])) : (((((/* implicit */_Bool) (unsigned char)0)) ? (arr_7 [i_7] [i_7 - 1] [i_7 - 1] [i_7]) : (((/* implicit */unsigned long long int) arr_17 [i_8] [i_8]))))));
                /* LoopSeq 1 */
                for (short i_10 = 0; i_10 < 20; i_10 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_11 = 1; i_11 < 19; i_11 += 1) 
                    {
                        var_22 |= ((/* implicit */short) ((((/* implicit */_Bool) arr_14 [i_9 + 1] [i_10])) ? (arr_14 [i_10] [i_11 + 1]) : (arr_14 [i_8] [i_9 - 1])));
                        var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_34 [i_7 + 3] [i_8] [i_9] [i_11 - 1] [i_11] [i_11])) < (((/* implicit */int) arr_34 [i_7] [i_8] [i_9 - 1] [i_11 + 1] [i_11] [i_8]))));
                        var_24 = ((/* implicit */unsigned long long int) ((unsigned int) arr_13 [i_9 + 1] [i_7 + 1]));
                        arr_36 [i_11 + 1] [i_10] [i_9] [i_8] [i_7 - 1] = ((/* implicit */unsigned char) ((short) 18446744073709551598ULL));
                    }
                    var_25 = ((/* implicit */unsigned int) ((((/* implicit */int) ((short) var_11))) > (((/* implicit */int) arr_32 [i_7] [i_7 - 1] [i_7]))));
                    var_26 *= ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_31 [i_7] [i_7] [i_7] [i_7])) ? (var_4) : (((/* implicit */int) arr_0 [i_9]))))));
                    var_27 *= ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) var_11))))));
                }
            }
        }
    }
    for (unsigned int i_12 = 2; i_12 < 12; i_12 += 1) 
    {
        arr_39 [i_12] = ((/* implicit */unsigned char) max((min((((/* implicit */unsigned long long int) max((((/* implicit */short) (unsigned char)10)), ((short)(-32767 - 1))))), (((((/* implicit */_Bool) 3388891931U)) ? (((/* implicit */unsigned long long int) (-2147483647 - 1))) : (8912600842263904564ULL))))), (((/* implicit */unsigned long long int) arr_6 [i_12] [i_12] [i_12] [i_12 + 2]))));
        var_28 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) arr_26 [i_12] [i_12] [i_12 + 1])) : (((unsigned long long int) var_7))));
        var_29 = ((/* implicit */short) (-(arr_31 [i_12] [i_12] [i_12 + 2] [i_12 + 2])));
        arr_40 [i_12] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_24 [i_12])) ? (4294967282U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))), (((/* implicit */unsigned int) ((unsigned char) 0U)))))) ? (((((/* implicit */_Bool) (-(1293074739)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) 15U)))))) : (arr_19 [i_12 - 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
        arr_41 [i_12] = ((/* implicit */short) arr_34 [i_12 - 1] [i_12] [i_12] [i_12] [i_12] [i_12]);
    }
    var_30 = ((/* implicit */short) ((((/* implicit */unsigned long long int) var_11)) / (min((var_5), (((/* implicit */unsigned long long int) var_14))))));
    var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) var_11)) : (var_14))), (var_8)))) ? (((unsigned long long int) (~(var_11)))) : (((/* implicit */unsigned long long int) (+((-(var_0))))))));
}

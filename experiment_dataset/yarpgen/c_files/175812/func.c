/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175812
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
    var_15 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_13)), (((((/* implicit */_Bool) var_7)) ? (18446744073709551615ULL) : (((((/* implicit */_Bool) (unsigned char)241)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32745))) : (288230367561777152ULL)))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            var_16 = ((/* implicit */short) (!(((/* implicit */_Bool) 288230367561777152ULL))));
            var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) || (((/* implicit */_Bool) ((short) var_12)))));
            var_18 = ((/* implicit */unsigned long long int) max(((+((-(((/* implicit */int) (short)-19581)))))), (((/* implicit */int) (unsigned char)241))));
            var_19 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_1 [i_0] [i_1])) || (((/* implicit */_Bool) arr_1 [i_1] [(unsigned char)0])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))))) : (((/* implicit */int) max((arr_1 [(short)0] [i_0]), (((/* implicit */short) (unsigned char)128)))))));
        }
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 15; i_2 += 2) 
        {
            for (short i_3 = 0; i_3 < 15; i_3 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) min((var_1), (((/* implicit */unsigned long long int) max((arr_6 [(signed char)5]), (max((((/* implicit */short) var_13)), (arr_1 [i_2] [i_3]))))))));
                    var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) 18446744073709551615ULL))));
                    var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) (~(((/* implicit */int) var_12)))))));
                }
            } 
        } 
    }
    var_23 = -5064199280047171854LL;
    var_24 -= ((/* implicit */signed char) var_7);
    /* LoopNest 2 */
    for (unsigned char i_4 = 0; i_4 < 12; i_4 += 1) 
    {
        for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned char i_6 = 0; i_6 < 12; i_6 += 3) 
                {
                    arr_18 [i_4] [i_4] = ((/* implicit */long long int) ((10444993022089983372ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                    arr_19 [i_4] [i_4] [8LL] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (-(2293331399853881149LL)))) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)41320))))) : (max((8282919560220474174LL), (arr_8 [8ULL] [i_5] [i_6])))))));
                    /* LoopNest 2 */
                    for (signed char i_7 = 0; i_7 < 12; i_7 += 1) 
                    {
                        for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                        {
                            {
                                var_25 -= ((/* implicit */long long int) max((((((/* implicit */int) var_8)) >> (((arr_25 [i_5] [i_5] [i_8 + 1] [i_8 + 1] [i_8] [i_8 + 1]) - (1586046730053717147LL))))), (((/* implicit */int) (short)-19581))));
                                var_26 = ((/* implicit */unsigned long long int) max((var_26), (((((unsigned long long int) max((var_1), (((/* implicit */unsigned long long int) -8037992483790091793LL))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))));
                            }
                        } 
                    } 
                }
                for (unsigned long long int i_9 = 1; i_9 < 11; i_9 += 1) 
                {
                    var_27 = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) var_2))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_10 = 0; i_10 < 12; i_10 += 3) 
                    {
                        var_28 = ((/* implicit */unsigned long long int) max((var_28), ((+(var_1)))));
                        var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) (signed char)-5))));
                    }
                    for (unsigned char i_11 = 1; i_11 < 11; i_11 += 1) 
                    {
                        var_30 = ((/* implicit */short) min((((var_7) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_4] [i_4] [(short)3]))))), ((-(((((/* implicit */_Bool) 2293331399853881147LL)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))))));
                        var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) max((((_Bool) arr_31 [i_4] [i_5] [(unsigned char)4])), (((_Bool) (~(-2293331399853881172LL)))))))));
                        arr_38 [2ULL] [i_5] [2ULL] &= ((/* implicit */unsigned char) ((short) ((signed char) (-(((/* implicit */int) (_Bool)0))))));
                        arr_39 [(unsigned char)2] [i_5] [4ULL] [6LL] &= ((/* implicit */_Bool) 12887748944964522792ULL);
                    }
                    var_32 |= 3399983943744415399ULL;
                }
                /* LoopNest 2 */
                for (long long int i_12 = 0; i_12 < 12; i_12 += 4) 
                {
                    for (short i_13 = 0; i_13 < 12; i_13 += 1) 
                    {
                        {
                            var_33 = ((/* implicit */signed char) ((min(((-(((/* implicit */int) var_12)))), (((((/* implicit */_Bool) (signed char)-93)) ? (((/* implicit */int) (unsigned char)132)) : (((/* implicit */int) (short)-22571)))))) + (((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_7 [(signed char)7] [(unsigned char)13] [i_13])) ? (arr_11 [i_4]) : (((/* implicit */unsigned long long int) var_9))))))));
                            var_34 = ((/* implicit */short) max((var_34), (((/* implicit */short) arr_0 [i_4]))));
                        }
                    } 
                } 
            }
        } 
    } 
}

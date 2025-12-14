/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166970
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
    var_14 = ((/* implicit */signed char) var_11);
    var_15 = (+(((((/* implicit */int) (unsigned char)145)) ^ (((/* implicit */int) (unsigned char)102)))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        arr_4 [(unsigned char)2] = ((/* implicit */unsigned long long int) ((int) var_13));
        var_16 = ((/* implicit */signed char) (+((-(((/* implicit */int) (unsigned char)110))))));
        var_17 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -4501275075715902340LL)) ? (((var_4) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)145))))) : (4294963200U)));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 17; i_2 += 3) 
            {
                for (int i_3 = 0; i_3 < 18; i_3 += 2) 
                {
                    {
                        var_18 = ((/* implicit */unsigned char) (short)-5675);
                        /* LoopSeq 3 */
                        for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 3) 
                        {
                            arr_15 [i_2] [i_2] = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) 8576200768148909413ULL)))))));
                            var_19 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_9 [i_2 - 1] [i_2 - 1] [i_2 + 1])))) <= (((unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) (_Bool)1)))))));
                            var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) arr_7 [i_0] [i_3])) : (((/* implicit */int) arr_9 [i_3] [i_2] [9])))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_5)))))));
                        }
                        for (unsigned short i_5 = 2; i_5 < 17; i_5 += 2) 
                        {
                            var_21 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)170))) + (18446744073709551615ULL)));
                            arr_20 [i_3] [i_3] [i_3] [i_2] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) arr_3 [i_0]))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_5)), (var_12)))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned short)10537)) : (((/* implicit */int) var_3)))) : (((((/* implicit */_Bool) arr_19 [i_2] [i_2])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_5)))))) : (((/* implicit */int) max(((unsigned char)83), ((unsigned char)145))))));
                            var_22 = ((/* implicit */short) (+(((var_2) - (((/* implicit */unsigned int) arr_13 [i_2] [i_2] [i_2 + 1] [i_2] [i_2]))))));
                        }
                        for (unsigned int i_6 = 2; i_6 < 17; i_6 += 3) 
                        {
                            var_23 |= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((arr_11 [i_2 + 1] [i_3] [i_6] [i_6 - 1]) <= (arr_11 [i_2 - 1] [i_2 + 1] [i_3] [i_6 + 1])))), (((arr_11 [i_2 + 1] [i_6] [i_6] [i_6 - 1]) + (((/* implicit */unsigned long long int) var_9))))));
                            arr_24 [i_2] [6LL] [11] [(unsigned short)10] [i_2] [i_3] [11] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_2 [i_2])))) ? ((-(arr_14 [i_0] [i_1] [i_0] [i_3] [i_3] [i_6] [i_6]))) : (((/* implicit */int) ((short) var_13)))))) ? ((-(((((/* implicit */_Bool) (short)17135)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)25)))))) : (((int) min((((/* implicit */unsigned int) var_5)), (4294967295U)))));
                        }
                        var_24 = ((/* implicit */signed char) var_13);
                        var_25 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_10 [i_2 + 1] [i_2 - 1])) ? (arr_5 [i_2 + 1]) : (((/* implicit */int) arr_10 [i_2 + 1] [i_2 - 1]))))));
                    }
                } 
            } 
            var_26 ^= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((unsigned short) arr_12 [i_0] [i_0]))), (min((((unsigned long long int) arr_18 [i_0] [i_0] [i_0] [i_1] [i_1])), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)251)))))))));
            var_27 ^= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) max((((/* implicit */unsigned short) (signed char)46)), ((unsigned short)34430)))) ? (((unsigned long long int) (unsigned short)10532)) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_7), (var_13))))))), (((((/* implicit */_Bool) (unsigned short)7963)) ? (14444821255344667933ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
            /* LoopSeq 1 */
            for (int i_7 = 1; i_7 < 14; i_7 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned char i_8 = 0; i_8 < 18; i_8 += 3) 
                {
                    for (int i_9 = 0; i_9 < 18; i_9 += 1) 
                    {
                        {
                            var_28 = arr_18 [i_7] [i_0] [i_7] [i_7] [i_7 - 1];
                            var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [(unsigned char)2])) ? (((((/* implicit */int) (unsigned char)23)) ^ (529924764))) : ((-(((/* implicit */int) (unsigned short)10530))))))) ? ((~((~(arr_31 [(short)1] [(short)1]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (6465605323513729024LL))))));
                        }
                    } 
                } 
                arr_33 [i_0] [i_0] [(unsigned char)5] [i_0] = ((/* implicit */signed char) (short)-27915);
            }
        }
        var_30 = ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_6 [i_0] [i_0])) * (min((((unsigned long long int) arr_18 [i_0] [i_0] [i_0] [i_0] [12])), (((/* implicit */unsigned long long int) max((arr_23 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */short) arr_27 [i_0] [i_0] [i_0])))))))));
    }
}

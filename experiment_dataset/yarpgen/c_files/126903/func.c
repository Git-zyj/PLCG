/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126903
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
    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) var_9)) ? (4294967295U) : (((/* implicit */unsigned int) min((var_7), (min((var_11), (((/* implicit */int) var_13)))))))));
    /* LoopSeq 1 */
    for (int i_0 = 3; i_0 < 16; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                for (unsigned char i_3 = 4; i_3 < 16; i_3 += 4) 
                {
                    {
                        arr_10 [i_0 - 3] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) 0U);
                        arr_11 [i_0 - 3] [i_0 - 2] [i_1] [i_1] [i_2] [i_3] = ((/* implicit */unsigned int) (_Bool)0);
                    }
                } 
            } 
        } 
        arr_12 [i_0] = ((/* implicit */unsigned char) ((unsigned long long int) 498326908196546158ULL));
        arr_13 [i_0] = ((/* implicit */int) min((((/* implicit */short) (!((_Bool)1)))), ((short)1835)));
        /* LoopNest 3 */
        for (unsigned char i_4 = 0; i_4 < 17; i_4 += 3) 
        {
            for (short i_5 = 2; i_5 < 16; i_5 += 2) 
            {
                for (unsigned char i_6 = 1; i_6 < 13; i_6 += 3) 
                {
                    {
                        arr_23 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) 213940635)) && (((/* implicit */_Bool) (unsigned char)66))));
                        /* LoopSeq 2 */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                        {
                            arr_27 [i_0] [i_0 - 3] [i_0] [i_0] = ((/* implicit */unsigned short) var_4);
                            var_17 += ((/* implicit */_Bool) ((int) var_11));
                            arr_28 [i_0 - 3] [i_0] [i_0 - 3] [i_0 - 3] [i_0] [i_0] &= ((/* implicit */int) min(((-(var_1))), (((/* implicit */unsigned int) ((unsigned char) min((((/* implicit */short) var_5)), ((short)-1836)))))));
                            arr_29 [i_5] = ((/* implicit */short) ((((((/* implicit */_Bool) min((498326908196546170ULL), (((/* implicit */unsigned long long int) (unsigned short)65535))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_26 [i_0])) <= (15823497237586339593ULL)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) arr_1 [i_0] [i_0]))))))) - (((((/* implicit */int) ((((/* implicit */long long int) arr_24 [i_7] [i_5] [i_5] [i_6] [i_5])) < (arr_22 [i_0] [i_4] [i_0] [i_4])))) + (((var_4) - (((/* implicit */int) (_Bool)0))))))));
                            var_18 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((min((1U), (((/* implicit */unsigned int) var_4)))), (((/* implicit */unsigned int) ((var_0) ^ (((/* implicit */int) arr_1 [i_0] [i_5])))))))) ? (min((((/* implicit */int) var_8)), (((1831844186) >> (((/* implicit */int) var_14)))))) : ((((_Bool)0) ? (((/* implicit */int) min((var_15), (((/* implicit */unsigned short) (unsigned char)6))))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_17 [i_0] [i_7])) : (var_2)))))));
                        }
                        /* vectorizable */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                        {
                            arr_34 [(short)8] [i_4] [(short)8] [(short)8] [i_6 + 1] [i_8] &= ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) arr_17 [i_0] [(_Bool)1])) && (((/* implicit */_Bool) arr_19 [(_Bool)1] [i_4] [i_4]))))));
                            arr_35 [i_0] [i_0] [i_0] [(unsigned char)6] [i_0] = ((/* implicit */unsigned char) arr_15 [(unsigned char)4]);
                        }
                        var_19 ^= ((/* implicit */unsigned long long int) min((((unsigned char) min((arr_20 [4] [i_5] [i_4]), (arr_25 [i_0 - 3] [(unsigned char)1] [i_5 - 2] [i_5 - 2] [i_6])))), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_5] [i_5] [5ULL] [i_5])) ? (arr_20 [1] [16U] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)3)))))) && (((/* implicit */_Bool) (-(((/* implicit */int) (short)1839))))))))));
                        arr_36 [i_0] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) & (0ULL)))) ? (490193849U) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)18602))) : (2849933301U)))))) ? (((/* implicit */unsigned int) (~(var_0)))) : (((unsigned int) arr_3 [i_0]))));
                    }
                } 
            } 
        } 
    }
    var_20 = ((/* implicit */unsigned short) min((((unsigned long long int) min((var_7), (-213940635)))), (((/* implicit */unsigned long long int) var_6))));
}

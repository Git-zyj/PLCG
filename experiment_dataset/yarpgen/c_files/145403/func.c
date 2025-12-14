/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145403
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
    var_20 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (var_7))))))), (((max((var_8), (var_13))) / (((/* implicit */unsigned long long int) var_16))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */short) ((var_1) & (((/* implicit */unsigned int) ((((/* implicit */int) var_14)) - (((/* implicit */int) arr_0 [i_0 + 1])))))));
                arr_7 [6LL] = ((/* implicit */int) (!(((/* implicit */_Bool) (short)10051))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_2 = 0; i_2 < 13; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 10; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 13; i_4 += 3) 
                        {
                            {
                                arr_17 [i_0 - 1] [i_1] [i_3] [i_1] [i_4] = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) ((((/* implicit */int) arr_9 [i_0 - 1] [i_1] [i_3] [i_4])) <= (arr_10 [i_0] [i_1] [10U] [i_4]))))));
                                arr_18 [i_0] [i_0] [i_1] [i_2] [i_2] [i_3] [i_4] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0])) ? (var_13) : (((/* implicit */unsigned long long int) 242933089))))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 - 2]) > (((/* implicit */unsigned int) arr_14 [i_4] [i_2] [i_2] [i_2] [i_0])))))) : (var_0));
                                arr_19 [i_0 - 1] [i_3] [i_0 - 1] [i_0] [i_0] [(unsigned char)3] = ((/* implicit */unsigned short) (~((~(2546808908U)))));
                                arr_20 [i_3] [i_3] [i_2] [i_3] [i_0] = (((~(((/* implicit */int) (_Bool)1)))) ^ (((/* implicit */int) (short)-10051)));
                                arr_21 [i_3] [i_3 + 2] [i_2] [(_Bool)0] [i_3] = ((/* implicit */int) (+(((((/* implicit */_Bool) 1748158383U)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-10044))) : (-26LL)))));
                            }
                        } 
                    } 
                    arr_22 [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-81))));
                    arr_23 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) arr_1 [i_0]);
                }
                for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 3) 
                {
                    arr_27 [i_0] &= ((/* implicit */short) arr_13 [i_5] [i_1] [i_0] [(short)2]);
                    arr_28 [i_0 + 1] = ((/* implicit */unsigned int) arr_9 [i_5] [i_0 - 2] [(_Bool)1] [i_0]);
                    arr_29 [i_5] [i_1] [i_0] = ((/* implicit */signed char) arr_25 [i_0 - 1] [i_1] [i_5]);
                    arr_30 [i_1] [i_1] |= ((/* implicit */unsigned short) var_15);
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 12; i_6 += 3) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                arr_36 [i_0 - 2] [i_1] [i_1] [i_6 - 1] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(min((arr_35 [i_6 - 1] [i_1]), (((/* implicit */long long int) var_3))))))) ? (((((((/* implicit */int) (short)-10052)) != (1273054096))) ? (var_18) : (((/* implicit */int) (unsigned char)255)))) : ((~(((/* implicit */int) (short)31511))))));
                                arr_37 [i_6] [i_1] [i_5] [i_6] [i_7] [i_7] &= ((/* implicit */long long int) ((((min((arr_25 [(_Bool)0] [i_6] [i_7]), (((/* implicit */unsigned long long int) (unsigned short)56488)))) << (((((/* implicit */int) var_19)) - (7241))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (arr_12 [i_1] [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))) || (((/* implicit */_Bool) arr_33 [i_0] [i_1] [i_1]))))))));
                                arr_38 [i_5] [i_5] = ((/* implicit */int) (+(((((/* implicit */_Bool) (unsigned short)17742)) ? (min((((/* implicit */unsigned long long int) var_11)), (var_4))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_17)) == (var_4)))))))));
                                arr_39 [(unsigned short)12] |= ((/* implicit */unsigned short) min(((!(((/* implicit */_Bool) var_1)))), ((!(((/* implicit */_Bool) arr_31 [i_7] [i_6] [i_5] [i_0]))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}

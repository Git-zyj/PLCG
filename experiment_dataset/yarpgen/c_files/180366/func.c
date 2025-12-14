/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180366
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
    var_11 |= ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) & ((~(var_6)))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            {
                                var_12 *= ((((/* implicit */_Bool) (-(arr_2 [i_0] [i_1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_11 [i_3] [12LL] [(unsigned char)8])))))))) : (1997682644U));
                                arr_12 [i_1] [(short)1] [i_2] [(short)1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_1 + 1] [i_1 + 1]))))) ? (((((/* implicit */_Bool) arr_8 [i_1 - 1] [i_1] [i_2] [i_1] [i_3])) ? (2901794620676951282ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1 + 1] [i_1]))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_3 [i_1 - 1] [i_1])))))));
                            }
                        } 
                    } 
                    var_13 += ((/* implicit */_Bool) arr_1 [i_0]);
                    /* LoopSeq 4 */
                    for (signed char i_5 = 0; i_5 < 23; i_5 += 4) /* same iter space */
                    {
                        var_14 *= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_9 [i_1 - 1] [i_1])) ? (2901794620676951282ULL) : (((/* implicit */unsigned long long int) arr_9 [i_1 + 1] [i_1]))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_6 = 0; i_6 < 23; i_6 += 3) 
                        {
                            arr_20 [i_1] [i_5] [6] [6] [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_7 [i_1] [i_1 + 1] [i_1 + 1] [i_1 + 1]))));
                            arr_21 [i_1] [i_5] [i_2] [i_1 - 1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_14 [i_6] [i_1] [(unsigned short)21] [(unsigned short)21] [i_1] [i_0]))))) * (2901794620676951291ULL)));
                            var_15 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_0 [i_1 + 1]))));
                        }
                    }
                    for (signed char i_7 = 0; i_7 < 23; i_7 += 4) /* same iter space */
                    {
                        var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) ((((((/* implicit */_Bool) arr_16 [i_1 + 1] [i_1 + 1] [i_1 - 1])) ? (((/* implicit */unsigned long long int) arr_16 [i_1 + 1] [i_1 + 1] [i_1 + 1])) : (0ULL))) <= (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_14 [i_0] [i_7] [i_2] [i_2] [2] [(short)0]))))))))));
                        arr_25 [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) arr_13 [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 1] [i_1] [i_1 + 1])) < (((((/* implicit */_Bool) arr_13 [i_1 + 1] [3LL] [i_1 + 1] [i_7] [i_1] [i_1 + 1])) ? (((/* implicit */int) arr_13 [i_1 + 1] [(short)8] [(unsigned char)16] [i_7] [i_7] [i_7])) : (((/* implicit */int) arr_13 [i_1 + 1] [i_0] [i_2] [i_7] [i_2] [i_2]))))));
                    }
                    for (signed char i_8 = 0; i_8 < 23; i_8 += 4) /* same iter space */
                    {
                        arr_28 [i_0] [i_1] [(short)1] [i_2] [19] [i_8] = ((/* implicit */long long int) arr_16 [i_0] [i_1] [i_2]);
                        var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(arr_18 [i_8] [i_2] [i_1] [i_1] [i_0] [i_0])))))))));
                    }
                    for (unsigned short i_9 = 3; i_9 < 21; i_9 += 2) 
                    {
                        arr_32 [i_1] [i_1] [i_1] [i_9] [i_0] [i_9 - 1] = arr_11 [i_0] [i_1] [1];
                        arr_33 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) (short)32767);
                    }
                }
            } 
        } 
        var_18 &= ((/* implicit */unsigned char) (short)(-32767 - 1));
        var_19 = ((/* implicit */unsigned int) (short)32766);
        var_20 = ((/* implicit */short) -269737703);
        arr_34 [i_0] [i_0] = ((/* implicit */short) arr_24 [i_0] [i_0] [i_0] [i_0]);
    }
    for (signed char i_10 = 0; i_10 < 13; i_10 += 2) 
    {
        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_30 [i_10])))) ? (((/* implicit */int) arr_17 [i_10] [i_10] [(unsigned char)21] [i_10] [i_10])) : (-642323345)));
        var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) (~(((((/* implicit */int) (signed char)-81)) ^ (((((/* implicit */_Bool) arr_35 [i_10])) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) arr_4 [i_10])))))))))));
        arr_37 [i_10] [i_10] = ((/* implicit */short) (!((!(((/* implicit */_Bool) arr_26 [i_10]))))));
        var_23 += ((/* implicit */unsigned short) (+(arr_26 [i_10])));
        /* LoopNest 2 */
        for (short i_11 = 0; i_11 < 13; i_11 += 2) 
        {
            for (short i_12 = 0; i_12 < 13; i_12 += 2) 
            {
                {
                    var_24 *= ((/* implicit */unsigned int) ((29360128) != ((-(((((/* implicit */int) arr_19 [i_12] [i_11] [i_10])) << (2LL)))))));
                    arr_43 [i_12] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_19 [i_10] [i_11] [i_12]))));
                }
            } 
        } 
    }
    var_25 = ((/* implicit */short) ((var_2) & (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)1))) : (var_2)))));
    var_26 ^= ((/* implicit */unsigned short) var_3);
}

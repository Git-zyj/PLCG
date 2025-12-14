/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187852
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
    var_10 = ((/* implicit */unsigned short) var_4);
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1))))) == (var_9)));
                arr_6 [i_0] &= ((/* implicit */int) (-((-(max((var_2), (((/* implicit */long long int) (short)-1678))))))));
            }
        } 
    } 
    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) min((var_7), (((/* implicit */int) var_3))))), (var_5)))) ? (((/* implicit */unsigned long long int) var_5)) : ((+(var_6)))));
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 17; i_2 += 4) 
    {
        for (unsigned char i_3 = 0; i_3 < 17; i_3 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (short i_4 = 4; i_4 < 13; i_4 += 4) /* same iter space */
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (signed char i_5 = 1; i_5 < 13; i_5 += 1) 
                    {
                        var_13 = ((/* implicit */_Bool) (((((_Bool)1) && (arr_14 [i_3] [i_5 + 1]))) ? (((/* implicit */int) arr_9 [i_3])) : (((/* implicit */int) arr_1 [i_4 - 4]))));
                        var_14 &= ((/* implicit */unsigned int) arr_8 [i_5 - 1]);
                        arr_15 [i_2] &= ((/* implicit */unsigned short) (~(((/* implicit */int) arr_11 [i_5] [i_5] [i_5 - 1] [i_5 + 1]))));
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 2) 
                    {
                        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (((arr_12 [i_2] [i_3] [i_4 - 1] [i_6]) ^ (((/* implicit */long long int) ((/* implicit */int) var_4))))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_2 [i_4 + 3]), (arr_2 [i_4 - 2])))))));
                        var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) arr_10 [i_4]))));
                    }
                    /* vectorizable */
                    for (short i_7 = 0; i_7 < 17; i_7 += 1) 
                    {
                        var_17 = ((/* implicit */unsigned long long int) max((var_17), (arr_22 [i_3] [i_3] [i_4 + 1] [i_3] [i_4] [i_2])));
                        var_18 = ((/* implicit */signed char) ((((/* implicit */int) var_1)) + (((/* implicit */int) var_4))));
                        var_19 = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
                    }
                    for (short i_8 = 2; i_8 < 16; i_8 += 3) 
                    {
                        arr_25 [i_2] [i_2] [i_3] [i_3] [i_3] [i_8] = ((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_2])) == (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
                        arr_26 [i_2] [i_3] [i_3] [i_3] [i_8] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_4 - 2] [i_4 - 2] [i_8 + 1] [i_8])) ? (((/* implicit */int) arr_11 [i_4 + 1] [i_4] [i_8 - 1] [i_8])) : (((/* implicit */int) arr_11 [i_4 + 4] [i_4 + 4] [i_8 - 2] [i_8]))))) ? (((((/* implicit */_Bool) ((unsigned long long int) arr_0 [i_4 - 1]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_3]))) : (max((var_6), (((/* implicit */unsigned long long int) var_5)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((signed char)-82), ((signed char)-82)))))));
                    }
                    var_20 = ((/* implicit */unsigned long long int) arr_10 [i_3]);
                    arr_27 [i_2] [10] [i_2] &= ((/* implicit */unsigned long long int) ((unsigned int) (~(((/* implicit */int) arr_24 [i_4 - 4] [i_4 - 3] [i_4 - 4] [i_2])))));
                }
                /* vectorizable */
                for (short i_9 = 4; i_9 < 13; i_9 += 4) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_10 = 2; i_10 < 13; i_10 += 4) 
                    {
                        for (signed char i_11 = 2; i_11 < 16; i_11 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((arr_17 [i_2] [i_3] [i_3] [i_10 + 1] [i_10 + 1] [i_11]) < (arr_17 [i_2] [i_2] [i_3] [i_9 + 1] [i_10] [i_2]))))));
                                arr_36 [i_2] [i_2] [i_2] [i_2] [i_3] = ((/* implicit */signed char) arr_3 [i_11 - 1] [i_10]);
                            }
                        } 
                    } 
                    arr_37 [i_2] [i_2] [i_3] [i_3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)-4))));
                    var_22 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)81)) / (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_2] [i_2] [i_2] [(unsigned char)8] [i_3] [i_9])) ? (((/* implicit */int) arr_13 [i_2] [i_3] [i_9] [i_9])) : (((/* implicit */int) (unsigned char)8))))) : (((arr_32 [i_2] [(unsigned short)0] [i_9] [i_3] [(signed char)13] [(signed char)13]) | (((/* implicit */long long int) ((/* implicit */int) arr_18 [(signed char)2] [(signed char)2] [i_9 - 1])))))));
                    var_23 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned char) arr_19 [i_2] [i_3] [i_3])))));
                    var_24 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_0 [i_9]))));
                }
                var_25 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_12 [i_2] [i_2] [i_2] [i_2])))) ? (min((((/* implicit */long long int) (signed char)87)), (-8728004561118221332LL))) : ((~(arr_12 [i_2] [i_2] [i_3] [i_3])))));
            }
        } 
    } 
}

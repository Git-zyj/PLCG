/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135584
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
    var_16 &= ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_9)), (var_2)))) && (var_13)))), (((var_13) ? (max((((/* implicit */unsigned long long int) var_14)), (var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) var_4);
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            arr_6 [i_0] [i_1] [i_0 + 1] = ((/* implicit */signed char) arr_1 [i_0]);
            var_17 = ((/* implicit */_Bool) (~(var_3)));
        }
        var_18 *= ((/* implicit */unsigned long long int) var_2);
    }
    /* vectorizable */
    for (unsigned int i_2 = 3; i_2 < 15; i_2 += 1) 
    {
        arr_11 [(unsigned short)13] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)21)) & (((/* implicit */int) (unsigned short)21))));
        arr_12 [i_2] = ((/* implicit */long long int) (~(((int) var_11))));
        var_19 = ((/* implicit */_Bool) (-(arr_7 [i_2])));
        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_2 [i_2])) ? (32767U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)13)))))))));
    }
    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 2) 
    {
        var_21 = ((/* implicit */unsigned short) (-(((/* implicit */int) (!((!(((/* implicit */_Bool) var_4)))))))));
        arr_16 [i_3] = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((long long int) (unsigned short)31569))) : (var_5))));
        /* LoopNest 2 */
        for (signed char i_4 = 0; i_4 < 19; i_4 += 3) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_6 = 4; i_6 < 17; i_6 += 3) 
                    {
                        for (signed char i_7 = 4; i_7 < 17; i_7 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) arr_26 [i_3] [i_3] [i_7] [i_6] [i_7]))));
                                var_23 = ((/* implicit */long long int) ((((_Bool) var_7)) && (((/* implicit */_Bool) ((((/* implicit */int) (signed char)-78)) + (((/* implicit */int) (short)6144)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned short i_8 = 2; i_8 < 18; i_8 += 1) 
                    {
                        var_24 ^= ((/* implicit */unsigned short) (((~(var_5))) ^ (((/* implicit */unsigned long long int) 402653184))));
                        var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((unsigned short)27962), (((/* implicit */unsigned short) (_Bool)1))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_12)))))));
                        arr_30 [i_4] [i_4] = ((/* implicit */unsigned long long int) arr_0 [i_4] [i_5]);
                    }
                    arr_31 [i_3] [i_4] [i_5] [i_5] = ((/* implicit */unsigned long long int) min((var_11), (((/* implicit */short) ((((/* implicit */_Bool) 7759557063861756105ULL)) || (((/* implicit */_Bool) 7759557063861756105ULL)))))));
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 0; i_9 < 19; i_9 += 2) 
                    {
                        for (long long int i_10 = 2; i_10 < 18; i_10 += 1) 
                        {
                            {
                                arr_38 [i_3] [i_4] [i_3] [i_5] [(unsigned short)16] [i_10 - 2] [i_9] &= ((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned short) ((arr_33 [i_4] [i_5]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_3] [i_3] [i_3] [i_3])))))))));
                                arr_39 [i_3] [i_10] = ((/* implicit */unsigned long long int) ((2147483648U) <= (1163463794U)));
                                var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) ((unsigned short) var_9)))));
                                arr_40 [i_10] [i_10] [i_10] = ((/* implicit */int) ((signed char) ((((var_12) < (((/* implicit */long long int) ((/* implicit */int) var_6))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_27 [i_10] [i_10 + 1] [i_10 - 1] [i_10] [i_10 + 1] [i_4])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_11 = 3; i_11 < 16; i_11 += 3) 
                    {
                        for (short i_12 = 2; i_12 < 16; i_12 += 3) 
                        {
                            {
                                arr_46 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */long long int) (-(((/* implicit */int) var_10))));
                                var_27 = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)13))));
                                arr_47 [i_3] [i_4] [i_5] = ((/* implicit */unsigned short) min(((-(((/* implicit */int) (signed char)-76)))), (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (signed char)114)))))));
                                var_28 ^= ((/* implicit */signed char) (unsigned short)27919);
                                var_29 -= ((/* implicit */unsigned int) max((arr_29 [i_3] [i_3] [i_3] [i_3] [i_3]), (((/* implicit */unsigned short) var_11))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}

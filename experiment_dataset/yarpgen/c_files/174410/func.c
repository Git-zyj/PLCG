/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174410
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
    var_15 &= ((/* implicit */unsigned char) var_14);
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 = ((/* implicit */signed char) arr_1 [i_0]);
        var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_1 [(unsigned char)16])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_0 [i_0]))))))) ? ((+(((arr_0 [(unsigned char)7]) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [(short)12]))) : (var_12))))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((signed char) var_10))))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 13; i_2 += 3) 
        {
            for (short i_3 = 0; i_3 < 13; i_3 += 3) 
            {
                {
                    arr_8 [i_2] = ((/* implicit */short) var_3);
                    arr_9 [i_2] [i_2] = arr_1 [i_3];
                    var_18 = ((/* implicit */unsigned short) var_3);
                }
            } 
        } 
        /* LoopNest 3 */
        for (long long int i_4 = 2; i_4 < 11; i_4 += 3) 
        {
            for (short i_5 = 0; i_5 < 13; i_5 += 3) 
            {
                for (short i_6 = 2; i_6 < 9; i_6 += 3) 
                {
                    {
                        var_19 *= ((/* implicit */unsigned long long int) (signed char)-1);
                        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) arr_6 [i_1]))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (short i_7 = 1; i_7 < 11; i_7 += 2) 
        {
            for (long long int i_8 = 0; i_8 < 13; i_8 += 2) 
            {
                {
                    var_21 = ((_Bool) arr_5 [i_7 + 2] [i_7 + 2]);
                    arr_21 [i_8] [(unsigned short)6] [i_1] = ((/* implicit */signed char) (~(((/* implicit */int) var_4))));
                }
            } 
        } 
    }
    for (signed char i_9 = 0; i_9 < 20; i_9 += 2) 
    {
        var_22 *= ((/* implicit */unsigned long long int) ((((_Bool) max((((/* implicit */unsigned long long int) (unsigned char)177)), (18446744073709551615ULL)))) ? (((((/* implicit */int) var_0)) << (((((/* implicit */int) min((((/* implicit */short) arr_22 [i_9])), ((short)-23395)))) + (23397))))) : (((/* implicit */int) ((short) arr_22 [i_9])))));
        /* LoopNest 3 */
        for (long long int i_10 = 0; i_10 < 20; i_10 += 3) 
        {
            for (unsigned char i_11 = 1; i_11 < 19; i_11 += 1) 
            {
                for (short i_12 = 1; i_12 < 19; i_12 += 4) 
                {
                    {
                        var_23 -= ((/* implicit */int) min((((/* implicit */unsigned long long int) var_4)), (min((arr_24 [i_11]), (min((18446744073709551604ULL), (((/* implicit */unsigned long long int) arr_1 [i_10]))))))));
                        var_24 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (-(arr_25 [i_9] [1U] [i_12])))) && (((/* implicit */_Bool) arr_25 [(unsigned char)17] [i_9] [i_9])))) ? (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (unsigned short)41442)) ? (((/* implicit */int) arr_31 [i_10])) : (((/* implicit */int) arr_22 [(signed char)8]))))))) : (((unsigned long long int) max((arr_30 [(short)1] [i_9] [13ULL] [i_10] [i_11 + 1] [i_12 + 1]), (((/* implicit */long long int) arr_31 [i_10])))))));
                        arr_32 [i_9] [i_11] [i_11] [i_12] = ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)-64))));
                        var_25 = ((/* implicit */short) arr_25 [i_9] [i_10] [(signed char)3]);
                        arr_33 [i_9] [i_10] &= ((/* implicit */long long int) var_6);
                    }
                } 
            } 
        } 
        arr_34 [i_9] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (((/* implicit */int) ((_Bool) arr_0 [i_9]))) : (((((/* implicit */int) arr_22 [i_9])) | (((/* implicit */int) var_13))))));
    }
    var_26 = ((/* implicit */unsigned long long int) (-(var_2)));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128311
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
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_1), (((/* implicit */int) var_12))))) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_11)))));
    var_17 -= ((/* implicit */long long int) var_5);
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_18 += arr_2 [i_0];
        var_19 &= ((/* implicit */unsigned int) arr_0 [4LL] [i_0]);
    }
    for (signed char i_1 = 1; i_1 < 21; i_1 += 4) 
    {
        /* LoopSeq 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_8 [i_1] [1LL] = ((/* implicit */unsigned short) arr_4 [(unsigned short)4]);
            var_20 = ((/* implicit */unsigned long long int) (~(((((/* implicit */unsigned int) 536862720)) + (((((/* implicit */_Bool) arr_6 [i_1] [i_2])) ? (1325378887U) : (((/* implicit */unsigned int) -536862720))))))));
            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_1])) ? (arr_3 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1] [i_1] [i_1])))));
            var_22 = ((/* implicit */short) max(((-(arr_3 [i_1 + 1]))), (((/* implicit */unsigned long long int) arr_4 [i_1 + 2]))));
            var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) (+(7497818079546865198LL))))));
        }
        for (long long int i_3 = 0; i_3 < 24; i_3 += 4) 
        {
            var_24 += ((/* implicit */int) arr_5 [i_1] [i_1] [i_1]);
            var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_3])) ? ((~((~(((/* implicit */int) arr_4 [12])))))) : (((((/* implicit */_Bool) arr_3 [i_1 - 1])) ? (((/* implicit */int) arr_4 [i_1 - 1])) : ((-(-536862717)))))));
            var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) var_4))));
            var_27 = ((/* implicit */unsigned short) arr_7 [i_3]);
        }
        arr_11 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1 + 3] [i_1 - 1] [i_1 + 2])) ? (arr_9 [i_1 + 2]) : (arr_9 [i_1 - 1])))) ? (arr_9 [i_1 - 1]) : (arr_9 [i_1 + 3])));
        var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_10 [22U] [22U])) ? (-4891687325355752800LL) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [11] [i_1])))))))) ? (var_5) : (((/* implicit */unsigned int) min((((/* implicit */int) arr_10 [i_1 - 1] [i_1])), ((+(((/* implicit */int) arr_6 [(signed char)13] [16]))))))))))));
        var_29 = ((/* implicit */unsigned short) arr_9 [i_1 + 1]);
    }
    /* vectorizable */
    for (long long int i_4 = 1; i_4 < 18; i_4 += 3) 
    {
        var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) arr_9 [(signed char)11]))));
        /* LoopNest 3 */
        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        var_31 = var_3;
                        /* LoopSeq 3 */
                        for (unsigned long long int i_8 = 0; i_8 < 20; i_8 += 4) 
                        {
                            var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_7] [i_6] [(unsigned short)17])) ? (arr_14 [i_8] [10ULL] [(_Bool)1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
                            var_33 = ((/* implicit */int) min((var_33), (((/* implicit */int) var_11))));
                        }
                        for (unsigned char i_9 = 0; i_9 < 20; i_9 += 3) 
                        {
                            var_34 -= ((/* implicit */short) var_4);
                            arr_28 [11ULL] [6LL] [6LL] [6LL] [18ULL] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_5 + 1] [i_5 + 1] [i_4 + 1] [i_4])) && (((/* implicit */_Bool) arr_17 [i_5 + 1] [i_5 + 1] [i_4 + 1] [i_4]))));
                        }
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            var_35 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_30 [i_10] [i_6] [1U] [i_4 + 1]))));
                            var_36 = ((/* implicit */unsigned short) min((var_36), (((/* implicit */unsigned short) arr_5 [i_4] [i_4] [i_4]))));
                        }
                        var_37 ^= ((/* implicit */unsigned long long int) var_9);
                        var_38 = arr_1 [i_7];
                    }
                } 
            } 
        } 
        var_39 = ((/* implicit */short) arr_19 [i_4] [i_4] [(unsigned short)14] [i_4] [i_4]);
    }
    var_40 = ((/* implicit */_Bool) min((var_40), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_14) : (((/* implicit */unsigned long long int) var_9)))))));
}

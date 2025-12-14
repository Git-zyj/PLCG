/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15054
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
    var_11 = ((/* implicit */long long int) (((~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_3))))) <= ((~(max((((/* implicit */long long int) var_6)), (var_1)))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)44336)) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_5)))) : (((/* implicit */int) arr_2 [i_0]))));
        var_12 &= (!(((/* implicit */_Bool) arr_1 [i_0] [i_0])));
    }
    for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        var_13 = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) arr_5 [i_1])) || (((/* implicit */_Bool) arr_1 [i_1] [i_1])))));
        var_14 = ((/* implicit */long long int) arr_3 [i_1]);
        var_15 = ((/* implicit */_Bool) ((unsigned long long int) max((((((/* implicit */_Bool) var_8)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) var_10))))))));
    }
    for (int i_2 = 0; i_2 < 20; i_2 += 4) 
    {
        var_16 = ((/* implicit */short) max((var_16), (var_4)));
        /* LoopSeq 3 */
        for (unsigned char i_3 = 0; i_3 < 20; i_3 += 3) 
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 2) 
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (long long int i_5 = 0; i_5 < 20; i_5 += 3) 
                {
                    arr_19 [i_3] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */int) arr_0 [i_4])) : (((/* implicit */int) arr_0 [i_2]))));
                    arr_20 [i_2] &= ((/* implicit */unsigned long long int) arr_9 [i_4]);
                    var_17 *= arr_16 [i_4];
                    var_18 = ((/* implicit */unsigned short) arr_12 [i_2]);
                }
                /* vectorizable */
                for (short i_6 = 0; i_6 < 20; i_6 += 2) 
                {
                    var_19 += ((/* implicit */unsigned long long int) arr_8 [i_2]);
                    var_20 -= ((/* implicit */unsigned long long int) arr_2 [(unsigned char)14]);
                }
                var_21 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (+(max((((/* implicit */long long int) arr_3 [i_4])), (var_3)))))), (var_0)));
            }
            /* vectorizable */
            for (unsigned char i_7 = 0; i_7 < 20; i_7 += 4) 
            {
                arr_27 [i_3] = ((/* implicit */unsigned char) 1389310211U);
                /* LoopSeq 1 */
                for (unsigned long long int i_8 = 0; i_8 < 20; i_8 += 2) 
                {
                    arr_30 [i_2] [i_2] [i_3] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_8))))) ? (((/* implicit */int) ((unsigned char) (short)16376))) : (((/* implicit */int) arr_28 [i_2] [i_3] [i_7] [i_8]))));
                    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)44338))));
                    arr_31 [i_2] [i_3] [i_3] [i_3] = ((/* implicit */short) (((+(((/* implicit */int) arr_5 [i_2])))) == ((~(((/* implicit */int) var_10))))));
                }
                var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_15 [i_2] [i_3] [i_2])) ? (arr_15 [i_2] [i_3] [i_7]) : (arr_15 [i_2] [i_2] [i_2]))))));
                arr_32 [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_3])) || (((/* implicit */_Bool) var_4))));
            }
            /* vectorizable */
            for (signed char i_9 = 0; i_9 < 20; i_9 += 1) 
            {
                arr_35 [i_2] [i_3] [i_3] = ((/* implicit */unsigned short) arr_3 [i_2]);
                arr_36 [i_3] [i_3] = arr_5 [i_2];
                var_24 -= ((/* implicit */unsigned char) ((((/* implicit */int) arr_34 [i_3] [i_2])) ^ (((/* implicit */int) arr_34 [i_2] [i_2]))));
            }
            arr_37 [i_2] [i_3] [i_3] = ((/* implicit */unsigned long long int) var_1);
            arr_38 [i_2] [i_3] [i_3] = ((/* implicit */long long int) var_4);
        }
        /* vectorizable */
        for (long long int i_10 = 0; i_10 < 20; i_10 += 2) 
        {
            var_25 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_8 [i_2]))));
            arr_42 [i_2] [i_10] [i_10] &= ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65530))))) == (((((/* implicit */int) arr_34 [i_2] [i_10])) | (((/* implicit */int) var_10))))));
        }
        for (long long int i_11 = 0; i_11 < 20; i_11 += 4) 
        {
            arr_45 [i_2] = ((/* implicit */long long int) (((~(var_7))) ^ (((/* implicit */unsigned long long int) max((6121524570972018060LL), (((/* implicit */long long int) 3920616869U)))))));
            var_26 ^= ((/* implicit */unsigned short) (((((~(((/* implicit */int) arr_34 [i_11] [i_11])))) + (2147483647))) << (((((/* implicit */int) ((_Bool) arr_18 [i_2] [i_2] [i_11] [i_11]))) - (1)))));
        }
        arr_46 [i_2] [i_2] = ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)21198))))) ? (min((((/* implicit */long long int) var_6)), (((var_9) / (((/* implicit */long long int) ((/* implicit */int) var_8))))))) : (((/* implicit */long long int) (~(((((/* implicit */_Bool) (unsigned short)8708)) ? (((/* implicit */int) (unsigned char)136)) : (((/* implicit */int) arr_13 [i_2] [(unsigned short)16]))))))));
        var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) arr_21 [i_2] [7U] [i_2] [i_2]))));
    }
    for (int i_12 = 0; i_12 < 18; i_12 += 1) 
    {
        var_28 = ((/* implicit */long long int) arr_14 [14ULL] [14ULL] [14ULL] [i_12]);
        arr_49 [i_12] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_26 [16U] [i_12] [16U])) ? (arr_26 [16LL] [i_12] [i_12]) : (arr_26 [14] [(unsigned char)6] [i_12])))) * (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_12] [(_Bool)1])) ? (((/* implicit */int) arr_18 [i_12] [i_12] [i_12] [i_12])) : (((/* implicit */int) arr_12 [i_12]))))) * (((var_7) * (arr_7 [(short)18])))))));
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127501
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                var_10 = ((/* implicit */unsigned short) ((((/* implicit */long long int) min(((+(((/* implicit */int) var_4)))), (((/* implicit */int) max(((unsigned char)99), (var_7))))))) >= (arr_5 [i_0] [i_1])));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    var_11 = ((/* implicit */unsigned long long int) var_0);
                    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_0] [i_1] [i_0])) / (((/* implicit */int) arr_4 [i_0] [i_1] [i_0]))));
                }
                var_13 = ((/* implicit */_Bool) var_1);
                var_14 = ((/* implicit */unsigned long long int) (((~(arr_7 [i_0] [i_0] [i_0] [i_0]))) % ((~(arr_7 [i_0] [i_0] [i_0] [i_0])))));
                var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) ((short) (~(-1016381255440436808LL)))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_3 = 0; i_3 < 20; i_3 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned char i_5 = 0; i_5 < 20; i_5 += 4) 
            {
                for (signed char i_6 = 0; i_6 < 20; i_6 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_7 = 1; i_7 < 17; i_7 += 2) 
                        {
                            arr_22 [i_7] [(_Bool)1] = ((/* implicit */int) arr_15 [i_7] [i_3] [i_3]);
                            var_16 += ((/* implicit */unsigned int) ((((((/* implicit */int) arr_21 [(_Bool)1] [i_4] [(_Bool)1] [14] [(_Bool)1])) >= (((/* implicit */int) var_1)))) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_6] [(signed char)5] [(unsigned char)2])))));
                            arr_23 [i_3] [i_3] [i_3] [i_7] [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_7 + 1] [i_7 + 2] [i_7 + 1])) ? (((/* implicit */unsigned long long int) var_2)) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) + (arr_12 [i_5] [i_4])))));
                            arr_24 [i_7] [i_6] [i_7] [i_3] [i_3] = ((/* implicit */unsigned short) arr_1 [i_7]);
                        }
                        arr_25 [i_3] [i_4] = ((/* implicit */unsigned short) ((_Bool) arr_15 [i_6] [i_5] [(unsigned char)1]));
                        var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((/* implicit */int) var_5)) * ((-(((/* implicit */int) var_0)))))))));
                        var_18 = ((/* implicit */unsigned short) (~(arr_7 [6U] [i_4] [i_4] [(unsigned char)10])));
                    }
                } 
            } 
            var_19 += ((/* implicit */unsigned short) ((short) arr_16 [i_3]));
            /* LoopNest 2 */
            for (unsigned short i_8 = 0; i_8 < 20; i_8 += 4) 
            {
                for (unsigned int i_9 = 0; i_9 < 20; i_9 += 2) 
                {
                    {
                        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) (-(var_6)))) ? (((((/* implicit */int) var_0)) + (((/* implicit */int) (unsigned short)13809)))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_2 [i_9])) : (((/* implicit */int) var_0)))))))));
                        arr_31 [i_9] [i_3] [i_4] [i_3] = ((/* implicit */short) ((arr_21 [i_3] [i_3] [i_3] [i_3] [i_3]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_3] [i_3] [i_3]))) : (((unsigned long long int) (unsigned char)235))));
                        arr_32 [i_3] [i_4] [(unsigned short)8] = ((/* implicit */short) arr_1 [i_8]);
                        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_3 [i_3])));
                        var_22 ^= ((unsigned short) (-(0)));
                    }
                } 
            } 
            var_23 = ((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_4])) & (((/* implicit */int) arr_27 [i_4] [i_4] [i_4] [i_3]))));
        }
        arr_33 [i_3] [i_3] = ((/* implicit */unsigned short) ((unsigned int) arr_26 [i_3] [i_3] [i_3] [i_3]));
    }
    /* vectorizable */
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_30 [i_10] [i_10] [i_10])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_30 [(unsigned short)10] [i_10] [i_10]))));
        var_25 += ((/* implicit */signed char) var_6);
    }
}

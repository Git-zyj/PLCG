/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167614
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
    for (long long int i_0 = 2; i_0 < 24; i_0 += 3) 
    {
        for (signed char i_1 = 4; i_1 < 21; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */unsigned char) (((+((+(((/* implicit */int) arr_2 [i_1])))))) >= (((/* implicit */int) ((short) arr_2 [i_1 + 1])))));
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 23; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        {
                            arr_11 [i_3] [i_3] [i_1] [16U] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) arr_10 [i_0 - 2] [i_1] [i_2 - 1] [i_3]))) ? (var_4) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_2 [i_3]))))) ? (((/* implicit */int) min((((/* implicit */short) var_11)), ((short)19040)))) : (((/* implicit */int) var_2)))))));
                            /* LoopSeq 1 */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                            {
                                var_14 = ((/* implicit */long long int) max((((((/* implicit */_Bool) min((arr_10 [i_4] [i_3] [i_2] [i_0]), (arr_10 [i_0] [i_0] [i_0] [i_0])))) ? (((/* implicit */int) arr_10 [i_0] [(_Bool)1] [(signed char)4] [9LL])) : ((+(((/* implicit */int) arr_13 [i_0 - 1] [i_0])))))), (((((/* implicit */_Bool) min((var_7), (((/* implicit */long long int) arr_13 [i_0] [i_0 - 1]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_2] [i_3] [6U]))))) : ((+(((/* implicit */int) arr_6 [(unsigned short)24] [i_2] [i_3] [(unsigned short)24]))))))));
                                var_15 &= ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_1 [i_3])) : (((/* implicit */int) arr_1 [i_0]))))));
                            }
                        }
                    } 
                } 
                var_16 = arr_4 [i_1];
            }
        } 
    } 
    /* LoopSeq 1 */
    for (short i_5 = 0; i_5 < 12; i_5 += 1) 
    {
        var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)14))))) ? (max((((((/* implicit */_Bool) arr_15 [i_5])) ? (((/* implicit */int) arr_6 [0U] [2] [i_5] [(unsigned short)9])) : (((/* implicit */int) arr_10 [i_5] [19U] [i_5] [i_5])))), (((/* implicit */int) var_3)))) : ((-(((/* implicit */int) var_9)))))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned char i_7 = 0; i_7 < 12; i_7 += 2) 
            {
                for (unsigned short i_8 = 4; i_8 < 10; i_8 += 2) 
                {
                    {
                        var_18 *= ((/* implicit */unsigned short) var_10);
                        arr_23 [i_5] [i_6] [i_7] [(short)8] [(short)8] = (+(((/* implicit */int) arr_8 [i_5] [i_6] [i_7] [i_7] [(unsigned short)12])));
                        /* LoopSeq 1 */
                        for (unsigned short i_9 = 1; i_9 < 10; i_9 += 2) 
                        {
                            var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_24 [i_8] [(_Bool)1] [i_8] [i_8] [i_8 - 2] [i_8] [i_8])) || (((/* implicit */_Bool) arr_24 [i_8] [i_8] [i_8] [i_8] [i_8 + 1] [8] [4U])))))));
                            arr_27 [(unsigned short)8] [i_6] [i_7] [(unsigned short)8] [i_9] = ((/* implicit */unsigned short) arr_8 [i_5] [i_5] [i_5] [i_8] [i_5]);
                        }
                        var_20 = ((/* implicit */_Bool) arr_1 [i_7]);
                    }
                } 
            } 
            var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_1 [i_6]))));
        }
        for (long long int i_10 = 3; i_10 < 9; i_10 += 1) 
        {
            arr_30 [i_10] [8U] [i_5] &= ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_1)) ? (arr_14 [i_5] [i_5]) : (((/* implicit */unsigned long long int) ((var_2) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_9)))))))));
            var_22 = ((/* implicit */long long int) min((var_22), (((((((/* implicit */int) var_9)) >= (((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) arr_1 [i_5]))))))) ? (arr_26 [i_10] [4U] [i_10] [4U] [i_5]) : (arr_22 [i_5] [i_10] [i_10 + 3] [i_10] [i_10] [i_10 - 2])))));
            var_23 *= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((var_2) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_13 [i_5] [i_10])))) : (((/* implicit */int) arr_29 [i_5] [i_5] [i_5]))))), (var_0)));
        }
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            var_24 = ((/* implicit */long long int) arr_21 [(short)8] [i_5] [i_11] [(short)8] [(short)10] [i_11]);
            var_25 = ((/* implicit */long long int) (~(((/* implicit */int) arr_5 [22LL]))));
            var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)15413)) && (((/* implicit */_Bool) (unsigned short)50124))));
        }
        var_27 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) max((((/* implicit */short) var_8)), (var_3)))) || (((/* implicit */_Bool) arr_9 [i_5] [(unsigned char)22] [(_Bool)1] [(unsigned short)18])))) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_5] [i_5])) ^ (((/* implicit */int) (unsigned short)50132))))) ? (var_7) : (((/* implicit */long long int) ((unsigned int) (unsigned short)15435))))) : (((/* implicit */long long int) (+(((var_8) ? (arr_19 [i_5] [4LL] [i_5] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))))));
    }
}

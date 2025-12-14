/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15295
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
    var_17 = ((/* implicit */unsigned long long int) (-(((((/* implicit */long long int) (~(-1894645135)))) & (var_14)))));
    var_18 = ((/* implicit */long long int) var_16);
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 24; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 22; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */unsigned char) min((((/* implicit */int) var_11)), (((((/* implicit */int) arr_2 [i_0 - 1] [i_1 - 1] [i_1])) | (((/* implicit */int) arr_2 [i_0] [i_0 - 1] [i_1]))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        {
                            var_20 += ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)203)) ? (-1894645144) : (((/* implicit */int) arr_2 [i_0 + 1] [i_0 - 1] [i_3])))))));
                            var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) arr_0 [i_0]))));
                            var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((((/* implicit */_Bool) (-(arr_4 [i_2])))) ? (min(((+(var_8))), (((/* implicit */unsigned long long int) (-(-1894645115)))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_8 [i_1] [4] [i_1 - 1] [i_3] [i_3]))))))))));
                            arr_11 [i_0] [i_2] [i_2] [i_2] [i_2] [i_2] &= ((/* implicit */unsigned short) ((var_7) ? (((/* implicit */int) max((var_13), (((/* implicit */unsigned short) arr_8 [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_1 + 3]))))) : (-1894645123)));
                        }
                    } 
                } 
                var_23 = ((/* implicit */short) (((-((-(arr_4 [i_0]))))) - (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_8 [i_0 + 1] [i_0 - 1] [i_0] [i_1] [i_1 + 2])) : (((/* implicit */int) (unsigned char)162))))));
                /* LoopNest 2 */
                for (long long int i_4 = 0; i_4 < 25; i_4 += 4) 
                {
                    for (signed char i_5 = 0; i_5 < 25; i_5 += 4) 
                    {
                        {
                            arr_17 [i_0] [i_5] [i_4] [8LL] [i_1] = ((/* implicit */unsigned long long int) 1807491077);
                            var_24 -= ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) var_9)) != (((/* implicit */int) arr_2 [i_0] [14ULL] [i_5])))))));
                            var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((((_Bool) arr_3 [i_0] [i_1] [i_0])) ? ((~(13246714575618165846ULL))) : (((/* implicit */unsigned long long int) min((arr_1 [i_0]), (((/* implicit */unsigned int) arr_7 [i_4]))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_4] [i_4] [i_1 - 2] [i_1 + 3] [i_0])) ? (((/* implicit */int) arr_8 [i_1] [i_1 - 1] [i_1 - 2] [i_1] [i_1])) : (((/* implicit */int) (_Bool)1)))))));
                            arr_18 [i_1] [(short)16] [23LL] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) min((max((var_16), (var_9))), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_12 [i_0 - 1] [i_5])))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1] [i_1 + 1] [i_1] [i_1]))))) : (((((/* implicit */int) var_10)) - (((/* implicit */int) arr_16 [8] [i_0] [i_0 - 1] [i_1 - 1] [i_1]))))));
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (unsigned char i_6 = 0; i_6 < 25; i_6 += 3) /* same iter space */
                            {
                                var_26 = ((/* implicit */short) arr_1 [i_0 + 1]);
                                var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)10))) : (6604917230494379041ULL)));
                            }
                            for (unsigned char i_7 = 0; i_7 < 25; i_7 += 3) /* same iter space */
                            {
                                arr_26 [i_7] [i_1] [i_1] [i_0 - 1] = ((/* implicit */unsigned long long int) min((((/* implicit */int) (signed char)105)), (-1993766391)));
                                arr_27 [i_0] [i_1] [i_1] [i_5] [i_1] = max((max((arr_12 [i_1 + 2] [i_0 + 1]), (((/* implicit */long long int) var_10)))), (min((((/* implicit */long long int) arr_9 [i_0 - 1] [i_1 - 2] [i_1 - 2] [i_0 + 1] [i_7] [i_0 + 1])), (arr_12 [i_1 - 2] [i_0 + 1]))));
                            }
                            for (unsigned char i_8 = 0; i_8 < 25; i_8 += 3) /* same iter space */
                            {
                                var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_11))))) ? (max((var_0), (((/* implicit */long long int) var_9)))) : (((/* implicit */long long int) (~(((((/* implicit */int) arr_0 [i_8])) >> (((arr_4 [i_0]) - (192279662))))))))));
                                arr_30 [i_1] = ((/* implicit */unsigned long long int) var_6);
                                var_29 -= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)0)) * (((/* implicit */int) (unsigned char)89))));
                                arr_31 [i_1] [i_5] [i_1] [i_0] [i_0] = ((/* implicit */signed char) ((int) arr_16 [i_1 + 3] [i_0 - 1] [i_0] [i_0 - 1] [i_0 + 1]));
                                var_30 = ((/* implicit */unsigned short) min((arr_16 [i_0] [i_1] [i_4] [i_5] [i_8]), (((/* implicit */short) arr_28 [12LL] [i_1] [i_4] [i_5] [i_8]))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105227
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
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned short i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    var_10 = ((/* implicit */long long int) (((+(((/* implicit */int) arr_0 [(short)9])))) | (((/* implicit */int) min(((signed char)-123), (min(((signed char)-105), ((signed char)0))))))));
                    var_11 = ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_0])) || (((((/* implicit */_Bool) arr_1 [i_0] [i_1])) && (((/* implicit */_Bool) ((long long int) (signed char)123)))))));
                }
                /* vectorizable */
                for (signed char i_3 = 1; i_3 < 22; i_3 += 2) 
                {
                    /* LoopNest 2 */
                    for (short i_4 = 0; i_4 < 25; i_4 += 3) 
                    {
                        for (short i_5 = 1; i_5 < 22; i_5 += 3) 
                        {
                            {
                                arr_16 [12LL] [i_4] [i_0] [i_0] [i_1] [(unsigned short)15] = ((/* implicit */short) ((((/* implicit */int) arr_1 [i_3 + 3] [i_5])) <= (((/* implicit */int) arr_1 [i_3 + 1] [i_4]))));
                                var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) (signed char)0))));
                                var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_3 + 2] [i_3] [i_3])) * (((/* implicit */int) (signed char)19))))) ? (((((/* implicit */int) arr_14 [i_0] [i_1] [i_3 + 3] [i_4] [i_3 + 3])) % (((/* implicit */int) (short)14)))) : (((/* implicit */int) ((((/* implicit */_Bool) (short)9006)) && (((/* implicit */_Bool) (short)7343)))))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */signed char) (short)7);
                    var_15 = ((/* implicit */unsigned short) (short)-7336);
                    /* LoopNest 2 */
                    for (short i_6 = 1; i_6 < 24; i_6 += 1) 
                    {
                        for (unsigned short i_7 = 1; i_7 < 24; i_7 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_15 [i_3 + 1] [i_6] [i_6 - 1])) ? ((+(((/* implicit */int) arr_11 [i_1] [i_1] [i_3 + 2] [i_1])))) : ((+(((/* implicit */int) (signed char)11)))))))));
                                var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-126))))) << (((/* implicit */int) ((((/* implicit */int) var_6)) < (((/* implicit */int) arr_18 [i_1])))))));
                            }
                        } 
                    } 
                }
                /* LoopNest 3 */
                for (signed char i_8 = 0; i_8 < 25; i_8 += 3) 
                {
                    for (short i_9 = 0; i_9 < 25; i_9 += 3) 
                    {
                        for (signed char i_10 = 0; i_10 < 25; i_10 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */long long int) (+(((/* implicit */int) ((unsigned char) ((unsigned char) (short)0))))));
                                var_19 &= ((/* implicit */unsigned char) arr_6 [i_10] [i_9] [i_10]);
                            }
                        } 
                    } 
                } 
                var_20 += ((/* implicit */long long int) ((((((((/* implicit */_Bool) (signed char)1)) ? (((/* implicit */int) (signed char)-123)) : (((/* implicit */int) arr_7 [i_0] [i_1] [i_1])))) % (((/* implicit */int) ((((/* implicit */int) (signed char)-36)) <= (((/* implicit */int) (signed char)10))))))) + (((((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [(short)1] [i_1] [(signed char)19] [i_0] [i_0] [(signed char)11]))))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)17))));
    /* LoopNest 2 */
    for (unsigned short i_11 = 0; i_11 < 18; i_11 += 3) 
    {
        for (unsigned char i_12 = 0; i_12 < 18; i_12 += 2) 
        {
            {
                var_22 ^= ((/* implicit */unsigned char) arr_23 [i_11] [i_12] [i_11]);
                arr_38 [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1905287324216494839LL)) ? (((/* implicit */int) (unsigned short)23)) : (((/* implicit */int) (short)7364))))) ? (((((/* implicit */_Bool) ((arr_27 [i_11] [i_12] [i_12]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_12])))))) ? (((/* implicit */int) min(((unsigned short)16863), (((/* implicit */unsigned short) (short)2))))) : (((((/* implicit */int) (unsigned char)27)) | (((/* implicit */int) arr_25 [i_11])))))) : ((+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_29 [i_11] [i_12] [(short)21] [(signed char)14])) : (((/* implicit */int) (signed char)-9))))))));
            }
        } 
    } 
}

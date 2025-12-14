/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115531
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
    var_19 = ((/* implicit */short) 16496654180003312731ULL);
    var_20 |= ((/* implicit */unsigned short) var_7);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 2; i_0 < 22; i_0 += 1) /* same iter space */
    {
        arr_4 [0ULL] = ((/* implicit */short) max((((((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0 - 2] [(unsigned short)2]))))) + (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))), (((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (((((/* implicit */_Bool) arr_2 [(_Bool)1])) ? (((/* implicit */int) (unsigned char)53)) : (((/* implicit */int) (unsigned short)9393)))) : (((arr_1 [(unsigned char)3]) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned short)62456))))))));
        var_21 ^= ((/* implicit */short) -737997470);
        arr_5 [12LL] = ((/* implicit */long long int) (!(((/* implicit */_Bool) min(((signed char)-1), (((/* implicit */signed char) arr_1 [(short)23])))))));
        arr_6 [18LL] = ((/* implicit */unsigned char) ((12554154556724568201ULL) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (((((/* implicit */int) (unsigned short)38475)) ^ (((/* implicit */int) arr_1 [5LL])))) : (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)113)), ((unsigned short)3365)))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 2; i_1 < 22; i_1 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */long long int) (-(((/* implicit */int) arr_3 [i_1 + 2] [i_1]))));
        var_23 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_2 [i_1 + 2]))));
        arr_10 [(unsigned short)10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) var_13))) ? (((/* implicit */int) arr_9 [i_1 + 2] [i_1])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1])))))));
    }
    /* LoopNest 3 */
    for (unsigned long long int i_2 = 1; i_2 < 23; i_2 += 3) 
    {
        for (unsigned char i_3 = 3; i_3 < 23; i_3 += 3) 
        {
            for (unsigned int i_4 = 1; i_4 < 21; i_4 += 3) 
            {
                {
                    var_24 = ((/* implicit */unsigned char) 9223372036854775807LL);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 1) 
                    {
                        arr_21 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) arr_2 [i_2 - 1]);
                        var_25 = ((/* implicit */unsigned int) ((int) var_14));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned char i_6 = 3; i_6 < 23; i_6 += 1) 
                        {
                            var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)143)) ? (((int) arr_13 [i_2])) : (((/* implicit */int) arr_15 [i_2] [i_6 - 3]))));
                            arr_24 [(short)4] [i_2] [i_5] [(unsigned short)22] = var_5;
                        }
                        for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 3) 
                        {
                            var_27 = ((/* implicit */unsigned char) ((((((unsigned int) arr_16 [0ULL] [0ULL])) % (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_2] [22])) || (((/* implicit */_Bool) 855984339U)))))))) + (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_2])) >= (((/* implicit */int) arr_14 [i_2 + 1] [9]))))), (arr_22 [i_2] [i_2] [i_2] [(unsigned short)16] [i_2])))))));
                            arr_27 [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) min((arr_13 [i_2]), (((/* implicit */short) arr_15 [i_2] [i_3]))));
                            arr_28 [i_2] [i_3] [i_4] [i_4 + 1] [(unsigned short)6] [i_4 + 1] [i_2] = ((/* implicit */int) ((unsigned char) arr_23 [i_2 + 1] [i_3 + 1]));
                        }
                    }
                    arr_29 [i_2] [i_4 - 1] [i_4] [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_12 [(unsigned char)14]))));
                    var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967282U)) ? (((/* implicit */int) (short)-22342)) : (((/* implicit */int) (unsigned short)40065))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_2] [i_4 + 2])) ? (((/* implicit */int) (short)28900)) : (((/* implicit */int) arr_3 [i_2] [i_3]))))) ? (((/* implicit */int) var_16)) : (((((/* implicit */_Bool) 2493492988560393633LL)) ? (((/* implicit */int) arr_3 [i_3 - 1] [i_3 - 1])) : (((/* implicit */int) (unsigned char)12)))))) : (min((min((arr_25 [i_2] [i_2]), (((/* implicit */int) (signed char)-1)))), (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_10))))))));
                }
            } 
        } 
    } 
}

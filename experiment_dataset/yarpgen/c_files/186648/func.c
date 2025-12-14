/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186648
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
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (short)22686)) ? (((/* implicit */int) (short)-9702)) : (((/* implicit */int) (short)-22686))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 2; i_1 < 20; i_1 += 3) 
        {
            /* LoopSeq 4 */
            /* vectorizable */
            for (short i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                arr_9 [i_0] [i_1] [(unsigned char)4] = ((/* implicit */short) ((unsigned int) var_3));
                arr_10 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_2))));
            }
            for (unsigned short i_3 = 0; i_3 < 21; i_3 += 1) 
            {
                var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((max((max((18407986568702763142ULL), (((/* implicit */unsigned long long int) var_13)))), (((/* implicit */unsigned long long int) 4278190080U)))) == (var_14))))));
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 21; i_4 += 4) 
                {
                    for (unsigned char i_5 = 0; i_5 < 21; i_5 += 2) 
                    {
                        {
                            var_20 *= ((((/* implicit */int) ((unsigned char) (unsigned char)32))) & (((/* implicit */int) ((((/* implicit */_Bool) max(((unsigned char)228), ((unsigned char)228)))) || (((/* implicit */_Bool) arr_0 [i_1 + 1]))))));
                            arr_19 [14ULL] [i_4] [i_3] [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_3))));
                        }
                    } 
                } 
            }
            for (short i_6 = 1; i_6 < 20; i_6 += 2) 
            {
                arr_23 [i_0] [i_0] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_17 [i_0] [i_1] [i_0])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)240)) >= (((/* implicit */int) var_6)))))));
                arr_24 [i_0] [14ULL] [14ULL] = ((/* implicit */signed char) ((unsigned char) (((+(((/* implicit */int) arr_21 [i_0] [i_6 + 1] [i_6])))) << (((((/* implicit */int) arr_12 [i_1] [i_1] [i_1 - 2] [i_1 - 2])) - (1482))))));
                /* LoopSeq 1 */
                for (unsigned char i_7 = 2; i_7 < 19; i_7 += 2) 
                {
                    var_21 = ((/* implicit */short) ((((/* implicit */int) ((_Bool) ((((/* implicit */int) (unsigned char)255)) >= (((/* implicit */int) (short)9726)))))) >> (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)115)) || (((/* implicit */_Bool) (+(var_12)))))))));
                    var_22 ^= (unsigned short)65522;
                }
            }
            for (short i_8 = 2; i_8 < 17; i_8 += 4) 
            {
                arr_30 [i_1] [i_0] [(unsigned short)0] = ((/* implicit */_Bool) arr_12 [i_0] [i_1 - 1] [i_8] [i_1]);
                var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) var_0))));
                arr_31 [i_0] [(short)19] [i_1] [i_0] = arr_18 [i_0] [0U] [0U] [0U];
                arr_32 [i_0] [i_1] [i_8 + 1] &= ((/* implicit */long long int) (-(((/* implicit */int) ((unsigned short) var_9)))));
            }
            arr_33 [i_0] [i_0] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_5)), (((unsigned long long int) var_16)))))));
            arr_34 [i_0] [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_22 [i_0] [i_0] [i_0])) > (-1283773738))) && (((/* implicit */_Bool) var_14))));
        }
        var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) min(((short)5790), (arr_1 [i_0]))))));
        arr_35 [i_0] [6LL] = ((((/* implicit */int) (short)0)) > (((/* implicit */int) (signed char)(-127 - 1))));
    }
    var_25 = ((/* implicit */_Bool) var_6);
    var_26 = ((/* implicit */unsigned int) var_1);
    var_27 = ((/* implicit */_Bool) var_2);
}

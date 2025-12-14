/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101686
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
    var_18 = ((/* implicit */unsigned short) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))) - (((unsigned long long int) (unsigned short)8191)))), (min((max((var_5), (((/* implicit */unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) var_0))))));
    var_19 *= min(((unsigned short)57345), (((/* implicit */unsigned short) ((signed char) (signed char)(-127 - 1)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    for (unsigned short i_3 = 2; i_3 < 11; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned short i_4 = 0; i_4 < 14; i_4 += 2) 
                            {
                                arr_11 [i_0] [i_1 + 1] [i_0] [i_3] [i_4] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)(-127 - 1)))));
                                arr_12 [i_1] [i_0] [i_1] = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (unsigned short)57344)) : (((/* implicit */int) (signed char)3)))) - (((/* implicit */int) arr_9 [(_Bool)1] [i_0] [i_1] [i_2] [i_2] [i_4])))) - ((~(((/* implicit */int) (signed char)(-127 - 1)))))));
                                var_20 = ((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_4])) && (((/* implicit */_Bool) (unsigned char)0)))))) | (max((((/* implicit */unsigned long long int) var_8)), (var_11))))), (var_5)));
                                arr_13 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1 + 1] = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_0] [i_0] [i_1 + 1] [9] [9] [i_4])) - (((/* implicit */int) var_14))))) && (((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)57345))))))));
                            }
                            arr_14 [i_0] [i_2] &= ((/* implicit */unsigned long long int) (unsigned short)57345);
                            arr_15 [(signed char)3] [i_0] [8ULL] = ((/* implicit */unsigned long long int) (unsigned short)57344);
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (unsigned char i_5 = 0; i_5 < 14; i_5 += 4) 
                {
                    var_21 -= ((/* implicit */unsigned char) (unsigned short)8190);
                    arr_18 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) arr_17 [i_1 + 1] [i_1] [i_0] [i_0]))) && (((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)8191)))))));
                }
                /* vectorizable */
                for (signed char i_6 = 0; i_6 < 14; i_6 += 2) 
                {
                    arr_23 [i_6] [i_0] [i_0] = arr_7 [i_1 - 1] [i_0] [i_1 + 1] [i_1] [i_1 + 1] [i_1 - 1];
                    var_22 = ((var_13) / (((/* implicit */long long int) -1930455825)));
                    arr_24 [i_0] [i_1 - 1] [i_1 - 1] [(unsigned char)3] = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-126)) * (((/* implicit */int) (signed char)(-127 - 1)))));
                }
                for (int i_7 = 0; i_7 < 14; i_7 += 4) 
                {
                    var_23 = ((/* implicit */unsigned long long int) min(((-(var_7))), (((/* implicit */unsigned int) ((short) arr_9 [i_1] [i_0] [i_1] [i_1 + 1] [i_1 + 1] [i_1])))));
                    var_24 -= ((signed char) min((((/* implicit */unsigned long long int) (signed char)-126)), (4398046511103ULL)));
                    var_25 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_7])) ? (((((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) - (731033395)))) + (arr_25 [i_0] [i_7]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned char)104))) && (((/* implicit */_Bool) (unsigned char)24))))))));
                }
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned long long int) (-((((+(((/* implicit */int) (unsigned short)8192)))) - (((((/* implicit */int) (unsigned char)0)) | (var_9)))))));
}

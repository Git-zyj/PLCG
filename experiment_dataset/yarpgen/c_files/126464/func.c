/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126464
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
    for (short i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_13 = ((int) ((unsigned long long int) 1209761242));
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 17; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (unsigned char i_4 = 1; i_4 < 16; i_4 += 2) 
                            {
                                arr_17 [i_0 - 2] [(_Bool)1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) (-(((unsigned int) arr_12 [8ULL]))));
                                var_14 ^= ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */int) min((arr_6 [i_1] [i_3] [7ULL]), (((/* implicit */short) var_12))))) - (((((/* implicit */int) var_5)) / (var_10))))));
                                var_15 = ((/* implicit */unsigned long long int) ((max((((/* implicit */int) arr_14 [i_0 + 3] [i_0 + 4] [i_4 + 4] [i_2] [19U])), (var_3))) / ((+(((/* implicit */int) arr_14 [i_2] [i_1] [i_4 - 1] [(unsigned char)12] [18ULL]))))));
                                var_16 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_2 [i_1]))));
                                var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)0)) >> (((/* implicit */int) (_Bool)0))));
                            }
                            /* vectorizable */
                            for (signed char i_5 = 0; i_5 < 20; i_5 += 3) 
                            {
                                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_11))))) ? (((/* implicit */int) arr_13 [i_2 + 2] [i_1] [i_2 + 3] [i_0 - 2] [i_5])) : (((/* implicit */int) var_6))));
                                var_19 *= ((/* implicit */signed char) (-(arr_16 [(unsigned short)2] [i_0 - 2] [2LL])));
                                arr_21 [i_3] [i_1] [4] [i_5] [i_5] [(unsigned short)11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_11 [i_5]) & (((/* implicit */int) var_9))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))));
                                arr_22 [i_0] [i_1] [i_1] [i_3] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)32760)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1U)));
                                var_20 *= ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */int) var_0)) <= (((/* implicit */int) arr_12 [(short)14])))));
                            }
                            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (+(((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (_Bool)1)))))))));
                            arr_23 [i_0 + 4] [i_1] [i_1] [13ULL] [i_2] [(signed char)9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_13 [i_0] [6] [11U] [i_3] [(signed char)18])) ? (((/* implicit */int) (unsigned short)32761)) : (((((/* implicit */int) (unsigned short)32760)) / (((((/* implicit */_Bool) (unsigned short)32783)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_0))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) var_8);
    /* LoopNest 2 */
    for (unsigned short i_6 = 0; i_6 < 19; i_6 += 1) 
    {
        for (signed char i_7 = 0; i_7 < 19; i_7 += 2) 
        {
            {
                var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_6] [i_6] [i_7])) & (var_3)))) ? (((int) arr_2 [i_7])) : (((/* implicit */int) max((arr_9 [i_7] [0] [18LL]), (arr_9 [i_7] [(_Bool)1] [6])))))))));
                arr_29 [4LL] [5U] = ((/* implicit */long long int) max((max(((~(arr_1 [i_6] [i_6]))), (((/* implicit */unsigned int) max((((/* implicit */unsigned char) arr_14 [i_6] [i_7] [i_7] [6LL] [(unsigned char)7])), (arr_7 [14ULL] [i_7])))))), (((/* implicit */unsigned int) max((arr_19 [(_Bool)1] [i_7] [i_7] [i_6]), (arr_19 [i_6] [i_7] [11ULL] [i_6]))))));
            }
        } 
    } 
    var_24 = ((/* implicit */long long int) (+(((((/* implicit */int) var_11)) / (((/* implicit */int) ((_Bool) (_Bool)1)))))));
}

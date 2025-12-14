/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170852
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                arr_5 [i_0] = (~(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_5)))));
                /* LoopNest 2 */
                for (signed char i_2 = 2; i_2 < 12; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) arr_1 [i_2]))));
                            var_20 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2118181337138234288ULL)) ? (2118181337138234286ULL) : (2118181337138234288ULL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) : (((/* implicit */int) min(((unsigned short)65393), (((/* implicit */unsigned short) arr_1 [(short)12])))))))), (2561467895U)));
                            /* LoopSeq 2 */
                            for (short i_4 = 1; i_4 < 13; i_4 += 3) 
                            {
                                arr_14 [i_3] [i_1] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) min((arr_7 [i_2 - 1] [i_4 + 1] [i_2] [i_3]), (arr_7 [i_2 - 1] [i_4 - 1] [i_2] [i_2])))), (((2118181337138234285ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)48)))))));
                                var_21 = arr_9 [i_2];
                                arr_15 [i_3] = ((/* implicit */signed char) ((((((/* implicit */long long int) (+(((/* implicit */int) arr_8 [i_0] [i_1] [i_2 + 1]))))) & (((arr_13 [i_3] [i_4 - 1]) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) - (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2] [i_2 - 2] [i_2 + 1] [i_2])))));
                                arr_16 [i_0] [i_3] [i_0] [i_0] [i_0] = ((((((/* implicit */_Bool) min((arr_9 [i_0]), (((/* implicit */unsigned long long int) arr_8 [i_3] [i_1] [i_1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))) : (min((16328562736571317331ULL), (2118181337138234286ULL))))) % (((((var_13) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_3] [3] [i_3] [i_4]))))) << (((/* implicit */int) ((((/* implicit */int) arr_12 [i_0] [i_1] [i_2 + 2] [i_3] [i_4] [i_3] [i_4])) >= (((/* implicit */int) arr_8 [i_1] [(unsigned char)4] [i_3]))))))));
                                var_22 = ((/* implicit */unsigned short) 16440703938535850358ULL);
                            }
                            /* vectorizable */
                            for (long long int i_5 = 0; i_5 < 14; i_5 += 3) 
                            {
                                arr_19 [i_0] [9U] [i_2] [i_3] [i_2] = ((/* implicit */int) var_16);
                                var_23 = ((/* implicit */unsigned short) arr_0 [i_2 + 2]);
                                var_24 = ((/* implicit */int) 2118181337138234293ULL);
                                var_25 = ((/* implicit */_Bool) (+(2118181337138234292ULL)));
                            }
                            var_26 = ((12497072642118315113ULL) - (((2118181337138234293ULL) << (((((16328562736571317330ULL) ^ (((/* implicit */unsigned long long int) -755748964)))) - (2118181337590879120ULL))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned int) (~(((/* implicit */int) (short)32319))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184805
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
    for (signed char i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 4; i_2 < 12; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        {
                            arr_10 [i_1] [12U] = ((/* implicit */_Bool) min((max((((15981515984115357653ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) var_8)))), (((/* implicit */unsigned long long int) max((arr_2 [i_1] [i_2 + 3]), (((/* implicit */long long int) ((_Bool) var_12))))))));
                            var_18 &= ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((((/* implicit */int) (unsigned char)213)) + (((/* implicit */int) (unsigned char)43)))) <= (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)209)))))))), (arr_7 [(short)5] [i_1] [i_2 - 2])));
                            arr_11 [(signed char)9] [i_1] [(unsigned char)12] [i_1] [(signed char)9] [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_2 + 3] [i_0 - 1])) ? (arr_2 [i_2 - 2] [i_0 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2 - 2] [i_2 - 3]))))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned int i_4 = 0; i_4 < 15; i_4 += 2) 
                {
                    for (unsigned char i_5 = 1; i_5 < 12; i_5 += 2) 
                    {
                        for (signed char i_6 = 0; i_6 < 15; i_6 += 2) 
                        {
                            {
                                var_19 = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_5 + 1] [i_0 - 2]))))) ? (((((/* implicit */_Bool) (unsigned char)38)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)188)))) : ((~(((/* implicit */int) (signed char)127)))));
                                arr_20 [i_1] = ((/* implicit */signed char) (short)-10413);
                                arr_21 [i_0] [i_0] [i_4] [i_5 - 1] [i_4] = ((/* implicit */_Bool) max((((/* implicit */long long int) max((((((/* implicit */_Bool) -1078022329742255562LL)) ? (((/* implicit */int) (unsigned short)46376)) : (((/* implicit */int) (signed char)21)))), (((((/* implicit */_Bool) (short)31728)) ? (((/* implicit */int) arr_18 [i_1] [(unsigned short)9] [i_4] [i_1] [i_0])) : (((/* implicit */int) var_10))))))), (min((((/* implicit */long long int) (unsigned char)61)), (((-1LL) ^ (-2123741491537449832LL)))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_7 = 3; i_7 < 14; i_7 += 2) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            var_20 += ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_8] [i_7] [i_1] [i_0 - 1])) >> (((((/* implicit */int) arr_26 [i_1] [i_8])) - (49143))))))));
                            arr_27 [i_0] = ((/* implicit */signed char) (unsigned char)23);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_9 = 2; i_9 < 13; i_9 += 2) 
                {
                    for (unsigned short i_10 = 0; i_10 < 15; i_10 += 2) 
                    {
                        {
                            arr_32 [i_0] [i_1] [i_9 - 1] [7LL] [i_10] = ((short) arr_30 [i_0 + 1] [i_0 + 1] [(unsigned short)13] [i_0 - 2]);
                            var_21 = (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_5)))) ? (min((248635379), (((/* implicit */int) (unsigned char)255)))) : ((-(((/* implicit */int) (short)-1))))))));
                            arr_33 [i_0] = ((/* implicit */signed char) (-(((((/* implicit */int) ((arr_5 [(signed char)3] [i_1]) != (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127)))))) % (((/* implicit */int) var_16))))));
                            var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) (~(((/* implicit */int) arr_28 [i_9 - 1])))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 += ((/* implicit */signed char) var_15);
}

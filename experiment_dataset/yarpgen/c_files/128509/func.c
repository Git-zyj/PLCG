/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128509
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
    var_15 = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((3946535966U) > (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 24; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    var_16 = ((/* implicit */unsigned char) ((((/* implicit */long long int) (-(((((/* implicit */_Bool) 15234659584009806989ULL)) ? (((/* implicit */int) var_5)) : (-1478489508)))))) < (((((((/* implicit */int) var_2)) < (((/* implicit */int) var_0)))) ? (((8563401470575809949LL) % (((/* implicit */long long int) var_8)))) : (((/* implicit */long long int) arr_1 [i_1 - 1] [i_1]))))));
                    arr_8 [i_1] [i_1 - 1] [i_1] = ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) 3212084489699744607ULL))) || (((/* implicit */_Bool) (signed char)46)))))) | (((((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned int) var_6))))) ? (((((/* implicit */_Bool) 3434300689U)) ? (((/* implicit */unsigned int) arr_1 [i_0] [i_0])) : (860666633U))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((short)-32754), (((/* implicit */short) (_Bool)1)))))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_3 = 3; i_3 < 24; i_3 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 1) 
                        {
                            arr_17 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_0))));
                            arr_18 [i_0] = ((/* implicit */short) arr_3 [i_0] [i_0] [i_0]);
                            var_17 = var_11;
                            arr_19 [(unsigned char)10] [i_1] [(unsigned char)10] [(signed char)8] [i_4] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_14)) > (((/* implicit */int) (short)-32754)))))) == (((arr_15 [i_1 - 2]) ? (((/* implicit */unsigned long long int) -8563401470575809949LL)) : (arr_7 [(unsigned short)12])))));
                        }
                        var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) (signed char)78))) ^ (((/* implicit */int) var_1))));
                        arr_20 [i_0] [i_1] [(signed char)23] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) <= (arr_11 [24U] [i_1] [i_2] [i_2] [i_3] [5U])));
                    }
                    for (unsigned int i_5 = 0; i_5 < 25; i_5 += 2) 
                    {
                        var_19 *= ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_14 [i_0] [i_1 - 2] [i_2] [i_5] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)34))) : (arr_14 [19] [i_1 - 1] [i_2] [i_5] [i_5])))));
                        arr_24 [i_0] [i_1] [i_2] [i_5] = ((/* implicit */long long int) arr_3 [i_0] [i_0] [i_0]);
                    }
                    arr_25 [2ULL] [i_2] &= ((/* implicit */signed char) var_4);
                }
                var_20 = ((/* implicit */_Bool) max((((int) ((((/* implicit */int) arr_9 [i_0] [(short)22] [i_1 - 1] [(signed char)15] [i_0] [i_0])) + (arr_1 [i_0] [i_0])))), (min((((/* implicit */int) (signed char)66)), (arr_13 [(short)19] [i_1] [i_1 - 2] [i_1 - 2] [i_1])))));
                var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) ((int) arr_3 [i_0] [i_1] [i_0]))) ? (((/* implicit */unsigned int) ((/* implicit */int) (((~(var_13))) <= (((/* implicit */long long int) min((((/* implicit */unsigned int) var_5)), (var_4)))))))) : (((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)124)) ^ (((/* implicit */int) (signed char)-69))))) ^ ((~(18U))))))))));
            }
        } 
    } 
}

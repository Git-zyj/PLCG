/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113778
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */int) (unsigned char)2)) == (((/* implicit */int) arr_1 [i_0] [i_0 + 3]))))), (((arr_1 [i_0] [i_0 + 2]) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) arr_1 [i_0 + 3] [i_0]))))));
        arr_4 [i_0 + 3] [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) -13LL))))), (((((/* implicit */_Bool) arr_2 [i_0 + 3] [i_0 + 3])) ? (-9223257512251186077LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-26829)))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 4) 
    {
        arr_7 [i_1] = ((/* implicit */signed char) ((_Bool) (-(((/* implicit */int) arr_6 [i_1])))));
        var_14 = ((var_5) & (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)0)) ^ (((/* implicit */int) arr_1 [i_1] [18U]))))));
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 11; i_2 += 3) 
        {
            for (short i_3 = 0; i_3 < 11; i_3 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 4) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (short i_5 = 1; i_5 < 7; i_5 += 3) 
                        {
                            var_15 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_3] [i_3] [i_3] [i_5 + 4] [i_3] [i_5 + 4] [i_5 - 1]))) <= (206877113U)));
                            var_16 = ((/* implicit */int) 0LL);
                        }
                        for (unsigned char i_6 = 0; i_6 < 11; i_6 += 4) 
                        {
                            arr_20 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [7ULL] = ((/* implicit */_Bool) (short)17980);
                            arr_21 [i_4] [i_4] [i_4] [i_2] [i_4] = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) min((arr_5 [i_6]), (((/* implicit */long long int) (short)-50))))))))));
                            var_17 = ((/* implicit */unsigned int) var_2);
                        }
                        var_18 = ((/* implicit */long long int) (unsigned short)31735);
                    }
                    var_19 = ((/* implicit */_Bool) max(((unsigned short)0), (((/* implicit */unsigned short) var_7))));
                    var_20 = (((!(((/* implicit */_Bool) -5LL)))) ? (max((min((206877113U), (((/* implicit */unsigned int) (short)24158)))), (((/* implicit */unsigned int) arr_16 [i_1])))) : (((unsigned int) arr_17 [i_2])));
                    arr_22 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */short) max((((/* implicit */int) arr_2 [i_2] [i_2])), (((((/* implicit */int) arr_2 [i_2] [i_3])) & (((/* implicit */int) arr_2 [i_1] [i_1]))))));
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_1]))))) >= ((~(((/* implicit */int) arr_11 [i_1]))))));
                }
            } 
        } 
    }
    /* LoopSeq 1 */
    for (unsigned int i_7 = 0; i_7 < 12; i_7 += 4) 
    {
        var_22 = ((/* implicit */unsigned int) arr_24 [(unsigned short)9] [i_7]);
        var_23 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) -6946314301005343622LL)), (((unsigned long long int) arr_23 [i_7]))));
    }
}

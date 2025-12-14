/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166574
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
    var_17 = ((/* implicit */short) (unsigned short)41786);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        for (unsigned short i_1 = 3; i_1 < 18; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned char) arr_1 [i_0 - 1] [i_0 + 3]);
                var_19 &= ((/* implicit */long long int) ((unsigned int) arr_1 [i_0] [i_0]));
                /* LoopSeq 2 */
                for (long long int i_2 = 2; i_2 < 17; i_2 += 2) /* same iter space */
                {
                    var_20 = ((/* implicit */unsigned short) max((((/* implicit */long long int) (short)32751)), (arr_2 [i_0] [i_1])));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 17; i_4 += 1) 
                        {
                            {
                                var_21 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_1 + 1] [i_2] [(signed char)14] [(unsigned short)16])) ? (arr_8 [i_0] [i_2] [i_2] [(short)8] [i_4 - 3]) : (((/* implicit */long long int) ((/* implicit */int) (short)-32751)))))) ? (((/* implicit */int) ((((/* implicit */int) arr_3 [i_2] [i_2])) >= (((/* implicit */int) var_7))))) : (511)))) && (var_5)));
                                arr_11 [i_1] [i_1] [i_2 + 2] [18U] [i_1] = ((/* implicit */_Bool) ((unsigned int) ((((_Bool) arr_0 [i_2] [(_Bool)1])) || (((/* implicit */_Bool) ((var_16) / (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1] [i_1] [i_1 + 1])))))))));
                            }
                        } 
                    } 
                }
                for (long long int i_5 = 2; i_5 < 17; i_5 += 2) /* same iter space */
                {
                    var_22 &= ((/* implicit */int) arr_2 [i_0] [i_0]);
                    arr_16 [i_0] [i_1] [12ULL] [i_0] = ((/* implicit */unsigned short) max((((arr_7 [i_1] [12ULL] [i_5] [i_5]) ? (arr_8 [(_Bool)1] [i_1] [i_5 - 1] [(_Bool)1] [i_1 + 2]) : (((-3094304131126470808LL) & (((/* implicit */long long int) ((/* implicit */int) var_11))))))), (((/* implicit */long long int) arr_14 [7ULL] [7ULL] [(unsigned char)11]))));
                }
                var_23 = ((/* implicit */unsigned char) (((-(((/* implicit */int) arr_10 [i_0 - 2] [i_0 + 1])))) - (((/* implicit */int) arr_10 [i_0] [i_0 + 3]))));
                var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-32751)) ? (((((/* implicit */_Bool) (+(3941018519U)))) ? (arr_9 [i_0] [i_0 + 2] [11LL] [i_0] [i_1 + 2] [i_1 + 2]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -9223372036854775805LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned long long int) ((((long long int) var_7)) / (((/* implicit */long long int) ((/* implicit */int) (!(var_5))))))))));
            }
        } 
    } 
}

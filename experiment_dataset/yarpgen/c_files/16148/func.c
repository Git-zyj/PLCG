/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16148
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
    var_14 = ((/* implicit */int) var_7);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) arr_2 [i_1 + 1] [i_1 + 1]))) ? (((/* implicit */unsigned long long int) ((arr_0 [i_0] [(_Bool)1]) / (((/* implicit */int) (_Bool)1))))) : (arr_2 [i_1 - 1] [i_1 - 1])));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 2; i_2 < 20; i_2 += 3) 
                {
                    arr_9 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_5 [i_0] [(_Bool)1])))) >= (((arr_1 [i_0]) % (((/* implicit */long long int) var_12)))))));
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        var_16 = ((/* implicit */unsigned int) arr_0 [i_0] [i_1]);
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned int i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            var_17 = ((((/* implicit */int) arr_13 [i_2] [i_1] [i_1] [i_1 + 1] [i_1 - 1] [i_1] [14])) == ((-(((/* implicit */int) arr_15 [(unsigned char)4] [i_1] [i_1] [i_1] [i_1] [i_1])))));
                            var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_2] [i_0])) ? (arr_10 [i_2 + 1] [i_2] [i_2] [i_2 + 1] [i_2 + 1] [i_2]) : (((/* implicit */long long int) (+(var_9))))));
                        }
                        for (long long int i_5 = 2; i_5 < 19; i_5 += 4) /* same iter space */
                        {
                            arr_18 [i_5] [i_1] [i_5] |= ((/* implicit */unsigned char) var_12);
                            var_19 = ((/* implicit */unsigned int) min((((/* implicit */long long int) arr_6 [i_5] [i_3] [i_2])), (max((var_11), (((/* implicit */long long int) var_9))))));
                            arr_19 [i_0] [i_0] [i_2] [i_2] [i_5] [i_5] = ((/* implicit */unsigned char) arr_0 [i_0] [(short)20]);
                        }
                        for (long long int i_6 = 2; i_6 < 19; i_6 += 4) /* same iter space */
                        {
                            arr_23 [i_0] [i_0] [i_6] [1ULL] [i_2] = ((/* implicit */long long int) arr_7 [i_0] [i_1 + 1] [i_2]);
                            arr_24 [i_2] = ((/* implicit */unsigned char) (short)32758);
                        }
                        arr_25 [i_0] [i_0] [i_2] [i_0] = arr_6 [i_2 - 1] [i_2] [i_2 - 1];
                        arr_26 [i_2] [i_2] [i_1] [i_2] = var_13;
                        arr_27 [16LL] [i_2 - 2] [i_2] [i_1] [16LL] = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_1 + 1])) ? (((/* implicit */int) (short)-32751)) : (((/* implicit */int) (short)32761))))) == (((long long int) max((((/* implicit */long long int) arr_11 [i_0] [i_0] [i_0] [0ULL])), (var_1))))));
                    }
                    for (long long int i_7 = 0; i_7 < 21; i_7 += 2) 
                    {
                        var_20 ^= ((/* implicit */unsigned char) (unsigned short)2702);
                        arr_30 [i_0] [19] [i_1] [i_2] [6] [i_7] = ((/* implicit */int) ((unsigned int) ((long long int) arr_29 [i_2] [i_1 + 1] [i_2 - 2])));
                    }
                    for (long long int i_8 = 0; i_8 < 21; i_8 += 2) 
                    {
                        var_21 = ((/* implicit */short) arr_7 [i_1] [i_1] [i_2]);
                        var_22 = arr_21 [i_2] [i_2] [i_0] [i_2] [i_0] [i_0] [i_2];
                        arr_34 [i_8] [i_1] [i_2 - 2] [1ULL] [i_2] [i_1 + 1] = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -6706286157047490LL)) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) (short)32756))))) ? (((/* implicit */int) (unsigned short)6)) : (((/* implicit */int) (unsigned char)143)))));
                        arr_35 [i_2] [i_2] [i_1] [i_0] [13U] [i_2] = ((/* implicit */long long int) max((arr_11 [i_0] [i_0] [12] [i_0]), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) (-(var_3)))))))));
                        arr_36 [i_8] [i_2] [i_2] [i_0] = ((((/* implicit */unsigned long long int) arr_32 [16ULL])) < ((+(((((/* implicit */_Bool) 6706286157047511LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)242))) : (arr_2 [i_0] [i_1]))))));
                    }
                }
            }
        } 
    } 
}

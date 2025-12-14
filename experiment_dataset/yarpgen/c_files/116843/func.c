/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116843
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
    var_20 = ((/* implicit */unsigned char) ((((((((/* implicit */int) var_0)) % (((/* implicit */int) (unsigned short)24926)))) + (2147483647))) >> (((var_17) + (3479278679886093818LL)))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */short) var_4);
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 4) /* same iter space */
        {
            arr_6 [i_1] = ((/* implicit */unsigned short) var_5);
            var_21 -= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) - (min((arr_2 [(unsigned short)7]), (((/* implicit */unsigned long long int) var_12))))));
            var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) arr_2 [i_0]))));
            arr_7 [i_0] [i_0] [(short)13] = ((/* implicit */unsigned char) min(((short)6379), (((/* implicit */short) arr_0 [i_0]))));
            var_23 ^= ((/* implicit */long long int) (unsigned short)24926);
        }
        for (unsigned int i_2 = 0; i_2 < 15; i_2 += 4) /* same iter space */
        {
            arr_11 [(short)3] [i_0] [i_0] = ((var_19) / (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)132))) / (min((((/* implicit */unsigned long long int) arr_0 [(short)2])), (arr_4 [i_0] [i_2]))))));
            arr_12 [i_2] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (unsigned short)24935)), (arr_4 [(unsigned char)5] [(unsigned char)5])));
        }
        /* vectorizable */
        for (unsigned int i_3 = 0; i_3 < 15; i_3 += 4) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned short i_4 = 0; i_4 < 15; i_4 += 3) 
            {
                arr_17 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)24929))) != (16069963976845906203ULL)));
                /* LoopSeq 1 */
                for (unsigned char i_5 = 0; i_5 < 15; i_5 += 4) 
                {
                    /* LoopSeq 1 */
                    for (short i_6 = 1; i_6 < 14; i_6 += 3) 
                    {
                        arr_24 [i_6 + 1] [i_4] [i_4] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) -8776251432472675713LL)) || (((/* implicit */_Bool) arr_10 [i_3] [i_5] [(unsigned char)14])))) || (((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) (unsigned char)246))))));
                        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)24929)) & (((/* implicit */int) arr_10 [i_0] [i_3] [i_4]))))) - (var_19))))));
                        arr_25 [i_0] [i_0] [(unsigned char)4] [i_5] [i_6 + 1] [i_0] [i_4] = ((/* implicit */unsigned int) arr_19 [i_0] [i_0] [i_4] [i_0] [(unsigned short)1]);
                        arr_26 [i_4] [4U] [i_4] = ((/* implicit */unsigned int) arr_8 [i_0] [i_0]);
                    }
                    arr_27 [i_4] = ((/* implicit */unsigned long long int) arr_8 [0LL] [(short)8]);
                    arr_28 [i_4] [i_4] [i_4] = ((/* implicit */long long int) ((((((/* implicit */int) arr_14 [i_0])) * (((/* implicit */int) arr_23 [i_0] [i_0] [(short)1] [i_0])))) * (((((/* implicit */int) arr_20 [(unsigned char)8] [i_3] [i_3] [i_3] [(unsigned char)8])) / (((/* implicit */int) arr_18 [(short)12] [i_4] [i_4] [i_5] [i_5]))))));
                    arr_29 [i_4] = ((/* implicit */short) var_19);
                }
            }
            arr_30 [(unsigned char)9] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) -9126856010217012925LL)) - (arr_4 [(unsigned short)12] [(unsigned short)12])));
            var_25 = ((/* implicit */short) var_8);
            var_26 *= ((/* implicit */short) arr_19 [(unsigned char)3] [i_3] [i_3] [i_3] [(unsigned char)3]);
        }
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155005
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
    var_16 += (unsigned short)48808;
    var_17 = ((/* implicit */signed char) var_1);
    /* LoopSeq 2 */
    for (long long int i_0 = 3; i_0 < 14; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) (+(arr_1 [i_0] [i_0])));
        var_18 += ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_1 [i_0 + 2] [i_0 - 1])) ? (((/* implicit */unsigned long long int) -1LL)) : (arr_1 [5ULL] [i_0 - 2])))));
    }
    for (unsigned short i_1 = 2; i_1 < 11; i_1 += 2) 
    {
        arr_7 [i_1] = ((/* implicit */short) -25LL);
        arr_8 [i_1 - 2] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned short) ((unsigned short) (short)-15554))))));
        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) 283513490U)) ? (((/* implicit */unsigned long long int) 4011453811U)) : (arr_1 [i_1 - 2] [i_1 - 2])))))));
        arr_9 [i_1 - 1] [i_1] = ((/* implicit */long long int) (unsigned short)33764);
        /* LoopSeq 2 */
        for (unsigned int i_2 = 3; i_2 < 11; i_2 += 4) 
        {
            var_20 = ((/* implicit */unsigned int) min((var_20), (4011453802U)));
            var_21 = ((/* implicit */_Bool) arr_1 [i_1] [i_2]);
        }
        for (unsigned char i_3 = 0; i_3 < 12; i_3 += 4) 
        {
            var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) 283513484U))));
            arr_15 [9ULL] [i_3] [i_3] = ((/* implicit */unsigned long long int) arr_13 [i_3]);
            /* LoopSeq 1 */
            for (unsigned long long int i_4 = 3; i_4 < 10; i_4 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_5 = 0; i_5 < 12; i_5 += 3) 
                {
                    var_23 = ((/* implicit */_Bool) ((short) ((unsigned int) 3LL)));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_6 = 1; i_6 < 10; i_6 += 4) 
                    {
                        arr_24 [i_4] [i_4] = ((/* implicit */_Bool) arr_13 [i_1]);
                        var_24 = ((/* implicit */unsigned long long int) ((_Bool) arr_21 [i_5]));
                        arr_25 [i_1] [i_3] [i_1] [i_1] [i_6 - 1] &= ((/* implicit */_Bool) (unsigned char)216);
                        arr_26 [i_4] [1LL] [i_5] [(signed char)4] [i_3] [i_1] [i_4] = ((/* implicit */unsigned char) ((unsigned int) arr_21 [i_5]));
                    }
                }
                arr_27 [i_4] [i_1] [i_3] [i_4] = ((/* implicit */unsigned long long int) (unsigned char)3);
                var_25 = ((/* implicit */unsigned short) 283513514U);
                arr_28 [i_1] [i_4] [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) 17287900411285463506ULL)) ? (4011453787U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 4011453807U))))))));
            }
            arr_29 [i_3] [i_1 + 1] = ((/* implicit */_Bool) (short)-27730);
            arr_30 [i_1] [i_3] = ((/* implicit */unsigned long long int) arr_19 [i_1] [i_3] [i_3] [i_3] [i_3] [i_3]);
        }
    }
    var_26 = ((/* implicit */unsigned short) 4026531840U);
    var_27 |= var_2;
}

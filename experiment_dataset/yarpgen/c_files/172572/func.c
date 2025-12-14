/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172572
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
    var_19 = var_5;
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 3; i_0 < 18; i_0 += 3) 
    {
        var_20 = ((/* implicit */unsigned int) var_13);
        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (short)3840))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 1; i_1 < 20; i_1 += 2) /* same iter space */
    {
        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((arr_2 [i_1 - 1]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 12ULL)))))))));
        arr_6 [i_1 + 3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)210)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1]))) : (7ULL)))) ? (((/* implicit */unsigned long long int) arr_3 [i_1 + 2] [i_1 - 1])) : (((7ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))));
        /* LoopSeq 3 */
        for (int i_2 = 0; i_2 < 23; i_2 += 4) 
        {
            var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) arr_4 [i_1]))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */int) (unsigned char)193)) >> (((arr_7 [i_1] [i_1]) + (41157842)))))));
            var_24 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)88))));
        }
        for (unsigned long long int i_3 = 3; i_3 < 21; i_3 += 4) 
        {
            arr_12 [i_1] [i_3] = ((/* implicit */unsigned long long int) ((arr_8 [i_1 - 1] [i_1 + 3]) > (arr_8 [i_1 + 1] [i_1 + 2])));
            var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)95)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)27411))));
            /* LoopSeq 2 */
            for (int i_4 = 1; i_4 < 19; i_4 += 1) 
            {
                arr_15 [i_1] [10ULL] [i_1] = ((/* implicit */signed char) ((unsigned long long int) 18446744073709551612ULL));
                /* LoopSeq 1 */
                for (unsigned char i_5 = 1; i_5 < 21; i_5 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_6 = 0; i_6 < 23; i_6 += 3) 
                    {
                        var_26 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) / (var_0)));
                        var_27 = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)247))));
                    }
                    arr_20 [i_4] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_5))));
                }
                var_28 |= ((/* implicit */unsigned long long int) ((arr_19 [i_4] [i_4] [i_4 - 1] [i_3] [i_3 + 1] [i_1] [i_1]) % (((/* implicit */int) (_Bool)1))));
            }
            for (signed char i_7 = 0; i_7 < 23; i_7 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_8 = 0; i_8 < 23; i_8 += 2) 
                {
                    arr_27 [i_1] [(unsigned short)22] [i_3] [i_3] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 531920610U)) ? ((-2147483647 - 1)) : (((/* implicit */int) (unsigned char)104))));
                    var_29 = ((/* implicit */unsigned int) ((unsigned char) (+(((/* implicit */int) (_Bool)1)))));
                }
                arr_28 [i_1] [i_1] = ((/* implicit */unsigned char) arr_21 [i_3 - 3] [i_3 - 3] [i_3 - 2] [i_1 + 3]);
            }
        }
        for (unsigned long long int i_9 = 0; i_9 < 23; i_9 += 1) 
        {
            var_30 = ((/* implicit */_Bool) ((arr_16 [i_1] [i_9] [i_9] [i_1 + 3] [i_1]) ? (((/* implicit */int) arr_16 [i_9] [i_9] [i_9] [i_9] [i_9])) : (((/* implicit */int) arr_10 [i_1] [i_1] [i_9]))));
            arr_32 [i_1] [i_9] [(_Bool)1] = ((/* implicit */unsigned char) 13ULL);
            var_31 = ((int) arr_22 [i_9] [i_1 + 3]);
            var_32 = ((/* implicit */int) max((var_32), (((/* implicit */int) ((unsigned char) arr_16 [i_1] [i_1] [13] [i_1 + 2] [i_1 - 1])))));
            var_33 = ((/* implicit */unsigned char) ((var_11) ? ((~(arr_29 [i_1 + 2] [i_1 + 1] [i_9]))) : (((unsigned int) (unsigned char)253))));
        }
        arr_33 [i_1] = ((/* implicit */unsigned long long int) ((18446744073709551591ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 2147479552)) <= (4976615775263334704ULL)))))));
    }
    for (unsigned char i_10 = 1; i_10 < 20; i_10 += 2) /* same iter space */
    {
        var_34 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) < ((-(var_8)))));
        var_35 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_9 [i_10 - 1] [i_10 + 1] [i_10 + 1]), (arr_9 [i_10 - 1] [i_10 + 3] [i_10 + 1]))))) >= (((arr_2 [i_10 + 1]) >> (((1100078368) - (1100078340)))))));
    }
    var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) 2146959360)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_1) >= (((/* implicit */int) (_Bool)1)))))) : (max((17179869152ULL), (((/* implicit */unsigned long long int) var_15)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_7)) < (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)48)), ((unsigned char)33))))))))));
    var_37 = ((/* implicit */unsigned long long int) min((var_37), (((/* implicit */unsigned long long int) ((signed char) (signed char)7)))));
}

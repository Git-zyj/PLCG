/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124848
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        var_11 = ((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0] [i_0])) << (((((((/* implicit */int) arr_1 [i_0] [i_0])) << (((var_9) + (2119854630))))) - (104704))))))));
        var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0 - 2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [13] [i_0]))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (var_8))) : ((+(((/* implicit */int) (_Bool)1)))))))));
        arr_2 [i_0 - 1] = ((/* implicit */short) (signed char)-25);
        /* LoopSeq 4 */
        for (long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            /* LoopSeq 4 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) arr_0 [i_0 + 3])) == (8472690726914774300ULL)));
                var_14 = ((/* implicit */_Bool) var_1);
                var_15 = arr_3 [i_0 - 2];
                var_16 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_1 [i_1] [i_1]))));
                var_17 |= ((/* implicit */short) ((((/* implicit */int) (signed char)-41)) == (var_4)));
            }
            for (signed char i_3 = 0; i_3 < 22; i_3 += 1) /* same iter space */
            {
                var_18 ^= ((/* implicit */unsigned int) ((arr_3 [2LL]) && (((/* implicit */_Bool) ((arr_8 [(short)6] [i_3]) << (((arr_6 [i_0] [i_1] [i_3]) - (1482574797U))))))));
                arr_11 [i_3] [i_1] [i_3] = ((/* implicit */unsigned long long int) arr_8 [i_3] [i_1]);
            }
            for (signed char i_4 = 0; i_4 < 22; i_4 += 1) /* same iter space */
            {
                /* LoopSeq 1 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    var_19 = ((/* implicit */_Bool) arr_14 [i_0 - 1] [i_0 - 1] [3ULL] [i_5]);
                    var_20 = ((/* implicit */unsigned long long int) ((((arr_7 [i_0 + 1] [i_1] [i_4] [i_5]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0]))))) ? (((/* implicit */long long int) ((((/* implicit */int) (short)-26768)) / (((/* implicit */int) (signed char)24))))) : (arr_14 [i_0 - 1] [i_1] [0] [i_5])));
                }
                var_21 -= ((/* implicit */unsigned int) var_0);
                var_22 = ((/* implicit */unsigned long long int) (+(arr_6 [i_0] [i_1] [i_0 + 3])));
            }
            for (int i_6 = 2; i_6 < 20; i_6 += 4) 
            {
                /* LoopSeq 1 */
                for (short i_7 = 0; i_7 < 22; i_7 += 2) 
                {
                    var_23 &= ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_3 [i_0 + 3]))));
                    arr_24 [i_0] [i_1] [i_6] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) arr_18 [i_0] [i_6 - 1] [i_0 + 2])) ? (((/* implicit */int) arr_18 [i_1] [i_6 - 2] [i_0 + 3])) : (((/* implicit */int) arr_18 [i_0 - 1] [i_6 + 1] [i_0 + 2]))));
                    var_24 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_9 [i_1] [i_1] [i_1] [i_7]))))) ? (((/* implicit */unsigned long long int) arr_6 [i_0] [i_6 + 1] [i_7])) : (var_3)));
                }
                var_25 ^= ((((/* implicit */int) arr_15 [i_0 + 2] [i_6 + 1] [i_1] [i_6 + 1])) >= (((/* implicit */int) var_5)));
                var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) arr_1 [i_6 + 2] [i_1]))) >> (((arr_8 [i_6] [i_0 + 2]) - (1522678330U))))))));
            }
            arr_25 [i_0 + 1] [i_1] = ((/* implicit */int) arr_16 [i_1] [i_1] [14] [i_0 + 1]);
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            arr_28 [i_0] [i_0 - 1] [i_8] = ((/* implicit */unsigned short) var_2);
            arr_29 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)16)) == (((/* implicit */int) (_Bool)1))));
        }
        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
        {
            arr_32 [i_0] = ((/* implicit */_Bool) (+((+(((/* implicit */int) (unsigned short)13815))))));
            var_27 = ((/* implicit */long long int) (+(arr_17 [i_0] [2])));
            arr_33 [i_0] [8ULL] [i_0] = ((/* implicit */short) ((_Bool) arr_20 [i_0 + 1] [i_0 - 2] [i_9] [i_9 - 1]));
            var_28 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_9 [i_0 - 1] [i_9] [i_9 - 1] [i_9]))));
        }
        for (unsigned int i_10 = 2; i_10 < 21; i_10 += 2) 
        {
            var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) arr_12 [(unsigned short)13] [(unsigned short)13] [i_0]))));
            var_30 = ((/* implicit */unsigned int) (+(((int) arr_30 [i_0] [i_0 + 1]))));
            arr_38 [i_10 + 1] = ((/* implicit */unsigned int) (+(var_3)));
        }
    }
    var_31 ^= ((/* implicit */_Bool) var_0);
    var_32 -= ((/* implicit */unsigned long long int) (+((+(var_9)))));
}

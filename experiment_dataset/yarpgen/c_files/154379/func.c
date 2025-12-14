/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154379
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
    for (int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [(_Bool)1]))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            /* LoopSeq 2 */
            for (short i_2 = 1; i_2 < 20; i_2 += 3) 
            {
                var_14 = ((/* implicit */_Bool) arr_0 [(unsigned short)13] [(unsigned short)13]);
                arr_10 [i_0] [i_0] [i_0] [i_2] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_9 [i_2] [i_2 + 2] [i_2 + 1] [i_2]), (arr_9 [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2])))) ? (min((arr_9 [i_2] [i_2 - 1] [i_2 + 1] [i_0]), (arr_9 [i_2] [i_2] [i_2 + 1] [7]))) : (max((arr_9 [i_2] [i_2] [i_2 + 1] [i_2]), (arr_9 [(_Bool)1] [i_2] [i_2 + 1] [(_Bool)1])))));
                arr_11 [i_2] [i_1] [i_0] = ((/* implicit */_Bool) arr_6 [i_0] [i_0]);
            }
            /* vectorizable */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_15 = ((/* implicit */int) (!(((/* implicit */_Bool) var_9))));
                var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_12 [i_1])) : (((/* implicit */int) arr_2 [i_1]))));
                var_17 -= ((/* implicit */unsigned short) (+(arr_9 [i_3] [i_3] [i_1] [i_0])));
                var_18 *= ((/* implicit */unsigned int) arr_0 [i_0] [i_0]);
            }
            var_19 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned short) arr_9 [i_0] [i_0] [i_0] [i_0])))));
            arr_14 [i_1] = ((/* implicit */unsigned short) min(((~(((/* implicit */int) arr_0 [i_1] [i_0])))), (((/* implicit */int) ((((_Bool) var_10)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1] [21U])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_7 [(signed char)6])))))))));
        }
        /* LoopSeq 1 */
        for (signed char i_4 = 0; i_4 < 22; i_4 += 4) 
        {
            var_20 -= ((/* implicit */unsigned short) min((((/* implicit */unsigned int) min((min((arr_16 [(signed char)1] [i_4]), (((/* implicit */int) arr_0 [i_0] [i_4])))), ((+(((/* implicit */int) arr_12 [i_0]))))))), (min((((/* implicit */unsigned int) var_13)), (arr_13 [i_0] [i_0] [i_0] [(signed char)16])))));
            /* LoopSeq 2 */
            for (unsigned long long int i_5 = 1; i_5 < 20; i_5 += 4) 
            {
                arr_20 [i_5] [(signed char)8] [i_4] [(signed char)8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) (short)8117))) ? ((-(4294967293U))) : ((~(arr_9 [i_0] [i_4] [i_4] [(unsigned short)1])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0] [i_0]))))) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_2 [i_0])), (8436207525535939869ULL)))))))) : (((((/* implicit */_Bool) arr_9 [i_5 + 1] [i_0] [i_0] [i_0])) ? (arr_9 [i_5 - 1] [i_4] [i_4] [i_4]) : (arr_9 [i_5 - 1] [i_5] [i_0] [i_0])))));
                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) arr_13 [i_5 + 1] [i_5 - 1] [i_0] [i_5 + 1]))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_5] [i_4] [i_0]))) : (arr_7 [i_5])));
                arr_21 [(signed char)10] [(_Bool)1] [i_5 + 2] [i_5 + 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) arr_12 [i_5]))) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_0 [i_0] [i_0])), (arr_6 [i_0] [i_0])))) : (((/* implicit */int) arr_18 [i_5] [i_5] [i_5 + 1] [i_5 - 1]))))) || (((/* implicit */_Bool) ((((((/* implicit */int) arr_3 [i_0])) * (((/* implicit */int) arr_8 [i_4])))) | (((((/* implicit */_Bool) (short)15)) ? (((/* implicit */int) arr_18 [i_4] [12U] [i_4] [i_0])) : (((/* implicit */int) (short)-16)))))))));
            }
            for (unsigned short i_6 = 1; i_6 < 19; i_6 += 1) 
            {
                var_22 = ((/* implicit */unsigned short) (((+(((/* implicit */int) (_Bool)1)))) > (((/* implicit */int) (signed char)0))));
                arr_25 [i_6] = ((/* implicit */unsigned long long int) arr_17 [i_6] [i_4] [(unsigned short)5]);
                var_23 = ((/* implicit */_Bool) (~(max((((/* implicit */int) max(((_Bool)1), ((_Bool)0)))), ((-(((/* implicit */int) (signed char)-81))))))));
            }
        }
        arr_26 [i_0] = ((/* implicit */unsigned char) ((int) (_Bool)1));
        arr_27 [i_0] [i_0] = ((/* implicit */unsigned short) ((min((((/* implicit */unsigned int) arr_18 [i_0] [i_0] [i_0] [i_0])), (arr_13 [i_0] [i_0] [i_0] [i_0]))) > (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [14ULL])))))));
    }
    var_24 = var_8;
}

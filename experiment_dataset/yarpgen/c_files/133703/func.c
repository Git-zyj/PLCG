/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133703
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
    for (signed char i_0 = 4; i_0 < 14; i_0 += 1) 
    {
        /* LoopSeq 4 */
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 3) /* same iter space */
        {
            arr_5 [i_0] [i_0 - 1] [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) ((signed char) var_4)))));
            arr_6 [i_0] [i_1] = ((/* implicit */unsigned int) ((signed char) ((arr_0 [i_0]) | (((/* implicit */long long int) ((/* implicit */int) var_4))))));
        }
        for (unsigned short i_2 = 0; i_2 < 15; i_2 += 3) /* same iter space */
        {
            arr_9 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(var_5)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_3)))) : ((~(((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2] [i_2] [i_0]))) & (var_5)))))));
            /* LoopSeq 2 */
            for (short i_3 = 3; i_3 < 14; i_3 += 3) 
            {
                arr_13 [i_0] [i_2] [(unsigned short)2] = ((/* implicit */unsigned short) arr_12 [i_0 - 1] [i_2] [i_3]);
                var_18 ^= ((/* implicit */signed char) (_Bool)1);
                arr_14 [i_3] [i_0] [i_0] [i_0 - 2] = ((/* implicit */signed char) min((var_12), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_12 [i_0] [i_0] [i_0 - 2])) : (((/* implicit */int) arr_12 [13] [i_3 + 1] [i_0 - 4])))))));
                var_19 -= ((/* implicit */_Bool) min((var_16), (min((((unsigned int) var_6)), (((/* implicit */unsigned int) arr_10 [4]))))));
                var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((short) ((unsigned long long int) arr_7 [i_0 - 2]))))));
            }
            for (int i_4 = 4; i_4 < 14; i_4 += 2) 
            {
                var_21 ^= ((((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_16)), (9883598027805679108ULL))))))) ^ (min((var_11), (((/* implicit */int) max((((/* implicit */unsigned short) arr_11 [8LL])), (arr_7 [i_2])))))));
                var_22 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (_Bool)1)), (max((((var_0) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)64650))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (arr_15 [i_2] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_14))))))))));
                var_23 = ((/* implicit */unsigned long long int) (-((((+(var_3))) * (((/* implicit */int) arr_10 [i_0]))))));
            }
        }
        /* vectorizable */
        for (unsigned short i_5 = 0; i_5 < 15; i_5 += 3) /* same iter space */
        {
            var_24 = ((/* implicit */_Bool) ((arr_8 [i_0] [i_0 + 1] [i_0]) + (((/* implicit */long long int) -1935086215))));
            arr_20 [i_0] [i_0] = ((/* implicit */long long int) (signed char)63);
            /* LoopSeq 2 */
            for (int i_6 = 1; i_6 < 12; i_6 += 1) 
            {
                var_25 += ((/* implicit */_Bool) arr_18 [i_0] [13ULL] [i_0]);
                var_26 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_19 [i_0 - 3] [i_0])) : (((/* implicit */int) arr_19 [(short)12] [i_0 - 1]))))));
            }
            for (short i_7 = 3; i_7 < 12; i_7 += 1) 
            {
                var_27 = ((/* implicit */signed char) ((unsigned short) var_9));
                var_28 = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)127))));
            }
        }
        for (unsigned short i_8 = 3; i_8 < 14; i_8 += 2) 
        {
            arr_28 [(short)6] [i_0] [i_8] = var_11;
            var_29 ^= ((/* implicit */_Bool) (~(((/* implicit */int) arr_26 [i_0 - 4] [i_8 - 2]))));
        }
        arr_29 [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((unsigned int) (signed char)127))) >= (arr_1 [i_0])));
    }
    var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) var_9))));
}

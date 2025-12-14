/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122262
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
    var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((((/* implicit */int) var_9)) ^ (((/* implicit */int) var_13)))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) min((2199023255424ULL), (((/* implicit */unsigned long long int) (unsigned char)173))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (short)0)), (max((((arr_1 [i_0]) + (((/* implicit */long long int) ((/* implicit */int) var_5))))), (((/* implicit */long long int) ((short) arr_2 [i_0])))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            arr_8 [i_0] [i_0] [(signed char)3] = ((/* implicit */short) (~(((/* implicit */int) arr_6 [i_0] [i_1 - 2] [i_0]))));
            /* LoopSeq 2 */
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 4) /* same iter space */
            {
                arr_12 [i_0] [i_1] [i_0] [12LL] = ((/* implicit */unsigned long long int) (short)-4065);
                /* LoopSeq 1 */
                for (long long int i_3 = 0; i_3 < 18; i_3 += 4) 
                {
                    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [15LL] [i_3] [i_1 - 2] [(unsigned char)8] [i_0] [9])) ? (1771915760) : (((/* implicit */int) arr_0 [i_2]))));
                    arr_16 [i_0] [i_0] [i_3] = ((/* implicit */unsigned char) ((arr_15 [i_1 - 2] [i_1] [i_2] [(short)5] [(unsigned char)8] [i_2]) ^ (((/* implicit */long long int) ((/* implicit */int) (short)-26935)))));
                    var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) (~(((/* implicit */int) var_12)))))));
                    arr_17 [i_0] [2ULL] [i_0] [i_0] = ((/* implicit */signed char) var_1);
                }
                arr_18 [i_0] [i_1 + 1] [i_1] &= ((/* implicit */unsigned int) (-(((/* implicit */int) arr_14 [4ULL] [8ULL] [i_1] [i_1 - 1] [i_1 - 1] [i_0]))));
                arr_19 [i_0] [i_1] = ((/* implicit */int) (-9223372036854775807LL - 1LL));
                var_17 *= ((signed char) var_7);
            }
            for (unsigned char i_4 = 0; i_4 < 18; i_4 += 4) /* same iter space */
            {
                var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((((long long int) var_0)) * (((/* implicit */long long int) ((/* implicit */int) (signed char)-8))))))));
                arr_23 [i_0] [i_1 - 2] [i_4] [i_0] = (i_0 % 2 == zero) ? (((/* implicit */unsigned short) ((arr_11 [i_1 - 2] [i_0]) >> (((((/* implicit */int) var_11)) - (39619)))))) : (((/* implicit */unsigned short) ((((arr_11 [i_1 - 2] [i_0]) + (9223372036854775807LL))) >> (((((/* implicit */int) var_11)) - (39619))))));
            }
            arr_24 [i_0] [i_1] [i_1] = ((/* implicit */int) ((signed char) (+(((/* implicit */int) arr_9 [i_0] [i_1] [i_0] [i_0])))));
            /* LoopSeq 1 */
            for (unsigned char i_5 = 1; i_5 < 16; i_5 += 4) 
            {
                var_19 = ((/* implicit */short) arr_2 [i_0]);
                arr_29 [i_0] [(unsigned char)11] [i_5 + 1] = ((/* implicit */unsigned long long int) arr_15 [i_0] [i_1] [i_5 + 2] [i_1] [i_0] [14]);
            }
            arr_30 [i_0] = ((/* implicit */signed char) arr_21 [i_0] [i_1 - 1]);
        }
        arr_31 [i_0] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (short)-4090)))))))) == (((/* implicit */int) var_5))));
        arr_32 [i_0] [i_0] = ((/* implicit */unsigned int) max(((short)-4068), ((short)4070)));
    }
}

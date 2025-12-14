/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12185
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 4; i_0 < 21; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            {
                arr_5 [i_0 - 2] [i_1] = ((/* implicit */long long int) var_10);
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned char) arr_11 [i_3] [i_2] [i_1] [i_3]);
                            var_15 *= ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_1 [i_0 - 4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 1]))) : (arr_0 [i_0 - 1] [i_1 + 1])))));
                            /* LoopSeq 4 */
                            for (int i_4 = 3; i_4 < 20; i_4 += 2) 
                            {
                                arr_15 [i_0] [i_0] [(signed char)20] [(signed char)20] [i_3] [i_3] [13U] = (!(((/* implicit */_Bool) ((unsigned char) var_3))));
                                arr_16 [(unsigned short)19] [(unsigned short)19] [18LL] [20LL] [18LL] [i_1] [i_3] = ((/* implicit */unsigned short) (~(((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 4]))) ^ (arr_3 [i_1 + 2])))));
                                var_16 = ((/* implicit */unsigned int) max((((/* implicit */int) ((unsigned short) var_12))), (((((/* implicit */int) ((unsigned short) (signed char)116))) + (((/* implicit */int) ((((/* implicit */int) arr_4 [i_2] [i_1])) >= (((/* implicit */int) arr_4 [i_0] [i_1])))))))));
                            }
                            for (int i_5 = 3; i_5 < 20; i_5 += 4) 
                            {
                                arr_20 [i_3] [i_3] [i_2] [(_Bool)1] [i_3] = ((/* implicit */unsigned int) ((unsigned long long int) (unsigned char)251));
                                arr_21 [i_3] [i_0 + 1] [i_0 + 1] [i_1] [i_3] = ((/* implicit */signed char) arr_14 [i_3] [i_5] [i_3] [i_1] [i_1] [i_0]);
                                var_17 |= ((/* implicit */short) ((long long int) var_6));
                                var_18 = ((/* implicit */_Bool) var_13);
                                arr_22 [i_0] [i_1] [i_3] [i_3] [i_0] [i_5 + 2] = ((/* implicit */unsigned char) arr_2 [i_1]);
                            }
                            for (short i_6 = 0; i_6 < 22; i_6 += 4) /* same iter space */
                            {
                                var_19 = ((((/* implicit */int) ((_Bool) arr_2 [14LL]))) | (((((/* implicit */_Bool) arr_2 [(_Bool)1])) ? (((/* implicit */int) arr_14 [i_3] [i_1 + 1] [i_1] [i_0 + 1] [i_0 - 4] [i_0])) : (((/* implicit */int) arr_2 [i_0])))));
                                var_20 = ((/* implicit */long long int) ((_Bool) ((((/* implicit */long long int) var_1)) + (arr_18 [(signed char)4] [i_1] [i_2] [i_0 - 4] [(_Bool)1]))));
                            }
                            for (short i_7 = 0; i_7 < 22; i_7 += 4) /* same iter space */
                            {
                                var_21 = ((/* implicit */unsigned int) arr_18 [i_0 - 3] [(short)1] [(unsigned short)2] [i_3] [i_7]);
                                var_22 *= ((/* implicit */unsigned char) var_4);
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */long long int) ((_Bool) var_7));
    /* LoopNest 2 */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        for (signed char i_9 = 0; i_9 < 20; i_9 += 1) 
        {
            {
                var_24 = ((/* implicit */unsigned short) var_5);
                arr_32 [i_8] [i_9] = ((/* implicit */_Bool) arr_19 [i_8] [(unsigned short)9] [i_9] [i_9] [i_9]);
                var_25 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)16384))));
                arr_33 [i_8] [i_8] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-16))));
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned long long int) var_2);
    var_27 ^= ((/* implicit */unsigned long long int) var_4);
}

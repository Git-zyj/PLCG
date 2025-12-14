/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118592
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
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                var_19 = ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_1]))))));
                var_20 ^= ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)0))));
                var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) (~(((/* implicit */int) min((arr_2 [i_0]), (var_9)))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_3 = 2; i_3 < 14; i_3 += 4) 
        {
            arr_11 [(unsigned char)17] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)125)) ? (((((/* implicit */int) var_4)) ^ (((/* implicit */int) (_Bool)1)))) : ((-(((/* implicit */int) (_Bool)1))))));
            var_22 = ((/* implicit */unsigned char) (+((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_4 [i_3])))));
            /* LoopNest 2 */
            for (unsigned char i_4 = 0; i_4 < 18; i_4 += 4) 
            {
                for (long long int i_5 = 1; i_5 < 17; i_5 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_6 = 2; i_6 < 16; i_6 += 1) 
                        {
                            var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) (unsigned char)209))));
                            var_24 = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) (unsigned char)127)) != (((/* implicit */int) (unsigned char)124)))))));
                        }
                        /* LoopSeq 3 */
                        for (unsigned char i_7 = 0; i_7 < 18; i_7 += 2) 
                        {
                            var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) var_17))));
                            var_26 += ((/* implicit */_Bool) var_0);
                            var_27 *= ((/* implicit */unsigned char) ((_Bool) arr_5 [i_2 + 1]));
                            arr_23 [i_2] [i_5] = ((-7539107369321002449LL) != (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_2] [i_3] [i_5] [i_3] [1LL] [i_7])) || (((/* implicit */_Bool) var_4)))))));
                            var_28 *= ((/* implicit */long long int) (unsigned char)118);
                        }
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                        {
                            var_29 ^= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_4)) ? (1031094841483710887LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)204)))))));
                            var_30 = ((/* implicit */long long int) (_Bool)1);
                        }
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                        {
                            arr_30 [i_5] = arr_26 [i_5] [i_5];
                            arr_31 [i_2] [i_5] [i_2] [i_9] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2 + 1]))) <= (var_7)));
                        }
                    }
                } 
            } 
        }
        arr_32 [(unsigned char)15] [(unsigned char)15] = (!((!(((/* implicit */_Bool) arr_21 [i_2] [i_2] [i_2] [i_2] [i_2])))));
    }
    var_31 = ((/* implicit */unsigned char) var_16);
    /* LoopNest 2 */
    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
    {
        for (unsigned char i_11 = 0; i_11 < 17; i_11 += 1) 
        {
            {
                arr_41 [i_10] = (!(((((/* implicit */int) arr_26 [i_10] [i_11])) >= (((/* implicit */int) (unsigned char)38)))));
                var_32 = ((/* implicit */unsigned char) max((max((max((((/* implicit */long long int) arr_27 [i_11] [i_10])), (arr_25 [i_10]))), (((/* implicit */long long int) (~(((/* implicit */int) arr_16 [i_10 - 1]))))))), (((/* implicit */long long int) min(((unsigned char)253), (((/* implicit */unsigned char) (_Bool)0)))))));
                var_33 *= ((_Bool) (!(((/* implicit */_Bool) arr_14 [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10 - 1]))));
            }
        } 
    } 
    var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)97)) : (((/* implicit */int) var_5))));
}

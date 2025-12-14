/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110930
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
    var_13 = ((unsigned char) var_8);
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        var_14 = ((/* implicit */unsigned short) max((min((-662722296939427113LL), (((/* implicit */long long int) (unsigned short)0)))), (((/* implicit */long long int) max((((((/* implicit */_Bool) -662722296939427113LL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) min((arr_1 [i_0]), (arr_1 [i_0])))))))));
        var_15 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) < (((/* implicit */int) var_4)))))));
        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (max((((/* implicit */long long int) (+(((/* implicit */int) var_4))))), (((((/* implicit */_Bool) 662722296939427113LL)) ? (-662722296939427113LL) : (-662722296939427113LL))))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) arr_1 [i_0])), (arr_0 [i_0 + 2])))))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            /* LoopSeq 3 */
            for (long long int i_2 = 1; i_2 < 23; i_2 += 3) 
            {
                var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_0)), (var_3))))));
                arr_6 [i_2] [i_0] [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) min((((/* implicit */short) var_5)), (arr_4 [i_0 + 2] [i_0 + 1] [i_0]))))));
                var_18 &= ((/* implicit */unsigned short) var_5);
            }
            for (unsigned int i_3 = 0; i_3 < 24; i_3 += 4) /* same iter space */
            {
                var_19 = ((/* implicit */unsigned char) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0 - 1]))))), (((((/* implicit */_Bool) arr_2 [i_0 + 2] [i_0 + 2] [i_0])) ? (((/* implicit */int) arr_2 [i_0 + 1] [i_1] [i_0])) : (((/* implicit */int) arr_2 [i_0 - 1] [i_0] [i_0]))))));
                /* LoopSeq 1 */
                for (unsigned char i_4 = 0; i_4 < 24; i_4 += 3) 
                {
                    var_20 *= ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) arr_10 [i_0 + 2] [i_0])))));
                    arr_12 [i_0] [i_0] [i_3] [i_3] &= ((/* implicit */unsigned short) ((int) (+(((((/* implicit */_Bool) var_0)) ? (-662722296939427113LL) : (662722296939427112LL))))));
                    var_21 = arr_0 [i_0 + 1];
                }
            }
            for (unsigned int i_5 = 0; i_5 < 24; i_5 += 4) /* same iter space */
            {
                var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) 662722296939427113LL)) ? (((/* implicit */int) (short)-32756)) : (((/* implicit */int) (unsigned char)87)))))));
                var_23 |= ((/* implicit */long long int) (~(var_3)));
                var_24 = ((/* implicit */signed char) var_6);
                var_25 ^= ((/* implicit */long long int) (~(((/* implicit */int) min((var_8), (((/* implicit */unsigned short) arr_4 [i_0 + 1] [i_0 + 1] [i_1])))))));
            }
            /* LoopNest 2 */
            for (unsigned char i_6 = 3; i_6 < 21; i_6 += 4) 
            {
                for (int i_7 = 0; i_7 < 24; i_7 += 1) 
                {
                    {
                        var_26 = ((/* implicit */unsigned short) (unsigned char)169);
                        var_27 = ((/* implicit */int) 662722296939427112LL);
                        arr_20 [i_0] [i_1] [i_6] [i_0] = ((/* implicit */short) ((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) arr_14 [i_0] [i_0 + 1]))));
                    }
                } 
            } 
            var_28 = ((/* implicit */unsigned short) min((((/* implicit */int) var_1)), (max((((((/* implicit */_Bool) (unsigned char)157)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)87)))), (((-1606395217) ^ (((/* implicit */int) arr_10 [i_0] [i_0]))))))));
        }
    }
}

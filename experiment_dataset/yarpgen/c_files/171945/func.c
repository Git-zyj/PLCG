/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171945
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
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */_Bool) max(((+(((/* implicit */int) (unsigned char)19)))), ((~(((/* implicit */int) arr_0 [i_0] [i_0]))))));
                /* LoopSeq 3 */
                for (short i_2 = 4; i_2 < 17; i_2 += 2) 
                {
                    var_16 = ((/* implicit */_Bool) ((int) (signed char)120));
                    var_17 = (_Bool)1;
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) arr_7 [i_0] [i_1] [i_1] [i_1]))));
                    arr_10 [i_3] [i_3] = ((/* implicit */unsigned int) arr_0 [i_0] [i_1]);
                    var_19 = ((/* implicit */_Bool) min((((((/* implicit */int) arr_9 [i_3] [i_1] [i_3])) + (((/* implicit */int) arr_5 [i_0] [(unsigned char)6] [i_3] [i_1])))), ((~(((/* implicit */int) arr_9 [i_3] [i_3] [i_3]))))));
                }
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    /* LoopSeq 2 */
                    for (int i_5 = 0; i_5 < 21; i_5 += 4) /* same iter space */
                    {
                        var_20 = ((/* implicit */long long int) (((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [(unsigned short)4]))))))) - (((/* implicit */int) arr_4 [i_1]))));
                        arr_18 [i_0] [i_4] [i_0] [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned char) (signed char)115)), ((unsigned char)47)));
                        var_21 |= ((/* implicit */unsigned char) arr_4 [i_1]);
                        var_22 = ((/* implicit */unsigned char) arr_16 [i_0] [i_4] [i_0] [i_5]);
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 21; i_6 += 4) /* same iter space */
                    {
                        var_23 = ((/* implicit */unsigned char) ((_Bool) (_Bool)1));
                        arr_22 [10] [i_4] [i_4] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_4 - 1])) * (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-113)))))));
                    }
                    /* LoopNest 2 */
                    for (long long int i_7 = 1; i_7 < 18; i_7 += 1) 
                    {
                        for (unsigned short i_8 = 0; i_8 < 21; i_8 += 2) 
                        {
                            {
                                arr_28 [i_4] [i_7 + 2] [(short)11] [i_1] [i_4] = ((/* implicit */long long int) (signed char)105);
                                var_24 = ((/* implicit */_Bool) (+((((_Bool)1) ? (9223372036854775783LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                            }
                        } 
                    } 
                    var_25 ^= ((/* implicit */_Bool) arr_13 [i_1] [i_1] [i_1]);
                }
                arr_29 [i_0] [i_1] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)117)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)120))) : (12518646135078083296ULL)))) ? (((((/* implicit */_Bool) 0U)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_21 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 902405909045654704LL)) || (((/* implicit */_Bool) arr_25 [i_0] [4ULL])))))));
                arr_30 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_21 [i_0])) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_9 [i_1] [i_1] [i_1]))))))) ? (((/* implicit */int) ((unsigned short) (+(var_12))))) : (((/* implicit */int) ((_Bool) arr_12 [i_0] [i_0] [i_1] [i_1])))));
            }
        } 
    } 
    var_26 = ((/* implicit */signed char) var_4);
    /* LoopNest 3 */
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            for (int i_11 = 2; i_11 < 14; i_11 += 1) 
            {
                {
                    var_27 = ((/* implicit */int) (!((!(((/* implicit */_Bool) (signed char)92))))));
                    var_28 = ((unsigned int) (signed char)117);
                }
            } 
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112002
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */signed char) max((((((/* implicit */_Bool) 8796093022207ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (max((18446735277616529408ULL), (7502860635523448808ULL))))), (((/* implicit */unsigned long long int) min((arr_0 [i_1 + 2] [i_1]), (arr_2 [i_1 + 1] [i_0] [i_0]))))));
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 20; i_2 += 3) /* same iter space */
                {
                    var_14 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_0] [i_0] [i_2])) | (((/* implicit */int) arr_6 [i_0] [i_1 - 1] [i_2]))))), (((((/* implicit */_Bool) arr_4 [i_2])) ? (8862797740421460326ULL) : (1990198432313979406ULL)))));
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 18; i_3 += 1) 
                    {
                        for (short i_4 = 3; i_4 < 18; i_4 += 3) 
                        {
                            {
                                arr_13 [i_4 - 1] [i_3] [i_2] [i_3] [i_0] = ((/* implicit */short) ((((var_3) <= (max((4611686018427387903ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))) ? ((~(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)143))) * (10011158297019830311ULL))))) : (((/* implicit */unsigned long long int) (~((-(((/* implicit */int) (short)-32756)))))))));
                                arr_14 [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_12)), (18446744073709551615ULL))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_5 = 1; i_5 < 18; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 20; i_6 += 2) 
                        {
                            {
                                var_15 -= ((/* implicit */unsigned int) 8862797740421460326ULL);
                                arr_21 [i_6] [i_1] [i_1] [i_0] = (!(((/* implicit */_Bool) ((unsigned long long int) 656525176740493712ULL))));
                            }
                        } 
                    } 
                }
                for (int i_7 = 0; i_7 < 20; i_7 += 3) /* same iter space */
                {
                    arr_25 [i_0] [i_0] = var_8;
                    var_16 *= ((/* implicit */unsigned int) 8796093022208ULL);
                }
                arr_26 [i_0] [i_1 + 1] = ((/* implicit */unsigned short) (~(max((((/* implicit */unsigned int) max((var_10), (((/* implicit */short) (unsigned char)224))))), (max((((/* implicit */unsigned int) var_11)), (2561393405U)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_8 = 0; i_8 < 19; i_8 += 2) 
    {
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            {
                var_17 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_8] [i_8] [i_9])) ? (8796093022208ULL) : (((/* implicit */unsigned long long int) arr_10 [i_8] [i_8] [9] [i_8] [i_8]))))) ? (((arr_10 [i_9] [i_8] [i_9] [i_8] [i_9]) - (arr_10 [i_9] [i_9] [i_9] [i_8] [i_8]))) : (max((((/* implicit */long long int) arr_2 [i_8] [i_8] [i_9])), (arr_10 [i_8] [i_8] [i_9] [i_9] [i_9])))));
                var_18 = ((/* implicit */unsigned long long int) max((var_18), (((max((((((/* implicit */_Bool) arr_18 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_8] [i_8] [i_8] [i_8] [i_8] [i_9] [i_8]))) : (18446744073709551615ULL))), (min((((/* implicit */unsigned long long int) arr_0 [i_8] [i_9])), (var_4))))) / (((/* implicit */unsigned long long int) ((9223372036854775807LL) / (((/* implicit */long long int) var_2)))))))));
            }
        } 
    } 
}

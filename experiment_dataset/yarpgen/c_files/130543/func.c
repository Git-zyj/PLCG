/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130543
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
    var_10 -= var_1;
    var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) var_6))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned int i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    var_12 = (((-(((/* implicit */int) arr_6 [i_0] [i_1] [i_2])))) + (((/* implicit */int) min((((/* implicit */signed char) arr_6 [i_0] [i_1] [i_2])), ((signed char)14)))));
                    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_7 [i_0] [i_1] [i_1] [i_2]), (arr_7 [i_0] [i_0] [i_1] [(unsigned short)6])))) ? ((~(((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_1])))) : (((/* implicit */int) max((arr_7 [i_0] [i_0] [(short)9] [i_2]), (arr_7 [i_0] [(signed char)7] [i_1] [i_2]))))));
                }
                /* vectorizable */
                for (int i_3 = 3; i_3 < 9; i_3 += 3) 
                {
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 9; i_4 += 3) 
                    {
                        for (unsigned int i_5 = 1; i_5 < 8; i_5 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)15142))));
                                var_15 = ((/* implicit */unsigned long long int) (_Bool)1);
                                var_16 = ((/* implicit */unsigned int) (!((_Bool)0)));
                            }
                        } 
                    } 
                    arr_15 [i_3] = ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_1] [(unsigned char)11])) ? (arr_10 [i_0] [i_1] [i_3 - 2] [i_3 - 3]) : (arr_10 [i_0] [(unsigned short)11] [i_3 + 1] [i_0]));
                    arr_16 [(signed char)0] [i_3] [i_3] [(unsigned char)11] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) (unsigned short)823)) ? (arr_1 [(unsigned short)10]) : (var_3))) : (var_3)));
                }
                /* vectorizable */
                for (unsigned int i_6 = 0; i_6 < 12; i_6 += 4) 
                {
                    var_17 = ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_1] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)252))) : (33554431U));
                    arr_19 [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_1] [i_6])) || (var_1)));
                    var_18 = ((/* implicit */unsigned long long int) (+(arr_1 [i_0])));
                    arr_20 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 9206194375261686305LL)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_17 [i_0] [i_1] [i_6]))));
                }
                arr_21 [i_0] [i_0] = max(((_Bool)1), ((_Bool)1));
                arr_22 [10ULL] = ((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0]);
            }
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146483
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        for (signed char i_4 = 1; i_4 < 16; i_4 += 4) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_1] [i_2] [i_3] [i_4])) ? (((((((/* implicit */_Bool) 4294967295U)) || (((/* implicit */_Bool) arr_11 [i_0] [i_0])))) ? (min((((/* implicit */long long int) (unsigned short)40222)), (arr_9 [i_0] [i_1] [i_2] [i_3] [i_4]))) : (((((/* implicit */_Bool) 3321758174U)) ? (arr_9 [i_4] [i_3] [i_2] [i_1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_4]))))))) : (min((arr_9 [i_4] [i_4 + 3] [i_4 + 3] [i_4] [i_4]), (((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_4]))) & (arr_10 [i_0] [5U] [i_0] [i_3] [i_4 - 1] [i_1])))))));
                                var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_7 [i_1] [i_2] [i_1] [i_4])))) ? (0U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)52)) ? (((/* implicit */int) arr_6 [i_4] [i_1] [i_0])) : (((/* implicit */int) (unsigned short)40211)))))))) ? ((-(arr_9 [i_2] [i_1] [i_2] [i_3] [i_4]))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) arr_11 [i_0] [i_0])) >= (((/* implicit */int) arr_4 [i_0] [i_0]))))), (((unsigned int) 453346573802910857ULL))))))))));
                                var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned short)15210)), (arr_5 [i_4 + 2])))) < (((((/* implicit */_Bool) 1U)) ? (arr_10 [i_2] [i_4 - 1] [i_4] [i_4] [i_4 - 1] [i_4 + 3]) : (arr_10 [i_0] [i_4 + 1] [i_0] [i_4] [i_4 + 1] [i_4 + 3]))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned short i_5 = 0; i_5 < 19; i_5 += 1) 
                    {
                        arr_17 [i_0] [i_2] [i_0] |= ((/* implicit */long long int) (~(((((/* implicit */_Bool) 4294967269U)) ? (arr_13 [i_5] [i_2]) : (arr_13 [i_1] [i_1])))));
                        var_16 -= ((((/* implicit */_Bool) 1704065416965508127LL)) ? (7662879970904301860ULL) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((3321758184U) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)25310))))))))));
                    }
                }
            } 
        } 
    } 
    var_17 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (10783864102805249753ULL));
}

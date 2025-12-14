/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16893
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-101))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            for (unsigned int i_2 = 3; i_2 < 9; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 9; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            {
                                var_17 = (-(((((/* implicit */_Bool) arr_12 [i_1 - 1] [i_1 - 2] [i_1 + 3] [i_0 - 1] [i_0 - 1])) ? (arr_5 [i_1 + 2] [i_0 - 1] [i_0 - 1]) : (((/* implicit */int) arr_9 [i_1 + 3] [i_1 + 2] [i_1 - 1] [i_0 - 1] [i_0 - 1])))));
                                var_18 *= ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))) >= (arr_12 [i_2 - 2] [i_3] [i_3] [i_3 + 2] [5ULL]))))));
                                var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) min((((((((/* implicit */unsigned int) ((/* implicit */int) (short)15578))) < (3582258140U))) ? (((/* implicit */int) arr_7 [(unsigned char)10] [i_1])) : (((((/* implicit */_Bool) (short)25788)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_6 [i_1 + 3] [(signed char)9] [i_4])))))), (((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_12))))) && (((/* implicit */_Bool) var_1))))))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned short) (((+(((((/* implicit */_Bool) -9118366303813095626LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_8))))) % (((/* implicit */unsigned int) (-(((/* implicit */int) max((arr_8 [i_0] [i_1]), (((/* implicit */short) var_11))))))))));
                    var_21 = ((/* implicit */int) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_1 + 2])) ? (1829249576U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))));
                }
            } 
        } 
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 3) 
    {
        arr_15 [i_5] [i_5] = ((/* implicit */unsigned long long int) (-(arr_14 [i_5])));
        var_22 = ((/* implicit */unsigned char) var_0);
    }
}

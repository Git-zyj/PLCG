/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17050
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
    var_19 = ((/* implicit */signed char) var_14);
    var_20 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((unsigned short) min((((/* implicit */long long int) (short)15768)), (3701409526646251477LL))))), (var_0)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 3) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */int) arr_2 [i_0]);
        arr_5 [i_0] [5ULL] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_18)) ^ (((/* implicit */int) var_3))))) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (1000554206)));
        var_21 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_7))));
        var_22 &= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) var_11)) == (((/* implicit */int) arr_2 [i_0]))))) == (((/* implicit */int) arr_2 [i_0]))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 4; i_1 < 20; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 18; i_2 += 4) 
            {
                {
                    var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((int) arr_8 [i_1 - 3] [i_1 - 3])))));
                    arr_11 [i_1] [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) var_12))) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) arr_7 [i_1 + 1]))));
                }
            } 
        } 
    }
    for (long long int i_3 = 0; i_3 < 21; i_3 += 3) /* same iter space */
    {
        arr_15 [i_3] = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) var_18)) * (((/* implicit */int) ((arr_9 [i_3] [(unsigned short)7] [i_3] [i_3]) == (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_3] [i_3]))))))))));
        /* LoopNest 2 */
        for (signed char i_4 = 0; i_4 < 21; i_4 += 3) 
        {
            for (signed char i_5 = 0; i_5 < 21; i_5 += 3) 
            {
                {
                    arr_20 [i_3] [i_3] [i_5] = ((/* implicit */short) (!(((/* implicit */_Bool) (+(((unsigned int) arr_7 [i_3])))))));
                    var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((((/* implicit */_Bool) (short)-5942)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-15769))))))));
                    arr_21 [i_3] [(signed char)6] [i_5] |= ((/* implicit */unsigned short) min((min((((/* implicit */unsigned int) var_7)), (((((/* implicit */_Bool) arr_9 [i_5] [i_5] [i_4] [i_3])) ? (arr_3 [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [(unsigned short)12] [(unsigned short)12]))))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)0)))))));
                    var_25 = ((/* implicit */unsigned short) min((1172499463), (((/* implicit */int) (short)82))));
                    arr_22 [i_3] = ((/* implicit */_Bool) min((max((((((/* implicit */_Bool) arr_1 [i_3] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_13 [i_4]))), (-5141710493855231273LL))), (((/* implicit */long long int) ((((/* implicit */int) arr_12 [i_3] [i_3])) ^ (((/* implicit */int) arr_2 [i_3])))))));
                }
            } 
        } 
    }
    var_26 |= ((/* implicit */_Bool) ((((/* implicit */int) (short)-23219)) ^ (((/* implicit */int) (unsigned short)6792))));
}

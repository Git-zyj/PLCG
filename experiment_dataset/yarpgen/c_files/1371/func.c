/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1371
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
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (+(max((((((/* implicit */_Bool) -8315120103209491459LL)) ? (1348629232U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)87))))), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) (signed char)53)), (var_0)))))))))));
                var_21 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) 280962526)))) ? (((/* implicit */int) arr_1 [(unsigned char)6])) : (min((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)122)) || (((/* implicit */_Bool) 5571499827313208077ULL))))), (((int) 1492657947U))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) ((long long int) var_2));
    var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) var_17))));
    /* LoopSeq 2 */
    for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_3 = 0; i_3 < 21; i_3 += 1) 
        {
            for (unsigned char i_4 = 3; i_4 < 19; i_4 += 4) 
            {
                {
                    var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) (!(((((/* implicit */_Bool) (unsigned char)122)) || (((/* implicit */_Bool) (short)26631)))))))));
                    arr_15 [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) -280962527)) * (min((1492657951U), (795713052U)))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 1) 
                    {
                        for (short i_6 = 0; i_6 < 21; i_6 += 2) 
                        {
                            {
                                arr_22 [i_6] [i_5] [i_2] [i_4] [i_2] [i_3] [i_2] = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)12786))))))))));
                                var_25 = ((/* implicit */unsigned int) (-(max((((/* implicit */unsigned long long int) arr_18 [i_2] [i_4 - 1] [i_4] [i_4 - 1] [i_4 + 2] [i_4 + 2])), (16968049672422723263ULL)))));
                                var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) min((((/* implicit */long long int) ((((unsigned int) arr_9 [i_6])) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)32))))))))), (min((((((/* implicit */long long int) ((/* implicit */int) var_17))) & (var_12))), (((/* implicit */long long int) arr_14 [i_4 - 1] [i_4] [i_6] [i_6])))))))));
                                var_27 = ((/* implicit */short) min((280962526), (((/* implicit */int) (signed char)6))));
                                var_28 |= ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) arr_13 [i_2] [i_3] [i_6]))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) arr_19 [i_2] [i_3] [i_6] [i_6]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)-22376)), (var_16)))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) -2848290077062705844LL)))) : (((long long int) var_17)))));
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((+(280962526))) ^ (((/* implicit */int) ((18446744073709551615ULL) > (9143494377445646807ULL))))))) ? (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */int) (_Bool)0)) > (((/* implicit */int) (unsigned char)124)))))) : (var_6)));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_7 = 0; i_7 < 21; i_7 += 4) 
        {
            for (unsigned int i_8 = 0; i_8 < 21; i_8 += 3) 
            {
                {
                    arr_28 [i_2] [i_8] [4LL] [i_2] = ((/* implicit */long long int) arr_20 [i_2] [i_7] [i_7] [i_7] [i_8]);
                    var_30 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) min((var_10), (arr_8 [i_2]))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-45))) ^ (((unsigned long long int) var_7)))) : ((((-(1254394074517997523ULL))) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_2] [i_2] [i_7] [i_2])))))));
                }
            } 
        } 
        var_31 = ((/* implicit */signed char) ((_Bool) (+(((var_7) + (((/* implicit */long long int) 240U)))))));
    }
    for (unsigned int i_9 = 1; i_9 < 6; i_9 += 2) 
    {
        var_32 -= ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)135)), (arr_4 [i_9 - 1] [i_9 + 4] [6LL])))) ? (((/* implicit */unsigned long long int) ((max((-7109446632058065791LL), (((/* implicit */long long int) arr_29 [(unsigned char)2])))) / (((/* implicit */long long int) (~(240U))))))) : (arr_25 [(_Bool)1])));
        var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) ((15678893909931242763ULL) | (((/* implicit */unsigned long long int) arr_24 [i_9] [i_9])))))) ? ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))) : (((/* implicit */int) var_19)))))));
        arr_31 [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((unsigned char)255), (((/* implicit */unsigned char) var_17))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_9]))) : (arr_18 [i_9] [i_9] [i_9 + 2] [i_9] [i_9 + 1] [i_9])));
    }
}

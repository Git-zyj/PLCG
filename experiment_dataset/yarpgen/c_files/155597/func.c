/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155597
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
    var_12 = ((/* implicit */_Bool) min((var_5), (((((((/* implicit */_Bool) var_10)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) + (var_5)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        arr_3 [i_0 - 2] = ((/* implicit */short) ((((var_1) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)113))))) != (((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) + (var_1)))));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            var_13 = ((/* implicit */signed char) ((((_Bool) 6151412818637529376ULL)) || (var_2)));
            /* LoopSeq 1 */
            for (short i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                var_14 += ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((int) var_3))) != (((((/* implicit */unsigned long long int) arr_7 [12U] [i_1] [i_2])) & (6151412818637529376ULL)))));
                /* LoopSeq 1 */
                for (unsigned int i_3 = 0; i_3 < 17; i_3 += 3) 
                {
                    var_15 = ((/* implicit */unsigned char) ((6151412818637529371ULL) & (6151412818637529396ULL)));
                    var_16 = ((/* implicit */_Bool) (-(63)));
                    arr_11 [i_0] [i_3] [i_2] [i_3] = ((/* implicit */unsigned int) ((((((/* implicit */long long int) var_10)) != (arr_8 [i_0]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0 - 1] [i_0] [i_0] [9U] [i_0] [i_0]))) : ((((_Bool)1) ? (6151412818637529388ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [(signed char)15])))))));
                }
            }
        }
        var_17 |= ((/* implicit */int) (((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0 - 1] [i_0 - 1] [6ULL] [i_0 - 1] [i_0 - 1] [i_0]))) : (arr_2 [i_0])));
    }
    for (long long int i_4 = 3; i_4 < 19; i_4 += 4) 
    {
        /* LoopSeq 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            /* LoopNest 3 */
            for (short i_6 = 0; i_6 < 20; i_6 += 1) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (long long int i_8 = 0; i_8 < 20; i_8 += 2) 
                    {
                        {
                            var_18 = ((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-16272)) & (((/* implicit */int) (short)-9704))))) == (arr_15 [i_6]));
                            arr_24 [i_4] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_4 - 3])))))) > (((((/* implicit */_Bool) arr_12 [i_4 - 2])) ? (arr_12 [i_4 - 2]) : (5092186990440998729ULL)))));
                            var_19 -= ((/* implicit */int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_14 [i_6] [i_8])) || (((/* implicit */_Bool) arr_18 [i_4])))) ? (max((2019516636067148899LL), (((/* implicit */long long int) var_9)))) : (((/* implicit */long long int) ((/* implicit */int) min(((_Bool)1), (var_2))))))))));
                        }
                    } 
                } 
            } 
            var_20 -= ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_22 [i_4 - 1] [i_4 - 1] [(signed char)3] [i_4] [i_4] [i_4 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_22 [i_4 - 2] [i_4 - 1] [i_4] [i_4] [i_4 - 2] [i_4 + 1])))), (max((((/* implicit */long long int) (-(var_7)))), (9223372036854775807LL)))));
            var_21 = ((/* implicit */signed char) arr_15 [i_4]);
            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))), (arr_12 [i_4 + 1])))) ? (min((var_5), (arr_15 [i_4 + 1]))) : (((/* implicit */unsigned long long int) min((arr_22 [(unsigned char)14] [i_5] [i_5] [(signed char)14] [i_4] [i_5]), (arr_22 [(_Bool)1] [i_5] [i_5] [i_5] [i_5] [i_5])))))))));
        }
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            arr_28 [i_9] [i_9] = ((/* implicit */_Bool) 8033780706982460622ULL);
            var_23 = ((/* implicit */long long int) ((_Bool) ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_13 [i_4]))))) >= (((((/* implicit */_Bool) 928245973)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)18071))) : (937038388U))))));
        }
        arr_29 [(unsigned char)9] |= ((/* implicit */unsigned int) max((((((((/* implicit */int) var_11)) != (((/* implicit */int) (unsigned char)12)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_4 + 1] [i_4])) && (((/* implicit */_Bool) var_11)))))) : (max((12295331255072022245ULL), (6151412818637529382ULL))))), (((/* implicit */unsigned long long int) (_Bool)1))));
        var_24 = ((/* implicit */unsigned int) min(((+(((/* implicit */int) arr_17 [i_4 + 1])))), (((/* implicit */int) ((((/* implicit */int) arr_17 [i_4 + 1])) > (((/* implicit */int) arr_17 [i_4 + 1])))))));
    }
}

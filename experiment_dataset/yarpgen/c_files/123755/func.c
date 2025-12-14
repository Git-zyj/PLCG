/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123755
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
    var_19 = ((/* implicit */int) ((((unsigned long long int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (unsigned short)44625))))) & (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) ? (((((/* implicit */_Bool) (short)-18888)) ? (20ULL) : (3253342837630669617ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1] [(short)13])) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_1 [10U]))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) - (arr_2 [i_1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) - (arr_0 [i_0] [i_1]))))))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) ((signed char) arr_0 [i_0] [i_0])))));
                arr_5 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) arr_4 [i_0]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 98304)) ? (2552774783436105646ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)18887)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1828654867604434998LL)) ? (((/* implicit */int) (unsigned char)221)) : (((/* implicit */int) (unsigned char)111))))) : (arr_0 [i_0] [i_1])))) : (min((((((/* implicit */_Bool) arr_2 [i_1])) ? (arr_2 [(short)3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1]))))), (((/* implicit */unsigned long long int) min((arr_0 [i_1] [i_0]), (arr_0 [1U] [i_1])))))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((short) arr_3 [i_0]));
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) var_7);
    /* LoopSeq 1 */
    for (long long int i_2 = 1; i_2 < 8; i_2 += 4) 
    {
        var_22 ^= ((20ULL) & (11953932589316983442ULL));
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_3 = 0; i_3 < 11; i_3 += 3) 
        {
            arr_13 [i_2] [i_3] [i_3] = ((/* implicit */unsigned char) ((long long int) arr_12 [i_2 + 1] [i_3]));
            arr_14 [i_2] = ((/* implicit */unsigned char) arr_1 [i_2 + 1]);
            var_23 = ((/* implicit */unsigned long long int) arr_12 [i_2 + 1] [(unsigned char)4]);
        }
        var_24 = ((((/* implicit */int) ((signed char) arr_0 [i_2] [i_2 + 1]))) >= (((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_2])) / (arr_11 [i_2] [i_2] [i_2])))) ? (((((/* implicit */_Bool) arr_10 [(unsigned char)10] [i_2 - 1])) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) arr_1 [i_2])))) : (((((/* implicit */_Bool) arr_3 [i_2 - 1])) ? (((/* implicit */int) arr_4 [i_2])) : (arr_11 [i_2 + 1] [i_2 + 2] [i_2 - 1]))))));
    }
    /* LoopNest 3 */
    for (signed char i_4 = 3; i_4 < 8; i_4 += 4) 
    {
        for (int i_5 = 4; i_5 < 10; i_5 += 2) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    arr_26 [i_4] [i_5] [i_6] [i_6] = max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_4] [i_5 - 1] [i_4])) ? (((/* implicit */int) arr_22 [i_4] [i_6] [i_6])) : (((/* implicit */int) arr_9 [i_4 + 3] [i_5 - 2]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_6] [i_6]))) < (arr_0 [i_5] [i_6]))))) : (((arr_10 [i_4 + 2] [i_4]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_4] [i_4] [i_5] [1U]))))))), (((/* implicit */unsigned long long int) min(((short)18887), (((/* implicit */short) (_Bool)0))))));
                    arr_27 [i_4 - 3] [i_5] [i_6] = ((/* implicit */long long int) max((max((((/* implicit */unsigned long long int) arr_8 [i_5])), (((unsigned long long int) 199998798U)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_19 [i_6]))) ^ (arr_8 [i_5])))) ? (((((/* implicit */_Bool) arr_25 [(short)7] [i_5] [i_5] [i_5])) ? (((/* implicit */int) arr_25 [(signed char)9] [i_5 - 4] [i_5] [i_5 - 4])) : (((/* implicit */int) arr_9 [i_4] [i_5])))) : (((((/* implicit */_Bool) arr_9 [i_4] [i_4])) ? (((/* implicit */int) arr_16 [i_5])) : (((/* implicit */int) arr_23 [i_6] [i_4 + 3] [i_4 + 3])))))))));
                }
            } 
        } 
    } 
}

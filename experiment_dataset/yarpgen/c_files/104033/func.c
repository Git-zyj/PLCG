/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104033
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_10 -= ((/* implicit */signed char) ((arr_2 [i_0] [i_0]) % (arr_2 [i_0] [i_0])));
        var_11 -= ((/* implicit */unsigned int) arr_2 [i_0] [i_0]);
        var_12 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)30645)) ? (((8528628826166033290LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)30633))))) : (-8528628826166033274LL)));
        var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) arr_0 [i_0])) : (arr_2 [i_0] [i_0])));
    }
    for (unsigned int i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        var_14 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [(signed char)16] [i_1])) ? (arr_4 [(unsigned short)18] [i_1]) : (arr_4 [14U] [i_1]))))));
        var_15 = ((unsigned short) arr_1 [i_1]);
    }
    for (long long int i_2 = 0; i_2 < 12; i_2 += 1) 
    {
        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_1 [i_2])) ? (arr_4 [(unsigned short)14] [i_2]) : (arr_2 [i_2] [i_2])))))) && (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_2 [21U] [(unsigned short)8])))) + (arr_2 [i_2] [i_2]))))));
        var_17 |= ((/* implicit */unsigned int) ((long long int) arr_2 [i_2] [i_2]));
        var_18 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_5 [i_2] [i_2])) ? (arr_5 [i_2] [i_2]) : (arr_5 [i_2] [i_2]))) != ((-(arr_5 [i_2] [i_2])))));
        /* LoopSeq 1 */
        for (long long int i_3 = 0; i_3 < 12; i_3 += 3) 
        {
            var_19 = ((/* implicit */unsigned short) ((((/* implicit */long long int) arr_0 [i_2])) == (((((/* implicit */_Bool) arr_10 [i_2])) ? (((arr_4 [(signed char)0] [i_3]) / (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2]))))) : (((long long int) arr_0 [i_2]))))));
            var_20 = ((/* implicit */signed char) ((((arr_10 [i_2]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2]))))) + (((/* implicit */unsigned int) (+(((/* implicit */int) ((signed char) (signed char)-57))))))));
            var_21 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */long long int) arr_10 [10U])) >= (((arr_6 [i_3]) | (((/* implicit */long long int) ((/* implicit */int) arr_8 [(signed char)4] [i_2])))))))) + (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_3]))) != (arr_6 [i_2]))))));
            var_22 = ((((/* implicit */_Bool) (unsigned short)30631)) ? (-8528628826166033291LL) : (-8528628826166033290LL));
        }
    }
    var_23 = ((/* implicit */unsigned short) ((var_1) * (var_1)));
    var_24 = var_9;
}

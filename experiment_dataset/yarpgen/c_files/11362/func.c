/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11362
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
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) : ((+(((/* implicit */int) (unsigned char)7)))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 2; i_0 < 18; i_0 += 2) 
    {
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) | ((~(((/* implicit */int) arr_2 [i_0]))))))) ? (((((/* implicit */_Bool) arr_1 [i_0 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 + 1]))) : (arr_1 [i_0 + 1]))) : (max((arr_1 [i_0]), (((/* implicit */long long int) arr_0 [i_0]))))));
        var_19 ^= ((/* implicit */signed char) ((max((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_1 [i_0]))), (((/* implicit */long long int) arr_2 [i_0 + 2])))) ^ (((((((arr_1 [i_0 + 1]) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_2 [i_0])) + (11538))))) | (((/* implicit */long long int) (~(((/* implicit */int) arr_2 [i_0])))))))));
        var_20 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 + 2]))))) % (((/* implicit */int) arr_0 [i_0 + 2]))));
        var_21 = ((/* implicit */_Bool) min(((+(((/* implicit */int) ((arr_1 [(short)8]) > (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0])))))))), (((/* implicit */int) arr_2 [i_0 - 1]))));
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                for (int i_3 = 0; i_3 < 20; i_3 += 2) 
                {
                    {
                        arr_12 [i_2] [i_1] [i_3] [i_1] [i_2] [i_0] = ((/* implicit */long long int) (~((-(((/* implicit */int) max((arr_10 [i_0 + 1] [i_2] [14U] [i_3] [i_2] [i_2]), (((/* implicit */unsigned short) arr_0 [i_0])))))))));
                        var_22 -= ((/* implicit */short) (+(((((/* implicit */int) arr_0 [i_0 - 2])) >> (((arr_8 [i_0]) - (2160256942488349193ULL)))))));
                        arr_13 [i_1] [i_1] = ((/* implicit */unsigned int) (((~(arr_4 [i_0 - 1]))) < (((((/* implicit */_Bool) arr_4 [i_0 - 2])) ? (arr_3 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0 - 2] [i_1])))))));
                    }
                } 
            } 
        } 
    }
    var_23 = ((/* implicit */long long int) max((var_9), (var_7)));
    /* LoopSeq 2 */
    for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 3) /* same iter space */
    {
        arr_17 [i_4] |= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) min((arr_15 [i_4] [i_4]), (arr_16 [(short)14]))))))) || (((/* implicit */_Bool) min((arr_14 [i_4]), (arr_14 [i_4]))))));
        var_24 ^= ((/* implicit */signed char) arr_14 [i_4]);
    }
    /* vectorizable */
    for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 3) /* same iter space */
    {
        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) arr_14 [i_5]))) ? ((-(-2438959348242693567LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_5])))));
        var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) (~(((arr_18 [i_5] [i_5]) / (arr_14 [i_5]))))))));
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132497
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
    var_10 *= ((/* implicit */_Bool) var_1);
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_11 *= ((/* implicit */_Bool) var_5);
        var_12 = ((/* implicit */signed char) ((unsigned long long int) var_1));
        var_13 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))));
        arr_3 [i_0] &= ((/* implicit */unsigned char) ((unsigned int) ((_Bool) -1872521583)));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_14 = ((/* implicit */_Bool) ((((/* implicit */int) var_8)) | (((/* implicit */int) ((unsigned short) arr_2 [i_1])))));
        var_15 = ((/* implicit */_Bool) (unsigned short)60009);
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (short i_3 = 0; i_3 < 11; i_3 += 3) 
            {
                {
                    var_16 = ((((/* implicit */long long int) ((/* implicit */int) max((arr_8 [i_3] [i_1]), (arr_9 [i_1] [i_2] [i_3]))))) == (((var_5) - (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1] [i_2]))))));
                    var_17 &= ((/* implicit */unsigned long long int) (unsigned char)210);
                    var_18 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 3491864735779137036ULL)) ? (((/* implicit */int) arr_1 [i_2])) : (1443962175)))) + ((+(673683782U)))))), (((var_7) + (((/* implicit */unsigned long long int) ((arr_5 [i_1] [i_2]) - (((/* implicit */unsigned int) arr_10 [i_2] [i_2])))))))));
                    var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) min((((((((/* implicit */_Bool) 14697537521823921526ULL)) && (arr_11 [i_3] [(_Bool)1] [(_Bool)1] [i_1]))) ? (((((/* implicit */_Bool) arr_12 [i_1] [5U] [(short)7] [(_Bool)1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_1] [i_2] [(unsigned char)0] [4U]))) : (arr_12 [i_1] [i_1] [i_1] [i_1]))) : (((/* implicit */long long int) ((int) 14697537521823921526ULL))))), (((/* implicit */long long int) ((unsigned char) arr_5 [i_1] [i_3]))))))));
                    var_20 = ((/* implicit */unsigned short) ((unsigned int) ((unsigned char) var_8)));
                }
            } 
        } 
    }
    for (unsigned int i_4 = 0; i_4 < 13; i_4 += 4) 
    {
        var_21 = ((/* implicit */int) ((((unsigned int) arr_2 [i_4])) & (((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned char)192)) ^ (((/* implicit */int) arr_1 [i_4])))) & (((/* implicit */int) arr_0 [i_4] [i_4])))))));
        var_22 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)137)) ? (((/* implicit */long long int) ((/* implicit */int) ((var_8) || (((/* implicit */_Bool) (unsigned char)173)))))) : (-283611559737145126LL))) & (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)4096)) | (((/* implicit */int) (unsigned short)64866)))))));
        arr_16 [i_4] [2U] = ((/* implicit */unsigned short) arr_2 [i_4]);
    }
}

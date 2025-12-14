/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128649
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
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */int) (short)27024)) ^ (((/* implicit */int) (unsigned short)40840))));
    var_16 = ((/* implicit */long long int) var_3);
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)255)) * (((/* implicit */int) (unsigned char)0))))), (18010146135154546017ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)40840)) + (((/* implicit */int) (unsigned char)0)))))));
        arr_3 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((arr_0 [i_0]) << (((17204134753607777085ULL) - (17204134753607777047ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 + 2] [i_0 + 3])))))) && (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) < (min((602894899U), (((/* implicit */unsigned int) arr_1 [i_0] [i_0]))))))));
        var_17 += ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)1))));
        /* LoopSeq 1 */
        for (short i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            arr_6 [(short)10] = ((/* implicit */_Bool) arr_5 [i_0 + 2] [i_1 - 1]);
            arr_7 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_1 - 1] [i_0 + 2])) ? (((/* implicit */int) arr_4 [i_0 + 1])) : ((-(((/* implicit */int) (short)3))))))) < (arr_0 [i_1])));
            arr_8 [i_0] [i_1] [i_1] = ((/* implicit */int) min((576460752302374912LL), (((/* implicit */long long int) (~(4294967295U))))));
            arr_9 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) ((max((2), (((/* implicit */int) (short)-256)))) <= ((~(((/* implicit */int) arr_1 [i_0 - 1] [i_1]))))))) << ((((-(((/* implicit */int) arr_4 [i_0 + 1])))) + (160)))));
        }
        arr_10 [i_0] [(unsigned short)4] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)-3787))))) << (((((/* implicit */int) arr_4 [i_0])) - (147)))))) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) max((arr_5 [i_0 - 1] [i_0 + 2]), (((/* implicit */long long int) arr_1 [i_0 + 2] [i_0 + 2])))))));
    }
    /* vectorizable */
    for (unsigned short i_2 = 1; i_2 < 21; i_2 += 2) 
    {
        arr_14 [i_2] &= ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)179))) ^ (arr_12 [i_2]))) + (arr_13 [i_2 - 1])));
        arr_15 [i_2] = ((/* implicit */short) ((arr_13 [i_2 + 1]) / (((/* implicit */long long int) ((/* implicit */int) ((-8269546314369918220LL) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)250)))))))));
    }
    var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) var_9))));
}

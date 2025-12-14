/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17979
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                for (long long int i_3 = 2; i_3 < 18; i_3 += 3) 
                {
                    {
                        arr_11 [i_0] [i_1] [i_0] &= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((arr_8 [i_0] [i_3 + 1] [2LL]) ^ (arr_8 [i_2] [i_3 - 2] [i_2])))), (((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_0] [i_2] [14ULL])) % (((/* implicit */int) arr_5 [i_0] [i_0]))))) - (max((arr_9 [i_3 - 2]), (((/* implicit */unsigned long long int) arr_0 [i_1] [i_2]))))))));
                        var_10 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_2])) % (((((/* implicit */int) arr_10 [i_1 + 2] [i_1 + 4] [i_1] [i_1 + 4] [i_1 + 3])) * (((/* implicit */int) arr_10 [i_1] [i_1] [i_1] [i_1] [i_1 + 4]))))));
                    }
                } 
            } 
        } 
        var_11 = ((/* implicit */unsigned int) max((var_11), (((/* implicit */unsigned int) min((arr_3 [(_Bool)1]), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_2 [i_0] [i_0]))))))))));
    }
    /* vectorizable */
    for (unsigned int i_4 = 1; i_4 < 9; i_4 += 4) 
    {
        var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_13 [i_4 + 1])))))));
        var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_4 + 2] [i_4 + 2] [i_4 + 2])) ? (((/* implicit */int) arr_5 [i_4 + 2] [i_4 + 1])) : (((/* implicit */int) ((arr_3 [i_4]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_4] [i_4]))))))));
        arr_16 [i_4 + 1] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_10 [i_4] [(signed char)2] [18] [i_4] [i_4 + 2])) > (((/* implicit */int) arr_10 [i_4 + 1] [i_4] [(unsigned char)0] [(unsigned char)0] [i_4 + 2]))));
    }
    var_14 = ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_1)), (min((((/* implicit */unsigned int) var_1)), (var_8)))))) ? (min((var_8), (((/* implicit */unsigned int) ((var_8) != (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) | (((/* implicit */int) var_9))))) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1))))))));
}

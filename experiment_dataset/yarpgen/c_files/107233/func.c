/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107233
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
    var_18 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)3)) >= (((/* implicit */int) (_Bool)1))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 10; i_0 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */short) (((+(16948572498981245321ULL))) != (((/* implicit */unsigned long long int) max((((((/* implicit */int) arr_1 [i_0])) ^ (((/* implicit */int) arr_1 [i_0])))), (arr_0 [i_0] [i_0]))))));
        arr_3 [8U] &= ((/* implicit */unsigned int) (+(min((((/* implicit */int) arr_1 [i_0])), (arr_0 [5ULL] [5ULL])))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(min((((/* implicit */unsigned long long int) arr_2 [i_0] [i_1])), (16948572498981245321ULL)))))) ? (((/* implicit */unsigned long long int) ((min((var_4), (((/* implicit */unsigned int) (signed char)-1)))) << (((((/* implicit */int) arr_2 [i_0] [i_1])) & (((/* implicit */int) (_Bool)0))))))) : ((~(16948572498981245321ULL)))));
                        arr_10 [i_0] [i_2] [i_2] = ((/* implicit */unsigned short) (~(((/* implicit */int) (_Bool)1))));
                    }
                } 
            } 
        } 
    }
    for (short i_4 = 0; i_4 < 10; i_4 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */signed char) min((((((/* implicit */_Bool) (unsigned char)10)) ? (((/* implicit */unsigned long long int) 9223372036854775807LL)) : (7312009812458162030ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [2ULL] [i_4])) ? (arr_0 [i_4] [(unsigned short)4]) : (arr_0 [i_4] [i_4]))))));
        var_22 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_5 [i_4] [i_4])) ? (arr_5 [i_4] [i_4]) : (arr_5 [i_4] [i_4]))), ((~(arr_5 [i_4] [i_4])))));
        var_23 = ((/* implicit */long long int) max((((unsigned int) (+(((/* implicit */int) arr_11 [(_Bool)0]))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_4])) ? (((/* implicit */int) (signed char)120)) : (((/* implicit */int) arr_8 [i_4] [i_4] [i_4] [1U]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_4] [(short)6])) ? (((/* implicit */unsigned long long int) arr_9 [i_4])) : (var_2)))))))));
        var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_11 [i_4]), (arr_11 [i_4])))) ? (((((/* implicit */_Bool) arr_11 [i_4])) ? (((/* implicit */int) arr_11 [i_4])) : (((/* implicit */int) arr_11 [i_4])))) : (((/* implicit */int) (!(((/* implicit */_Bool) -1))))))))));
    }
}

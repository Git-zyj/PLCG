/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178687
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (short i_1 = 3; i_1 < 23; i_1 += 2) 
        {
            for (short i_2 = 2; i_2 < 22; i_2 += 3) 
            {
                for (short i_3 = 0; i_3 < 25; i_3 += 2) 
                {
                    {
                        var_11 = ((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0]);
                        var_12 = ((/* implicit */int) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned long long int) (-(arr_5 [i_2])))) : (((((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)53))))) - (12013819032900197848ULL)))));
                        var_13 = ((/* implicit */long long int) ((max((((((/* implicit */int) var_3)) | (arr_3 [i_2]))), ((-(((/* implicit */int) arr_4 [i_0] [i_0] [i_3])))))) >= (max((((/* implicit */int) arr_4 [i_0] [i_0] [i_2 - 2])), (((((/* implicit */int) arr_6 [i_0] [i_1] [i_2 + 3] [i_3])) % (((/* implicit */int) arr_4 [i_0] [i_0] [19U]))))))));
                        arr_12 [i_0] = ((/* implicit */short) (((!(((/* implicit */_Bool) max((-6817686084603665375LL), (((/* implicit */long long int) (_Bool)1))))))) ? ((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [0U]))))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [23]))) >= (((arr_0 [24LL]) / (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_0] [i_3]))))))))));
                    }
                } 
            } 
        } 
        var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) (+(((/* implicit */int) ((((((/* implicit */int) var_7)) < (((/* implicit */int) var_5)))) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [11ULL])), (arr_11 [i_0] [i_0] [i_0] [9]))))))))))));
        arr_13 [i_0] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) max((((/* implicit */int) arr_8 [2U] [i_0] [i_0])), (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))) || (((/* implicit */_Bool) ((max((var_4), (((/* implicit */unsigned int) arr_2 [23] [i_0])))) & (((/* implicit */unsigned int) (-(((/* implicit */int) arr_1 [i_0]))))))))));
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 1) 
    {
        var_15 &= ((/* implicit */int) var_1);
        arr_16 [i_4] = ((/* implicit */short) max((((/* implicit */unsigned int) ((arr_3 [i_4]) & (((((/* implicit */_Bool) arr_3 [i_4])) ? (arr_3 [i_4]) : (((/* implicit */int) arr_2 [i_4] [i_4]))))))), (((((/* implicit */_Bool) ((((/* implicit */int) var_8)) | (((/* implicit */int) arr_4 [(signed char)20] [6LL] [(signed char)20]))))) ? (((((/* implicit */unsigned int) arr_10 [i_4] [i_4] [i_4] [i_4] [i_4] [6])) * (arr_7 [i_4] [i_4] [i_4]))) : (((/* implicit */unsigned int) arr_3 [i_4]))))));
    }
    var_16 &= ((/* implicit */long long int) var_8);
}

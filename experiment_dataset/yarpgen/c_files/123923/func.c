/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123923
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
    var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)228)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)30066))) : (3424959544U))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) (-(min((((((/* implicit */_Bool) (signed char)63)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-63))) : (var_2))), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]))))));
        var_12 = ((/* implicit */long long int) (+(min((((/* implicit */unsigned int) arr_0 [i_0] [i_0])), (arr_1 [i_0])))));
        var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) -7732932222465873429LL))));
        arr_4 [3ULL] = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)61429))) < (max((((/* implicit */unsigned int) var_9)), (3551798287U))))));
    }
    for (unsigned short i_1 = 1; i_1 < 19; i_1 += 4) 
    {
        arr_8 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (-(arr_6 [i_1 - 1] [i_1 - 1])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_1 - 1] [i_1 - 1])) || (((/* implicit */_Bool) arr_6 [i_1 + 2] [i_1 - 1]))))) : (((/* implicit */int) ((((/* implicit */unsigned int) 0)) == (arr_6 [i_1 + 1] [i_1 + 2]))))));
        arr_9 [i_1] = ((/* implicit */unsigned long long int) (+((-(2408007004U)))));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 2) 
            {
                {
                    var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_1 + 2] [i_2] [i_3])) || (((/* implicit */_Bool) var_8)))))));
                    arr_15 [i_2] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (signed char)-38)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)248))) : (var_8)))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_4 = 0; i_4 < 21; i_4 += 2) 
        {
            for (signed char i_5 = 2; i_5 < 18; i_5 += 1) 
            {
                {
                    arr_22 [i_1] [i_4] [i_1] = ((/* implicit */short) max((arr_21 [i_1] [i_1] [i_1] [i_1]), (((/* implicit */unsigned short) (signed char)-55))));
                    var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) arr_5 [i_4]))));
                    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((((/* implicit */_Bool) ((var_0) ? (((/* implicit */int) arr_5 [i_4])) : (((/* implicit */int) ((unsigned char) var_1)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(13399422237432494408ULL)))) ? (arr_13 [i_1 - 1] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) (short)28262)))))) : (((min((((/* implicit */unsigned long long int) (unsigned char)96)), (var_2))) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_1 - 1] [i_5 + 3] [i_5] [15ULL])))))))));
                    arr_23 [i_1] [i_4] [i_1] [i_5 + 2] = ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) var_5))))), (arr_18 [i_1] [i_1] [i_1])));
                    arr_24 [i_1] [i_1] = ((/* implicit */_Bool) (+((~((~(((/* implicit */int) var_0))))))));
                }
            } 
        } 
    }
    var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned char)96)) : (((/* implicit */int) var_7)))))))) << ((((~(((/* implicit */int) (unsigned char)247)))) + (276))))))));
}

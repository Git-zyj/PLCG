/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183018
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
    var_16 = ((/* implicit */unsigned short) var_6);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_1 = 2; i_1 < 13; i_1 += 4) 
        {
            arr_5 [2U] [(_Bool)1] = ((/* implicit */signed char) ((min((((/* implicit */long long int) var_2)), (arr_4 [4LL] [i_1 - 2]))) >= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_1 + 1] [i_1 - 1])) || (((/* implicit */_Bool) arr_2 [i_1 - 1] [i_1 - 1]))))))));
            var_17 = ((/* implicit */unsigned long long int) var_1);
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_18 = ((/* implicit */short) ((((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) arr_8 [i_0])) ? (((/* implicit */int) arr_2 [i_0] [(short)12])) : (((/* implicit */int) var_8)))))) ^ (arr_7 [i_2] [i_2])));
            var_19 = ((/* implicit */unsigned char) var_7);
        }
        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) arr_1 [i_0]))));
    }
    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 1) /* same iter space */
    {
        var_21 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((2928186593U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)189)))))) ? (((((/* implicit */_Bool) arr_9 [i_3] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_0))) : (((/* implicit */long long int) (+(((/* implicit */int) var_9)))))));
        /* LoopNest 3 */
        for (unsigned int i_4 = 0; i_4 < 24; i_4 += 1) 
        {
            for (signed char i_5 = 0; i_5 < 24; i_5 += 3) 
            {
                for (unsigned char i_6 = 0; i_6 < 24; i_6 += 1) 
                {
                    {
                        arr_21 [i_3] [i_3] [(short)13] [i_3] [i_3] = ((/* implicit */unsigned char) ((((arr_20 [i_3]) && (var_5))) ? (min((arr_17 [i_3] [i_4] [i_5] [i_6]), (((/* implicit */long long int) arr_12 [i_6] [i_3])))) : (((/* implicit */long long int) (+(arr_18 [i_3] [i_4] [i_5] [11LL]))))));
                        var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) var_10))));
                        var_23 = ((/* implicit */unsigned short) arr_14 [i_6]);
                        var_24 = ((/* implicit */signed char) min(((((!(((/* implicit */_Bool) var_4)))) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) || (((((/* implicit */_Bool) arr_16 [i_3] [i_4] [i_5] [i_6])) && (var_10))))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_7 = 0; i_7 < 24; i_7 += 1) /* same iter space */
    {
        arr_26 [i_7] [i_7] &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((-7577065990838354090LL), (((/* implicit */long long int) (signed char)54)))))));
        arr_27 [i_7] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) ^ (((/* implicit */int) arr_14 [i_7]))))), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_7]))) : (arr_15 [i_7] [(short)23] [i_7])))));
    }
}

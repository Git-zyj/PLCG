/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176195
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
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((unsigned short) (signed char)45))), (min((arr_1 [i_0]), (max((((/* implicit */long long int) var_2)), (arr_1 [i_0])))))));
        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) max(((signed char)45), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned char) (signed char)-47)))))))))));
        var_21 *= ((/* implicit */signed char) (-(min((((/* implicit */unsigned long long int) arr_0 [i_0])), (min((((/* implicit */unsigned long long int) var_8)), (var_12)))))));
    }
    var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) (signed char)26))));
    var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((/* implicit */int) var_5)) <= (((/* implicit */int) ((((/* implicit */int) min((var_2), (var_2)))) != (((/* implicit */int) var_19))))))))));
    /* LoopSeq 4 */
    for (unsigned int i_1 = 0; i_1 < 16; i_1 += 1) 
    {
        var_24 = ((/* implicit */unsigned char) min((min((((unsigned long long int) (signed char)-40)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) (signed char)-28))))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-40)) ^ (((/* implicit */int) (signed char)-35)))))));
        var_25 = min((max(((-(((/* implicit */int) arr_0 [i_1])))), (((((/* implicit */_Bool) (signed char)35)) ? (((/* implicit */int) (signed char)-17)) : (((/* implicit */int) (signed char)-25)))))), (((((/* implicit */_Bool) max((((/* implicit */long long int) arr_0 [i_1])), (arr_1 [i_1])))) ? (var_13) : (((((/* implicit */_Bool) (signed char)27)) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) var_15)))))));
        arr_7 [i_1] = ((/* implicit */unsigned char) (~(((/* implicit */int) var_11))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 2) /* same iter space */
    {
        var_26 = ((/* implicit */signed char) min(((+(((var_4) ^ (((/* implicit */int) arr_9 [i_2] [i_2])))))), (((/* implicit */int) max((arr_3 [(unsigned char)7]), (arr_3 [i_2]))))));
        /* LoopNest 2 */
        for (unsigned short i_3 = 1; i_3 < 7; i_3 += 2) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    var_27 = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [(unsigned char)6])) ? (((/* implicit */int) (signed char)39)) : (((/* implicit */int) (signed char)44))))) && (((/* implicit */_Bool) ((unsigned short) arr_10 [i_3 + 3]))))))));
                    var_28 = ((/* implicit */unsigned short) (+(((/* implicit */int) (signed char)-49))));
                }
            } 
        } 
    }
    for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 2) /* same iter space */
    {
        var_29 = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)28)) * (min((((/* implicit */int) (signed char)47)), (((arr_0 [(short)10]) ? (((/* implicit */int) (signed char)-36)) : (((/* implicit */int) arr_5 [i_5] [i_5]))))))));
        var_30 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) max((((/* implicit */int) arr_5 [i_5] [i_5])), (((((/* implicit */_Bool) arr_12 [i_5] [i_5] [i_5])) ? (((/* implicit */int) arr_3 [i_5])) : (((/* implicit */int) arr_9 [i_5] [i_5]))))))), ((~(arr_4 [i_5] [i_5])))));
        var_31 = ((/* implicit */unsigned long long int) arr_8 [i_5]);
    }
    for (long long int i_6 = 0; i_6 < 15; i_6 += 2) 
    {
        var_32 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) max(((signed char)-49), ((signed char)49)))), (((((/* implicit */_Bool) (signed char)-26)) ? (arr_4 [i_6] [i_6]) : (((/* implicit */unsigned long long int) var_13))))));
        arr_21 [i_6] &= ((/* implicit */signed char) min((min((max((((/* implicit */unsigned long long int) arr_0 [i_6])), (arr_4 [i_6] [i_6]))), (max((((/* implicit */unsigned long long int) (signed char)-27)), (var_12))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_15)))))));
        var_33 |= ((/* implicit */unsigned short) (~(((/* implicit */int) ((_Bool) (signed char)45)))));
    }
}

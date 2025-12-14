/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156592
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
    var_12 = ((/* implicit */unsigned long long int) var_2);
    var_13 = ((/* implicit */unsigned int) (+(var_3)));
    var_14 = ((/* implicit */int) min(((~(((var_6) ^ (((/* implicit */unsigned int) 1515371299)))))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)61574)) | (((/* implicit */int) (unsigned short)33795)))))));
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_8))) < (-4184690629771826258LL)));
    /* LoopSeq 3 */
    for (long long int i_0 = 2; i_0 < 24; i_0 += 2) 
    {
        var_16 = ((/* implicit */unsigned short) arr_1 [1U]);
        arr_4 [i_0 + 1] [i_0 - 2] = ((/* implicit */short) (!((!(((/* implicit */_Bool) arr_0 [i_0 - 2] [i_0 - 2]))))));
    }
    for (signed char i_1 = 2; i_1 < 10; i_1 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned int) min(((((~(arr_8 [i_1] [i_1 + 1]))) | (-4184690629771826263LL))), ((~(((((/* implicit */_Bool) arr_7 [i_1 - 1] [i_1 - 1])) ? (0LL) : (((/* implicit */long long int) arr_5 [i_1]))))))));
        var_18 = ((/* implicit */signed char) min((((((/* implicit */unsigned long long int) max((arr_5 [(unsigned char)6]), (((/* implicit */int) var_0))))) * (max((((/* implicit */unsigned long long int) arr_2 [i_1 - 2])), (arr_3 [i_1 - 1]))))), (((/* implicit */unsigned long long int) max((arr_7 [i_1] [i_1 + 1]), (arr_7 [i_1] [i_1 + 1]))))));
        arr_9 [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) 1515371300))));
        var_19 = (-(((/* implicit */int) (_Bool)1)));
    }
    for (signed char i_2 = 2; i_2 < 10; i_2 += 1) /* same iter space */
    {
        arr_12 [i_2] = ((((/* implicit */int) min((arr_11 [i_2 - 1]), (arr_11 [i_2 + 1])))) + (((/* implicit */int) min((((/* implicit */unsigned short) var_8)), (arr_11 [i_2 - 1])))));
        arr_13 [i_2] = (-(min((((/* implicit */int) min(((signed char)-126), ((signed char)79)))), ((-(((/* implicit */int) var_1)))))));
        var_20 = ((/* implicit */long long int) ((int) min((arr_1 [i_2 - 2]), (((/* implicit */long long int) var_9)))));
    }
}

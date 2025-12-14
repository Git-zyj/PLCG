/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153834
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
    var_10 = ((/* implicit */unsigned char) var_2);
    var_11 = ((/* implicit */unsigned short) var_6);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 19; i_0 += 4) /* same iter space */
    {
        var_12 = (((~(min((arr_1 [i_0]), (((/* implicit */long long int) (unsigned char)125)))))) == (((((/* implicit */_Bool) (~(arr_1 [i_0])))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0]))) : ((~(arr_1 [i_0]))))));
        arr_2 [i_0 - 1] &= ((/* implicit */short) max((min((((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */int) var_7)))), (arr_0 [i_0 + 1]))), (((/* implicit */int) (((+(arr_0 [i_0]))) <= (max((arr_0 [i_0 + 1]), (((/* implicit */int) var_7)))))))));
        var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) ((int) (-(((/* implicit */int) (short)18985))))))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (short i_3 = 0; i_3 < 20; i_3 += 4) 
                {
                    {
                        var_14 = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */unsigned long long int) arr_3 [i_3] [i_1] [i_0])) < (arr_5 [i_2])))), (((((/* implicit */int) (unsigned short)19312)) / (((/* implicit */int) arr_7 [i_0] [(signed char)7])))))))));
                        var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(arr_5 [i_0 - 1])))) ? (((arr_8 [i_0 + 1]) ? (((/* implicit */int) max((arr_8 [i_0]), (arr_8 [i_1])))) : (((/* implicit */int) arr_7 [i_0 - 1] [i_0 + 1])))) : (((/* implicit */int) (unsigned char)246))));
                        var_16 = ((/* implicit */_Bool) min((((arr_8 [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)131))) : (max((arr_1 [i_0]), (arr_4 [i_3]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_1] [i_0 + 1])) && (((/* implicit */_Bool) arr_6 [i_1] [i_0 - 1] [i_1])))))));
                    }
                } 
            } 
        } 
        var_17 = ((/* implicit */short) (-(arr_6 [(unsigned char)8] [i_0 - 1] [(unsigned char)8])));
    }
    /* vectorizable */
    for (unsigned char i_4 = 1; i_4 < 19; i_4 += 4) /* same iter space */
    {
        var_18 = ((/* implicit */_Bool) arr_11 [(unsigned char)15]);
        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)107)) ^ (((/* implicit */int) (unsigned short)11959))))) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) arr_11 [(unsigned short)6])) : (arr_5 [i_4]))) : (((/* implicit */unsigned long long int) (-(arr_11 [i_4]))))));
        arr_12 [i_4] [i_4] = arr_9 [i_4] [i_4 - 1] [i_4 - 1] [(signed char)9] [i_4 + 1] [i_4];
    }
    var_20 = ((/* implicit */unsigned char) max((((/* implicit */int) var_1)), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) max(((unsigned char)107), ((unsigned char)125)))) : (((/* implicit */int) var_1))))));
}

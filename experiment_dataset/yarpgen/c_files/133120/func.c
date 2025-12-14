/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133120
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
    var_19 = ((/* implicit */_Bool) ((unsigned short) (+(((/* implicit */int) ((unsigned char) var_12))))));
    var_20 = ((/* implicit */_Bool) 18446744073709551597ULL);
    /* LoopNest 3 */
    for (unsigned char i_0 = 4; i_0 < 22; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 24; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    var_21 = ((/* implicit */unsigned short) ((max((13976180157015027852ULL), (((/* implicit */unsigned long long int) arr_0 [i_1 + 1])))) >= (((((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) 4470563916694523763ULL)))) ? (13976180157015027852ULL) : (((/* implicit */unsigned long long int) arr_5 [14LL] [i_1 + 1]))))));
                    arr_7 [(signed char)23] [i_1] [i_1] [(signed char)23] = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_4 [i_0 - 4])) ? (((/* implicit */int) arr_0 [i_0 + 3])) : (((/* implicit */int) var_15)))), (((/* implicit */int) ((((/* implicit */int) arr_4 [i_0 + 3])) > (((/* implicit */int) arr_0 [i_0 - 1])))))));
                    var_22 *= ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1] [i_1 - 1])) || (((/* implicit */_Bool) var_7))))) < (((((/* implicit */_Bool) arr_5 [i_1] [i_1 - 1])) ? (arr_5 [i_1] [i_1 - 1]) : (((/* implicit */int) var_15))))));
                    arr_8 [1ULL] [i_1] [i_1] = ((/* implicit */int) ((((((/* implicit */_Bool) 1660804167U)) ? (((/* implicit */int) arr_6 [i_1 + 1] [i_1 + 1] [i_1 - 1])) : (((/* implicit */int) arr_6 [i_1 + 1] [i_1 + 1] [i_1 - 1])))) == (((/* implicit */int) arr_4 [17ULL]))));
                }
            } 
        } 
    } 
}

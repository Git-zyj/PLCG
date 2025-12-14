/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130029
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
    for (unsigned long long int i_0 = 4; i_0 < 19; i_0 += 1) /* same iter space */
    {
        var_18 &= ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */int) arr_1 [i_0] [i_0])) >= (((/* implicit */int) var_4)))))));
        arr_2 [i_0] [i_0 - 4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (max((min((1607207362610135254LL), (((/* implicit */long long int) arr_0 [i_0])))), (((/* implicit */long long int) arr_1 [i_0] [14LL])))) : (((/* implicit */long long int) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_1 [i_0] [i_0])))) ^ (((/* implicit */int) arr_1 [i_0 + 1] [i_0 - 2])))))));
        arr_3 [i_0] = ((/* implicit */long long int) var_15);
    }
    for (unsigned long long int i_1 = 4; i_1 < 19; i_1 += 1) /* same iter space */
    {
        arr_7 [i_1 - 4] [i_1] |= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-42)) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) > (arr_6 [i_1])))) : (((/* implicit */int) ((short) arr_6 [i_1 - 1])))));
        var_19 = ((/* implicit */signed char) max((var_19), (((signed char) arr_4 [i_1 - 3] [i_1]))));
        arr_8 [i_1] = ((/* implicit */signed char) min((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 748956646)))) > (max((arr_6 [(unsigned short)13]), (((/* implicit */unsigned int) arr_5 [i_1] [i_1]))))))), (arr_4 [i_1 - 3] [i_1 - 1])));
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 14; i_2 += 4) 
    {
        for (unsigned char i_3 = 0; i_3 < 14; i_3 += 3) 
        {
            for (int i_4 = 0; i_4 < 14; i_4 += 3) 
            {
                {
                    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) arr_0 [i_3])) : (arr_9 [i_3])))))) && (((/* implicit */_Bool) (~(max((arr_6 [i_2]), (((/* implicit */unsigned int) arr_15 [i_2] [i_2] [i_2])))))))));
                    var_21 = ((/* implicit */int) (+(((((/* implicit */_Bool) arr_5 [i_2] [i_2])) ? (33292288ULL) : (((/* implicit */unsigned long long int) 302075691U))))));
                    var_22 = ((/* implicit */int) ((long long int) max((arr_0 [i_2]), (arr_0 [i_2]))));
                }
            } 
        } 
    } 
}

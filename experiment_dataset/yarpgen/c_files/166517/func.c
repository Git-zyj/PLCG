/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166517
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
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2975415416U)) ? (var_5) : (((/* implicit */long long int) 2975415416U))));
    var_17 = ((/* implicit */unsigned int) min((var_15), (var_2)));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_18 = ((/* implicit */long long int) 7U);
        arr_2 [i_0] = ((/* implicit */_Bool) max((((/* implicit */long long int) arr_0 [i_0] [i_0])), (((((/* implicit */_Bool) 2975415428U)) ? (4460039216799817120LL) : (((/* implicit */long long int) 1319551880U))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 2; i_1 < 19; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) (~((+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_2]))) >= (4294967284U))))))));
                    var_20 = max((min((((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (var_9) : (1319551879U))), (((arr_8 [i_0] [i_1] [i_2]) >> (((/* implicit */int) arr_5 [(_Bool)1])))))), (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_15))) >= (arr_4 [i_0] [i_1] [i_2])))) ^ (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)233))) >= (arr_8 [i_0] [i_0] [i_0]))))))));
                    var_21 = ((/* implicit */unsigned char) (((+(arr_8 [i_1 + 1] [i_1 + 2] [i_1 + 1]))) <= (((((/* implicit */_Bool) min((1587555612U), (arr_8 [i_0] [i_0] [i_0])))) ? (max((((/* implicit */unsigned int) arr_1 [i_1 + 2])), (2975415415U))) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_7 [14U]), (((/* implicit */unsigned char) arr_5 [i_0]))))))))));
                    var_22 *= ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) arr_5 [i_0]))) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) min(((unsigned char)128), ((unsigned char)22))))))) ^ (((((unsigned int) 1319551884U)) << (((1319551873U) - (1319551867U))))));
                    arr_9 [i_0] = ((/* implicit */unsigned char) max(((+(4294967295U))), (arr_0 [i_0] [i_1])));
                }
            } 
        } 
    }
}

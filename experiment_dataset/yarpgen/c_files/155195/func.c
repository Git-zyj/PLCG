/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155195
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
    var_11 = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))), (-3935614814449357854LL)));
    /* LoopSeq 1 */
    for (long long int i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        var_12 += ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((int) -3935614814449357854LL))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 3] [i_0 + 3])) ? (((/* implicit */long long int) arr_0 [i_0 + 1] [i_0])) : (288230371856744448LL))))));
        var_13 = ((((/* implicit */_Bool) min((-2376918172100200898LL), (((/* implicit */long long int) -826572932))))) ? (((/* implicit */long long int) max((-822214310), (max((var_0), (arr_0 [0] [7LL])))))) : (-3935614814449357862LL));
        var_14 = (~(((/* implicit */int) ((((((/* implicit */_Bool) arr_1 [4LL])) ? (-297647200819444912LL) : (((/* implicit */long long int) arr_0 [2LL] [0LL])))) != ((-(-3935614814449357854LL)))))));
        arr_2 [i_0] = ((((/* implicit */_Bool) 3935614814449357841LL)) ? (min((((/* implicit */long long int) arr_0 [i_0 - 2] [i_0 + 1])), (-8138987823843879112LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
        var_15 = ((/* implicit */int) min((((((/* implicit */_Bool) arr_1 [i_0 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) ((3181558200920667931LL) > (((/* implicit */long long int) arr_1 [i_0])))))) : (2376918172100200897LL))), (((((/* implicit */_Bool) arr_1 [i_0 - 2])) ? (((/* implicit */long long int) ((int) 3935614814449357858LL))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) arr_1 [5LL])) : (var_7)))))));
    }
    /* LoopNest 3 */
    for (int i_1 = 1; i_1 < 16; i_1 += 2) 
    {
        for (int i_2 = 0; i_2 < 17; i_2 += 2) 
        {
            for (long long int i_3 = 0; i_3 < 17; i_3 += 2) 
            {
                {
                    var_16 = max((((/* implicit */int) (((!(((/* implicit */_Bool) -2300599255060136467LL)))) && (((/* implicit */_Bool) max((arr_4 [i_1] [9LL]), (1808111099517017250LL))))))), ((+(arr_8 [i_1] [i_1 + 1] [7LL]))));
                    var_17 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) arr_5 [i_1 + 1])), (((((/* implicit */long long int) -1922464374)) % (-2300599255060136467LL))))))));
                    var_18 = (+(((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_1 - 1] [i_1 + 1])) || (((/* implicit */_Bool) arr_7 [i_1 - 1] [i_1 - 1]))))));
                    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((var_2), (arr_7 [i_1 + 1] [i_1 + 1])))) || (((/* implicit */_Bool) ((((((((/* implicit */_Bool) 719606672846629074LL)) ? (((/* implicit */long long int) var_8)) : (arr_3 [i_3]))) + (9223372036854775807LL))) << (((max((((/* implicit */long long int) arr_7 [i_1] [i_1])), (arr_4 [i_3] [15]))) - (1203785437LL))))))));
                }
            } 
        } 
    } 
    var_20 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1236031337)) ? (((/* implicit */long long int) var_9)) : (var_10)))) ? (var_1) : (var_9)))) ? (((/* implicit */long long int) min((((((/* implicit */_Bool) var_0)) ? (var_5) : (var_2))), (max((var_8), (var_5)))))) : (var_6));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108004
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
    for (unsigned char i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        arr_2 [14U] [i_0 - 1] = ((/* implicit */unsigned int) min((((/* implicit */int) max((arr_1 [i_0 + 1]), (arr_1 [i_0 - 1])))), (((arr_1 [i_0 - 1]) ? (((/* implicit */int) (unsigned char)21)) : (((/* implicit */int) arr_1 [i_0 - 1]))))));
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) var_9);
        var_18 = ((/* implicit */unsigned short) ((((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)234)) || (((/* implicit */_Bool) var_15))))) + (((/* implicit */int) arr_0 [i_0 - 1])))) + ((+(((/* implicit */int) var_2))))));
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((min((((/* implicit */long long int) arr_0 [i_0])), (var_6))), (((/* implicit */long long int) arr_1 [i_0 - 1]))))) ? (((/* implicit */int) ((_Bool) arr_0 [i_0 - 1]))) : (((((arr_1 [i_0]) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) var_4)))) & (((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (arr_1 [i_0 + 1]))))))));
    }
    for (int i_1 = 1; i_1 < 20; i_1 += 3) 
    {
        var_20 = (unsigned char)65;
        arr_7 [i_1] [i_1] = ((/* implicit */_Bool) min((min((((/* implicit */unsigned short) (unsigned char)190)), (max(((unsigned short)13641), (((/* implicit */unsigned short) (unsigned char)234)))))), (((/* implicit */unsigned short) arr_5 [i_1]))));
        /* LoopSeq 1 */
        for (long long int i_2 = 3; i_2 < 22; i_2 += 1) 
        {
            arr_10 [i_1 + 2] [10U] [i_1 + 2] = arr_8 [i_2 - 3];
            var_21 ^= ((/* implicit */unsigned long long int) (+(((((/* implicit */int) arr_5 [i_2 - 2])) + (((/* implicit */int) arr_6 [i_1 + 2]))))));
        }
        var_22 = min(((-2147483647 - 1)), (((/* implicit */int) (unsigned char)234)));
        var_23 *= ((/* implicit */unsigned short) arr_4 [i_1]);
    }
    var_24 = ((var_13) <= (((/* implicit */unsigned int) (~(((/* implicit */int) min((((/* implicit */unsigned char) var_4)), ((unsigned char)234))))))));
}

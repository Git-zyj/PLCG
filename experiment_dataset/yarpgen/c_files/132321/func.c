/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132321
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_19 -= ((/* implicit */_Bool) ((unsigned int) ((_Bool) var_18)));
        arr_2 [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned short)0)), (1524051036U)));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_3 [i_1] [i_1])), (((unsigned int) arr_3 [i_1] [i_1]))))) ? (arr_4 [i_1]) : (1846891468U)));
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_21 = max(((-(-1951873180))), (max((max((((/* implicit */int) arr_7 [i_1] [i_1])), (2147483647))), (((/* implicit */int) (_Bool)1)))));
            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(max((arr_3 [i_2] [16]), (var_5)))))) ? ((~(arr_4 [i_1]))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_10)) << (min((31457280), (((/* implicit */int) var_7)))))))));
            var_23 = ((/* implicit */int) ((((/* implicit */_Bool) (+(arr_4 [i_1])))) ? ((+(var_13))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (-(var_0))))))));
        }
        var_24 &= ((/* implicit */unsigned int) (((((!(arr_7 [i_1] [(_Bool)1]))) ? (arr_8 [i_1] [i_1]) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_8 [i_1] [i_1]))))) <= (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) << (((31457308) - (31457293))))))));
        var_25 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) -1951873180))) ? (((/* implicit */int) (unsigned short)2924)) : ((~(((((/* implicit */_Bool) -1951873187)) ? (((/* implicit */int) (unsigned short)2924)) : (31457280)))))));
        var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) min((2701253877844362998LL), (((/* implicit */long long int) (_Bool)1)))))));
    }
    var_27 = ((/* implicit */unsigned short) (((~(((/* implicit */int) var_16)))) > ((+(((/* implicit */int) var_2))))));
}

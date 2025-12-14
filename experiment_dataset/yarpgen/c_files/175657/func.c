/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175657
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
    var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_7)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) << (((var_0) - (13180947259754044494ULL)))))) ? ((~(max((((/* implicit */int) var_9)), (var_2))))) : (min((((/* implicit */int) (short)(-32767 - 1))), ((-(((/* implicit */int) (unsigned short)62547))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_1])))))) | (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (min((170538656U), (((/* implicit */unsigned int) arr_2 [i_0])))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))))))))));
                arr_7 [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)62533))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (int i_2 = 2; i_2 < 20; i_2 += 4) 
    {
        arr_11 [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)63)) ? (((/* implicit */int) (signed char)-2)) : (((/* implicit */int) (unsigned short)2676)))) | (((/* implicit */int) arr_10 [i_2] [i_2]))));
        var_12 = ((/* implicit */unsigned char) min((((/* implicit */int) ((arr_9 [i_2 - 2]) != (((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) / (((/* implicit */int) arr_10 [i_2] [i_2])))))))), (((((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_2] [i_2]))))) ^ (((var_4) / (((/* implicit */int) arr_10 [i_2] [i_2]))))))));
        var_13 = ((/* implicit */_Bool) (((~(arr_8 [i_2 + 1]))) << (((((((4124428640U) == (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2] [i_2]))))) ? (((/* implicit */unsigned long long int) var_4)) : (min((((/* implicit */unsigned long long int) var_6)), (arr_8 [i_2]))))) - (2982859830988764750ULL)))));
        var_14 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((var_7) / (((/* implicit */unsigned int) var_5)))) + (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2] [i_2 + 4])))))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) & (arr_8 [i_2 - 1])))))));
    }
}

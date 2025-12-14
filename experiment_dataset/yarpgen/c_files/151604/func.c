/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151604
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
    var_12 -= ((/* implicit */short) ((var_10) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_4))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_13 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (var_6) : (((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) arr_1 [i_0]))))) ? (max((((/* implicit */unsigned long long int) 0U)), (((var_10) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(short)3]))) : (7003447217111013603ULL))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_0 [i_0])))) * (((/* implicit */int) ((_Bool) (unsigned short)11605))))))));
        var_14 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) 2604679742U)) ? (((/* implicit */int) var_4)) : (var_6))) : (((((/* implicit */_Bool) (short)-30463)) ? (((/* implicit */int) (unsigned short)63234)) : (((/* implicit */int) arr_0 [i_0])))))) / (((/* implicit */int) ((((/* implicit */int) (short)(-32767 - 1))) < (((/* implicit */int) arr_1 [i_0])))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 3) 
    {
        var_15 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_1])) | (((/* implicit */int) arr_4 [i_1] [i_1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1]))) : (2604679742U))));
        var_16 &= ((/* implicit */unsigned short) ((arr_2 [i_1] [i_1]) <= (((/* implicit */long long int) var_7))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 15; i_2 += 2) 
    {
        var_17 &= ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */int) (short)30462)) << (((4173640978551156221ULL) - (4173640978551156212ULL)))))) - (arr_2 [i_2] [i_2])));
        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */int) (short)-30448)) : (((/* implicit */int) arr_7 [i_2])))))));
    }
    /* LoopSeq 1 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_19 = (~(((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_10 [i_3])) : (((/* implicit */int) (signed char)34)))) >> (((((/* implicit */int) arr_4 [i_3] [i_3])) - (62602))))));
        var_20 = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_2 [(unsigned char)7] [i_3])) ? (arr_2 [i_3] [i_3]) : (arr_2 [i_3] [i_3]))), (arr_2 [(signed char)10] [(_Bool)1])));
        var_21 |= ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 1639932833)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)-30474))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 936445326)) ? (131102918U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) : (var_8))) & (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_4 [i_3] [i_3])) < (var_6))) ? (((/* implicit */int) (short)24763)) : (arr_11 [i_3] [i_3])))));
        var_22 = ((((/* implicit */int) var_10)) == (((((/* implicit */int) (signed char)-35)) * (((/* implicit */int) (short)32767)))));
    }
}

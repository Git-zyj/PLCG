/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134610
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
    var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_6) : (((((/* implicit */_Bool) var_10)) ? (var_11) : (((/* implicit */int) var_10))))))))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_13 = ((/* implicit */int) (!(arr_2 [i_0])));
        var_14 = ((/* implicit */unsigned short) ((arr_2 [i_0]) ? (((/* implicit */int) (!(arr_2 [i_0])))) : (((arr_2 [i_0]) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0]))))));
        var_15 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_2 [i_0]) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0]))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (arr_0 [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0])))));
        var_16 ^= (!(((/* implicit */_Bool) (~(((arr_1 [i_0] [i_0]) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0]))))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 2; i_1 < 18; i_1 += 4) 
    {
        arr_7 [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_1 - 2]))));
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1062677167)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)52186))) : (arr_4 [i_1] [i_1])))) ? (((arr_3 [i_1] [i_1]) ? (((/* implicit */int) arr_3 [i_1] [i_1])) : (arr_6 [i_1]))) : (((/* implicit */int) arr_5 [i_1 + 1]))));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 2; i_2 < 18; i_2 += 1) 
        {
            for (signed char i_3 = 0; i_3 < 20; i_3 += 2) 
            {
                {
                    var_18 = (!(((/* implicit */_Bool) arr_5 [i_1 + 2])));
                    arr_12 [i_1] [i_2] [i_2] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_3 [i_1] [i_3])) : (arr_6 [i_2])))) ? (((((/* implicit */_Bool) arr_9 [i_1 - 1] [i_1 - 1] [i_3])) ? (arr_6 [i_2 - 1]) : (arr_6 [3]))) : (arr_10 [i_2] [i_2] [(short)9])));
                    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_8 [i_1])))) ? (arr_4 [(unsigned char)10] [i_2]) : (arr_4 [i_2] [i_1])));
                }
            } 
        } 
        arr_13 [i_1 + 1] [i_1] = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_1] [17] [i_1])))))));
    }
    /* vectorizable */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_20 ^= ((/* implicit */unsigned short) arr_4 [(_Bool)1] [i_4]);
        arr_18 [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_4])) ? (arr_6 [i_4]) : (arr_6 [i_4])));
    }
}

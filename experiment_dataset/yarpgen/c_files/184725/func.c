/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184725
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (signed char)-125)) == (((/* implicit */int) (unsigned short)15))))) & (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) (unsigned short)16382))))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)17)) / (((/* implicit */int) arr_3 [(signed char)13] [i_0]))))) != (var_9)))) : (((/* implicit */int) min(((!(((/* implicit */_Bool) arr_3 [i_0] [i_0])))), (arr_0 [(unsigned short)16]))))));
        var_14 *= ((/* implicit */unsigned int) (+(var_11)));
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 3802150708U)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-62)) ? (((/* implicit */int) arr_3 [(signed char)12] [i_0])) : (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)36))) : (3431780863U))))));
        arr_5 [3U] [3U] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_2 [i_0] [i_0])) || (((/* implicit */_Bool) arr_2 [i_0] [i_0])))) || (((/* implicit */_Bool) arr_1 [i_0]))));
        arr_6 [i_0] = ((/* implicit */long long int) ((((((/* implicit */int) arr_0 [i_0])) * ((+(((/* implicit */int) arr_0 [i_0])))))) < (((((/* implicit */_Bool) min((var_3), (arr_3 [(unsigned short)13] [i_0])))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_0]))))));
    }
    var_15 |= ((/* implicit */unsigned short) min((var_9), (((/* implicit */long long int) var_1))));
    var_16 = var_8;
    /* LoopSeq 1 */
    for (signed char i_1 = 1; i_1 < 14; i_1 += 3) 
    {
        var_17 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_1 + 1] [i_1])) && (((/* implicit */_Bool) arr_3 [i_1] [i_1]))));
        var_18 = ((/* implicit */unsigned int) (~(((/* implicit */int) max((arr_2 [7LL] [i_1 - 1]), (arr_2 [i_1] [i_1 - 1]))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_2 = 0; i_2 < 15; i_2 += 1) 
        {
            var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1 - 1] [i_1 - 1])) ? (((/* implicit */int) arr_3 [i_1] [i_2])) : (((/* implicit */int) (!(arr_0 [i_1 - 1]))))));
            arr_12 [i_1] = ((/* implicit */unsigned int) arr_11 [i_1] [i_1]);
            var_20 = arr_0 [(unsigned char)16];
            var_21 = ((/* implicit */unsigned int) (signed char)-95);
        }
    }
}

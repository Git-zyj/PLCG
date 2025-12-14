/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120401
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
    var_13 = ((/* implicit */unsigned long long int) (~(((((-1241550096) < (((/* implicit */int) var_6)))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) min((var_11), (var_5))))))));
    var_14 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (((((/* implicit */int) (short)30670)) << (((((/* implicit */int) var_0)) - (20782))))) : (min((-1241550117), (-1241550117)))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        var_15 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_1 [i_0 - 1]))));
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) (unsigned short)9443))) & (min(((~(((/* implicit */int) (unsigned char)255)))), (((/* implicit */int) var_0))))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            arr_6 [i_0 + 1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_3 [i_0 + 3])) - (((/* implicit */int) arr_3 [i_0 - 1])))) + (((/* implicit */int) max((arr_3 [i_0 - 1]), (((/* implicit */unsigned char) var_4)))))));
            var_16 = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((long long int) var_8))) == (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_12))))) || (((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_0 - 1] [i_0 - 1] [i_0])))))));
            var_17 = ((/* implicit */unsigned char) ((unsigned int) var_3));
        }
        /* vectorizable */
        for (unsigned char i_2 = 2; i_2 < 13; i_2 += 1) 
        {
            var_18 = ((/* implicit */unsigned char) (+(((((/* implicit */int) var_3)) - (((/* implicit */int) var_10))))));
            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1241550123)) ? (((/* implicit */int) arr_3 [i_2 - 2])) : (((/* implicit */int) arr_8 [i_2]))));
            var_20 = (i_2 % 2 == zero) ? (((/* implicit */signed char) ((((/* implicit */int) var_7)) << (((((/* implicit */int) arr_9 [i_2 - 1] [i_2])) - (124)))))) : (((/* implicit */signed char) ((((/* implicit */int) var_7)) << (((((((/* implicit */int) arr_9 [i_2 - 1] [i_2])) - (124))) + (86))))));
        }
    }
    var_21 = ((/* implicit */signed char) var_6);
    var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) var_12))));
}

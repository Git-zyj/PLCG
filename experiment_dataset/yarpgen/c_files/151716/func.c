/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151716
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
    for (short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_10 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)31744)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)20032)) ? (((/* implicit */int) (short)-2352)) : (((/* implicit */int) (short)9795))))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_2 [(_Bool)1])))) : (((/* implicit */int) arr_3 [5LL] [i_0]))));
        arr_4 [i_0] = (short)18408;
    }
    var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) (_Bool)1))));
    /* LoopSeq 2 */
    for (unsigned char i_1 = 0; i_1 < 17; i_1 += 4) 
    {
        arr_8 [i_1] [i_1] = ((/* implicit */short) max((((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? ((((_Bool)1) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_5 [i_1])))) : (((((/* implicit */_Bool) (unsigned short)36946)) ? (7) : (((/* implicit */int) (signed char)-6)))))), (((/* implicit */int) (short)26744))));
        var_12 = ((/* implicit */short) ((unsigned short) ((((/* implicit */int) var_8)) + (arr_6 [i_1] [i_1]))));
    }
    for (unsigned short i_2 = 0; i_2 < 11; i_2 += 4) 
    {
        var_13 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 17432799150324569114ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)6))) : (8295473701250879066LL)))) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_5 [i_2]), (((/* implicit */unsigned char) arr_9 [i_2])))))) : (((long long int) (unsigned short)30720)))), (((/* implicit */long long int) min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_5 [i_2])) : (((/* implicit */int) (unsigned short)36958)))), (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (short)-26744)))))))));
        var_14 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_9 [i_2])) > (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_9 [i_2])) : (((/* implicit */int) arr_9 [i_2]))))));
    }
}

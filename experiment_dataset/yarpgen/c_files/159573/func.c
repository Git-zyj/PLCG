/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159573
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
    var_18 = ((/* implicit */short) min((((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) var_10)) : (var_4))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)48))))), (((/* implicit */unsigned long long int) var_2))));
    var_19 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_1) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)9043)))))) ? (((unsigned long long int) max(((short)21127), (((/* implicit */short) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)24338))))))));
    var_20 ^= ((/* implicit */unsigned long long int) var_14);
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 14; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */long long int) ((((/* implicit */int) min(((unsigned char)180), (((unsigned char) (unsigned char)12))))) * (((/* implicit */int) arr_5 [i_0]))));
                var_22 ^= (!(((/* implicit */_Bool) ((((((/* implicit */int) arr_2 [i_1])) < (((/* implicit */int) arr_2 [i_1])))) ? (min((-1474874580964166128LL), (((/* implicit */long long int) arr_4 [i_0])))) : (((/* implicit */long long int) ((int) (_Bool)1)))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (short i_2 = 0; i_2 < 14; i_2 += 3) 
    {
        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_2])) ? ((((_Bool)1) ? (((/* implicit */int) (unsigned char)205)) : (((/* implicit */int) (_Bool)1)))) : (((arr_3 [(short)2]) ? (((/* implicit */int) (signed char)-123)) : (((/* implicit */int) arr_3 [(unsigned char)8]))))));
        var_24 ^= ((unsigned char) arr_1 [i_2] [i_2]);
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_25 = ((/* implicit */short) max((((/* implicit */unsigned int) ((-653544832) / (((/* implicit */int) max((arr_8 [i_3]), (((/* implicit */unsigned char) (_Bool)1)))))))), (1482365956U)));
        arr_10 [i_3] = ((/* implicit */signed char) min(((~(((unsigned long long int) (short)32767)))), (((/* implicit */unsigned long long int) max((((/* implicit */short) ((var_3) == (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_3])))))), (arr_9 [i_3]))))));
        var_26 = ((/* implicit */short) arr_8 [i_3]);
        var_27 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */short) (_Bool)1)), (max((arr_9 [i_3]), (((/* implicit */short) (_Bool)1))))))) ? ((-(((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_3])) && (((/* implicit */_Bool) 1309885799))))))) : (((/* implicit */int) arr_9 [i_3]))));
    }
}

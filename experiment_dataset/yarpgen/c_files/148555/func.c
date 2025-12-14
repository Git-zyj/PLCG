/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148555
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
    var_16 = ((/* implicit */unsigned int) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) <= (14227141229520975115ULL)))));
    var_17 = ((/* implicit */signed char) var_14);
    var_18 = ((/* implicit */unsigned int) (~((~((~(((/* implicit */int) var_7))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        arr_2 [(signed char)12] = ((/* implicit */signed char) (-(((/* implicit */int) arr_0 [i_0]))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_19 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_1 [i_1])), (arr_4 [i_1] [i_0] [i_0])))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) var_14))));
            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (-(var_2)))) ? (min((((/* implicit */long long int) ((((/* implicit */_Bool) (short)127)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)74))) : (1390167653U)))), ((+(var_8))))) : (((/* implicit */long long int) var_9))));
        }
        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((((/* implicit */_Bool) (unsigned short)32375)) && (((/* implicit */_Bool) -1731270201)))) ? (max((((/* implicit */unsigned long long int) (signed char)77)), (((11655420154939759228ULL) - (((/* implicit */unsigned long long int) 1390167674U)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [0] [i_0]))))))));
        var_22 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)126)) - (((/* implicit */int) (signed char)78))));
    }
    var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) var_2)) - (var_5)))) ? (max((((/* implicit */unsigned long long int) 3290144070779254695LL)), (11655420154939759240ULL))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) 1390167651U)) : (5725478693365388341ULL)))));
}

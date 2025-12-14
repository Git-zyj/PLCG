/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138738
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
    var_20 = ((/* implicit */int) var_17);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */unsigned char) ((((((-1613895406561089708LL) + (((/* implicit */long long int) ((/* implicit */int) var_3))))) & (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (unsigned char)249)) : (((/* implicit */int) (unsigned char)140))))))) > (((/* implicit */long long int) arr_5 [i_0] [i_0]))));
                var_22 *= ((/* implicit */unsigned long long int) max(((+(1099494850560LL))), (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) / (arr_1 [i_1])))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)251))) : (((((/* implicit */_Bool) var_11)) ? (-1099494850555LL) : (-1099494850573LL)))))));
                arr_7 [i_1] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) 1099494850557LL)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (unsigned char)244)) : (66846720)))) : (arr_2 [i_0]))), ((~(4687458372341765715LL)))));
                var_23 += ((/* implicit */unsigned char) ((min((((long long int) var_14)), (var_5))) != (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)20)) ? (((/* implicit */unsigned long long int) arr_1 [i_0])) : (arr_0 [i_0])))) ? (((((/* implicit */_Bool) (unsigned char)2)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)180))) : (-1099494850573LL))) : (((/* implicit */long long int) ((int) arr_0 [i_0])))))));
                var_24 += ((/* implicit */int) ((unsigned char) (~(((/* implicit */int) (unsigned char)140)))));
            }
        } 
    } 
    var_25 = ((/* implicit */long long int) min((((((/* implicit */_Bool) ((long long int) var_0))) ? (var_19) : (((/* implicit */unsigned long long int) ((-1099494850561LL) & (1099494850572LL)))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_13)))))));
    /* LoopSeq 2 */
    for (short i_2 = 0; i_2 < 22; i_2 += 3) 
    {
        arr_10 [i_2] = ((/* implicit */int) (~(((long long int) (unsigned char)31))));
        var_26 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 1099494850572LL)) ? (((/* implicit */int) arr_8 [i_2])) : (((/* implicit */int) var_15))))) & (arr_6 [16] [i_2] [i_2]))))));
        var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_1 [i_2]) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)180)))))) ? (((((/* implicit */_Bool) arr_1 [12U])) ? (arr_0 [i_2]) : (arr_0 [i_2]))) : (((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)23))) : (arr_0 [i_2])))));
    }
    for (long long int i_3 = 0; i_3 < 12; i_3 += 4) 
    {
        arr_14 [i_3] [(unsigned char)7] = ((/* implicit */int) max((((min((((/* implicit */long long int) var_4)), (arr_2 [i_3]))) | (((/* implicit */long long int) arr_12 [i_3] [i_3])))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)238)) || (((/* implicit */_Bool) arr_3 [i_3])))))));
        var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) (-(630948075U))))));
        var_29 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) arr_6 [19ULL] [i_3] [i_3])) / (var_7))) * (((/* implicit */unsigned long long int) ((var_8) * (((/* implicit */unsigned int) 1267960247)))))))) ? ((~(((/* implicit */int) var_3)))) : (((int) min((((/* implicit */short) var_15)), (arr_8 [i_3]))))));
        arr_15 [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_3])) ? (((((/* implicit */_Bool) var_5)) ? (arr_13 [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_3]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(var_5)))) ? (((/* implicit */int) ((short) var_6))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))))));
        var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) (-(arr_13 [i_3])))) || (var_4)))))));
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164483
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
    var_18 |= var_9;
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    arr_7 [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) arr_6 [i_0] [i_0] [i_2] [(_Bool)1])) == (arr_2 [i_0])))) - (((((/* implicit */int) arr_0 [(_Bool)1] [i_2])) & (var_17)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) arr_4 [i_2]))) ? (((((/* implicit */_Bool) 2147483647)) ? (var_0) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_3 [i_0]))))) : (((((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (-895327699)))) ? (((/* implicit */unsigned int) min((895327698), (((/* implicit */int) var_1))))) : (((var_14) * (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_2])))))))));
                    var_19 = ((/* implicit */unsigned char) max((((((/* implicit */int) arr_3 [i_2])) * ((+(((/* implicit */int) arr_6 [i_0] [i_1] [i_1] [i_2])))))), (((((/* implicit */int) arr_5 [i_0] [(unsigned short)1])) << (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [(_Bool)1])) && (((/* implicit */_Bool) var_16)))))))));
                    arr_8 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) 895327701))) ? (max((((/* implicit */int) ((633404965U) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2] [i_1])))))), (min((2147483647), (((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [14U])))))) : (min((((/* implicit */int) (unsigned char)255)), ((-(((/* implicit */int) arr_4 [i_1]))))))));
                    var_20 = ((/* implicit */int) ((((((((/* implicit */int) (_Bool)0)) << (((/* implicit */int) arr_0 [i_0] [i_0])))) ^ (((/* implicit */int) arr_4 [i_0])))) < (((/* implicit */int) ((((((/* implicit */int) arr_0 [i_0] [(short)15])) != (((/* implicit */int) arr_5 [(short)9] [i_2])))) && (arr_0 [i_1] [i_1]))))));
                    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) ((var_15) >> (((((/* implicit */int) arr_4 [17])) - (125)))))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_3 [i_0])))) : (((/* implicit */int) arr_5 [i_0] [i_0])))) : (((/* implicit */int) var_1))));
                }
            } 
        } 
        var_22 = ((/* implicit */signed char) ((((((/* implicit */int) ((((/* implicit */int) (short)7230)) == (((/* implicit */int) arr_3 [i_0]))))) ^ ((~(var_0))))) + (((/* implicit */int) ((((/* implicit */int) (short)2292)) >= (((/* implicit */int) max((arr_5 [i_0] [i_0]), ((_Bool)1)))))))));
        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0])) & (((min((((/* implicit */int) arr_1 [14])), (2102541434))) / (((/* implicit */int) ((signed char) var_16))))))))));
    }
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
    {
        var_24 = arr_10 [i_3] [i_3];
        arr_13 [i_3] = ((/* implicit */signed char) max((((/* implicit */short) min((var_6), (((/* implicit */unsigned char) arr_1 [i_3]))))), (((short) arr_2 [i_3 - 1]))));
        var_25 &= ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) arr_3 [i_3 - 1])) > (((/* implicit */int) arr_3 [i_3 - 1]))))) - (((arr_2 [i_3]) | (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) var_13)))))))));
        arr_14 [i_3 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((2563283083U), (((/* implicit */unsigned int) (unsigned char)40))))) ? ((-(((/* implicit */int) var_10)))) : (((((/* implicit */int) arr_6 [i_3] [i_3] [i_3] [i_3])) / (((/* implicit */int) arr_4 [i_3]))))))) ? (min((max((((/* implicit */int) arr_9 [i_3])), (895327699))), (min((var_15), (((/* implicit */int) arr_4 [i_3])))))) : (((min((((/* implicit */int) arr_1 [9U])), (2147483647))) * ((+(((/* implicit */int) (short)-8103))))))));
    }
    var_26 = ((/* implicit */int) var_11);
    var_27 = var_0;
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16495
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
    var_11 = ((/* implicit */unsigned int) min((var_11), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned int) var_7))))) ? ((~(((/* implicit */int) var_3)))) : ((+(((/* implicit */int) var_0))))))))))));
    var_12 = ((/* implicit */short) (-(min((((/* implicit */int) var_1)), ((+(((/* implicit */int) var_8))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */int) var_8)) * (((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_1 [(_Bool)1] [i_0])) + (2147483647))) >> (((arr_0 [i_0]) - (609573046U)))))) && (((/* implicit */_Bool) (+(((/* implicit */int) var_9))))))))));
        var_13 = ((/* implicit */signed char) max((var_13), (arr_1 [i_0] [(short)16])));
        var_14 = ((/* implicit */short) (((~(((var_1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (arr_0 [i_0]))))) == (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0])))));
    }
    for (unsigned int i_1 = 0; i_1 < 17; i_1 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_2 = 0; i_2 < 17; i_2 += 4) 
        {
            arr_9 [i_1] = ((/* implicit */int) (-(max((arr_7 [i_1]), (arr_7 [(short)8])))));
            var_15 = ((/* implicit */signed char) (+((+(max((((/* implicit */unsigned int) var_1)), (arr_7 [(short)3])))))));
        }
        var_16 += ((/* implicit */short) (~((-(((/* implicit */int) arr_1 [i_1] [i_1]))))));
        var_17 = (-(((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_1] [i_1])) * (((/* implicit */int) arr_6 [(short)5] [(short)5]))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_7))))) : (((var_1) ? (arr_5 [i_1] [i_1]) : (var_5))))));
    }
    var_18 = (+(((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? ((~(var_5))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) > (var_5))))))));
    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */int) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_6)))) >= ((~(((/* implicit */int) var_6))))))) != (((((/* implicit */int) max((((/* implicit */short) var_7)), (var_6)))) ^ (((/* implicit */int) var_4)))))))));
}

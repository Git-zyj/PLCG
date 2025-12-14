/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165454
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
    var_12 = ((/* implicit */signed char) ((short) ((min((var_1), (((/* implicit */int) (_Bool)0)))) / (((/* implicit */int) var_9)))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        arr_2 [i_0] [(short)16] = ((/* implicit */int) arr_1 [(short)21]);
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_13 [i_3] [i_2] [i_1] [i_0] = ((/* implicit */_Bool) ((short) arr_1 [i_1]));
                        var_13 ^= ((/* implicit */long long int) ((unsigned short) arr_1 [i_0]));
                        var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_11 [i_0])) ? (arr_1 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1] [i_1] [(unsigned short)5] [i_3]))))), (((/* implicit */long long int) arr_10 [i_0] [i_1] [(_Bool)1] [i_3]))))) ? (((/* implicit */int) arr_10 [i_0] [(signed char)0] [(signed char)0] [i_3])) : (((((/* implicit */_Bool) arr_12 [i_0])) ? (((/* implicit */int) min((arr_4 [i_0]), (arr_11 [i_3])))) : (((/* implicit */int) min(((unsigned short)62224), (((/* implicit */unsigned short) arr_0 [i_0] [i_1]))))))))))));
                        arr_14 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) ((signed char) (_Bool)0)))));
                    }
                } 
            } 
        } 
        arr_15 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */int) arr_11 [i_0])) : (((/* implicit */int) arr_0 [(short)21] [i_0]))));
        arr_16 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) (short)7936)), (((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */int) (short)19161)) : (arr_8 [i_0] [(signed char)7])))))) ? (max((((/* implicit */int) (_Bool)1)), ((((_Bool)0) ? (((/* implicit */int) (short)-7954)) : (((/* implicit */int) (short)4871)))))) : (((/* implicit */int) (short)-26114))));
    }
    var_15 = ((/* implicit */short) (_Bool)1);
    var_16 = ((/* implicit */short) var_7);
    var_17 -= var_6;
}

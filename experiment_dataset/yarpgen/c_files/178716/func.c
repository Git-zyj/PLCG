/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178716
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
    var_19 = ((short) ((((/* implicit */int) (short)0)) * (((/* implicit */int) (short)(-32767 - 1)))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 2; i_1 < 12; i_1 += 2) 
        {
            var_20 = ((/* implicit */short) ((((/* implicit */int) (short)(-32767 - 1))) + (((/* implicit */int) (short)-11318))));
            /* LoopNest 2 */
            for (short i_2 = 1; i_2 < 13; i_2 += 2) 
            {
                for (short i_3 = 3; i_3 < 13; i_3 += 2) 
                {
                    {
                        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) min((((/* implicit */int) max((arr_5 [i_0] [i_1] [i_3 - 2]), (var_1)))), (((((/* implicit */_Bool) arr_5 [i_0] [(short)4] [i_3 + 2])) ? (((/* implicit */int) arr_4 [(short)6] [i_2 + 1] [i_2])) : (((/* implicit */int) arr_4 [(short)10] [i_2 - 1] [(short)12])))))))));
                        arr_10 [(short)15] [(short)15] [i_2] [(short)13] [(short)11] [i_0] = ((/* implicit */short) (+(((((((/* implicit */int) arr_2 [(short)4] [(short)1])) <= (((/* implicit */int) var_6)))) ? (((/* implicit */int) (short)-6913)) : (((((/* implicit */_Bool) (short)1751)) ? (((/* implicit */int) (short)-21242)) : (((/* implicit */int) (short)(-32767 - 1)))))))));
                        var_22 &= (short)-8948;
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (short i_4 = 1; i_4 < 14; i_4 += 2) 
                        {
                            arr_13 [(short)7] [(short)8] [(short)15] [i_3] [(short)13] = var_6;
                            var_23 ^= var_7;
                        }
                        for (short i_5 = 0; i_5 < 16; i_5 += 3) 
                        {
                            var_24 = ((/* implicit */short) min((var_24), (max((max((arr_5 [i_2 + 1] [(short)5] [(short)8]), (var_16))), (var_15)))));
                            var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) min((((/* implicit */int) arr_8 [(short)6] [(short)15] [i_2] [i_3])), (((((/* implicit */_Bool) (short)21241)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (short)-22494))))))))))));
                        }
                        var_26 ^= ((/* implicit */short) ((((/* implicit */int) (short)22494)) <= (((/* implicit */int) (short)27701))));
                    }
                } 
            } 
        }
        var_27 = (short)-21241;
        var_28 -= ((/* implicit */short) ((((((/* implicit */_Bool) min((var_15), ((short)-21241)))) ? (((/* implicit */int) max((var_7), (var_5)))) : (((/* implicit */int) min((arr_9 [(short)5] [(short)1]), (arr_2 [i_0] [i_0])))))) + (((/* implicit */int) arr_8 [(short)11] [(short)13] [(short)14] [(short)2]))));
        var_29 = ((/* implicit */short) (~(max((((/* implicit */int) arr_5 [(short)7] [i_0] [(short)7])), ((~(((/* implicit */int) var_9))))))));
    }
    var_30 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-32395)) ? (((((/* implicit */_Bool) (short)9740)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (short)21241)))) : (((/* implicit */int) var_6))));
}

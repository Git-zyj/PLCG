/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109106
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) (short)-32747)) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) min(((unsigned char)32), (arr_5 [i_1])))))));
                var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((/* implicit */int) min((arr_2 [i_0] [(unsigned char)16] [i_0 - 1]), (arr_2 [i_0] [(unsigned char)10] [(unsigned char)6])))) % ((~(((/* implicit */int) arr_2 [i_0] [(short)0] [i_1])))))))));
                /* LoopSeq 2 */
                for (unsigned char i_2 = 1; i_2 < 17; i_2 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */int) min((arr_10 [(short)0] [i_0 + 2] [i_0 + 2] [i_2 - 1]), (((/* implicit */short) min(((unsigned char)123), ((unsigned char)41))))))) | (((/* implicit */int) arr_5 [(unsigned char)0])))))));
                        arr_12 [i_1] [i_1] [i_1] [(unsigned char)17] = ((/* implicit */unsigned char) max((((/* implicit */int) ((short) (short)-9988))), (((((/* implicit */_Bool) (-(((/* implicit */int) (short)15473))))) ? (((((/* implicit */_Bool) (unsigned char)48)) ? (((/* implicit */int) (short)-21591)) : (((/* implicit */int) var_14)))) : (((/* implicit */int) (unsigned char)77))))));
                        arr_13 [i_1] [i_1] [i_1] [i_1] [i_3] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (unsigned char)224)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)24))))));
                    }
                    var_18 |= ((/* implicit */unsigned char) ((min((((/* implicit */int) max((arr_2 [i_0] [(unsigned char)2] [i_2]), (var_13)))), (((((/* implicit */_Bool) (unsigned char)121)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)234)))))) != ((-(((/* implicit */int) arr_0 [i_1]))))));
                }
                for (unsigned char i_4 = 0; i_4 < 18; i_4 += 3) 
                {
                    arr_17 [i_4] [i_1] [i_1] [i_0] = ((/* implicit */short) min(((-(((/* implicit */int) max(((unsigned char)98), (arr_5 [i_1])))))), (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)2)) ? (((/* implicit */int) (unsigned char)77)) : (((/* implicit */int) (unsigned char)28)))) != (((/* implicit */int) min(((unsigned char)13), (var_3)))))))));
                    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-1080)) ? (((/* implicit */int) min((arr_11 [(short)16] [i_1] [i_1]), (var_13)))) : (((((/* implicit */_Bool) arr_11 [(short)2] [i_1] [i_1])) ? (((/* implicit */int) arr_11 [(unsigned char)16] [(short)8] [(short)8])) : (((/* implicit */int) arr_11 [(unsigned char)10] [i_4] [(unsigned char)12])))))))));
                }
                var_20 *= ((/* implicit */short) ((((((/* implicit */int) arr_16 [i_0 + 2] [i_0 + 2])) != (((/* implicit */int) arr_16 [i_0 + 1] [i_0 + 1])))) ? (min((((((/* implicit */_Bool) (unsigned char)168)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_9)))), (((/* implicit */int) max(((unsigned char)174), ((unsigned char)139)))))) : (((((/* implicit */_Bool) arr_2 [i_0 - 1] [(short)12] [i_0 + 1])) ? ((~(((/* implicit */int) var_11)))) : (((/* implicit */int) arr_3 [(unsigned char)14]))))));
                var_21 = ((/* implicit */unsigned char) max((var_21), (((unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)32))))) ? (((/* implicit */int) (unsigned char)27)) : (((((/* implicit */_Bool) (short)14255)) ? (((/* implicit */int) arr_9 [(unsigned char)4] [i_0])) : (((/* implicit */int) var_10)))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned char) min(((short)-9980), (((/* implicit */short) ((unsigned char) var_4)))));
    var_23 += ((/* implicit */unsigned char) ((((/* implicit */int) var_3)) | (((((/* implicit */int) (unsigned char)248)) | (((/* implicit */int) var_14))))));
    var_24 = (unsigned char)167;
    var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) var_3))));
}

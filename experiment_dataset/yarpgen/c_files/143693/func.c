/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143693
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
    var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) (unsigned char)63))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            var_13 = arr_3 [(unsigned char)5];
            var_14 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)141))) != (2175434549U)))) < (arr_0 [i_1])));
            var_15 = ((int) -1857506456);
            arr_4 [i_0] [i_0] = ((/* implicit */short) arr_0 [i_0]);
        }
        arr_5 [i_0] = ((/* implicit */unsigned char) (-(min((((/* implicit */unsigned int) min((arr_0 [i_0]), (var_1)))), (min((arr_1 [(short)10]), (((/* implicit */unsigned int) var_7))))))));
        /* LoopSeq 1 */
        for (int i_2 = 0; i_2 < 14; i_2 += 3) 
        {
            var_16 = ((/* implicit */unsigned int) ((int) (+((-(var_8))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned char i_3 = 0; i_3 < 14; i_3 += 3) 
            {
                var_17 = ((short) var_10);
                var_18 = ((/* implicit */int) (~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) -10)) : (var_3)))));
                var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) (-(((/* implicit */int) (unsigned char)250)))))));
                arr_10 [i_0] [i_2] [i_2] [i_3] = ((/* implicit */unsigned char) (~((~(arr_3 [i_0])))));
            }
            for (short i_4 = 3; i_4 < 11; i_4 += 1) 
            {
                var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((((/* implicit */_Bool) (~(((((arr_13 [(unsigned char)9] [(unsigned char)9] [i_4] [7]) + (2147483647))) >> (((((/* implicit */int) var_11)) + (4460)))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 536870912U)) ? (((/* implicit */int) (unsigned char)116)) : (((/* implicit */int) var_7))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [(short)9] [i_2] [i_4 + 3]))) : (max((((/* implicit */unsigned int) arr_12 [i_0] [i_0] [i_0] [i_0])), (var_3)))))))))));
                /* LoopSeq 2 */
                for (int i_5 = 2; i_5 < 13; i_5 += 1) 
                {
                    var_21 *= ((/* implicit */unsigned char) 4075090879U);
                    var_22 = ((/* implicit */int) arr_2 [i_2] [i_2] [i_5]);
                }
                for (short i_6 = 4; i_6 < 12; i_6 += 3) 
                {
                    var_23 = 126976;
                    arr_20 [i_0] [i_2] [i_4 + 1] [i_6] [(unsigned char)6] = ((/* implicit */int) min((((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_8 [i_0] [i_2] [i_0])), (3183115448U)))) ? (min((((/* implicit */unsigned int) var_5)), (var_3))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)94)) && (((/* implicit */_Bool) var_10)))))))), (((/* implicit */unsigned int) min((((/* implicit */int) var_11)), (max((arr_6 [i_2]), (((/* implicit */int) (unsigned char)198)))))))));
                    var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) max((((/* implicit */unsigned int) arr_11 [i_4] [i_4 - 2] [i_4 - 2])), (min((((/* implicit */unsigned int) ((((/* implicit */int) var_9)) << (((var_3) - (674075480U)))))), (var_2))))))));
                    var_25 = ((/* implicit */short) (~(min((((/* implicit */int) var_9)), ((+((-2147483647 - 1))))))));
                }
                var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) 325674677U))));
            }
        }
        var_27 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) ((short) arr_0 [11U]))) / (arr_11 [(unsigned char)13] [(unsigned char)13] [i_0])))) ? ((+(max((var_8), (((/* implicit */unsigned int) arr_8 [i_0] [i_0] [i_0])))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
        var_28 += ((/* implicit */int) max(((short)23935), (var_7)));
    }
    var_29 -= ((/* implicit */int) min((var_4), ((short)-30365)));
}

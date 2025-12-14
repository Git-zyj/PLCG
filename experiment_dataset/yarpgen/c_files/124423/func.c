/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124423
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
    var_14 = ((/* implicit */int) ((unsigned char) var_5));
    var_15 = ((int) var_2);
    /* LoopSeq 4 */
    for (short i_0 = 4; i_0 < 12; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 2; i_1 < 13; i_1 += 3) 
        {
            var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)255))))) ? (((/* implicit */int) (unsigned char)242)) : ((+(((/* implicit */int) (short)1924))))));
            var_17 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) (short)-1)))), (((((/* implicit */_Bool) min((var_0), (58795809)))) ? ((-(arr_4 [i_0 + 1] [i_0] [i_0 + 1]))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)-1899)) : (((/* implicit */int) arr_1 [i_0] [i_0]))))))));
        }
        for (short i_2 = 0; i_2 < 14; i_2 += 4) 
        {
            var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(arr_8 [i_2])))) ? ((-(((/* implicit */int) arr_2 [i_2])))) : (((int) ((int) (short)-1))))))));
            var_19 = (i_0 % 2 == 0) ? (((/* implicit */short) ((((/* implicit */_Bool) max((min((1268520762), (((/* implicit */int) arr_0 [i_0] [i_2])))), (((int) arr_0 [i_0] [i_2]))))) ? (((((/* implicit */int) (short)255)) << (((max((((/* implicit */int) arr_0 [i_0] [i_2])), (var_0))) - (32399))))) : (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)217)) ? (((/* implicit */int) (short)1)) : (690204890)))))))) : (((/* implicit */short) ((((/* implicit */_Bool) max((min((1268520762), (((/* implicit */int) arr_0 [i_0] [i_2])))), (((int) arr_0 [i_0] [i_2]))))) ? (((((/* implicit */int) (short)255)) << (((((max((((/* implicit */int) arr_0 [i_0] [i_2])), (var_0))) - (32399))) + (29186))))) : (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)217)) ? (((/* implicit */int) (short)1)) : (690204890))))))));
            var_20 -= ((/* implicit */int) ((short) (-(((/* implicit */int) max((((/* implicit */short) (unsigned char)60)), (arr_0 [i_2] [i_2])))))));
        }
        var_21 = ((/* implicit */unsigned char) min((var_21), ((unsigned char)247)));
    }
    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 1) 
    {
        arr_11 [i_3] [i_3] = ((/* implicit */short) ((int) ((max((var_5), (((/* implicit */int) arr_9 [i_3] [(short)10])))) ^ (min((((/* implicit */int) (unsigned char)47)), (690204890))))));
        var_22 = ((/* implicit */unsigned char) (~(((/* implicit */int) (short)-18))));
        var_23 = ((/* implicit */short) max(((+(-1))), ((-(-1)))));
        var_24 = ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) (short)5872)) ? (((/* implicit */int) arr_10 [i_3])) : (((/* implicit */int) var_12)))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)-5874))))), (((unsigned char) (short)-1223))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)63))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (1642014598) : (((/* implicit */int) var_12)))))))));
    }
    for (unsigned char i_4 = 0; i_4 < 10; i_4 += 4) 
    {
        var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((((min((arr_4 [i_4] [i_4] [i_4]), (var_5))) + (2147483647))) >> (((min((var_6), (((/* implicit */int) arr_6 [i_4] [i_4] [i_4])))) + (1800331491))))))));
        var_26 ^= (+(((((((/* implicit */int) var_9)) / (var_10))) & (((/* implicit */int) (short)-248)))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 12; i_5 += 3) 
    {
        var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) (-(((/* implicit */int) (short)-31864)))))));
        arr_18 [i_5] = ((/* implicit */short) (!(((/* implicit */_Bool) ((var_5) << (((var_11) - (1021262911))))))));
        var_28 |= (short)1;
    }
    var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) -1))));
    var_30 ^= ((/* implicit */short) var_8);
}

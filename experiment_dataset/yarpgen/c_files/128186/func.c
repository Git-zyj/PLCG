/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128186
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
    var_11 *= var_3;
    var_12 = ((/* implicit */short) max((((((/* implicit */int) ((unsigned char) (short)-24252))) - ((+(((/* implicit */int) (short)112)))))), (((/* implicit */int) (short)26063))));
    var_13 = var_2;
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            var_14 = ((/* implicit */unsigned char) arr_3 [i_0]);
            var_15 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (short)-26071)) ? (((/* implicit */int) arr_0 [i_0])) : (((((/* implicit */int) var_8)) - (((/* implicit */int) (unsigned char)88)))))), (((/* implicit */int) arr_2 [i_0] [i_0] [i_1]))));
            arr_4 [i_0] [i_1] = ((/* implicit */unsigned char) ((short) (((-(((/* implicit */int) var_3)))) != (((/* implicit */int) arr_0 [i_0])))));
            arr_5 [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) (unsigned char)230))))) - (((/* implicit */int) ((((/* implicit */int) var_10)) > (((/* implicit */int) (short)8)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)28903)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)-10268)))))))) : (((/* implicit */int) (short)-26075))));
            /* LoopSeq 1 */
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                arr_8 [i_0] [i_0] [i_0] [i_0] = max(((short)(-32767 - 1)), (((short) ((unsigned char) var_2))));
                var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) (unsigned char)0))) ? (((/* implicit */int) (short)26067)) : ((+(((/* implicit */int) ((((/* implicit */int) (short)-23810)) < (((/* implicit */int) (unsigned char)0)))))))));
            }
        }
        arr_9 [i_0] = ((short) (short)-23836);
    }
    for (short i_3 = 0; i_3 < 10; i_3 += 4) 
    {
        var_17 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (short)-22080)) ? (((/* implicit */int) (short)-2)) : (((/* implicit */int) arr_0 [i_3])))), (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (short)27998)) : (((/* implicit */int) (unsigned char)0))))));
        arr_12 [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255))))) >> (((((/* implicit */int) (unsigned char)139)) - (138)))))) && (((/* implicit */_Bool) (short)254))));
        var_18 &= ((/* implicit */short) (~(((((/* implicit */int) max((var_5), ((unsigned char)28)))) ^ ((~(((/* implicit */int) (short)27998))))))));
        var_19 = ((/* implicit */short) max((var_19), (arr_0 [i_3])));
        arr_13 [(short)1] [(short)1] = ((/* implicit */unsigned char) (short)24608);
    }
    var_20 &= ((/* implicit */unsigned char) var_0);
}

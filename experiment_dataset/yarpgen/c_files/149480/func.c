/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149480
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
    var_19 *= ((/* implicit */short) (+((+(((/* implicit */int) var_8))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_0] [i_0])) > (((/* implicit */int) arr_0 [i_0 + 1] [i_0 - 1]))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    var_21 = var_1;
                    var_22 -= ((/* implicit */unsigned short) ((short) min((max((((/* implicit */unsigned short) arr_2 [i_0] [i_1])), (arr_3 [i_2] [i_1] [i_0]))), (var_10))));
                    arr_6 [i_0] [i_1] = ((/* implicit */unsigned short) (short)11419);
                    arr_7 [i_0] [i_0 + 1] = ((/* implicit */unsigned short) ((short) (-(((((/* implicit */int) (short)21705)) - (((/* implicit */int) var_3)))))));
                }
            } 
        } 
        var_23 = ((/* implicit */short) max((min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)-21705)) : (((/* implicit */int) (short)21705)))), (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)65534)))))), (min(((+(((/* implicit */int) var_16)))), (((((/* implicit */int) var_0)) - (((/* implicit */int) (short)21705))))))));
        arr_8 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)5706)), ((unsigned short)28672)))) && (((/* implicit */_Bool) var_7)))) ? ((+((+(((/* implicit */int) var_18)))))) : (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0 + 1])) || (((/* implicit */_Bool) var_15))))) < (((((/* implicit */int) (unsigned short)12110)) / (((/* implicit */int) (unsigned short)7)))))))));
        var_24 += ((/* implicit */short) max((((((/* implicit */_Bool) min(((unsigned short)23470), (((/* implicit */unsigned short) var_7))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)53439)) : (((/* implicit */int) var_0)))) : (((((/* implicit */int) (unsigned short)1228)) - (((/* implicit */int) (short)11)))))), (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)60368))))) ? (((((/* implicit */_Bool) (short)-21702)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_18)))) : (((/* implicit */int) ((short) var_12)))))));
    }
    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 4) 
    {
        var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)11267)) ? (((/* implicit */int) arr_1 [i_3])) : (((((/* implicit */_Bool) arr_4 [i_3] [i_3] [(short)2])) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (short)-6257))))))) ? (((/* implicit */int) arr_9 [i_3])) : ((-(((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)12097)))))))))));
        var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_15)) / (((/* implicit */int) min((var_3), (var_18))))))) ? (((((/* implicit */_Bool) (short)-21705)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_10 [i_3])))) : ((+(((/* implicit */int) min((var_6), (var_12))))))));
    }
    var_27 = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) (unsigned short)65534)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)-7136)))) + (2147483647))) >> (((((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)13631)) : (((/* implicit */int) var_4)))) | ((+(((/* implicit */int) (unsigned short)60654)))))) - (64998)))));
    /* LoopSeq 2 */
    for (short i_4 = 0; i_4 < 20; i_4 += 3) /* same iter space */
    {
        var_28 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_2 [i_4] [i_4])) & (((/* implicit */int) var_10)))) - (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_1))))));
        var_29 = ((/* implicit */unsigned short) (((((-(((/* implicit */int) var_14)))) * (((/* implicit */int) max(((unsigned short)46667), (var_10)))))) - ((+(((((/* implicit */int) var_18)) + (((/* implicit */int) var_17))))))));
        arr_15 [i_4] = ((/* implicit */short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_10))))) ? (((/* implicit */int) arr_3 [i_4] [(short)3] [i_4])) : (((/* implicit */int) (unsigned short)32768))))));
        var_30 = ((/* implicit */short) min((var_30), (max((((/* implicit */short) ((((/* implicit */int) min((var_1), (((/* implicit */unsigned short) (short)21))))) <= (((/* implicit */int) var_13))))), (var_2)))));
    }
    for (short i_5 = 0; i_5 < 20; i_5 += 3) /* same iter space */
    {
        var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_12 [i_5] [i_5])))) ? (((/* implicit */int) var_8)) : ((~(((/* implicit */int) var_11)))))))));
        arr_19 [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (short)20051)) | ((+(((/* implicit */int) (unsigned short)64291))))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) min((max((((/* implicit */unsigned short) (short)-7398)), ((unsigned short)12600))), (((/* implicit */unsigned short) arr_17 [i_5])))))));
        var_32 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)53439)) ? (((/* implicit */int) (unsigned short)5)) : (((/* implicit */int) (unsigned short)16))));
    }
}

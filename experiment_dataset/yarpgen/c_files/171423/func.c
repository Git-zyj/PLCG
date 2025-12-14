/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171423
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
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_19 += ((/* implicit */_Bool) ((short) var_5));
        var_20 = ((/* implicit */unsigned short) (~((~(((/* implicit */int) var_7))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned short)30439)) : ((~(((/* implicit */int) (unsigned short)35092))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_13 [i_0] [i_3] [i_2] [i_1 - 1] [i_0]), (((/* implicit */unsigned short) var_1))))) && (((/* implicit */_Bool) (+(((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                                var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) (((~(((/* implicit */int) arr_4 [i_4])))) / (((((/* implicit */int) var_8)) - (((/* implicit */int) (unsigned short)30439))))))) ? (((/* implicit */int) arr_5 [i_2])) : (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)21855))))) != (((/* implicit */int) min((((/* implicit */short) arr_7 [i_1] [i_2] [i_3] [i_4])), (var_5))))))))))));
                                arr_14 [i_0] [i_0] = ((/* implicit */short) (((+(((/* implicit */int) arr_6 [i_0] [i_1 - 1] [i_0] [i_3])))) << (((((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)65535))))) ? (((((/* implicit */int) (short)0)) ^ (((/* implicit */int) (unsigned short)30439)))) : (((/* implicit */int) max((((/* implicit */short) var_4)), (var_2)))))) - (30424)))));
                                var_23 ^= arr_5 [i_4];
                            }
                        } 
                    } 
                    arr_15 [(_Bool)1] [i_1] [i_0] = arr_6 [i_0] [i_0] [i_1 - 1] [i_1 - 1];
                    var_24 = ((/* implicit */short) ((((((/* implicit */int) var_10)) ^ (((/* implicit */int) arr_1 [i_1 - 1])))) | ((~(((/* implicit */int) arr_1 [i_1 - 1]))))));
                    arr_16 [i_0] [i_0] [i_1 - 1] [i_2] = ((/* implicit */short) max((((((((/* implicit */_Bool) (unsigned short)30439)) ? (((/* implicit */int) (short)21102)) : (((/* implicit */int) var_15)))) != (((/* implicit */int) arr_12 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1] [i_1] [i_1 - 1])))), (arr_2 [i_0])));
                    arr_17 [i_0] [i_1 - 1] [i_0] [i_0] = ((/* implicit */short) min((((((/* implicit */_Bool) arr_11 [i_1 - 1] [i_1 - 1])) ? (((/* implicit */int) (unsigned short)58086)) : (((/* implicit */int) arr_11 [i_1 - 1] [i_1 - 1])))), (((/* implicit */int) var_5))));
                }
            } 
        } 
        var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) ((((/* implicit */int) max((min(((unsigned short)65535), ((unsigned short)56677))), (((/* implicit */unsigned short) (_Bool)1))))) | (min((((((/* implicit */int) (short)32767)) ^ (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((_Bool) (_Bool)1))))))))));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
    {
        var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((short) (unsigned short)35097)))));
        arr_22 [i_5] = ((/* implicit */_Bool) min((var_6), (((/* implicit */short) max((var_4), (arr_5 [(short)8]))))));
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
    {
        var_27 ^= var_5;
        var_28 = ((/* implicit */unsigned short) (+(((/* implicit */int) max(((unsigned short)64500), ((unsigned short)29717))))));
        var_29 = ((/* implicit */_Bool) (~(((/* implicit */int) min((((/* implicit */unsigned short) arr_9 [i_6])), (max(((unsigned short)35097), (((/* implicit */unsigned short) arr_8 [i_6] [(_Bool)1] [i_6] [i_6])))))))));
    }
    for (unsigned short i_7 = 3; i_7 < 20; i_7 += 1) 
    {
        arr_28 [i_7 - 3] [i_7] = ((/* implicit */_Bool) (((~(((/* implicit */int) min((arr_26 [i_7] [i_7]), ((unsigned short)35097)))))) & (((((/* implicit */_Bool) arr_26 [i_7 - 1] [i_7])) ? (((/* implicit */int) arr_27 [i_7])) : (((((/* implicit */int) (short)24486)) | (((/* implicit */int) (unsigned short)35096))))))));
        arr_29 [i_7] = ((/* implicit */_Bool) (short)20331);
    }
    var_30 += ((/* implicit */short) (+(((/* implicit */int) min((((/* implicit */unsigned short) (short)(-32767 - 1))), (var_18))))));
    var_31 = ((/* implicit */short) var_7);
}

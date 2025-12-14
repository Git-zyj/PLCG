/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10314
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0] [(short)2] = ((/* implicit */short) ((((/* implicit */_Bool) (short)5737)) ? (((/* implicit */int) (short)-30592)) : (((/* implicit */int) (short)-23757))));
                    var_12 = ((/* implicit */short) (~(((((/* implicit */int) arr_1 [i_0])) / (((/* implicit */int) arr_1 [i_2]))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_3 = 3; i_3 < 19; i_3 += 2) 
    {
        for (short i_4 = 1; i_4 < 18; i_4 += 4) 
        {
            {
                var_13 &= var_5;
                arr_14 [i_4] [i_4] = (short)12110;
            }
        } 
    } 
    /* LoopSeq 2 */
    for (short i_5 = 0; i_5 < 15; i_5 += 3) 
    {
        arr_19 [i_5] = var_4;
        arr_20 [i_5] = ((short) ((((((/* implicit */int) (short)32761)) | (((/* implicit */int) var_0)))) ^ ((-(((/* implicit */int) arr_3 [(short)18] [(short)7]))))));
        /* LoopSeq 1 */
        for (short i_6 = 0; i_6 < 15; i_6 += 3) 
        {
            var_14 += ((/* implicit */short) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (short)6950)) : (((/* implicit */int) (short)-77))));
            arr_24 [i_5] [i_6] = ((/* implicit */short) ((((min((((/* implicit */int) (short)-12626)), (((((((/* implicit */int) arr_5 [i_5] [(short)12] [(short)4] [i_6])) + (2147483647))) >> (((((/* implicit */int) (short)12609)) - (12598))))))) + (2147483647))) >> (((((/* implicit */int) ((short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_13 [i_5] [(short)13] [i_5])) : (((/* implicit */int) arr_1 [i_6])))))) - (4411)))));
        }
        /* LoopNest 3 */
        for (short i_7 = 2; i_7 < 11; i_7 += 2) 
        {
            for (short i_8 = 0; i_8 < 15; i_8 += 2) 
            {
                for (short i_9 = 3; i_9 < 13; i_9 += 2) 
                {
                    {
                        var_15 -= max((var_3), (max((((short) (short)5737)), (arr_3 [i_7 + 4] [i_7 + 4]))));
                        arr_31 [i_5] [i_5] [i_8] [i_9] [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-28241)) ? (((/* implicit */int) min(((short)-32767), (arr_30 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])))) : (((((/* implicit */int) arr_21 [i_8])) / (((/* implicit */int) arr_30 [i_9 + 1] [i_8] [i_5] [i_5] [i_7] [i_5]))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) arr_13 [i_7 + 4] [i_9 + 2] [i_7 + 4])) : (((/* implicit */int) arr_30 [i_5] [(short)14] [i_8] [i_5] [i_5] [i_7 + 4])))) : (((/* implicit */int) ((((((/* implicit */_Bool) arr_29 [(short)2] [i_7] [i_8] [i_9])) ? (((/* implicit */int) arr_11 [i_5] [(short)3])) : (((/* implicit */int) var_2)))) < (((/* implicit */int) ((((/* implicit */int) var_4)) < (((/* implicit */int) (short)32739))))))))));
                    }
                } 
            } 
        } 
    }
    for (short i_10 = 4; i_10 < 12; i_10 += 2) 
    {
        var_16 = (short)2819;
        arr_34 [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-12111))))) ? (((/* implicit */int) arr_8 [i_10 - 4] [i_10 - 3])) : (((((((/* implicit */int) arr_8 [i_10 - 4] [i_10 + 3])) + (2147483647))) >> (((((/* implicit */int) var_11)) + (30444)))))));
        /* LoopSeq 2 */
        for (short i_11 = 0; i_11 < 15; i_11 += 4) /* same iter space */
        {
            arr_37 [i_10] [i_10] = ((/* implicit */short) min((((/* implicit */int) ((short) arr_2 [i_10 - 4]))), ((~(((/* implicit */int) arr_32 [i_10 + 2]))))));
            var_17 *= ((/* implicit */short) (-(((((/* implicit */_Bool) (short)-29721)) ? (((/* implicit */int) (short)-20522)) : (((/* implicit */int) (short)-19140))))));
        }
        for (short i_12 = 0; i_12 < 15; i_12 += 4) /* same iter space */
        {
            var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) arr_21 [i_10]))) ? (min(((~(((/* implicit */int) (short)5747)))), (((/* implicit */int) arr_38 [i_10])))) : (((/* implicit */int) min((var_6), (var_4))))));
            var_19 = ((/* implicit */short) (~((+(((/* implicit */int) ((((/* implicit */_Bool) (short)-5356)) && (((/* implicit */_Bool) (short)29093)))))))));
            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) max((var_6), (arr_28 [i_10 - 2] [(short)9] [i_10 - 2] [i_10 - 2])))) / (((/* implicit */int) max((var_8), ((short)-17797))))))) ? (((/* implicit */int) min(((short)32767), (((short) var_7))))) : (((/* implicit */int) ((((/* implicit */int) arr_17 [i_12])) >= (((/* implicit */int) arr_17 [i_10])))))));
        }
    }
    var_21 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) - (((/* implicit */int) var_10))));
}

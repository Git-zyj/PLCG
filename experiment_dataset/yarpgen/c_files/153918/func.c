/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153918
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
    /* LoopSeq 3 */
    for (short i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        var_15 = ((/* implicit */short) ((((/* implicit */int) min(((short)(-32767 - 1)), ((short)1)))) - (((((/* implicit */_Bool) max((arr_0 [(short)5] [i_0]), ((short)-5374)))) ? ((-(((/* implicit */int) (short)14)))) : (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) (short)32761)) : (((/* implicit */int) arr_0 [i_0 + 1] [i_0]))))))));
        /* LoopNest 2 */
        for (short i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            for (short i_2 = 4; i_2 < 13; i_2 += 3) 
            {
                {
                    var_16 ^= ((/* implicit */short) max((max((((((/* implicit */_Bool) (short)1)) ? (((/* implicit */int) arr_3 [i_0] [i_0 - 1] [i_0])) : (((/* implicit */int) arr_5 [i_0 + 1])))), (((((/* implicit */int) (short)19233)) & (((/* implicit */int) arr_1 [i_0])))))), (((/* implicit */int) (!(((/* implicit */_Bool) min(((short)-11142), (var_2)))))))));
                    arr_6 [i_0 - 1] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [(short)10] [(short)11] [i_2])) ? (((/* implicit */int) max((min((arr_4 [i_2] [i_0]), (arr_2 [i_0 - 1] [i_2 - 4]))), (((/* implicit */short) ((((/* implicit */int) (short)29091)) >= (((/* implicit */int) arr_0 [i_0] [i_0])))))))) : (((/* implicit */int) (short)23011))));
                    var_17 ^= (short)-26921;
                }
            } 
        } 
        arr_7 [i_0] = arr_4 [(short)4] [i_0 - 1];
        arr_8 [i_0 - 1] [i_0] &= max((min(((short)6108), (arr_5 [(short)7]))), (((/* implicit */short) ((((/* implicit */int) (short)(-32767 - 1))) != (((/* implicit */int) (short)(-32767 - 1)))))));
        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-11035)) ? (((/* implicit */int) (short)-19830)) : (((/* implicit */int) arr_5 [i_0 + 1]))));
    }
    for (short i_3 = 0; i_3 < 15; i_3 += 1) /* same iter space */
    {
        var_19 = arr_10 [i_3];
        arr_11 [i_3] [(short)14] &= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_3])) & (((((/* implicit */_Bool) arr_9 [(short)3])) ? (((/* implicit */int) arr_9 [(short)7])) : (((/* implicit */int) (short)10)))))))));
        arr_12 [i_3] = arr_9 [i_3];
    }
    for (short i_4 = 0; i_4 < 15; i_4 += 1) /* same iter space */
    {
        var_20 = ((short) (short)-8583);
        var_21 = ((/* implicit */short) max((min((((/* implicit */int) (short)-3097)), (((((/* implicit */int) (short)-19648)) - (((/* implicit */int) (short)(-32767 - 1))))))), ((~(((/* implicit */int) (short)-22258))))));
        arr_15 [i_4] = ((/* implicit */short) (~(((/* implicit */int) arr_10 [i_4]))));
    }
    var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) max((((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) ((((/* implicit */int) (short)-11)) & (((/* implicit */int) (short)17729))))))), ((!((!(((/* implicit */_Bool) (short)0)))))))))));
    var_23 = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((((((/* implicit */int) (short)-18828)) >= (((/* implicit */int) (short)(-32767 - 1))))) ? (((/* implicit */int) min(((short)32767), (var_3)))) : (((/* implicit */int) var_10)))) : (((/* implicit */int) (short)19651))));
}

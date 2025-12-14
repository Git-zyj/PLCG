/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185784
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
    for (short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */short) (-(((/* implicit */int) (short)-21773))));
        arr_3 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */int) (short)21750)) - (((/* implicit */int) arr_1 [i_0] [i_0])))), (((/* implicit */int) arr_1 [(short)2] [(short)2]))))) ? (((/* implicit */int) ((short) arr_0 [i_0]))) : (((/* implicit */int) min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [(short)6]))))));
        var_18 = ((((/* implicit */_Bool) max((arr_0 [i_0]), (arr_0 [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))) : ((-(arr_0 [i_0]))));
    }
    for (long long int i_1 = 2; i_1 < 17; i_1 += 3) 
    {
        var_19 &= ((/* implicit */short) max(((!(((/* implicit */_Bool) arr_4 [14LL])))), ((!(((/* implicit */_Bool) arr_4 [(short)10]))))));
        arr_6 [8LL] |= ((/* implicit */short) min((((/* implicit */int) arr_5 [i_1] [i_1])), (((((((/* implicit */int) (short)27339)) & (((/* implicit */int) arr_5 [i_1] [i_1])))) & ((-(((/* implicit */int) arr_5 [i_1] [(short)11]))))))));
    }
    for (short i_2 = 0; i_2 < 18; i_2 += 1) /* same iter space */
    {
        var_20 = arr_9 [i_2] [i_2];
        /* LoopNest 3 */
        for (long long int i_3 = 4; i_3 < 14; i_3 += 2) 
        {
            for (short i_4 = 0; i_4 < 18; i_4 += 2) 
            {
                for (short i_5 = 2; i_5 < 15; i_5 += 4) 
                {
                    {
                        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) arr_12 [i_2] [i_2] [i_2] [i_2]))));
                        var_22 = arr_7 [i_2] [i_3];
                        arr_17 [i_2] [12LL] [i_3] [i_4] [i_5] [i_5 + 1] = ((/* implicit */short) -1394792514176643306LL);
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */short) (~(min((arr_7 [i_2] [i_2]), (arr_7 [i_2] [i_2])))));
    }
    for (short i_6 = 0; i_6 < 18; i_6 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_7 = 0; i_7 < 18; i_7 += 1) 
        {
            for (long long int i_8 = 0; i_8 < 18; i_8 += 3) 
            {
                {
                    var_24 = max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-29527)) ? (((/* implicit */int) arr_5 [i_6] [i_7])) : (((/* implicit */int) var_12))))) ? ((+(1394792514176643306LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_7] [i_8]))))), (((/* implicit */long long int) ((arr_18 [i_6] [i_7]) < ((~(arr_7 [i_6] [i_7])))))));
                    var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_22 [i_6] [i_7] [i_8]))))) : (max((((/* implicit */long long int) arr_10 [i_6] [i_8])), (min((((/* implicit */long long int) arr_23 [i_6] [i_7] [i_6])), (var_3))))))))));
                    var_26 = ((/* implicit */short) max((var_26), (min((arr_21 [i_6] [i_7]), (((short) arr_23 [i_6] [i_7] [i_8]))))));
                }
            } 
        } 
        arr_25 [i_6] [i_6] = min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_6] [i_6])) ? (((/* implicit */int) (short)15)) : (((/* implicit */int) (short)32766))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_6] [i_6]))) : (-5035036736327754382LL))), (((/* implicit */long long int) max(((short)-28835), (arr_14 [i_6])))));
        arr_26 [(short)11] = ((/* implicit */long long int) arr_22 [i_6] [i_6] [i_6]);
        var_27 ^= ((/* implicit */long long int) arr_23 [i_6] [i_6] [i_6]);
    }
    var_28 = (+(max((((((/* implicit */_Bool) var_16)) ? (var_11) : (var_3))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (short)29713))))))));
}

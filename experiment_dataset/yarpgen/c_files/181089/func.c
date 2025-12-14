/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181089
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
    var_13 = min((((/* implicit */int) var_7)), (((((/* implicit */_Bool) max((((/* implicit */int) (signed char)59)), (var_4)))) ? (((int) var_0)) : (min((var_4), (((/* implicit */int) var_6)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) var_8))) ? ((~(((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) (short)-25508))));
        var_14 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_1 [i_0]))));
    }
    var_15 += ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((unsigned int) var_2))) ? (((/* implicit */int) min((var_10), (((/* implicit */unsigned short) var_12))))) : (((/* implicit */int) var_12)))), (min((var_4), (var_4)))));
    /* LoopSeq 3 */
    for (signed char i_1 = 0; i_1 < 25; i_1 += 3) 
    {
        var_16 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned short) var_1)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-3456)) ? (((/* implicit */long long int) ((/* implicit */int) min(((short)-25508), ((short)-25508))))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)127))) : (var_5))))))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 25; i_2 += 4) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 2) 
                {
                    {
                        var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */int) arr_5 [i_1])) < (((arr_8 [23] [i_4]) ? (((/* implicit */int) (short)25507)) : (((/* implicit */int) arr_8 [i_1] [i_1]))))))))))));
                        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((int) ((int) (short)-25507))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 15; i_5 += 1) 
    {
        arr_16 [i_5] = ((/* implicit */short) ((int) arr_11 [i_5] [i_5] [i_5] [i_5]));
        var_19 = ((_Bool) arr_6 [i_5] [i_5]);
    }
    /* vectorizable */
    for (signed char i_6 = 0; i_6 < 18; i_6 += 1) 
    {
        var_20 += ((/* implicit */unsigned short) arr_8 [i_6] [i_6]);
        arr_19 [i_6] = ((/* implicit */unsigned short) (-(((var_9) + (((/* implicit */int) arr_8 [i_6] [(short)9]))))));
        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (-(var_5))))));
        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) -1624717388)) ? (-10) : (((/* implicit */int) (short)25502))));
    }
    /* LoopNest 2 */
    for (signed char i_7 = 0; i_7 < 15; i_7 += 4) 
    {
        for (unsigned long long int i_8 = 0; i_8 < 15; i_8 += 4) 
        {
            {
                var_23 = (-(((/* implicit */int) min((arr_23 [i_7]), (((/* implicit */unsigned short) min(((_Bool)1), (var_11))))))));
                var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) var_10)), (((((/* implicit */_Bool) arr_6 [i_7] [i_7])) ? (((/* implicit */int) (_Bool)1)) : (-9)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_7])) ? (((/* implicit */int) arr_13 [i_7] [i_8] [i_8] [i_8] [i_7])) : (((/* implicit */int) arr_8 [i_7] [i_7]))))) ? (((/* implicit */int) arr_25 [i_7] [i_8] [i_8])) : (((/* implicit */int) ((_Bool) arr_21 [i_7]))))) : (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_5 [i_7])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)1))))))));
                arr_26 [i_7] [i_7] [i_7] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_1 [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_12)))) : ((+(3924970264U)))))));
                arr_27 [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned short) arr_21 [i_7]))))) ? (((/* implicit */int) max((arr_21 [i_7]), (arr_21 [i_8])))) : (((/* implicit */int) ((unsigned short) var_3)))));
            }
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143214
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
    var_19 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)36479)) < (((/* implicit */int) (unsigned short)13799))))) * (((/* implicit */int) var_6))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 3; i_1 < 17; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                for (short i_3 = 3; i_3 < 19; i_3 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 3; i_4 < 19; i_4 += 3) 
                        {
                            var_20 = arr_11 [i_1];
                            var_21 = ((/* implicit */long long int) ((((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_1]))) <= (arr_8 [i_3] [i_2] [(unsigned short)17] [13]))) || (((/* implicit */_Bool) arr_0 [i_1 - 2] [i_1 + 3]))));
                            arr_13 [i_0] [i_0] [(short)7] [i_0] [i_4 - 3] = ((/* implicit */signed char) arr_10 [i_0] [i_0] [i_0] [i_3] [i_4] [i_4]);
                        }
                        arr_14 [i_3] = ((/* implicit */unsigned short) (-(arr_5 [i_1 - 1])));
                        arr_15 [i_3] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (+(arr_12 [i_0] [i_0] [i_2])));
                        arr_16 [i_0] [i_1 - 3] [i_2] [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)13799))));
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */int) ((unsigned char) arr_9 [i_0]));
    }
    for (short i_5 = 0; i_5 < 12; i_5 += 2) 
    {
        var_23 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_2 [i_5])) ? (((/* implicit */int) arr_2 [i_5])) : (((/* implicit */int) arr_2 [i_5]))))));
        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(arr_8 [i_5] [i_5] [i_5] [i_5])))) ? (((((/* implicit */_Bool) (unsigned short)13799)) ? (((/* implicit */int) arr_7 [i_5] [i_5] [i_5] [i_5])) : (((/* implicit */int) arr_6 [i_5] [i_5] [i_5] [(unsigned char)3])))) : ((+(((/* implicit */int) arr_6 [i_5] [i_5] [i_5] [i_5]))))));
    }
    for (int i_6 = 0; i_6 < 16; i_6 += 2) 
    {
        arr_23 [i_6] = ((/* implicit */unsigned short) ((signed char) ((0U) + (3351961345U))));
        var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)48394)) ? (((/* implicit */int) (unsigned short)51736)) : ((-(((/* implicit */int) (unsigned short)52679))))));
        arr_24 [i_6] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */int) arr_2 [i_6])) < (((/* implicit */int) arr_2 [i_6])))))));
    }
    var_26 -= ((/* implicit */unsigned int) (unsigned short)17141);
}

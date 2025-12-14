/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158029
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
    for (signed char i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (unsigned short i_2 = 1; i_2 < 7; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) max((((/* implicit */int) (unsigned short)1920)), ((+(((/* implicit */int) arr_2 [i_2 + 2] [i_1])))))))));
                    var_14 = ((/* implicit */unsigned short) max(((+(((/* implicit */int) (unsigned short)32676)))), (((/* implicit */int) (signed char)-1))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_3 = 1; i_3 < 13; i_3 += 1) 
    {
        for (unsigned int i_4 = 0; i_4 < 14; i_4 += 2) 
        {
            {
                arr_12 [i_3] [i_4] &= ((/* implicit */signed char) ((((((/* implicit */int) (unsigned short)0)) - (((((/* implicit */_Bool) arr_8 [i_3])) ? (((/* implicit */int) arr_9 [i_4])) : (((/* implicit */int) (signed char)-74)))))) * (((((/* implicit */_Bool) arr_7 [i_3 - 1])) ? (((((/* implicit */_Bool) arr_6 [(short)8] [i_4])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_6 [i_3] [i_3])))) : ((~(((/* implicit */int) (signed char)3))))))));
                /* LoopNest 3 */
                for (unsigned short i_5 = 2; i_5 < 11; i_5 += 1) 
                {
                    for (signed char i_6 = 0; i_6 < 14; i_6 += 1) 
                    {
                        for (unsigned int i_7 = 2; i_7 < 11; i_7 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned short) max((((signed char) arr_19 [i_3] [i_3] [i_3] [i_3 + 1] [i_3] [i_6] [10U])), (((/* implicit */signed char) ((((/* implicit */int) ((short) (short)16383))) != (((((/* implicit */_Bool) 1768729899U)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) arr_7 [i_7 + 3])))))))));
                                var_16 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */int) arr_10 [i_5] [i_4])) : (((((/* implicit */int) arr_16 [i_5 + 3] [i_4] [i_4] [i_7 + 3])) | (((/* implicit */int) (unsigned short)0))))));
                                var_17 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_15 [i_3] [i_4] [i_5] [i_6] [(signed char)11])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_16 [i_3] [i_5] [i_4] [i_7]))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) max((var_12), (((/* implicit */unsigned short) var_0)))))))) : (max((max((0U), (((/* implicit */unsigned int) (short)32767)))), (4294967295U)))));
                                var_18 = arr_16 [i_7] [i_6] [i_6] [i_3 + 1];
                                arr_20 [i_4] [i_4] [i_4] [i_4] [i_6] = ((/* implicit */unsigned int) (unsigned short)53650);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}

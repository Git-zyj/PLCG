/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155132
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            {
                arr_6 [i_0] = ((unsigned int) (-((+(2U)))));
                arr_7 [i_1] = ((/* implicit */short) 4294967280U);
                /* LoopSeq 1 */
                for (short i_2 = 2; i_2 < 14; i_2 += 2) 
                {
                    arr_10 [i_2] [i_1] [5U] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)1023)) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)-10320)) || (((/* implicit */_Bool) 4294967290U))))) : (((/* implicit */int) ((short) (-(var_9)))))));
                    var_16 -= ((/* implicit */short) (+(((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_9 [i_0])) ? (4209386528U) : (11U)))))));
                    var_17 = ((/* implicit */unsigned int) min((var_17), (((((/* implicit */unsigned int) max((((((/* implicit */int) var_15)) | (((/* implicit */int) (short)-10067)))), ((+(((/* implicit */int) (short)-10048))))))) & (((unsigned int) 1653837958U))))));
                }
                arr_11 [i_0] = ((/* implicit */short) ((((/* implicit */unsigned int) (~(((/* implicit */int) (short)22579))))) - (min((((/* implicit */unsigned int) arr_0 [i_1 - 2] [i_1 + 1])), (((arr_3 [4U] [i_1] [i_1]) & (1187491168U)))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 2) 
    {
        for (short i_4 = 0; i_4 < 16; i_4 += 1) 
        {
            for (unsigned int i_5 = 0; i_5 < 16; i_5 += 2) 
            {
                {
                    var_18 = (-(((min((((/* implicit */unsigned int) (short)-21852)), (arr_2 [i_4] [i_4]))) * (4294967285U))));
                    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((max((1746049754U), (954453526U))) >= (arr_3 [i_5] [i_4] [i_3]))))));
                    arr_20 [i_3] &= (~(((((/* implicit */_Bool) ((unsigned int) 20U))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_0 [11U] [(short)16]))))) : (((((/* implicit */_Bool) 1344016431U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_3]))) : (3U))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)31153)), (var_3)))))))));
    var_21 = (-((~((~(var_9))))));
    var_22 &= ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))));
}

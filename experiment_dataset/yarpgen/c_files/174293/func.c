/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174293
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
    for (short i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_11 &= ((/* implicit */unsigned int) ((short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) > ((~(((/* implicit */int) (short)28392)))))));
                arr_6 [i_1] [i_0 - 1] &= ((/* implicit */short) (!(((/* implicit */_Bool) ((((unsigned int) var_6)) | (max((4294967281U), (var_1))))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned int i_2 = 3; i_2 < 24; i_2 += 1) 
    {
        var_12 = ((/* implicit */unsigned int) (((~(((/* implicit */int) ((short) 4294967273U))))) % (((((/* implicit */int) ((short) 2831727958U))) + ((-(((/* implicit */int) (short)-27266))))))));
        var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) (-((+(((unsigned int) var_0)))))))));
        var_14 ^= ((/* implicit */short) (!((!((!(((/* implicit */_Bool) var_9))))))));
    }
    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 2) 
    {
        var_15 &= ((/* implicit */unsigned int) (((-((-(((/* implicit */int) arr_3 [(short)3] [i_3])))))) != ((~((+(((/* implicit */int) arr_7 [i_3]))))))));
        /* LoopNest 2 */
        for (unsigned int i_4 = 0; i_4 < 13; i_4 += 3) 
        {
            for (unsigned int i_5 = 0; i_5 < 13; i_5 += 1) 
            {
                {
                    var_16 += ((/* implicit */unsigned int) ((short) (-(((/* implicit */int) min((arr_15 [i_3] [i_3]), (var_0)))))));
                    var_17 &= ((/* implicit */short) min(((~(min((((/* implicit */unsigned int) (short)32751)), (var_7))))), (((unsigned int) (~(((/* implicit */int) arr_11 [i_3] [i_4] [i_5])))))));
                    arr_17 [i_3] [i_4] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) max(((-(((/* implicit */int) arr_3 [i_3] [i_3])))), (((/* implicit */int) min((var_0), (var_4))))))) || (((/* implicit */_Bool) ((unsigned int) ((var_3) >> (((((/* implicit */int) arr_1 [i_4])) + (12152)))))))));
                }
            } 
        } 
        arr_18 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) max(((short)-32760), ((short)-2560)))))) < (((unsigned int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) 0U)))))));
    }
    for (unsigned int i_6 = 2; i_6 < 21; i_6 += 1) 
    {
        arr_21 [i_6] [i_6 + 1] = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned int) ((short) arr_8 [i_6]))))));
        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) (+((~((+(((/* implicit */int) var_0)))))))))));
    }
    var_19 = ((/* implicit */unsigned int) max((var_19), ((+((((~(var_3))) % (((/* implicit */unsigned int) (-(((/* implicit */int) var_4)))))))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104775
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
    var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) var_6))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_0])))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */unsigned short) (+(var_14)));
                    var_16 = ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-23472))) : (arr_5 [i_0] [i_1] [i_0]));
                    arr_10 [i_0] [i_0] = ((/* implicit */unsigned char) arr_1 [(short)1] [(short)1]);
                    arr_11 [i_0] [i_1] [5U] [i_0] = ((/* implicit */unsigned char) ((arr_7 [i_1] [i_2]) ? (((/* implicit */int) arr_7 [i_0] [i_1])) : (((/* implicit */int) arr_8 [i_0] [i_0]))));
                }
            } 
        } 
    }
    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 1) 
    {
        arr_14 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */int) ((short) arr_12 [i_3] [i_3]))) & (((((/* implicit */_Bool) ((unsigned char) var_8))) ? (((/* implicit */int) arr_12 [i_3] [21])) : ((+(((/* implicit */int) arr_13 [i_3]))))))));
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 24; i_4 += 2) 
        {
            for (short i_5 = 2; i_5 < 22; i_5 += 2) 
            {
                for (short i_6 = 1; i_6 < 20; i_6 += 1) 
                {
                    {
                        arr_26 [i_6] [i_3] [(short)17] [i_4] [i_3] [i_3] = ((/* implicit */short) (+(((var_7) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_10))))));
                        var_17 = ((/* implicit */_Bool) var_0);
                        var_18 *= ((/* implicit */_Bool) max(((+(((/* implicit */int) min((arr_15 [(unsigned char)10] [i_4]), (var_9)))))), (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)3))))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) (short)-1738)) ? (((/* implicit */int) (short)-1737)) : (((/* implicit */int) (short)-27125))))))));
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */unsigned int) var_11);
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162860
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
    var_15 = ((/* implicit */int) var_3);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) (+(((((/* implicit */int) var_4)) ^ (((/* implicit */int) arr_2 [i_0 - 1]))))));
        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) max((arr_2 [i_0 + 2]), (max((arr_2 [i_0 + 2]), (arr_2 [i_0 + 2]))))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 18; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_1] [i_2] [i_1] [i_3] [i_3] = ((/* implicit */_Bool) ((max((((/* implicit */int) ((((/* implicit */int) (unsigned short)5339)) >= (((/* implicit */int) arr_1 [i_0]))))), (((var_9) ? (((/* implicit */int) (short)-20162)) : (495636021))))) % (min((max((arr_11 [i_1] [i_1] [i_2] [i_1] [i_1] [i_2] [i_2]), (((/* implicit */int) (signed char)105)))), (((/* implicit */int) max((var_4), (((/* implicit */signed char) (_Bool)1)))))))));
                                var_17 += ((/* implicit */short) max((((/* implicit */unsigned long long int) (signed char)-71)), (max((((/* implicit */unsigned long long int) ((_Bool) 15069700315464653323ULL))), (min((3377043758244898297ULL), (arr_6 [i_1] [i_3] [i_4])))))));
                                arr_14 [i_0] [i_1] [i_2] [i_1] [i_1] [i_2] [i_0] = ((/* implicit */unsigned short) var_6);
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned short) (-(arr_8 [i_0] [i_0 + 2] [i_0 + 2] [i_0 + 1])));
                    var_19 = ((/* implicit */unsigned short) arr_1 [i_1]);
                    var_20 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_6 [i_0 + 2] [i_0] [i_0 - 1])) ? (arr_6 [i_0 - 1] [i_0 - 1] [i_0 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 1]))))), (arr_6 [i_0] [i_1] [i_2])));
                    var_21 = ((/* implicit */unsigned int) (signed char)116);
                }
            } 
        } 
        arr_15 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_12 [i_0] [(_Bool)1] [i_0] [i_0])))) ? (((/* implicit */int) (signed char)93)) : (((/* implicit */int) var_4))));
        arr_16 [i_0] [i_0] = ((/* implicit */unsigned int) 495636021);
    }
    for (unsigned short i_5 = 4; i_5 < 12; i_5 += 4) 
    {
        var_22 -= ((/* implicit */_Bool) (+(((/* implicit */int) max(((unsigned char)216), (((/* implicit */unsigned char) (_Bool)1)))))));
        /* LoopNest 3 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (unsigned short i_7 = 1; i_7 < 11; i_7 += 1) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    {
                        var_23 = ((((/* implicit */int) ((_Bool) arr_11 [i_5] [i_5 + 3] [i_5 + 2] [i_5 - 1] [i_5 - 4] [i_7 - 1] [i_7 + 2]))) <= (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)(-32767 - 1))))));
                        var_24 = ((/* implicit */int) (!(((/* implicit */_Bool) min(((unsigned short)14112), (((/* implicit */unsigned short) (_Bool)1)))))));
                    }
                } 
            } 
        } 
        arr_27 [i_5] = ((/* implicit */int) arr_5 [i_5] [i_5] [i_5]);
    }
}

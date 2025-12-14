/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137178
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        var_10 += ((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [(unsigned char)0]))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        var_11 = ((/* implicit */short) (~(((((/* implicit */_Bool) (unsigned short)54429)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_6 [i_0 + 1] [4U] [i_0] [i_3]))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 1; i_4 < 11; i_4 += 4) 
                        {
                            var_12 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_0] [i_3])) ? (((/* implicit */int) arr_7 [6U] [i_4] [(_Bool)1] [i_2] [i_1] [i_0])) : (((/* implicit */int) var_6))))) % (((((/* implicit */long long int) ((/* implicit */int) var_5))) | (-9223372036854775789LL)))));
                            var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_7 [i_4] [i_4] [i_4 + 1] [i_3] [i_3] [i_3])) : (((/* implicit */int) var_4))));
                            var_14 = ((/* implicit */_Bool) ((unsigned short) arr_7 [i_4] [(unsigned short)11] [i_4 - 1] [i_4 - 1] [(short)5] [i_3]));
                            var_15 = ((/* implicit */short) 9223372036854775789LL);
                        }
                        arr_12 [i_0] [i_2] [i_2] [i_0] [i_1] = ((/* implicit */long long int) arr_7 [(unsigned char)8] [(unsigned char)8] [i_0 - 1] [(unsigned char)1] [i_0 + 1] [i_0 + 1]);
                    }
                    var_16 = ((/* implicit */unsigned short) var_8);
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_5 = 0; i_5 < 12; i_5 += 4) 
        {
            for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_11 [i_0 - 1])))))));
                    arr_17 [(_Bool)1] [i_5] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : ((-(var_2)))));
                }
            } 
        } 
        arr_18 [i_0] = ((/* implicit */unsigned int) (signed char)31);
        arr_19 [i_0 + 1] [(short)2] |= ((/* implicit */short) ((((/* implicit */_Bool) 9223372036854775785LL)) ? (((/* implicit */int) ((short) arr_11 [(short)2]))) : (((/* implicit */int) ((_Bool) var_8)))));
    }
    /* LoopNest 2 */
    for (short i_7 = 3; i_7 < 11; i_7 += 4) 
    {
        for (unsigned int i_8 = 0; i_8 < 14; i_8 += 4) 
        {
            {
                /* LoopNest 3 */
                for (short i_9 = 3; i_9 < 12; i_9 += 3) 
                {
                    for (int i_10 = 0; i_10 < 14; i_10 += 3) 
                    {
                        for (short i_11 = 1; i_11 < 10; i_11 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_21 [i_10])) && (((/* implicit */_Bool) (-(((1601638563U) | (arr_20 [i_8]))))))));
                                var_19 = ((((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_7] [i_7]))) / (arr_20 [i_7]));
                                arr_32 [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_25 [i_7] [i_7]) ? (((/* implicit */int) ((((/* implicit */_Bool) 9223372036854775788LL)) && (((/* implicit */_Bool) var_8))))) : (((/* implicit */int) ((var_2) < (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))))) ? ((-((-(-9223372036854775800LL))))) : (((/* implicit */long long int) max(((~(((/* implicit */int) arr_25 [i_9] [i_8])))), (((/* implicit */int) (signed char)73)))))));
                                arr_33 [i_7] [i_7] [i_7] [i_7] [i_11 - 1] = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) var_1)) ? (max((((/* implicit */long long int) 1601638563U)), (-1LL))) : (((/* implicit */long long int) ((/* implicit */int) var_9))))));
                                arr_34 [i_7] [6U] [12] [i_7] [i_7] = ((/* implicit */unsigned short) ((unsigned long long int) ((arr_30 [i_7 + 2] [i_9 + 1] [i_7]) > (var_8))));
                            }
                        } 
                    } 
                } 
                var_20 += ((/* implicit */short) (-((+(((/* implicit */int) arr_31 [i_7] [i_7 + 2] [i_8] [5] [i_7 - 3] [i_7 - 2] [i_7 + 1]))))));
            }
        } 
    } 
}

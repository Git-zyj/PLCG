/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134459
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
    for (short i_0 = 4; i_0 < 15; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                arr_7 [i_0] = ((/* implicit */unsigned int) min((((((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))) ? (min((((/* implicit */int) (unsigned short)36063)), (1563529205))) : (var_14))), (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_6 [14] [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (1018517047U)))))));
                arr_8 [i_0 + 2] [i_0 + 2] [i_1] = ((short) (-(((/* implicit */int) var_8))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (unsigned int i_3 = 2; i_3 < 13; i_3 += 4) 
        {
            for (short i_4 = 1; i_4 < 15; i_4 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 4) 
                    {
                        for (unsigned char i_6 = 2; i_6 < 14; i_6 += 1) 
                        {
                            {
                                arr_20 [i_2] [i_3] [i_3] [i_5] [(unsigned char)7] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_14 [i_6 + 1] [i_4 + 1] [i_2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)31967))))));
                                var_16 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_3 + 2] [i_4 + 1])) ? (((/* implicit */int) (unsigned short)36058)) : (((/* implicit */int) (unsigned short)36058))))) ? (((((/* implicit */_Bool) (unsigned short)36082)) ? (max((2043279780U), (((/* implicit */unsigned int) (unsigned short)24248)))) : ((~(1137617866U))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
                                arr_21 [i_2] [i_3] [i_5] [i_4 - 1] [i_4] [i_2] [i_3] = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) 0)) ? (((((/* implicit */_Bool) (short)30826)) ? (-473166374) : (((/* implicit */int) (unsigned short)36084)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 4095222065U))))))));
                                var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) var_9))) ? (((arr_6 [i_4 + 1] [i_3] [i_3 + 2]) - (arr_6 [i_4 + 1] [i_4 + 1] [i_3 + 2]))) : ((+(((/* implicit */int) arr_9 [i_5] [i_4 + 1])))))))));
                                arr_22 [i_2] [i_2] [i_4] [i_5] [i_6 - 1] = ((/* implicit */unsigned char) 3276450249U);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 1) 
                    {
                        for (signed char i_8 = 4; i_8 < 14; i_8 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */signed char) ((((unsigned int) ((((/* implicit */int) (unsigned short)36058)) + (((/* implicit */int) (unsigned short)64474))))) << (((((/* implicit */int) (unsigned short)29451)) - (29451)))));
                                arr_27 [i_2] [i_3] [i_4] [i_7] [i_2] = ((/* implicit */signed char) 2085176099);
                                var_19 = ((/* implicit */unsigned int) (((+(16853034237118594839ULL))) == (((unsigned long long int) arr_13 [i_3 - 2] [i_4] [i_4 - 1] [i_8 + 2]))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) min(((!(((/* implicit */_Bool) arr_16 [(unsigned char)5] [i_2] [i_3 + 1] [i_4 + 1] [(unsigned short)13] [i_4 - 1])))), ((!(((/* implicit */_Bool) arr_16 [10ULL] [i_3 - 1] [i_4 + 1] [i_4 + 1] [i_3 + 2] [i_4 + 1])))))))));
                    arr_28 [i_2] [i_2] = ((/* implicit */long long int) ((short) var_13));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned short) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) % ((+(3338263356515170512ULL)))))));
    var_22 = ((/* implicit */unsigned int) var_8);
    /* LoopNest 2 */
    for (signed char i_9 = 1; i_9 < 15; i_9 += 3) 
    {
        for (int i_10 = 0; i_10 < 17; i_10 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_11 = 1; i_11 < 13; i_11 += 2) 
                {
                    for (signed char i_12 = 1; i_12 < 16; i_12 += 2) 
                    {
                        {
                            var_23 = ((/* implicit */int) (unsigned short)29460);
                            var_24 -= (-(((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (short)4188)) ? (437261845) : (731904632))))));
                            var_25 = ((/* implicit */short) ((signed char) (-(((/* implicit */int) min((((/* implicit */unsigned short) var_5)), (arr_1 [i_11] [i_12])))))));
                            arr_40 [i_9] [i_9] [i_10] [i_9] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)73))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (signed char i_13 = 0; i_13 < 17; i_13 += 1) 
                {
                    for (int i_14 = 0; i_14 < 17; i_14 += 2) 
                    {
                        for (signed char i_15 = 3; i_15 < 14; i_15 += 3) 
                        {
                            {
                                var_26 = ((/* implicit */short) (!((!(((/* implicit */_Bool) arr_39 [i_15 - 3] [i_10] [i_9 + 1] [4U]))))));
                                var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) (_Bool)1))));
                            }
                        } 
                    } 
                } 
                var_28 = ((/* implicit */unsigned long long int) (unsigned short)29477);
                arr_47 [i_9] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))) + (0U)));
            }
        } 
    } 
}

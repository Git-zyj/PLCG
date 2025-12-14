/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102330
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
    var_20 = ((/* implicit */unsigned short) var_3);
    var_21 &= ((/* implicit */_Bool) max((((/* implicit */int) var_3)), ((+(((/* implicit */int) max((((/* implicit */unsigned short) var_14)), ((unsigned short)21611))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 4; i_0 < 9; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_0] = ((/* implicit */_Bool) (((((-(((/* implicit */int) max((((/* implicit */unsigned short) var_18)), (var_15)))))) + (2147483647))) << (((((/* implicit */int) (unsigned char)75)) - (75)))));
                    var_22 = arr_6 [i_2] [i_0] [i_0];
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned short) (-(((/* implicit */int) max((min((arr_9 [i_2] [(unsigned short)7] [(unsigned short)0]), (var_11))), (((/* implicit */unsigned short) var_4)))))));
                                var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) max((arr_2 [(unsigned char)4] [i_1]), (var_7)))), (max((var_19), (((/* implicit */unsigned short) var_3))))))) ? (((((/* implicit */_Bool) (unsigned char)200)) ? (((/* implicit */int) arr_10 [(unsigned char)4] [i_1] [i_0] [i_3] [i_4] [i_2])) : (((/* implicit */int) arr_5 [i_0])))) : (((/* implicit */int) ((unsigned char) (_Bool)1)))));
                                arr_14 [i_0] [(unsigned short)5] [i_2] [i_3] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) arr_2 [i_3] [i_3])) << (((/* implicit */int) var_6)))))) ? ((-(((/* implicit */int) ((_Bool) (_Bool)1))))) : ((~(((/* implicit */int) var_7))))));
                                var_25 = ((/* implicit */unsigned short) min((((/* implicit */unsigned char) (!((_Bool)1)))), (arr_13 [(unsigned short)5] [i_1] [i_1] [i_3] [i_4] [i_2])));
                            }
                        } 
                    } 
                    arr_15 [i_2] [i_0] [i_2] [i_2] = ((/* implicit */unsigned short) arr_2 [i_0] [i_1]);
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (unsigned char i_6 = 0; i_6 < 15; i_6 += 4) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    arr_24 [i_5] [i_6] [i_7] = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 0; i_8 < 15; i_8 += 4) 
                    {
                        for (unsigned char i_9 = 2; i_9 < 13; i_9 += 1) 
                        {
                            {
                                arr_30 [i_9] [i_5] [i_7] [i_5] [i_5] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned char) ((unsigned char) var_17))))));
                                var_26 -= ((/* implicit */unsigned short) min((((/* implicit */int) var_7)), (((((/* implicit */int) var_2)) | (((/* implicit */int) (_Bool)1))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_10 = 0; i_10 < 15; i_10 += 1) 
                    {
                        for (unsigned short i_11 = 2; i_11 < 12; i_11 += 3) 
                        {
                            {
                                var_27 = ((/* implicit */unsigned char) min(((((_Bool)0) ? (((/* implicit */int) (unsigned char)147)) : (((/* implicit */int) var_7)))), (min((((((/* implicit */_Bool) (unsigned short)28318)) ? (((/* implicit */int) arr_33 [i_5] [i_5] [(_Bool)1] [i_10] [i_11])) : (((/* implicit */int) arr_36 [i_5] [i_6] [i_5] [i_10] [i_10] [i_11] [i_11])))), (((/* implicit */int) ((unsigned short) var_6)))))));
                                var_28 = (_Bool)1;
                                var_29 = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) min(((_Bool)0), ((_Bool)1))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143848
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
    var_15 = ((/* implicit */short) ((((((/* implicit */_Bool) ((unsigned short) (_Bool)0))) ? (var_7) : (2054235865))) / (((/* implicit */int) var_4))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_3 [i_1] [i_0])) ? (((/* implicit */int) ((unsigned char) var_10))) : ((~(-1)))))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 2; i_2 < 10; i_2 += 2) 
                {
                    for (signed char i_3 = 1; i_3 < 8; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [(unsigned char)8] [i_3] [i_4] = ((((/* implicit */_Bool) (-(((/* implicit */int) min((((/* implicit */short) (_Bool)0)), (arr_7 [i_1] [i_1]))))))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3)))) : (((/* implicit */int) (_Bool)1)));
                                arr_13 [i_0] [i_0] [(_Bool)1] [(short)3] = ((/* implicit */short) var_7);
                                arr_14 [i_2] [(unsigned short)4] [i_2] [i_2] [(unsigned short)4] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) (+(((/* implicit */int) var_2)))))))) + ((+(((/* implicit */int) (signed char)111))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 4; i_5 < 14; i_5 += 2) 
    {
        for (unsigned short i_6 = 0; i_6 < 16; i_6 += 1) 
        {
            {
                var_16 += ((/* implicit */signed char) min((var_7), (((((((/* implicit */int) var_8)) * (((/* implicit */int) var_4)))) | ((+(var_6)))))));
                arr_19 [i_5] [i_6] = ((((/* implicit */_Bool) ((((((/* implicit */int) var_14)) - (((/* implicit */int) var_2)))) | (max((var_6), (((/* implicit */int) arr_17 [i_5 - 2] [i_6]))))))) ? ((~(max((var_7), (arr_18 [i_5] [i_6]))))) : ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (-430698226))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_7 = 4; i_7 < 15; i_7 += 2) 
    {
        for (unsigned short i_8 = 2; i_8 < 17; i_8 += 3) 
        {
            for (short i_9 = 3; i_9 < 17; i_9 += 2) 
            {
                {
                    var_17 *= ((/* implicit */unsigned char) arr_25 [i_7] [i_7 - 2] [i_9] [6]);
                    var_18 += ((/* implicit */signed char) ((((((/* implicit */int) var_10)) | (((/* implicit */int) arr_21 [(_Bool)1] [i_7 - 4])))) % (((/* implicit */int) var_4))));
                    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-113)) ? ((~(((((/* implicit */_Bool) (signed char)111)) ? (((/* implicit */int) (unsigned char)127)) : (((/* implicit */int) var_5)))))) : (((/* implicit */int) (signed char)109))));
                }
            } 
        } 
    } 
}

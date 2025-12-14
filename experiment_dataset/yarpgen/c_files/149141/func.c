/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149141
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    var_20 *= (short)0;
                    arr_9 [i_1] = ((/* implicit */short) (_Bool)1);
                    var_21 = ((/* implicit */short) ((signed char) ((((/* implicit */int) arr_1 [i_0])) - (((/* implicit */int) (unsigned char)59)))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            {
                                arr_14 [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)56)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (signed char)33))));
                                var_22 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_4] [i_3] [0U] [i_1] [i_0])) ? (((/* implicit */int) arr_12 [i_0] [i_1] [6LL] [i_3] [i_4])) : (((/* implicit */int) arr_12 [2ULL] [i_1] [8ULL] [(unsigned char)0] [2ULL]))))) ? (((((/* implicit */_Bool) arr_12 [i_0] [i_3] [(_Bool)1] [i_3] [i_4])) ? (((/* implicit */int) arr_12 [i_0] [6LL] [(short)4] [i_4] [i_4])) : (((/* implicit */int) arr_12 [i_0] [i_0] [(short)6] [i_0] [i_0])))) : (((/* implicit */int) arr_12 [(unsigned char)6] [i_3] [6LL] [(unsigned char)8] [(unsigned char)8]))));
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_3] = ((/* implicit */unsigned long long int) ((unsigned char) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)140))) : (10363868396993606184ULL))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */short) ((((/* implicit */int) ((signed char) arr_8 [(short)8] [(short)8] [i_2]))) + (((((/* implicit */int) ((unsigned char) (short)28014))) | (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)64))) != (13070258297785016783ULL))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_5 = 0; i_5 < 17; i_5 += 2) 
    {
        for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 1) 
        {
            {
                var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-17)) ? (arr_17 [i_5]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)141)))));
                arr_21 [i_6] [i_6] = ((/* implicit */unsigned int) (unsigned char)183);
                var_25 = ((/* implicit */unsigned char) ((short) (unsigned char)246));
                arr_22 [i_6] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_17 [i_5])) ? (((/* implicit */int) arr_16 [i_5])) : (((/* implicit */int) arr_20 [6U] [i_5] [i_5])))) | (((/* implicit */int) arr_16 [i_5]))));
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned int) var_15);
}

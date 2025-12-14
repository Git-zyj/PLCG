/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16736
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
    var_10 = ((/* implicit */unsigned char) var_1);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 23; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 1; i_3 < 22; i_3 += 1) 
                    {
                        {
                            var_11 = ((/* implicit */short) 565331734U);
                            arr_10 [i_0] [(_Bool)1] [(short)11] [14] [(_Bool)1] [i_2] = ((/* implicit */int) (unsigned short)2715);
                        }
                    } 
                } 
                var_12 |= ((/* implicit */short) min((((/* implicit */unsigned int) min((var_4), (arr_6 [i_1 - 1] [i_1 - 1] [i_1 + 1])))), (((((/* implicit */_Bool) arr_1 [(unsigned char)10])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_1 [10ULL])))));
                var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_0 [i_0] [i_1 - 2])) ? (arr_5 [i_1] [(_Bool)1]) : (((/* implicit */int) (short)-10916)))), (((((/* implicit */int) arr_0 [i_0] [i_1])) + (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) (signed char)120)) : ((+(((/* implicit */int) (unsigned short)62820))))));
                /* LoopNest 3 */
                for (short i_4 = 0; i_4 < 24; i_4 += 1) 
                {
                    for (short i_5 = 0; i_5 < 24; i_5 += 3) 
                    {
                        for (unsigned long long int i_6 = 2; i_6 < 22; i_6 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_0 [(_Bool)1] [i_1 + 1]))))), (min((var_3), (((/* implicit */unsigned short) (short)32767))))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
                                var_15 = ((((_Bool) var_3)) ? (max((var_8), (((/* implicit */unsigned int) arr_16 [i_0] [(unsigned char)1] [i_4] [i_5])))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))));
                            }
                        } 
                    } 
                } 
                arr_20 [i_1 - 2] [i_0] [i_0] = ((/* implicit */short) arr_14 [i_0] [i_0] [i_1 - 2] [i_0]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_7 = 0; i_7 < 22; i_7 += 1) 
    {
        for (short i_8 = 0; i_8 < 22; i_8 += 4) 
        {
            {
                arr_25 [i_7] = ((/* implicit */unsigned long long int) (unsigned short)18724);
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_9 = 0; i_9 < 22; i_9 += 2) 
                {
                    arr_28 [i_7] [i_7] [i_8] [i_7] = ((((/* implicit */int) arr_16 [i_9] [i_9] [i_8] [(short)1])) | (((/* implicit */int) arr_8 [i_8] [i_8])));
                    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */unsigned long long int) var_2)) : (2601208426420012924ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) var_8)) ? (3727014959U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                }
                arr_29 [i_7] [i_8] = min(((short)4095), (((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) 2601208426420012931ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_24 [i_7])))))));
            }
        } 
    } 
    var_17 = ((/* implicit */_Bool) var_3);
}

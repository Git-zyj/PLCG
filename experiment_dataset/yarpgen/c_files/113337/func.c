/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113337
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
    for (unsigned short i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    for (unsigned char i_3 = 2; i_3 < 14; i_3 += 3) 
                    {
                        {
                            var_19 ^= ((/* implicit */unsigned char) var_3);
                            arr_11 [i_3] [i_3] [i_3] [i_0] = ((/* implicit */unsigned short) var_16);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_4 = 0; i_4 < 15; i_4 += 2) 
                {
                    for (unsigned long long int i_5 = 1; i_5 < 13; i_5 += 3) 
                    {
                        for (int i_6 = 2; i_6 < 12; i_6 += 2) 
                        {
                            {
                                arr_21 [i_6] [i_5] [i_4] [i_4] [i_1] [(unsigned char)2] = ((/* implicit */unsigned short) ((unsigned char) ((var_4) ? (((/* implicit */int) (unsigned char)236)) : (((/* implicit */int) var_1)))));
                                arr_22 [14ULL] [i_1] [14ULL] [i_1] [i_1] [i_1] = min((((((/* implicit */_Bool) (unsigned char)190)) ? (((/* implicit */int) var_12)) : (arr_10 [i_4] [i_4]))), (((((/* implicit */_Bool) arr_7 [i_0 + 2] [i_5 - 1] [i_6 - 2])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)59)))));
                                arr_23 [i_0] [i_5] [i_6] = ((/* implicit */unsigned char) min((((/* implicit */int) arr_8 [i_0] [(unsigned short)5] [i_4] [(_Bool)0])), (arr_9 [i_0] [i_6])));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            for (unsigned char i_9 = 0; i_9 < 16; i_9 += 3) 
            {
                {
                    arr_32 [i_7] = ((/* implicit */unsigned char) (~((~(min((var_0), (((/* implicit */int) arr_30 [i_7] [i_8] [i_9] [i_8]))))))));
                    arr_33 [i_7] = ((/* implicit */unsigned long long int) (+((+(((/* implicit */int) arr_25 [i_7] [i_7]))))));
                }
            } 
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168033
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
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned int i_1 = 3; i_1 < 19; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_2] [i_2] [i_0] = ((/* implicit */unsigned short) 67108848);
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) (unsigned char)255);
                    arr_9 [i_2] [i_0] [i_2] [i_2] = ((/* implicit */unsigned int) (unsigned short)33525);
                    arr_10 [i_0] [i_0] = ((/* implicit */long long int) (unsigned char)18);
                    arr_11 [(unsigned char)6] [i_0] [(unsigned char)6] [i_2] = ((/* implicit */unsigned int) -1LL);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_3 = 1; i_3 < 13; i_3 += 1) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 1) 
        {
            {
                arr_16 [i_3] [10LL] = ((/* implicit */unsigned short) (short)-32756);
                arr_17 [i_3 - 1] [(unsigned char)0] = ((/* implicit */unsigned int) -12LL);
                arr_18 [(unsigned short)3] [i_3] [(unsigned short)3] = ((/* implicit */unsigned long long int) 1545558462U);
                arr_19 [0LL] = ((/* implicit */unsigned int) (signed char)10);
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_5 = 3; i_5 < 11; i_5 += 3) 
    {
        for (unsigned char i_6 = 0; i_6 < 14; i_6 += 1) 
        {
            {
                arr_25 [0ULL] = ((/* implicit */long long int) 7925504178708802323ULL);
                arr_26 [i_5] = (unsigned char)84;
                arr_27 [0U] = ((/* implicit */long long int) (unsigned char)1);
            }
        } 
    } 
}

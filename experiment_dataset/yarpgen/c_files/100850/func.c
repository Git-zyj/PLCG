/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100850
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
    for (signed char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 15; i_2 += 2) /* same iter space */
                {
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */int) 18002013431936671337ULL);
                    var_15 = ((/* implicit */short) (signed char)(-127 - 1));
                    arr_9 [i_1] = ((/* implicit */unsigned short) (signed char)124);
                }
                for (unsigned char i_3 = 0; i_3 < 15; i_3 += 2) /* same iter space */
                {
                    arr_12 [11] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (signed char)124);
                    arr_13 [i_3] [(unsigned short)2] [(unsigned short)2] &= ((/* implicit */long long int) 422212465065984ULL);
                    arr_14 [i_0] [1] [i_0] = ((/* implicit */unsigned int) 53488256);
                    arr_15 [4ULL] [(_Bool)1] [2LL] = ((/* implicit */unsigned char) (signed char)-124);
                }
                arr_16 [(unsigned char)0] [i_1] [(unsigned char)0] = ((/* implicit */signed char) 18002013431936671337ULL);
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned int i_4 = 4; i_4 < 13; i_4 += 3) /* same iter space */
    {
        var_16 = ((/* implicit */long long int) (signed char)116);
        arr_19 [i_4] = 9887260243973725435ULL;
    }
    for (unsigned int i_5 = 4; i_5 < 13; i_5 += 3) /* same iter space */
    {
        var_17 += ((/* implicit */unsigned int) (signed char)123);
        var_18 = ((/* implicit */signed char) (unsigned short)127);
        var_19 += ((/* implicit */unsigned int) (_Bool)1);
    }
    var_20 = ((/* implicit */unsigned long long int) (unsigned short)11099);
}

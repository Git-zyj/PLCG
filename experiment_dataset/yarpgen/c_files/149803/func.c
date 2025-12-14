/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149803
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
    for (short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (int i_2 = 1; i_2 < 7; i_2 += 4) 
            {
                for (unsigned char i_3 = 0; i_3 < 11; i_3 += 1) 
                {
                    {
                        var_14 = (-(((/* implicit */int) arr_6 [i_0] [i_1] [i_3])));
                        arr_8 [i_3] [i_3] [4] [i_3] [i_3] [i_3] = var_13;
                        arr_9 [i_0] [7] [i_2] = -1225955600;
                        var_15 *= ((/* implicit */signed char) 32767U);
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (int i_5 = 1; i_5 < 10; i_5 += 1) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 4) 
                {
                    {
                        arr_16 [i_0] [i_4] [i_6] [i_6] = ((/* implicit */unsigned short) ((unsigned long long int) var_10));
                        var_16 ^= ((/* implicit */long long int) min(((((+(-674110459))) & (((/* implicit */int) arr_0 [i_0] [i_4])))), (((/* implicit */int) var_8))));
                        arr_17 [i_5] [i_4] [i_0] [i_6] = (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)2403)) : (((/* implicit */int) arr_10 [i_0]))))) ? (((((/* implicit */_Bool) arr_13 [i_5] [i_4] [i_5] [2U])) ? (((/* implicit */int) arr_6 [i_5] [i_4] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0])))) : ((-(((/* implicit */int) var_3)))))));
                    }
                } 
            } 
        } 
    }
    var_17 = ((/* implicit */long long int) var_0);
}

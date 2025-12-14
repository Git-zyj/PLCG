/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152776
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 22; i_2 += 1) 
            {
                {
                    var_20 *= ((/* implicit */signed char) var_7);
                    var_21 ^= (+(((/* implicit */int) (((~(((/* implicit */int) (_Bool)1)))) >= (((/* implicit */int) (unsigned char)255))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (long long int i_4 = 3; i_4 < 14; i_4 += 3) 
        {
            for (unsigned int i_5 = 0; i_5 < 17; i_5 += 2) 
            {
                {
                    arr_16 [i_5] [i_4] [(_Bool)1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) var_19)) ? (var_4) : (((/* implicit */int) (unsigned short)29300))))))) ? ((~(arr_1 [i_5]))) : (((/* implicit */int) (_Bool)1))));
                    /* LoopSeq 2 */
                    for (unsigned short i_6 = 0; i_6 < 17; i_6 += 3) 
                    {
                        arr_19 [i_3] [i_5] [(short)3] [i_6] [i_4] [i_3] = ((unsigned long long int) arr_3 [(_Bool)1] [i_5]);
                        var_22 = ((long long int) (~(((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned short)49805)) : (((/* implicit */int) (unsigned short)29301))))));
                        arr_20 [(signed char)14] [(_Bool)1] [i_5] [i_5] [i_5] = ((/* implicit */signed char) var_1);
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        arr_23 [i_7] [i_5] [i_5] [i_3] [i_3] [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_3] [i_4] [4LL])) ? (((/* implicit */long long int) (+(((/* implicit */int) var_6))))) : (max((arr_15 [i_3]), (((/* implicit */long long int) (unsigned short)29300)))))))));
                        var_23 |= ((/* implicit */unsigned short) -26LL);
                        var_24 = ((/* implicit */_Bool) min((var_24), ((_Bool)1)));
                    }
                }
            } 
        } 
    } 
}

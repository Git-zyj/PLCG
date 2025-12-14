/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10480
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
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = (unsigned short)30531;
        arr_4 [i_0] [i_0] |= ((/* implicit */_Bool) max((((/* implicit */long long int) ((arr_1 [i_0]) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))))), (max(((~(var_7))), (((/* implicit */long long int) min(((unsigned short)63808), (((/* implicit */unsigned short) (_Bool)1)))))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 3; i_1 < 15; i_1 += 4) 
    {
        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) 9223372036854775792LL))));
        /* LoopNest 3 */
        for (unsigned short i_2 = 1; i_2 < 15; i_2 += 4) 
        {
            for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        var_20 = arr_12 [i_1 - 2];
                        arr_15 [i_1] [i_2] [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_1 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) : (arr_7 [i_3 + 1] [i_1 - 1])));
                    }
                } 
            } 
        } 
        var_21 += ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_9 [i_1 + 1] [i_1] [i_1])) ? (((/* implicit */int) arr_8 [i_1] [i_1])) : (((/* implicit */int) var_17)))) ^ (((/* implicit */int) arr_9 [i_1 - 1] [i_1 - 1] [i_1 - 1]))));
        arr_16 [i_1 - 2] = ((/* implicit */unsigned char) ((arr_0 [i_1 + 1] [i_1 - 1]) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)151))));
    }
    /* LoopNest 2 */
    for (unsigned char i_5 = 0; i_5 < 17; i_5 += 4) 
    {
        for (unsigned short i_6 = 0; i_6 < 17; i_6 += 4) 
        {
            {
                var_22 = ((/* implicit */long long int) arr_23 [i_5]);
                /* LoopNest 2 */
                for (unsigned char i_7 = 0; i_7 < 17; i_7 += 4) 
                {
                    for (unsigned short i_8 = 0; i_8 < 17; i_8 += 4) 
                    {
                        {
                            var_23 = ((/* implicit */long long int) ((_Bool) (-(((/* implicit */int) max(((unsigned short)0), ((unsigned short)8696)))))));
                            var_24 += ((/* implicit */unsigned short) arr_17 [i_7]);
                        }
                    } 
                } 
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned short) var_15);
}

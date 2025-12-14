/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148307
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
    for (unsigned int i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) (_Bool)1))) ? (((arr_2 [i_0] [i_0 + 2]) - (arr_2 [i_2] [i_2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                    var_14 -= ((/* implicit */short) ((var_11) / (((/* implicit */long long int) arr_4 [i_2]))));
                    arr_9 [i_0] [i_0] = var_0;
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */_Bool) (~(min((max((1456927625U), (67108832U))), (((/* implicit */unsigned int) var_1))))));
    /* LoopSeq 2 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
    {
        var_16 ^= ((/* implicit */unsigned int) ((var_5) & (((/* implicit */unsigned long long int) (+(arr_10 [i_3]))))));
        var_17 = arr_12 [i_3] [i_3];
        var_18 = ((/* implicit */long long int) var_1);
    }
    /* vectorizable */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned char) ((-6142880756955318760LL) == (((/* implicit */long long int) ((/* implicit */int) ((short) arr_13 [i_4]))))));
        /* LoopSeq 2 */
        for (unsigned int i_5 = 0; i_5 < 15; i_5 += 1) 
        {
            var_20 = ((/* implicit */_Bool) (((-(var_5))) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)25304)))));
            /* LoopNest 3 */
            for (unsigned char i_6 = 1; i_6 < 14; i_6 += 4) 
            {
                for (long long int i_7 = 0; i_7 < 15; i_7 += 2) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 15; i_8 += 2) 
                    {
                        {
                            var_21 = ((arr_19 [i_4] [i_4] [i_4] [i_4]) - (((arr_15 [i_4]) % (((/* implicit */long long int) ((/* implicit */int) (short)11191))))));
                            var_22 = ((((/* implicit */int) ((((/* implicit */int) (short)-25284)) >= (((/* implicit */int) (short)21353))))) >> (((((arr_21 [i_8] [i_7] [i_6] [i_5] [i_4]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)25297))))) - (8181ULL))));
                        }
                    } 
                } 
            } 
        }
        for (long long int i_9 = 4; i_9 < 14; i_9 += 3) 
        {
            var_23 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_19 [i_9 - 4] [i_9 + 1] [i_9] [i_9])) ? (((/* implicit */long long int) var_8)) : (arr_19 [i_9 - 4] [i_9 - 1] [i_9] [(unsigned short)10])));
            var_24 = ((((/* implicit */_Bool) 4056820544U)) ? (((/* implicit */int) (short)25282)) : (-2147483643));
        }
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100419
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
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_10 = ((/* implicit */signed char) min((var_10), (((/* implicit */signed char) ((((/* implicit */long long int) ((int) ((long long int) var_6)))) > ((~(((((/* implicit */long long int) 527015836)) / (3866961066937392928LL))))))))));
        var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) (~(-3822712822572571191LL))))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            arr_6 [i_0] [i_1] = ((/* implicit */signed char) 722582964950894134LL);
            arr_7 [i_1] [i_0] = ((/* implicit */unsigned short) var_6);
        }
        arr_8 [10LL] [i_0] = ((/* implicit */long long int) (((~(443809883))) ^ (((/* implicit */int) (short)-18))));
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 13; i_2 += 3) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 15; i_4 += 1) 
                {
                    for (signed char i_5 = 1; i_5 < 14; i_5 += 1) 
                    {
                        for (int i_6 = 1; i_6 < 13; i_6 += 2) 
                        {
                            {
                                arr_22 [i_2] [(unsigned char)5] [i_4] [i_5] [i_6] = ((/* implicit */unsigned char) 527015836);
                                arr_23 [i_2 + 2] [i_2] [i_5] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) ((_Bool) (signed char)-100))) >= ((-(((/* implicit */int) (signed char)-113))))));
                                var_12 = ((/* implicit */short) (-(min((((/* implicit */unsigned long long int) var_5)), (8472553150880157317ULL)))));
                            }
                        } 
                    } 
                } 
                arr_24 [i_3] = ((/* implicit */short) (unsigned char)255);
                arr_25 [(signed char)0] = ((/* implicit */_Bool) (unsigned char)255);
                arr_26 [i_2 + 1] [i_2 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) <= (((/* implicit */int) var_2))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_7 = 0; i_7 < 25; i_7 += 4) 
    {
        for (unsigned char i_8 = 0; i_8 < 25; i_8 += 1) 
        {
            {
                arr_32 [i_7] = ((/* implicit */signed char) var_7);
                arr_33 [i_7] [i_8] = ((/* implicit */unsigned int) ((((((/* implicit */int) var_9)) >= (((/* implicit */int) (short)1)))) ? (((/* implicit */int) ((signed char) 3857780160U))) : (((/* implicit */int) ((signed char) 4457381538043499429ULL)))));
            }
        } 
    } 
}

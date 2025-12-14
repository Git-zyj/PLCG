/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153204
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
    for (unsigned short i_0 = 3; i_0 < 21; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    var_10 = ((/* implicit */signed char) (~(((/* implicit */int) ((short) var_5)))));
                    var_11 |= ((/* implicit */unsigned long long int) ((short) (+(arr_3 [i_0 - 3] [i_0 + 1]))));
                }
            } 
        } 
        var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) (+(min((((/* implicit */unsigned int) (~(((/* implicit */int) (short)32737))))), (((var_9) * (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0 - 2]))))))))))));
    }
    for (short i_3 = 2; i_3 < 19; i_3 += 1) 
    {
        /* LoopNest 3 */
        for (signed char i_4 = 1; i_4 < 16; i_4 += 1) 
        {
            for (short i_5 = 0; i_5 < 20; i_5 += 1) 
            {
                for (long long int i_6 = 1; i_6 < 19; i_6 += 2) 
                {
                    {
                        var_13 = ((/* implicit */short) min((var_0), (((/* implicit */long long int) (unsigned short)2))));
                        var_14 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (short)-32738)) ? (2199023255551ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_3 - 2] [i_4] [i_5])))))))) ? (2199023255551ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
                        arr_21 [i_3 - 1] [i_4] [i_3 - 1] [i_3 - 1] = ((/* implicit */int) 425180006U);
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned char i_7 = 1; i_7 < 17; i_7 += 1) 
        {
            for (int i_8 = 2; i_8 < 19; i_8 += 4) 
            {
                for (short i_9 = 0; i_9 < 20; i_9 += 2) 
                {
                    {
                        var_15 = (+(3869787305U));
                        var_16 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) arr_7 [i_7] [i_3 - 1] [i_8 - 1])))))));
                        var_17 += ((/* implicit */_Bool) ((min((107209821U), (((/* implicit */unsigned int) (signed char)-6)))) & (((unsigned int) arr_5 [i_8 - 1] [i_8 - 1] [i_9]))));
                        var_18 ^= ((/* implicit */long long int) (signed char)20);
                        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((int) ((((/* implicit */_Bool) arr_6 [i_9] [i_7 + 3] [i_8] [i_9])) ? (((/* implicit */long long int) arr_3 [i_7 + 2] [i_8])) : (var_3)))))));
                    }
                } 
            } 
        } 
    }
    var_20 = ((/* implicit */int) var_2);
}

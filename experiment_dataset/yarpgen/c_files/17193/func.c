/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17193
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
    var_11 = ((/* implicit */unsigned char) ((unsigned int) ((((((/* implicit */_Bool) var_3)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) % (min((((/* implicit */unsigned int) (short)-810)), (var_2))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) arr_1 [i_0]);
        var_12 = ((/* implicit */unsigned char) ((arr_1 [i_0]) | (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_5)) : (arr_1 [i_0])))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 22; i_1 += 2) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned int) arr_1 [(unsigned char)4]);
        var_14 = ((unsigned long long int) (~(var_6)));
    }
    /* vectorizable */
    for (unsigned char i_2 = 0; i_2 < 22; i_2 += 2) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_2] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2] [i_2]))) : (6607336729411550970ULL))))));
        var_16 *= ((/* implicit */_Bool) ((var_6) * (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2])))));
        /* LoopSeq 3 */
        for (short i_3 = 0; i_3 < 22; i_3 += 4) 
        {
            var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) arr_0 [i_3]))));
            var_18 = ((/* implicit */long long int) ((((arr_8 [i_2] [i_3]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2]))))) <= (arr_8 [14ULL] [i_2])));
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            arr_12 [i_2] [i_2] = ((/* implicit */unsigned int) arr_4 [i_2]);
            var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */int) var_10)) + (2147483647))) << (((288230376151711740ULL) - (288230376151711740ULL)))))) ? (arr_11 [i_2] [i_2]) : (((/* implicit */unsigned int) arr_7 [i_4]))));
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned int i_6 = 1; i_6 < 19; i_6 += 3) 
            {
                for (long long int i_7 = 0; i_7 < 22; i_7 += 1) 
                {
                    for (signed char i_8 = 0; i_8 < 22; i_8 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) | (((/* implicit */int) arr_3 [i_5] [i_8])))))));
                            arr_23 [i_7] = ((/* implicit */unsigned short) (short)-14737);
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (signed char i_9 = 1; i_9 < 19; i_9 += 4) 
            {
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    {
                        var_21 *= ((/* implicit */unsigned char) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)144))) % (arr_1 [i_9])))));
                        var_22 = ((/* implicit */int) var_0);
                    }
                } 
            } 
        }
    }
}

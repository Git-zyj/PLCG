/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122552
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
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */long long int) max((var_18), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) min((arr_1 [i_0]), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_4)))))))) : (2251791223750656LL)))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_19 |= ((/* implicit */unsigned short) ((((/* implicit */long long int) min((var_11), (((/* implicit */unsigned int) arr_4 [i_0]))))) > (((((/* implicit */_Bool) 1152921504606846975LL)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_4])))))));
                                arr_11 [i_0] [9U] [9U] [i_3] = ((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) min((-1), (((/* implicit */int) (unsigned short)16384))))), (var_1))) << (((10324209829817261816ULL) - (10324209829817261780ULL)))));
                            }
                        } 
                    } 
                    arr_12 [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((_Bool) 31)))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (int i_5 = 0; i_5 < 22; i_5 += 4) 
    {
        arr_15 [14LL] [i_5] = ((/* implicit */_Bool) arr_14 [i_5]);
        /* LoopNest 2 */
        for (unsigned short i_6 = 0; i_6 < 22; i_6 += 4) 
        {
            for (unsigned short i_7 = 2; i_7 < 20; i_7 += 1) 
            {
                {
                    var_20 = min((((((((/* implicit */long long int) ((/* implicit */int) arr_18 [i_5]))) - (4323455642275676160LL))) + (((/* implicit */long long int) ((/* implicit */int) var_15))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_7 + 1])) || (((/* implicit */_Bool) arr_14 [i_7 - 1]))))));
                    var_21 &= ((/* implicit */signed char) 5631918179065559082ULL);
                }
            } 
        } 
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 12814825894643992554ULL)) ? (12814825894643992530ULL) : (12814825894643992527ULL)));
        var_23 |= ((/* implicit */int) (-(((((/* implicit */_Bool) 12814825894643992544ULL)) ? (-4323455642275676188LL) : (((/* implicit */long long int) arr_16 [i_5]))))));
        var_24 |= ((/* implicit */int) min((((-1LL) ^ (((/* implicit */long long int) 3908726294U)))), (((/* implicit */long long int) ((((/* implicit */int) min((var_4), (arr_18 [i_5])))) < (((/* implicit */int) ((-5LL) >= (((/* implicit */long long int) ((/* implicit */int) var_9)))))))))));
    }
    /* vectorizable */
    for (unsigned int i_8 = 0; i_8 < 11; i_8 += 1) 
    {
        var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)35519)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) arr_6 [i_8])))))));
        arr_22 [i_8] = ((/* implicit */unsigned long long int) ((long long int) (signed char)-109));
        var_26 |= ((/* implicit */int) (-(((1623840519158955433LL) + (((/* implicit */long long int) arr_9 [8U] [i_8] [i_8] [i_8]))))));
        var_27 += ((/* implicit */unsigned short) arr_2 [3LL] [i_8]);
    }
}

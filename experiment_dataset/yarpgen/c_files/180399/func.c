/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180399
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
    var_11 |= ((/* implicit */unsigned char) ((short) (unsigned char)245));
    /* LoopNest 3 */
    for (unsigned short i_0 = 3; i_0 < 14; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */short) ((int) var_1));
                    var_13 = var_1;
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 16; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 14; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0] = ((/* implicit */unsigned long long int) (signed char)125);
                                arr_15 [6ULL] [i_0] [6ULL] [i_0] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_4] [i_3]))) ^ (var_2)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
    {
        for (unsigned long long int i_6 = 2; i_6 < 10; i_6 += 3) 
        {
            {
                arr_22 [i_5 - 1] [i_6] = ((/* implicit */unsigned short) 1495369616);
                var_14 = ((/* implicit */short) (+(min((max((((/* implicit */long long int) (unsigned char)152)), (-7163676168714065341LL))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)14832)) / (((/* implicit */int) var_6)))))))));
                arr_23 [i_5] |= ((/* implicit */short) (!(((/* implicit */_Bool) arr_6 [i_5] [i_5] [(short)2]))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_7 = 2; i_7 < 20; i_7 += 4) 
    {
        arr_27 [i_7 + 2] = ((/* implicit */short) ((715537183) ^ (((/* implicit */int) (unsigned short)14842))));
        /* LoopNest 2 */
        for (unsigned int i_8 = 1; i_8 < 21; i_8 += 2) 
        {
            for (signed char i_9 = 0; i_9 < 23; i_9 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                    {
                        var_15 = ((/* implicit */unsigned long long int) (~(max((-35850655687513544LL), (((/* implicit */long long int) arr_25 [i_8 + 1]))))));
                        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) (+(var_1))))));
                        arr_35 [i_7] [i_7] [i_7] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)128)) != (((/* implicit */int) (short)11789))));
                        arr_36 [i_7] [i_10] = ((/* implicit */unsigned char) (signed char)(-127 - 1));
                    }
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 23; i_11 += 3) /* same iter space */
                    {
                        var_17 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((_Bool) (signed char)106)))));
                        arr_41 [i_11] [i_7] [i_9] [i_7] [i_7] &= ((/* implicit */long long int) ((short) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) arr_38 [i_8] [i_9])))));
                    }
                    for (int i_12 = 0; i_12 < 23; i_12 += 3) /* same iter space */
                    {
                        arr_44 [i_12] [i_9] &= ((/* implicit */int) min((((/* implicit */unsigned int) var_1)), (max((((/* implicit */unsigned int) arr_29 [i_12])), (((unsigned int) var_1))))));
                        var_18 &= ((/* implicit */short) max((((unsigned long long int) arr_28 [i_7 + 2])), (((/* implicit */unsigned long long int) var_10))));
                    }
                    arr_45 [i_7 + 3] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)35)) << (((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_29 [i_7 + 1])) : (-1495369616))) - (13547)))));
                }
            } 
        } 
        var_19 = ((/* implicit */signed char) -5);
        var_20 |= ((/* implicit */_Bool) (signed char)-122);
        arr_46 [i_7] = ((/* implicit */unsigned char) (((+(((/* implicit */int) ((signed char) (unsigned char)95))))) != (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
    }
}

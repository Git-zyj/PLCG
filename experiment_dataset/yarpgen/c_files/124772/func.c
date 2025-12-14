/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124772
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
    /* vectorizable */
    for (int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_15 = ((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]);
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 14; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) arr_6 [i_1]))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 13; i_3 += 3) 
                    {
                        for (int i_4 = 4; i_4 < 12; i_4 += 2) 
                        {
                            {
                                var_17 -= ((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)12))) : (((((/* implicit */unsigned int) -506864559)) ^ (1369883308U)))));
                                arr_12 [i_4] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_2] [i_2] [i_1])) ? (arr_2 [i_0]) : (var_7)))));
                                var_18 |= ((/* implicit */unsigned short) (-(((/* implicit */int) arr_6 [i_1]))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) var_6))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_5 = 0; i_5 < 15; i_5 += 4) 
        {
            for (int i_6 = 0; i_6 < 15; i_6 += 2) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) (-(var_7)))) : (1571495583113116425LL)));
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 3; i_7 < 13; i_7 += 1) 
                    {
                        for (signed char i_8 = 0; i_8 < 15; i_8 += 3) 
                        {
                            {
                                arr_25 [i_0] [i_0] [i_6] [i_8] [i_8] = ((/* implicit */unsigned int) arr_0 [i_0] [i_7]);
                                var_21 = ((/* implicit */unsigned char) var_9);
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned char) var_14);
                    arr_26 [i_5] [i_6] [i_5] [i_6] &= ((/* implicit */int) ((((/* implicit */_Bool) 506864557)) ? ((-(arr_2 [i_0]))) : (((((/* implicit */_Bool) arr_21 [i_0])) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_0])))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_9 = 4; i_9 < 14; i_9 += 4) 
        {
            for (unsigned char i_10 = 0; i_10 < 15; i_10 += 3) 
            {
                {
                    arr_32 [i_10] [i_10] [i_9 - 3] [i_10] = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) 1695652924U)))))));
                    arr_33 [i_0] [i_10] [i_0] [i_0] = ((((/* implicit */_Bool) 506864549)) ? (arr_2 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_10] [i_9] [i_9] [i_9] [i_9]))));
                    var_23 ^= ((/* implicit */int) ((((/* implicit */_Bool) 2925083987U)) ? (4294967289U) : (arr_11 [i_9] [i_9 - 3])));
                }
            } 
        } 
        var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2599314374U)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))))))));
    }
    var_25 = ((/* implicit */signed char) 9047148372467289722ULL);
}

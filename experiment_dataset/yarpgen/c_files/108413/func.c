/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108413
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
    var_13 = ((/* implicit */long long int) (~(min((-1661155989), (((((/* implicit */int) var_9)) | (((/* implicit */int) var_6))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */signed char) var_0);
                var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((3187570865U) % (((/* implicit */unsigned int) 1661155988)))), (((/* implicit */unsigned int) (~(1661156008))))))) ? (max((arr_2 [i_0]), (((/* implicit */unsigned long long int) 3187570865U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)167)))));
            }
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_2 = 2; i_2 < 16; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_3 = 0; i_3 < 17; i_3 += 1) 
        {
            for (signed char i_4 = 0; i_4 < 17; i_4 += 1) 
            {
                {
                    var_15 = ((/* implicit */short) var_2);
                    var_16 ^= ((/* implicit */int) (signed char)(-127 - 1));
                    var_17 -= ((((/* implicit */_Bool) 1661155988)) ? (arr_11 [i_2 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)2))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_5 = 2; i_5 < 16; i_5 += 3) 
        {
            for (unsigned long long int i_6 = 2; i_6 < 13; i_6 += 1) 
            {
                {
                    var_18 += ((/* implicit */unsigned char) (-((-(((/* implicit */int) (short)27016))))));
                    arr_18 [i_5] [i_5] [i_5 + 1] = ((/* implicit */signed char) ((unsigned char) arr_14 [i_5]));
                    var_19 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (arr_13 [10U]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (1) : (((/* implicit */int) var_9))))));
                }
            } 
        } 
        arr_19 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (-(3187570865U)))) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-51)))));
        var_20 = (unsigned char)249;
    }
    for (unsigned char i_7 = 0; i_7 < 13; i_7 += 1) 
    {
        arr_22 [i_7] [i_7] = max((max((((/* implicit */unsigned int) (~(1661155988)))), (((((/* implicit */_Bool) 3849190270633560963ULL)) ? (4294967284U) : (((/* implicit */unsigned int) (-2147483647 - 1))))))), (arr_9 [i_7] [i_7]));
        var_21 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) -11)) ? (((/* implicit */int) arr_21 [i_7])) : (-1661155989)))));
    }
    for (unsigned char i_8 = 0; i_8 < 25; i_8 += 1) 
    {
        var_22 = (unsigned char)237;
        var_23 ^= ((/* implicit */short) 5);
    }
    var_24 = ((/* implicit */signed char) 2706476839U);
    var_25 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
}

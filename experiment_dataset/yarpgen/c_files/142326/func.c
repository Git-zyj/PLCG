/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142326
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_13 = arr_1 [i_0];
        arr_2 [9U] [i_0] = ((/* implicit */short) (-(503507949)));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 13; i_1 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            for (unsigned int i_3 = 0; i_3 < 13; i_3 += 2) 
            {
                {
                    arr_11 [i_1] [i_2] [i_1] [i_2] = ((/* implicit */int) (+(((var_7) >> (((/* implicit */int) (unsigned char)31))))));
                    arr_12 [i_1] [i_2] [i_3] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((6656483865389735791LL) % (((/* implicit */long long int) ((/* implicit */int) var_10)))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((signed char) var_0)))));
                    var_14 = ((/* implicit */unsigned short) -6656483865389735791LL);
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 13; i_4 += 2) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) arr_5 [i_4]))));
                                var_16 *= ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) 1952798251U)) : (var_7))) : (((((/* implicit */_Bool) -503507949)) ? (var_7) : (var_7)))));
                                arr_20 [i_2] [i_2] [i_3] [(short)8] [i_3] [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */unsigned long long int) var_5)) | (((((/* implicit */_Bool) var_0)) ? (arr_5 [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_1] [i_2 - 1] [i_2] [i_2] [i_4] [i_2])))))));
                                var_17 -= ((/* implicit */_Bool) arr_17 [i_1] [i_2] [i_1] [i_4]);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_18 = ((/* implicit */unsigned int) 25ULL);
    }
    for (signed char i_6 = 0; i_6 < 13; i_6 += 4) /* same iter space */
    {
        arr_23 [i_6] [i_6] = ((/* implicit */unsigned int) ((int) ((long long int) var_6)));
        var_19 += ((/* implicit */unsigned char) ((((_Bool) (-(((/* implicit */int) (unsigned short)4929))))) ? (((((arr_22 [i_6] [7U]) + (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) << (((511) - (493))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1)))))));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 13; i_7 += 3) 
        {
            for (unsigned char i_8 = 0; i_8 < 13; i_8 += 2) 
            {
                {
                    arr_29 [i_7] [i_8] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_19 [i_8]))));
                    arr_30 [i_7] [i_6] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_7] [i_8] [i_7] [i_7] [i_7] [i_7] [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_8]))) : (8417289588353721778ULL))))));
                    arr_31 [i_6] [i_6] [3ULL] = ((/* implicit */unsigned int) var_8);
                }
            } 
        } 
    }
    var_20 = ((/* implicit */long long int) ((((/* implicit */int) var_9)) + (((/* implicit */int) var_4))));
    var_21 = ((/* implicit */signed char) (_Bool)1);
    var_22 = ((/* implicit */unsigned long long int) var_2);
    var_23 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) var_10)), (-503507949)))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_8)), (var_12)))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) 503507952)) : (var_3)))))) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)148)))));
}

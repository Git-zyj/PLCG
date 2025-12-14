/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188309
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 24; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_2)) + (((/* implicit */int) var_6))))))))));
                    var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) var_3))));
                    /* LoopSeq 3 */
                    for (short i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) max(((+(((/* implicit */int) var_3)))), (((((/* implicit */int) var_3)) + (((/* implicit */int) var_2)))))))));
                        var_14 ^= ((/* implicit */unsigned long long int) ((min(((-(((/* implicit */int) var_9)))), (((((/* implicit */int) var_0)) / (((/* implicit */int) var_7)))))) - (((/* implicit */int) var_5))));
                    }
                    for (unsigned char i_4 = 1; i_4 < 22; i_4 += 3) 
                    {
                        var_15 = ((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */int) var_2)) >= (((/* implicit */int) var_0))))), (((((/* implicit */int) var_0)) | (((/* implicit */int) var_4))))));
                        arr_16 [i_0] [i_1 + 1] [(short)1] [i_4] = ((/* implicit */short) (!(((/* implicit */_Bool) var_4))));
                    }
                    /* vectorizable */
                    for (short i_5 = 0; i_5 < 25; i_5 += 3) 
                    {
                        var_16 -= ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */int) var_10)) <= (((/* implicit */int) var_8)))))));
                        /* LoopSeq 1 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_17 = ((/* implicit */unsigned char) var_9);
                            var_18 = ((/* implicit */unsigned long long int) (+((+(((/* implicit */int) var_7))))));
                            arr_21 [i_0] [i_1] [i_2] [7ULL] [i_5] [i_5] [i_6] = ((/* implicit */unsigned char) (((+(((/* implicit */int) var_0)))) - ((~(((/* implicit */int) var_4))))));
                            arr_22 [i_0] [i_0] [i_1 - 2] [i_2] [i_6] [i_6] = ((((/* implicit */int) var_10)) == (((/* implicit */int) var_7)));
                        }
                    }
                    var_19 = ((/* implicit */short) max(((-((-(((/* implicit */int) var_5)))))), (max(((+(((/* implicit */int) var_6)))), (((/* implicit */int) var_10))))));
                    /* LoopNest 2 */
                    for (short i_7 = 0; i_7 < 25; i_7 += 1) 
                    {
                        for (unsigned char i_8 = 0; i_8 < 25; i_8 += 1) 
                        {
                            {
                                var_20 -= ((/* implicit */short) (-(((((/* implicit */int) var_5)) << (((((/* implicit */int) var_10)) - (45)))))));
                                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((-2886346575064532780LL) > (2886346575064532782LL)))) & (((/* implicit */int) var_5))));
                                arr_29 [i_8] [i_7] [i_8] [i_1 + 1] [11ULL] = ((/* implicit */unsigned short) (((((~((-(((/* implicit */int) var_8)))))) + (2147483647))) >> (((/* implicit */int) var_2))));
                                arr_30 [i_8] [i_8] [i_7] [i_7] [i_0] [i_8] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) || (((/* implicit */_Bool) var_3))))) < ((+(((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))));
                                var_22 = ((/* implicit */_Bool) ((min((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))), ((+(((/* implicit */int) var_8)))))) ^ ((-(((/* implicit */int) var_3))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned char) var_10);
    /* LoopNest 2 */
    for (signed char i_9 = 0; i_9 < 24; i_9 += 1) 
    {
        for (signed char i_10 = 1; i_10 < 22; i_10 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    var_24 += ((/* implicit */short) (+((~(((/* implicit */int) var_3))))));
                    /* LoopNest 2 */
                    for (short i_12 = 0; i_12 < 24; i_12 += 2) 
                    {
                        for (short i_13 = 0; i_13 < 24; i_13 += 3) 
                        {
                            {
                                arr_45 [6LL] [i_10] [(unsigned short)10] [i_12] [i_12] |= ((/* implicit */signed char) (+(max((-2886346575064532786LL), (-2886346575064532782LL)))));
                                var_25 *= ((/* implicit */signed char) ((((/* implicit */_Bool) max(((+(((/* implicit */int) var_4)))), (((((/* implicit */int) var_3)) ^ (((/* implicit */int) var_6))))))) && (((/* implicit */_Bool) (-((-(((/* implicit */int) var_9)))))))));
                            }
                        } 
                    } 
                }
                var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((((((/* implicit */int) min((var_8), (var_3)))) ^ ((-(((/* implicit */int) var_2)))))) >= ((((+(((/* implicit */int) var_7)))) & ((+(((/* implicit */int) var_1)))))))))));
                arr_46 [i_9] [i_9] [(unsigned char)9] = ((/* implicit */unsigned char) var_0);
                arr_47 [i_9] [i_9] [i_10 + 1] = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) min((((/* implicit */unsigned char) var_8)), (var_6)))))) << (((((2886346575064532779LL) - (-2886346575064532790LL))) - (5772693150129065558LL)))));
            }
        } 
    } 
    var_27 = (-((+(((/* implicit */int) var_0)))));
}

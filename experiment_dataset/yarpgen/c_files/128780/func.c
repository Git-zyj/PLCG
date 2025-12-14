/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128780
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((signed char) var_4))))))));
        var_13 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(var_6))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 1; i_1 < 9; i_1 += 3) 
    {
        arr_5 [i_1 + 1] = ((/* implicit */unsigned short) ((long long int) var_3));
        var_14 = ((/* implicit */unsigned int) ((short) ((long long int) var_10)));
        arr_6 [i_1 + 1] = ((/* implicit */_Bool) var_6);
        /* LoopSeq 1 */
        for (signed char i_2 = 0; i_2 < 10; i_2 += 4) 
        {
            arr_10 [i_1] [i_2] = ((/* implicit */int) (+((-(var_10)))));
            var_15 = ((/* implicit */int) (-((~(var_10)))));
            var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) var_9))));
            arr_11 [i_2] = ((/* implicit */unsigned long long int) ((long long int) (+(var_6))));
            /* LoopSeq 2 */
            for (long long int i_3 = 1; i_3 < 8; i_3 += 2) 
            {
                arr_14 [3ULL] [3ULL] = ((/* implicit */unsigned int) (~(((unsigned long long int) var_4))));
                var_17 ^= ((/* implicit */long long int) (+(((/* implicit */int) ((unsigned char) var_4)))));
            }
            for (long long int i_4 = 4; i_4 < 8; i_4 += 2) 
            {
                var_18 = ((/* implicit */short) var_2);
                arr_19 [i_1] = ((/* implicit */long long int) var_1);
                arr_20 [i_4] [(_Bool)1] = ((/* implicit */short) var_10);
            }
        }
        arr_21 [i_1] = ((/* implicit */unsigned char) var_10);
    }
    for (long long int i_5 = 1; i_5 < 16; i_5 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_6 = 0; i_6 < 19; i_6 += 2) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    arr_30 [i_5] [i_5] [i_5] [i_7] = ((/* implicit */unsigned short) var_6);
                    var_19 = ((/* implicit */short) min((var_8), ((-(((/* implicit */int) ((unsigned short) var_5)))))));
                }
            } 
        } 
        var_20 = ((/* implicit */_Bool) (~(min((((/* implicit */int) max((var_3), (((/* implicit */unsigned short) var_2))))), (var_8)))));
        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((long long int) var_0)))));
        arr_31 [i_5] = ((/* implicit */unsigned short) (!(((_Bool) var_9))));
    }
    for (long long int i_8 = 1; i_8 < 16; i_8 += 2) /* same iter space */
    {
        var_22 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) 1503824343U)), (var_7)));
        /* LoopSeq 1 */
        for (unsigned char i_9 = 3; i_9 < 16; i_9 += 3) 
        {
            var_23 = ((unsigned char) min(((~(((/* implicit */int) var_5)))), (((/* implicit */int) min(((short)32767), ((short)-32749))))));
            var_24 = (!(((/* implicit */_Bool) 3918796149U)));
            var_25 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned int) ((signed char) var_8))))));
        }
        /* LoopNest 2 */
        for (unsigned char i_10 = 3; i_10 < 16; i_10 += 3) 
        {
            for (signed char i_11 = 0; i_11 < 19; i_11 += 3) 
            {
                {
                    arr_44 [i_11] [i_11] = ((/* implicit */long long int) (-(var_10)));
                    /* LoopSeq 1 */
                    for (unsigned int i_12 = 1; i_12 < 17; i_12 += 4) 
                    {
                        var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) min((max((((/* implicit */int) var_3)), (((int) var_8)))), (((/* implicit */int) ((short) (~(var_0))))))))));
                        arr_49 [i_11] [i_12 - 1] = ((/* implicit */int) var_11);
                    }
                }
            } 
        } 
        /* LoopNest 3 */
        for (signed char i_13 = 0; i_13 < 19; i_13 += 1) 
        {
            for (long long int i_14 = 0; i_14 < 19; i_14 += 2) 
            {
                for (short i_15 = 0; i_15 < 19; i_15 += 3) 
                {
                    {
                        var_27 += ((/* implicit */signed char) var_8);
                        var_28 = ((/* implicit */unsigned int) var_6);
                        var_29 = ((/* implicit */_Bool) (-(((long long int) var_0))));
                        arr_58 [i_15] [i_13] [i_15] = ((/* implicit */short) (~(max((((/* implicit */unsigned long long int) ((unsigned char) var_9))), (var_7)))));
                    }
                } 
            } 
        } 
    }
    var_30 = ((/* implicit */unsigned int) ((unsigned short) ((int) (_Bool)0)));
    /* LoopNest 2 */
    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
    {
        for (short i_17 = 0; i_17 < 11; i_17 += 4) 
        {
            {
                var_31 *= ((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned short) min((-1877112157908486118LL), (9223372036854775807LL)))))));
                var_32 = ((/* implicit */_Bool) ((int) max((max((var_0), (var_10))), (((/* implicit */unsigned int) var_5)))));
                var_33 = ((/* implicit */unsigned short) ((short) min((((/* implicit */int) max((((/* implicit */unsigned char) var_11)), (var_1)))), ((~(((/* implicit */int) (signed char)39)))))));
            }
        } 
    } 
}

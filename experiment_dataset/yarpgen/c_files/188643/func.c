/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188643
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
    for (short i_0 = 3; i_0 < 20; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            var_20 = ((/* implicit */unsigned short) 2555034858657558751ULL);
            var_21 += ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)40)) >> (((((/* implicit */int) (short)9055)) - (9032)))));
        }
        for (int i_2 = 1; i_2 < 20; i_2 += 4) 
        {
            /* LoopNest 3 */
            for (long long int i_3 = 2; i_3 < 20; i_3 += 4) 
            {
                for (unsigned char i_4 = 0; i_4 < 21; i_4 += 2) 
                {
                    for (unsigned char i_5 = 0; i_5 < 21; i_5 += 2) 
                    {
                        {
                            arr_13 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [(unsigned char)19] = ((/* implicit */unsigned int) max(((+(((unsigned long long int) var_15)))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)206)))))));
                            arr_14 [i_5] [i_4] [(short)7] [i_2] [(short)14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-121)) ? (((/* implicit */int) (short)-9056)) : (1040187392)))) ? (((((/* implicit */int) var_9)) | (((/* implicit */int) var_9)))) : (((/* implicit */int) ((unsigned char) var_13)))))) : (max((((/* implicit */unsigned int) ((unsigned char) var_4))), (((((/* implicit */_Bool) 1040187388)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (231845151U)))))));
                        }
                    } 
                } 
            } 
            var_22 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2914116183U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)9045))));
        }
        /* vectorizable */
        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
        {
            var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) (~(((int) var_0)))))));
            arr_18 [i_0 - 1] [i_6 + 1] [(_Bool)1] &= ((/* implicit */short) ((((/* implicit */int) ((short) (_Bool)1))) == (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
        }
        var_24 = ((/* implicit */unsigned char) (signed char)-22);
        var_25 -= ((/* implicit */unsigned long long int) var_11);
    }
    for (unsigned long long int i_7 = 1; i_7 < 21; i_7 += 2) 
    {
        var_26 -= (~(((unsigned int) ((((/* implicit */_Bool) (unsigned char)40)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
        arr_23 [i_7] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) (short)-9056))))))));
        /* LoopNest 3 */
        for (unsigned short i_8 = 0; i_8 < 22; i_8 += 2) 
        {
            for (long long int i_9 = 1; i_9 < 20; i_9 += 2) 
            {
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    {
                        var_27 = ((/* implicit */unsigned long long int) ((int) var_9));
                        var_28 ^= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((unsigned long long int) 8ULL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_4) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))) : (((((/* implicit */_Bool) var_19)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)9056))))))) == ((((((_Bool)0) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)23723))))) >> (((/* implicit */int) ((unsigned char) (_Bool)1)))))));
                        var_29 += (-(max((((/* implicit */int) ((signed char) var_4))), (((((/* implicit */_Bool) 3864735586U)) ? (((/* implicit */int) (short)9055)) : (((/* implicit */int) (signed char)-111)))))));
                        var_30 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) var_0)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-11935))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)10042))) + (var_3)))))));
                        arr_31 [i_8] [i_8] [i_8] [i_9] [i_10] &= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned char)168)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
                    }
                } 
            } 
        } 
    }
    var_31 -= ((/* implicit */short) ((2147483647) << (((((/* implicit */int) (unsigned char)17)) - (17)))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131382
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
    var_16 = ((/* implicit */_Bool) var_12);
    var_17 = ((/* implicit */unsigned short) ((var_9) < (((/* implicit */int) ((var_12) == (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) <= (var_12))))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 3; i_0 < 17; i_0 += 4) 
    {
        var_18 &= ((/* implicit */short) max((((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) >= (var_7)))), (max((((/* implicit */signed char) ((((/* implicit */unsigned int) -1520840728)) != (4294967295U)))), (max((((/* implicit */signed char) var_2)), (var_6)))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 17; i_2 += 4) 
            {
                {
                    var_19 |= ((/* implicit */short) min((((((/* implicit */_Bool) 117440512U)) || (((/* implicit */_Bool) 176598118U)))), (var_2)));
                    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1579990870U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)19030))) : (3553035940192401630LL)));
                    var_21 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)53)) == ((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))))));
                }
            } 
        } 
        arr_6 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */long long int) var_9)) > (arr_1 [i_0])));
        /* LoopNest 3 */
        for (signed char i_3 = 0; i_3 < 19; i_3 += 1) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        var_22 = ((/* implicit */short) (_Bool)0);
                        arr_15 [i_0] [(unsigned short)3] [i_0] [i_5] = ((/* implicit */short) (-(((long long int) (unsigned short)53789))));
                        var_23 ^= ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) -998092621))))) - (((/* implicit */int) ((short) (unsigned short)16287)))));
                    }
                } 
            } 
        } 
        var_24 = ((/* implicit */unsigned int) var_9);
    }
    /* vectorizable */
    for (short i_6 = 3; i_6 < 11; i_6 += 3) 
    {
        /* LoopNest 3 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (int i_8 = 0; i_8 < 12; i_8 += 2) 
            {
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    {
                        arr_29 [i_6 + 1] [i_6] [i_6] [i_6 + 1] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_6 + 1] [i_6 - 1] [i_6 + 1]))) != (arr_23 [i_6 + 1])));
                        var_25 = ((/* implicit */unsigned long long int) (((-(1869994509))) <= (arr_12 [i_8] [i_6 - 1])));
                        var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)0)) ? (arr_1 [i_8]) : (((/* implicit */long long int) ((var_7) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)21))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_10 = 0; i_10 < 12; i_10 += 4) 
        {
            for (int i_11 = 2; i_11 < 9; i_11 += 3) 
            {
                {
                    var_27 = ((/* implicit */unsigned char) ((signed char) (~(var_3))));
                    arr_36 [i_11] [i_10] [i_6 + 1] = ((/* implicit */long long int) (+(((/* implicit */int) (short)-15039))));
                }
            } 
        } 
        var_28 -= ((/* implicit */short) ((unsigned short) arr_4 [i_6 + 1] [i_6] [i_6] [i_6]));
    }
}

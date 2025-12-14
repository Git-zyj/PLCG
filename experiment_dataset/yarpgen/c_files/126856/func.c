/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126856
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
    var_16 = ((/* implicit */int) var_15);
    var_17 = ((/* implicit */unsigned short) max((((max((((/* implicit */long long int) var_2)), (var_15))) ^ (((/* implicit */long long int) ((/* implicit */int) var_9))))), (((((/* implicit */long long int) ((/* implicit */int) (short)31799))) | (var_15)))));
    /* LoopSeq 3 */
    for (int i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        var_18 -= ((/* implicit */unsigned int) (short)31810);
        /* LoopSeq 1 */
        for (int i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            arr_5 [i_0 + 2] = ((/* implicit */int) (short)-31676);
            arr_6 [i_0] [(unsigned short)4] = ((/* implicit */signed char) (-((+(((/* implicit */int) arr_2 [i_0]))))));
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                for (unsigned int i_3 = 3; i_3 < 13; i_3 += 4) 
                {
                    {
                        var_19 *= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-31685)) ? (((/* implicit */int) (short)31662)) : (((/* implicit */int) (unsigned short)51234))))) ? (var_2) : (((/* implicit */int) min(((short)-31818), (((/* implicit */short) (_Bool)1))))))) / ((-(((/* implicit */int) arr_1 [i_1 + 3]))))));
                        var_20 ^= ((/* implicit */int) (((-(((/* implicit */int) (short)-31800)))) != (((/* implicit */int) ((((/* implicit */int) arr_8 [i_2] [i_2] [i_2])) == (min((((/* implicit */int) (short)31676)), (var_3))))))));
                        /* LoopSeq 1 */
                        for (signed char i_4 = 1; i_4 < 13; i_4 += 1) 
                        {
                            arr_14 [i_2] [i_2] = ((/* implicit */short) arr_12 [i_0 + 1]);
                            var_21 *= ((/* implicit */unsigned char) (short)31664);
                            var_22 = ((/* implicit */unsigned int) min((var_22), (arr_7 [i_0 + 1] [0ULL] [i_3])));
                        }
                    }
                } 
            } 
        }
    }
    for (unsigned long long int i_5 = 2; i_5 < 15; i_5 += 1) 
    {
        var_23 = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_5 - 2] [i_5])))))));
        var_24 = ((/* implicit */unsigned short) ((((arr_17 [i_5] [i_5]) ^ (arr_17 [(unsigned short)4] [i_5 - 2]))) | (arr_17 [i_5 + 1] [i_5])));
        arr_19 [i_5] = ((/* implicit */unsigned long long int) arr_16 [i_5]);
    }
    for (unsigned short i_6 = 0; i_6 < 24; i_6 += 4) 
    {
        var_25 = ((/* implicit */int) arr_22 [1LL]);
        /* LoopNest 3 */
        for (unsigned int i_7 = 1; i_7 < 22; i_7 += 3) 
        {
            for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 4) 
            {
                for (int i_9 = 2; i_9 < 22; i_9 += 2) 
                {
                    {
                        var_26 = ((/* implicit */long long int) arr_22 [i_9 + 2]);
                        /* LoopSeq 1 */
                        for (unsigned int i_10 = 3; i_10 < 23; i_10 += 4) 
                        {
                            var_27 = ((/* implicit */short) arr_30 [i_9 - 2] [i_10] [i_10] [i_7] [i_9] [i_10]);
                            var_28 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((arr_28 [i_7]) << (((((/* implicit */int) arr_24 [i_10 + 1] [(short)19] [(short)19])) + (18601)))))) != ((-(arr_27 [i_7 + 1] [i_8] [i_10]))))))));
                            var_29 = ((/* implicit */short) arr_27 [15U] [(signed char)14] [i_7]);
                            arr_32 [i_6] [i_6] [i_7] [i_9] [i_10] [i_8] = ((/* implicit */signed char) (+(max((arr_26 [i_8] [(short)19] [i_6]), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-31797)))))))));
                        }
                        var_30 = ((/* implicit */unsigned int) (short)-31681);
                    }
                } 
            } 
        } 
    }
    /* LoopNest 3 */
    for (long long int i_11 = 2; i_11 < 8; i_11 += 1) 
    {
        for (int i_12 = 0; i_12 < 12; i_12 += 2) 
        {
            for (signed char i_13 = 3; i_13 < 9; i_13 += 1) 
            {
                {
                    var_31 = ((/* implicit */long long int) arr_29 [i_13 - 2] [i_11 - 2]);
                    /* LoopSeq 1 */
                    for (unsigned char i_14 = 0; i_14 < 12; i_14 += 4) 
                    {
                        arr_42 [i_12] [i_12] = ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) arr_31 [i_12] [i_12] [i_13] [i_14] [i_14] [i_13 + 2] [i_12])) || (((/* implicit */_Bool) arr_31 [(short)8] [i_13] [(short)8] [i_14] [i_12] [i_13 + 2] [i_14]))))));
                        var_32 -= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_36 [i_12] [i_12] [i_11 - 2])) ? (arr_36 [i_14] [i_11] [i_11 + 2]) : (var_7))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)-31653)) != (((/* implicit */int) (!(((/* implicit */_Bool) (short)31672)))))))))));
                        var_33 += (-((+(arr_7 [i_13 + 3] [i_12] [i_11 - 2]))));
                    }
                    var_34 *= ((/* implicit */unsigned short) arr_3 [i_11]);
                }
            } 
        } 
    } 
}

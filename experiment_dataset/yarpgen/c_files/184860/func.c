/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184860
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
    for (long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_11 = ((/* implicit */unsigned long long int) (unsigned short)65024);
        /* LoopSeq 4 */
        for (unsigned int i_1 = 3; i_1 < 13; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                for (signed char i_3 = 2; i_3 < 13; i_3 += 3) 
                {
                    {
                        var_12 -= ((/* implicit */unsigned char) ((unsigned int) max((max((((/* implicit */long long int) arr_0 [i_0] [(short)1])), (arr_7 [7LL]))), (((/* implicit */long long int) (!(arr_0 [i_0] [i_1])))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_4 = 2; i_4 < 13; i_4 += 3) 
                        {
                            arr_14 [i_2] [i_1] [i_2 + 1] [i_3] [i_2] [(unsigned char)11] = ((/* implicit */unsigned int) ((_Bool) (+(((/* implicit */int) (_Bool)1)))));
                            arr_15 [i_0] [i_1] [(short)1] [i_2] [i_2 + 1] [i_3] [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_10))));
                            arr_16 [i_0] [i_0] [(unsigned short)6] [i_2] [i_0] [i_4] = ((/* implicit */unsigned char) arr_6 [i_1 - 2] [i_2] [(_Bool)0] [i_4 + 1]);
                            var_13 ^= ((/* implicit */_Bool) arr_7 [i_0]);
                            var_14 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(20ULL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [10U]))))) : ((-(var_4)))));
                        }
                        var_15 *= ((/* implicit */unsigned int) min((arr_13 [i_0] [11ULL] [i_0] [i_0]), ((-(((/* implicit */int) arr_10 [i_1 + 1] [i_2 + 1] [i_3 - 1]))))));
                    }
                } 
            } 
            var_16 *= ((/* implicit */unsigned short) ((unsigned long long int) min((((/* implicit */unsigned short) arr_0 [i_0] [i_1])), ((unsigned short)502))));
        }
        /* vectorizable */
        for (unsigned int i_5 = 0; i_5 < 14; i_5 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned int i_6 = 0; i_6 < 14; i_6 += 2) 
            {
                for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                {
                    {
                        arr_26 [i_0] [i_0] [i_0] [(unsigned char)6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_7 - 1] [i_7 - 1])) ? (arr_7 [i_7 - 1]) : (((/* implicit */long long int) arr_2 [i_7 - 1]))));
                        arr_27 [i_0] [i_5] [i_6] [i_7] = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (68169720922112ULL)));
                    }
                } 
            } 
            var_17 = ((/* implicit */unsigned long long int) ((int) ((14ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)72))))));
        }
        for (int i_8 = 0; i_8 < 14; i_8 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned short i_9 = 0; i_9 < 14; i_9 += 3) 
            {
                for (long long int i_10 = 1; i_10 < 12; i_10 += 2) 
                {
                    {
                        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */_Bool) (~(((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (unsigned char)185))))))) ? (var_2) : (((/* implicit */unsigned int) ((int) ((2147483631) - (((/* implicit */int) (unsigned char)72)))))))))));
                        var_19 -= ((/* implicit */unsigned int) ((_Bool) min((((/* implicit */unsigned short) ((unsigned char) arr_29 [i_0] [1U]))), (var_10))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned long long int i_11 = 0; i_11 < 14; i_11 += 3) 
            {
                for (unsigned int i_12 = 0; i_12 < 14; i_12 += 3) 
                {
                    {
                        arr_46 [i_0] [i_8] [i_11] [9ULL] [(signed char)8] = ((/* implicit */unsigned char) var_8);
                        var_20 *= ((/* implicit */unsigned int) ((unsigned short) ((_Bool) ((((/* implicit */_Bool) -794213745)) ? (((/* implicit */int) arr_39 [12ULL] [i_8] [8LL])) : (((/* implicit */int) arr_9 [(unsigned char)8]))))));
                    }
                } 
            } 
            arr_47 [i_0] [i_8] [i_8] = ((/* implicit */short) min((var_9), (arr_13 [i_0] [0U] [i_8] [i_0])));
        }
        /* vectorizable */
        for (long long int i_13 = 2; i_13 < 12; i_13 += 3) 
        {
            var_21 ^= ((/* implicit */unsigned char) ((arr_38 [(unsigned char)12] [i_0]) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
            arr_51 [i_13] [i_13] [3U] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_24 [i_13 + 2] [i_13 + 2] [i_13] [i_13 - 1]))));
            arr_52 [i_13] [i_13] = ((/* implicit */unsigned int) ((unsigned char) 6422325733284597130ULL));
            var_22 ^= ((/* implicit */unsigned short) (_Bool)1);
        }
    }
    /* vectorizable */
    for (unsigned char i_14 = 1; i_14 < 12; i_14 += 3) 
    {
        var_23 -= ((/* implicit */int) var_6);
        arr_55 [i_14] = ((/* implicit */unsigned char) ((((unsigned int) arr_29 [i_14 + 2] [i_14 + 2])) <= (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1)))))));
    }
    for (unsigned short i_15 = 0; i_15 < 10; i_15 += 3) 
    {
        /* LoopSeq 2 */
        for (long long int i_16 = 0; i_16 < 10; i_16 += 3) 
        {
            arr_64 [i_16] [i_16] [i_15] = ((/* implicit */int) ((long long int) arr_39 [(unsigned char)2] [i_16] [4LL]));
            var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((unsigned long long int) -2371682126094004625LL)))));
        }
        /* vectorizable */
        for (signed char i_17 = 4; i_17 < 9; i_17 += 3) 
        {
            arr_69 [4ULL] [4ULL] [i_17] = var_5;
            var_25 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-4096))))) || (((/* implicit */_Bool) (+(arr_36 [i_17] [i_17] [i_15] [i_15] [i_15]))))));
        }
        var_26 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) arr_0 [i_15] [i_15]))) - (((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_3)))) - (((/* implicit */int) arr_22 [i_15]))))));
        var_27 = ((/* implicit */unsigned short) (!(arr_66 [2] [0ULL] [i_15])));
        var_28 = ((/* implicit */long long int) 13013155792394030248ULL);
    }
    var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) var_0))))))) % (((long long int) 6240468844698147048ULL))));
}

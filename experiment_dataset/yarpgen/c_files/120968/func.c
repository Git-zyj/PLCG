/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120968
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
    for (long long int i_0 = 4; i_0 < 13; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) var_14);
        arr_4 [i_0] = ((/* implicit */unsigned char) arr_2 [i_0]);
        arr_5 [(unsigned char)2] = ((/* implicit */_Bool) arr_1 [14ULL] [i_0 + 4]);
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */short) ((-9120935197556256351LL) % (((/* implicit */long long int) ((/* implicit */int) (unsigned short)42949)))));
                    var_21 += (-(((((/* implicit */int) arr_6 [i_0] [i_0 - 2] [i_0])) % (max((var_13), (((/* implicit */int) var_2)))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 12; i_3 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_4 = 1; i_4 < 11; i_4 += 4) 
        {
            for (long long int i_5 = 0; i_5 < 12; i_5 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 4; i_6 < 10; i_6 += 1) 
                    {
                        for (unsigned int i_7 = 2; i_7 < 10; i_7 += 4) 
                        {
                            {
                                arr_25 [i_7] [i_6] [i_4] [(unsigned char)3] [7LL] = (~(var_7));
                                var_22 = ((/* implicit */unsigned int) 4118837963275860660LL);
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */int) ((((/* implicit */_Bool) arr_24 [i_3] [i_4 + 1] [i_4 + 1] [i_4] [i_4 + 1] [i_4] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_4 - 1]))) : (arr_24 [10ULL] [i_4 + 1] [(_Bool)1] [i_3] [i_4] [i_4] [(_Bool)1])));
                }
            } 
        } 
        arr_26 [8LL] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_21 [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_3] [(unsigned char)8]))) : (var_4)));
    }
    /* LoopNest 2 */
    for (signed char i_8 = 0; i_8 < 18; i_8 += 4) 
    {
        for (long long int i_9 = 1; i_9 < 17; i_9 += 1) 
        {
            {
                var_24 ^= ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) var_3)) & (((((/* implicit */_Bool) arr_28 [i_8] [(unsigned char)9])) ? (((/* implicit */unsigned long long int) var_8)) : (var_4))))) / (((/* implicit */unsigned long long int) (-(arr_29 [i_9 + 1]))))));
                arr_32 [i_8] = ((/* implicit */signed char) ((var_8) & (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-2910)) ? (arr_31 [i_8] [i_8] [0]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((unsigned int) -4118837963275860677LL)) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32767)))))));
                var_25 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-32762)) == (((/* implicit */int) (unsigned short)36020))))), (arr_28 [i_9 + 1] [i_9 + 1])));
                /* LoopSeq 2 */
                for (short i_10 = 2; i_10 < 14; i_10 += 1) 
                {
                    arr_36 [i_10 + 4] [i_9 + 1] [4LL] = ((/* implicit */unsigned long long int) ((int) ((signed char) 14660058400795329645ULL)));
                    var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((((/* implicit */long long int) arr_35 [(unsigned char)12] [(unsigned char)3] [i_10])) == (((4118837963275860660LL) & (2843506561959443869LL)))))) : (((((/* implicit */int) (short)2921)) / (((/* implicit */int) ((short) var_13))))))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_11 = 0; i_11 < 18; i_11 += 4) 
                    {
                        var_27 = ((/* implicit */long long int) ((((/* implicit */int) ((-4118837963275860656LL) != (((/* implicit */long long int) ((/* implicit */int) (short)2904)))))) | (((/* implicit */int) ((short) ((((/* implicit */_Bool) 14444533409321044ULL)) ? (-1LL) : (4118837963275860660LL)))))));
                        var_28 = (-(((((var_12) | (((/* implicit */long long int) ((/* implicit */int) var_11))))) ^ (arr_31 [i_9 + 1] [i_9 - 1] [i_9 - 1]))));
                        arr_40 [i_8] [i_8] [i_10] [12LL] = -323058196;
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_12 = 0; i_12 < 18; i_12 += 4) 
                    {
                        for (unsigned long long int i_13 = 2; i_13 < 17; i_13 += 3) 
                        {
                            {
                                var_29 = ((int) ((var_14) ^ (var_9)));
                                var_30 = ((/* implicit */signed char) max((var_15), (((/* implicit */long long int) ((unsigned int) max((var_16), (((/* implicit */unsigned short) (_Bool)1))))))));
                                var_31 ^= ((/* implicit */unsigned int) var_15);
                            }
                        } 
                    } 
                }
                for (unsigned long long int i_14 = 0; i_14 < 18; i_14 += 4) 
                {
                    arr_50 [1U] [1U] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) 323058220))) & (arr_29 [i_9])))) ? (((/* implicit */int) var_16)) : (((((/* implicit */int) (unsigned short)17439)) & (arr_46 [i_8] [i_8] [i_9] [i_9] [i_14] [i_14] [i_9])))));
                    /* LoopNest 2 */
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        for (int i_16 = 0; i_16 < 18; i_16 += 4) 
                        {
                            {
                                var_32 = ((/* implicit */short) (-(arr_33 [i_9 - 1] [i_9 + 1] [i_9 - 1])));
                                var_33 = arr_28 [i_9 - 1] [i_9 - 1];
                                arr_57 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] [(signed char)0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((signed char) arr_48 [i_9 - 1] [i_9 - 1] [i_9 + 1] [i_9 - 1])))));
                            }
                        } 
                    } 
                }
                arr_58 [i_9] = var_9;
            }
        } 
    } 
    var_34 = ((/* implicit */long long int) ((((((((var_19) + (9223372036854775807LL))) >> (((((/* implicit */int) (unsigned short)27222)) - (27160))))) << ((((~(var_3))) + (4612423399346769584LL))))) == (((/* implicit */long long int) ((/* implicit */int) var_16)))));
    var_35 |= ((/* implicit */long long int) var_5);
}

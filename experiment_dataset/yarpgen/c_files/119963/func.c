/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119963
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
    var_14 ^= ((/* implicit */unsigned char) min((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1588638975U)) ? (((/* implicit */int) (short)19900)) : (((/* implicit */int) (unsigned char)233))))), (max((11435817011465309720ULL), (((/* implicit */unsigned long long int) var_9)))))), (((/* implicit */unsigned long long int) ((var_2) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)44513))))))));
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1588638975U)) ? ((~(((/* implicit */int) var_11)))) : ((((~(var_9))) | ((((_Bool)1) ? (((/* implicit */int) var_3)) : (120493359)))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 24; i_0 += 3) 
    {
        var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (((((/* implicit */int) (short)6221)) / (((/* implicit */int) (signed char)121))))))) ? (((unsigned long long int) ((((/* implicit */_Bool) (unsigned short)31)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_7))))) : ((-(arr_2 [i_0 - 1] [i_0 - 1]))))))));
        var_17 ^= ((/* implicit */unsigned char) 2706328320U);
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned short i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                for (unsigned char i_3 = 0; i_3 < 25; i_3 += 1) 
                {
                    for (long long int i_4 = 3; i_4 < 24; i_4 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) var_10))));
                            arr_13 [6ULL] [i_0] [i_2] [(_Bool)1] [6ULL] = ((/* implicit */unsigned short) var_12);
                        }
                    } 
                } 
            } 
            var_19 = ((((/* implicit */_Bool) arr_4 [i_0] [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0 - 1]))) : (var_2));
            arr_14 [i_0] [i_0] = ((/* implicit */long long int) var_8);
            var_20 |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) 11U)) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) & (12697002718748159274ULL)))));
        }
        /* vectorizable */
        for (long long int i_5 = 0; i_5 < 25; i_5 += 1) 
        {
            arr_18 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((arr_15 [i_0] [i_0 + 1] [i_0]) ? (17034312273231849141ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0] [i_0 + 1] [i_0])))));
            arr_19 [i_0] = ((/* implicit */short) (+(-120493360)));
            arr_20 [i_0] = var_10;
        }
    }
    /* vectorizable */
    for (unsigned char i_6 = 0; i_6 < 22; i_6 += 1) 
    {
        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) 393937556))));
        var_22 = ((/* implicit */int) ((unsigned char) (unsigned char)233));
        var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) (_Bool)1))));
        arr_23 [i_6] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_13))));
    }
    /* LoopNest 2 */
    for (long long int i_7 = 0; i_7 < 17; i_7 += 1) 
    {
        for (signed char i_8 = 0; i_8 < 17; i_8 += 2) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                {
                    for (int i_10 = 0; i_10 < 17; i_10 += 1) 
                    {
                        for (long long int i_11 = 0; i_11 < 17; i_11 += 3) 
                        {
                            {
                                arr_36 [10LL] [i_7] [i_9] [i_7] [i_7] = ((/* implicit */unsigned short) var_1);
                                var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) var_7))));
                                var_25 += ((/* implicit */unsigned long long int) (-(min((((((/* implicit */_Bool) 1942315261)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_1)))), (((((/* implicit */_Bool) 10933420867179257935ULL)) ? (((/* implicit */int) arr_28 [i_9 - 1] [i_8])) : (var_9)))))));
                            }
                        } 
                    } 
                } 
                arr_37 [i_7] = ((/* implicit */_Bool) var_9);
                arr_38 [i_7] [i_8] = ((/* implicit */short) ((((15360ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [(_Bool)1] [i_7] [(_Bool)1] [i_8] [i_8] [i_8] [(_Bool)1]))))) & (((/* implicit */unsigned long long int) ((arr_15 [i_7] [i_8] [i_7]) ? (((/* implicit */int) (unsigned short)7122)) : (((/* implicit */int) (_Bool)1)))))));
                var_26 = ((/* implicit */unsigned long long int) min((var_26), (min((((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned short)49)), (arr_9 [i_7] [i_8] [i_8] [i_8] [2ULL] [i_8])))), (((((/* implicit */_Bool) (unsigned char)182)) ? (var_2) : (var_2)))))));
            }
        } 
    } 
}

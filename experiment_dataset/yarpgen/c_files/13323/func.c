/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13323
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */int) var_9)) / (((/* implicit */int) arr_4 [i_0] [i_0])))) != (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0]))) == (8257889079577525323LL)))))))) * (((1992902707U) * (1992902695U)))));
                var_13 &= ((/* implicit */unsigned char) ((((((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))) / (9133724804126362106LL))) * (((/* implicit */long long int) ((((/* implicit */int) var_10)) >> (((((/* implicit */int) var_3)) - (61)))))))) <= (((/* implicit */long long int) ((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) (signed char)0))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned short) ((((-9133724804126362103LL) + (9223372036854775807LL))) >> (((-9133724804126362103LL) + (9133724804126362162LL)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_2 = 0; i_2 < 10; i_2 += 1) 
    {
        var_15 &= ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_4 [i_2] [i_2])) != (((/* implicit */int) (unsigned short)11583)))))) & (((9133724804126362102LL) >> (((10455153423666561415ULL) - (10455153423666561361ULL)))))));
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 3; i_3 < 9; i_3 += 2) 
        {
            for (unsigned char i_4 = 0; i_4 < 10; i_4 += 3) 
            {
                {
                    arr_14 [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) ((arr_2 [i_2] [i_4]) > (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) * (((((/* implicit */int) var_2)) >> (((/* implicit */int) (signed char)12))))));
                    arr_15 [i_2] [i_3] [(unsigned char)4] &= ((/* implicit */unsigned char) ((1U) % (3835430608U)));
                    var_16 += ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned short)53958)) || (((/* implicit */_Bool) (unsigned char)239)))) || (((((/* implicit */_Bool) arr_10 [i_4])) && (((/* implicit */_Bool) var_4))))));
                }
            } 
        } 
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_12 [i_2] [i_2] [i_2] [i_2]) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))) && (((arr_1 [i_2] [i_2]) == (2302064588U)))));
        /* LoopSeq 3 */
        for (unsigned short i_5 = 2; i_5 < 7; i_5 += 1) 
        {
            var_18 = ((/* implicit */signed char) ((((2302064581U) | (1992902715U))) << (((((((/* implicit */int) var_5)) & (-1976404504))) - (21481)))));
            var_19 ^= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((1992902695U) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [2U]))))))) * (((555171082U) | (((/* implicit */unsigned int) -1))))));
        }
        for (signed char i_6 = 0; i_6 < 10; i_6 += 4) 
        {
            var_20 = ((/* implicit */unsigned char) ((((arr_13 [i_2] [i_2] [i_2]) / (((/* implicit */int) arr_3 [(_Bool)1] [i_2])))) & (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)41087))) == (10715731283713062402ULL))))));
            var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)155))) <= (arr_12 [i_2] [i_6] [i_2] [i_2])))) > (((((/* implicit */int) (_Bool)1)) / (1398517168)))));
            var_22 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)141))) ^ (4294967267U))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((var_11) == (((/* implicit */unsigned long long int) arr_2 [i_2] [i_6]))))))));
            /* LoopNest 3 */
            for (signed char i_7 = 2; i_7 < 6; i_7 += 2) 
            {
                for (unsigned char i_8 = 2; i_8 < 9; i_8 += 4) 
                {
                    for (unsigned short i_9 = 0; i_9 < 10; i_9 += 4) 
                    {
                        {
                            var_23 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_19 [i_2]))) <= (-310751900251548269LL)))) * (((/* implicit */int) ((((/* implicit */int) (unsigned short)41087)) > (((/* implicit */int) (unsigned char)107)))))));
                            var_24 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) var_10)) < (((/* implicit */int) (unsigned char)170))))) % (((/* implicit */int) ((((/* implicit */int) (unsigned short)19103)) >= (((/* implicit */int) var_0)))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned short i_10 = 0; i_10 < 10; i_10 += 2) 
        {
            var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((((var_7) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)253))))) <= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_2)) != (((/* implicit */int) var_9)))))))))));
            var_26 = ((/* implicit */unsigned int) ((((var_11) + (((/* implicit */unsigned long long int) -1976404504)))) >> (((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) -310751900251548299LL)))))));
        }
    }
    var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) ((((((((/* implicit */int) var_1)) + (((/* implicit */int) (unsigned short)46432)))) - (((((/* implicit */int) var_10)) + (((/* implicit */int) (signed char)32)))))) > (((((((/* implicit */int) var_3)) | (((/* implicit */int) var_5)))) + (((((/* implicit */int) var_0)) << (((((/* implicit */int) var_8)) - (49276))))))))))));
}

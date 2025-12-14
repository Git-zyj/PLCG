/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134786
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
    var_13 &= ((/* implicit */unsigned char) (_Bool)1);
    var_14 += ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (var_10) : (((/* implicit */long long int) 134152192))))) && (((/* implicit */_Bool) var_4)))))));
    var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) min((var_12), (min((((/* implicit */int) var_5)), ((-(var_0))))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            arr_5 [i_0] = arr_1 [i_1 - 1];
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                for (short i_3 = 0; i_3 < 17; i_3 += 4) 
                {
                    {
                        var_16 = arr_1 [i_1];
                        arr_12 [i_0] [i_0] [7LL] = (-(18446744073709551615ULL));
                        arr_13 [i_0] [(unsigned char)1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_1 + 2] [i_1 + 1])) ? (((/* implicit */int) arr_2 [i_1 - 1])) : (((/* implicit */int) arr_7 [i_1 - 1]))));
                    }
                } 
            } 
        }
        for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 2) 
        {
            arr_16 [i_0] = ((/* implicit */signed char) min((18446744073709551610ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_4])) ? (((/* implicit */int) arr_14 [(unsigned short)16] [i_4] [i_0])) : (((/* implicit */int) (_Bool)1)))))));
            var_17 = ((/* implicit */signed char) ((((min((arr_11 [i_0] [(unsigned char)4] [i_0] [i_0]), (7325129083338983491LL))) >> (((((((/* implicit */unsigned long long int) arr_1 [i_0])) + (var_9))) - (4137113486478172734ULL))))) ^ (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) arr_15 [i_0] [i_4])) != (((unsigned int) arr_4 [i_0]))))))));
        }
        var_18 -= ((/* implicit */unsigned short) ((unsigned long long int) 18446744073709551598ULL));
        /* LoopNest 3 */
        for (unsigned short i_5 = 0; i_5 < 17; i_5 += 2) 
        {
            for (unsigned int i_6 = 3; i_6 < 15; i_6 += 3) 
            {
                for (unsigned long long int i_7 = 4; i_7 < 15; i_7 += 2) 
                {
                    {
                        var_19 = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) (short)-529)) ? (((/* implicit */int) (short)736)) : (134152212))));
                        var_20 ^= ((/* implicit */short) var_8);
                        arr_25 [i_0] [9LL] [i_0] [9LL] [i_5] [i_0] = ((/* implicit */unsigned long long int) (-(min((((/* implicit */int) arr_7 [i_7 + 2])), (-134152199)))));
                    }
                } 
            } 
        } 
        var_21 ^= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_23 [i_0] [i_0])) ? (((((/* implicit */_Bool) 7729547783333556940LL)) ? (((/* implicit */unsigned long long int) 134152197)) : (14483933784257928945ULL))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_3 [i_0] [i_0] [i_0])), (arr_20 [i_0] [(unsigned char)12] [6ULL])))))), (((/* implicit */unsigned long long int) arr_20 [i_0] [i_0] [i_0]))));
        var_22 &= ((/* implicit */long long int) ((signed char) ((((/* implicit */long long int) ((/* implicit */int) var_5))) != (min((((/* implicit */long long int) arr_0 [i_0] [i_0])), (arr_20 [i_0] [i_0] [i_0]))))));
    }
    for (signed char i_8 = 0; i_8 < 11; i_8 += 3) 
    {
        var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) ((min((arr_10 [i_8] [i_8]), (((/* implicit */unsigned long long int) -160911449)))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_8] [i_8])) ? (3904830698744460737LL) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))))))));
        arr_28 [i_8] [i_8] = ((/* implicit */unsigned char) 8243766221563069543ULL);
        var_24 *= ((/* implicit */signed char) ((unsigned long long int) (~(((/* implicit */int) arr_6 [i_8])))));
    }
}

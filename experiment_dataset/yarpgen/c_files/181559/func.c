/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181559
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
    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((((/* implicit */_Bool) 6ULL)) && (((/* implicit */_Bool) var_11)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    arr_10 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0]))));
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 2; i_3 < 10; i_3 += 2) 
                    {
                        arr_14 [i_2] [i_1] [i_2] [i_1] [i_2] = ((/* implicit */int) ((((/* implicit */int) arr_7 [i_0] [i_0])) == (((/* implicit */int) var_2))));
                        arr_15 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) var_18);
                    }
                    var_20 = ((/* implicit */_Bool) max((var_20), ((!(((/* implicit */_Bool) (~(((/* implicit */int) var_18)))))))));
                }
            } 
        } 
        arr_16 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_11 [i_0] [(_Bool)1]))));
        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) 18446744073709551609ULL)) ? (6ULL) : (18446744073709551609ULL)));
    }
    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */int) min((min((((((/* implicit */_Bool) 8853810695292356608LL)) ? (18446744073709551615ULL) : (18446744073709551612ULL))), (((/* implicit */unsigned long long int) arr_18 [i_4])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)192)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) : (((var_17) >> (((/* implicit */int) (signed char)48)))))))));
        var_23 ^= ((/* implicit */unsigned short) (+(((((/* implicit */int) arr_17 [(signed char)8])) - (((/* implicit */int) (!((_Bool)1))))))));
        var_24 = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_18 [i_4]))))))))));
    }
    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) /* same iter space */
    {
        var_25 = ((/* implicit */unsigned short) (~((((+(7ULL))) ^ (((/* implicit */unsigned long long int) arr_19 [i_5]))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_6 = 0; i_6 < 15; i_6 += 3) 
        {
            var_26 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_18 [(unsigned short)14]))) - (((((/* implicit */_Bool) var_4)) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))));
            arr_23 [i_5 + 1] [i_6] = ((/* implicit */int) (!((_Bool)1)));
        }
        /* vectorizable */
        for (int i_7 = 2; i_7 < 11; i_7 += 2) 
        {
            arr_26 [i_5] [i_5] = ((/* implicit */_Bool) ((int) (!(((/* implicit */_Bool) 552860472481832777LL)))));
            /* LoopNest 2 */
            for (signed char i_8 = 1; i_8 < 12; i_8 += 4) 
            {
                for (signed char i_9 = 2; i_9 < 13; i_9 += 3) 
                {
                    {
                        arr_33 [i_5] [i_5] [i_9] [i_8] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_32 [i_5 + 1] [i_9] [i_8 + 1] [i_9])) && (((/* implicit */_Bool) var_16))));
                        arr_34 [i_9] [i_9] [i_8] [i_9 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_25 [i_8] [i_5 + 1])) ? ((+(((/* implicit */int) var_6)))) : (((/* implicit */int) var_2))));
                    }
                } 
            } 
            var_27 = var_7;
        }
        arr_35 [i_5] = ((/* implicit */long long int) (((~(max((arr_19 [i_5 + 1]), (((/* implicit */int) (unsigned short)41581)))))) & (((((/* implicit */_Bool) ((arr_21 [i_5 + 1] [i_5]) ^ (((/* implicit */long long int) ((/* implicit */int) var_4)))))) ? ((+(((/* implicit */int) (unsigned char)158)))) : (((/* implicit */int) arr_20 [i_5 + 1] [i_5 + 1]))))));
    }
    var_28 = ((/* implicit */signed char) var_15);
}

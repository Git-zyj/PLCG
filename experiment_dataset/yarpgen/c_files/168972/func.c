/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168972
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
    for (int i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */int) max(((+(((((/* implicit */_Bool) var_1)) ? (4274681910299810928LL) : (((/* implicit */long long int) -489609191)))))), ((-((+(4274681910299810928LL)))))));
                arr_5 [i_0] [(unsigned char)8] |= ((/* implicit */int) ((max((((/* implicit */long long int) ((int) 8405238856298624663LL))), (arr_0 [i_0]))) << (((arr_3 [i_0]) - (912299437)))));
                var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((unsigned char) (((~(var_14))) << (((((/* implicit */int) ((unsigned char) 4794997711059168399LL))) - (143)))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_2 = 0; i_2 < 12; i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_3 = 0; i_3 < 12; i_3 += 2) 
        {
            for (int i_4 = 0; i_4 < 12; i_4 += 2) 
            {
                {
                    var_18 ^= ((/* implicit */unsigned char) (~(((arr_1 [i_3] [i_3]) % (var_11)))));
                    /* LoopSeq 2 */
                    for (int i_5 = 3; i_5 < 10; i_5 += 1) /* same iter space */
                    {
                        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) -8135160941100148352LL)) ? (((/* implicit */int) ((((/* implicit */_Bool) -4274681910299810928LL)) || (((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))))) : ((-(((/* implicit */int) (unsigned char)249)))))))));
                        var_20 = ((/* implicit */int) 8405238856298624663LL);
                    }
                    for (int i_6 = 3; i_6 < 10; i_6 += 1) /* same iter space */
                    {
                        var_21 -= (((-(var_6))) >> (((((int) -2147483624)) - (-2147483633))));
                        /* LoopSeq 1 */
                        for (long long int i_7 = 2; i_7 < 8; i_7 += 2) 
                        {
                            var_22 += ((/* implicit */unsigned char) (-((+(0)))));
                            var_23 = ((/* implicit */int) (+(8405238856298624663LL)));
                            var_24 = ((/* implicit */long long int) min((var_24), (-1LL)));
                        }
                        var_25 &= ((/* implicit */unsigned char) -9223372036854775795LL);
                    }
                }
            } 
        } 
        var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) 4274681910299810928LL))) ? ((~(arr_19 [10LL] [10LL]))) : ((-(((/* implicit */int) var_5)))))))));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 12; i_8 += 1) /* same iter space */
    {
        arr_27 [9] = -8135160941100148358LL;
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 12; i_9 += 4) 
        {
            for (long long int i_10 = 0; i_10 < 12; i_10 += 1) 
            {
                {
                    var_27 *= ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (0) : (((/* implicit */int) (unsigned char)126))))) < ((~(9223372036854775807LL)))));
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 12; i_11 += 2) 
                    {
                        for (int i_12 = 0; i_12 < 12; i_12 += 1) 
                        {
                            {
                                var_28 &= ((/* implicit */long long int) (-(0)));
                                var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) arr_7 [i_8]))));
                            }
                        } 
                    } 
                    arr_38 [i_8] = ((/* implicit */int) var_12);
                    var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)0)) ? (-8135160941100148356LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_3))))))))));
                }
            } 
        } 
    }
}

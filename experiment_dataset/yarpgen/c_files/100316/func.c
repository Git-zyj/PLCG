/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100316
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
    for (unsigned int i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                var_18 *= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [2LL] [i_1]))) : (16576878056282049191ULL)))) ? (((/* implicit */int) ((((/* implicit */long long int) 1046150718)) > (var_6)))) : (((/* implicit */int) ((unsigned short) arr_2 [i_0] [i_1])))))) > ((+(min((((/* implicit */unsigned long long int) var_12)), (16576878056282049191ULL)))))));
                var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) + ((+(13608463965881832759ULL)))))) ? (((((/* implicit */_Bool) ((unsigned long long int) 3547853295U))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_1]))) : (var_14))) : (((var_0) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [i_0 + 1]))))) : ((-(var_14))))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_2 = 0; i_2 < 15; i_2 += 3) 
    {
        var_20 = ((/* implicit */signed char) arr_6 [i_2]);
        arr_7 [i_2] [11LL] = ((/* implicit */unsigned short) (-(((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_4))) + (max((var_4), (((/* implicit */unsigned int) var_16))))))));
        var_21 -= ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) < (((((/* implicit */_Bool) arr_5 [(signed char)13])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2]))) : (var_4)))))) : ((-(((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */int) arr_5 [i_2])) : (((/* implicit */int) var_0))))))));
        /* LoopSeq 1 */
        for (unsigned short i_3 = 0; i_3 < 15; i_3 += 3) 
        {
            arr_11 [i_2] [i_3] = ((/* implicit */_Bool) ((arr_9 [i_2] [i_2] [(_Bool)1]) ? (((/* implicit */unsigned int) -1046150719)) : (((((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_3]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_17)))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_2))) + (arr_6 [i_2])))))));
            /* LoopSeq 4 */
            /* vectorizable */
            for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 4) 
            {
                var_22 *= ((/* implicit */unsigned long long int) (signed char)127);
                var_23 = ((/* implicit */int) (unsigned char)255);
                var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) arr_12 [1LL]))));
            }
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                arr_16 [i_2] [(_Bool)1] [i_5] [i_5] = ((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) var_5)), ((-(var_13))))) > (((/* implicit */long long int) (~(((((/* implicit */int) var_0)) / (((/* implicit */int) var_9)))))))));
                var_25 = ((/* implicit */_Bool) (+((((!(((/* implicit */_Bool) var_5)))) ? (((var_15) + (-3732930445145171778LL))) : (((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_5] [1] [i_2])) + (((/* implicit */int) arr_15 [i_5] [i_3] [i_3] [i_2])))))))));
            }
            for (unsigned char i_6 = 0; i_6 < 15; i_6 += 3) 
            {
                arr_19 [i_6] [i_3] [i_6] [i_3] = ((/* implicit */long long int) max(((~(((unsigned int) 3732930445145171777LL)))), (var_8)));
                arr_20 [13] [i_3] [i_6] [i_6] = ((/* implicit */unsigned short) (-(2226329135U)));
                var_26 = ((((/* implicit */_Bool) (+(((arr_15 [i_2] [(signed char)5] [8U] [i_2]) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_14)))))) ? (((/* implicit */unsigned int) (((((_Bool)1) ? (((/* implicit */int) arr_17 [i_2] [i_2] [i_6] [(unsigned char)0])) : (1046150727))) << (((var_4) - (3688299473U)))))) : (var_8));
                var_27 = ((/* implicit */unsigned short) max((((((/* implicit */int) (_Bool)1)) ^ (1046150719))), (((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_18 [(unsigned char)3] [i_3] [i_6])), (arr_17 [i_2] [i_2] [i_6] [6ULL])))) ? (((((/* implicit */_Bool) arr_6 [12LL])) ? (((/* implicit */int) arr_15 [2U] [8U] [i_3] [i_6])) : (((/* implicit */int) arr_5 [11LL])))) : (((arr_18 [i_2] [i_3] [i_6]) ? (((/* implicit */int) var_11)) : (-1046150719)))))));
            }
            /* vectorizable */
            for (long long int i_7 = 0; i_7 < 15; i_7 += 4) 
            {
                var_28 = ((/* implicit */signed char) ((((/* implicit */int) arr_14 [i_2] [i_3] [1LL])) >> ((((~(var_8))) - (3607627837U)))));
                arr_24 [i_3] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */int) ((-1LL) > (((/* implicit */long long int) ((/* implicit */int) arr_12 [14U])))))) & (((/* implicit */int) arr_10 [i_2] [i_3]))));
                var_29 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)55)) / (((/* implicit */int) arr_10 [i_2] [i_7]))))) ? (((1554423622) ^ (((/* implicit */int) arr_17 [i_2] [i_2] [i_7] [i_2])))) : (((/* implicit */int) arr_17 [i_7] [i_7] [i_7] [i_2]))));
                arr_25 [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_8) - (arr_22 [i_2] [i_2] [(_Bool)1] [(_Bool)1])))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_2] [i_3] [i_7] [i_2]))) & (arr_6 [i_2]))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_2]))) ^ (arr_6 [i_2])))));
            }
        }
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_8 = 1; i_8 < 10; i_8 += 4) 
    {
        var_30 += ((/* implicit */unsigned int) var_11);
        arr_28 [i_8] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 0LL)))))) > ((+(arr_26 [i_8])))));
        var_31 = ((/* implicit */_Bool) ((((((/* implicit */int) var_12)) - (((/* implicit */int) (unsigned char)101)))) - (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_14 [i_8] [i_8] [i_8])) : (((/* implicit */int) arr_12 [11U]))))));
        var_32 = ((/* implicit */long long int) ((((int) arr_22 [i_8] [i_8] [i_8] [i_8])) > (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_5 [(_Bool)1]))))));
    }
    for (int i_9 = 3; i_9 < 20; i_9 += 4) 
    {
        var_33 = ((/* implicit */unsigned long long int) var_7);
        var_34 = ((/* implicit */int) min(((((~(var_13))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (arr_29 [i_9]) : (((/* implicit */int) arr_30 [6U] [(signed char)17]))))))), (((/* implicit */long long int) (~(var_14))))));
        var_35 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_11)) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_9 + 2] [i_9 - 1]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_30 [i_9 + 2] [i_9 - 2])) && (((/* implicit */_Bool) arr_30 [i_9 + 1] [i_9 - 2])))))));
        arr_32 [11LL] = ((/* implicit */unsigned short) var_3);
    }
    for (unsigned char i_10 = 0; i_10 < 22; i_10 += 4) 
    {
        arr_35 [i_10] = ((((/* implicit */int) arr_31 [i_10])) > ((+(((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) arr_30 [i_10] [i_10]))))))));
        var_36 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_10]))) > (max((var_1), (((/* implicit */unsigned int) (unsigned short)22864)))))) && (((((/* implicit */int) ((((/* implicit */unsigned long long int) var_13)) <= (15ULL)))) > (((((/* implicit */_Bool) 1046150733)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_31 [i_10]))))))));
    }
    var_37 = ((/* implicit */_Bool) min((((/* implicit */long long int) var_3)), ((((+(var_7))) + (min((var_13), (var_6)))))));
}

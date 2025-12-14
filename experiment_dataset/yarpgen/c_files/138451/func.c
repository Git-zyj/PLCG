/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138451
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
    for (short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) (~(1904503550069482496ULL))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_1 = 4; i_1 < 10; i_1 += 4) 
        {
            var_20 = ((/* implicit */unsigned int) ((short) ((arr_4 [i_1]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))));
            arr_5 [i_0] [i_0] = (-(((arr_0 [(short)7]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))));
            var_21 = ((/* implicit */signed char) ((short) 5621178273349374830ULL));
            arr_6 [i_0] [i_0] [i_1] = ((/* implicit */signed char) 1904503550069482497ULL);
        }
        for (signed char i_2 = 0; i_2 < 13; i_2 += 4) 
        {
            /* LoopNest 3 */
            for (short i_3 = 0; i_3 < 13; i_3 += 2) 
            {
                for (signed char i_4 = 0; i_4 < 13; i_4 += 2) 
                {
                    for (short i_5 = 0; i_5 < 13; i_5 += 4) 
                    {
                        {
                            arr_19 [i_0] [i_0] [i_0] [i_0] [(signed char)9] = min((((/* implicit */unsigned long long int) (signed char)16)), (max((16542240523640069102ULL), (((/* implicit */unsigned long long int) (signed char)88)))));
                            arr_20 [i_5] [i_3] [i_3] [i_2] [i_0] = ((/* implicit */unsigned long long int) ((signed char) max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)16)) : (((/* implicit */int) arr_1 [i_2] [i_4])))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0] [(short)8] [7U] [(short)8] [(signed char)8] [i_0]))) < (arr_12 [i_0] [(signed char)9] [i_3] [(signed char)9])))))));
                            var_22 = ((/* implicit */signed char) ((arr_8 [i_0]) < (max(((+(var_2))), (((/* implicit */unsigned long long int) ((signed char) var_18)))))));
                            var_23 = ((/* implicit */signed char) (short)-8938);
                            arr_21 [i_0] [i_4] [(signed char)8] [(signed char)1] [i_0] = ((/* implicit */signed char) ((unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2243926285U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) : (3955870084U)))), (var_1))));
                        }
                    } 
                } 
            } 
            arr_22 [i_0] [i_2] [9U] = ((/* implicit */signed char) ((unsigned long long int) ((short) ((unsigned long long int) var_5))));
            arr_23 [i_0] [(signed char)9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(1904503550069482496ULL)))) && (((/* implicit */_Bool) var_13))));
            arr_24 [i_0] = arr_2 [i_2];
        }
        /* LoopSeq 3 */
        for (short i_6 = 0; i_6 < 13; i_6 += 2) /* same iter space */
        {
            arr_29 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? ((-(min((((/* implicit */unsigned long long int) arr_18 [(short)4] [i_0] [(signed char)11] [(signed char)11] [(short)4] [i_0])), (6017963714346492031ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_6] [i_0]))) : (arr_18 [i_0] [(short)11] [i_0] [i_0] [i_6] [i_0]))))));
            var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((1904503550069482496ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)17))))))) + (arr_26 [i_0])));
        }
        /* vectorizable */
        for (short i_7 = 0; i_7 < 13; i_7 += 2) /* same iter space */
        {
            arr_33 [i_0] [0U] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_5))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-29))) - (arr_13 [i_0] [i_0]))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_9)) : (var_1))));
            var_25 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_13)) ? (var_17) : (var_17))) % (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)16)))));
            arr_34 [i_0] = (((!(((/* implicit */_Bool) var_6)))) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))) : (12428780359363059585ULL))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-17))) + (16210415247392518704ULL))));
        }
        /* vectorizable */
        for (short i_8 = 0; i_8 < 13; i_8 += 2) /* same iter space */
        {
            arr_37 [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */int) var_10)) < (((/* implicit */int) var_11)))))));
            var_26 = ((/* implicit */unsigned int) (((~(((/* implicit */int) arr_1 [i_0] [i_0])))) & ((~(((/* implicit */int) var_14))))));
        }
    }
    /* vectorizable */
    for (unsigned long long int i_9 = 0; i_9 < 20; i_9 += 4) 
    {
        var_27 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (short)-29244)))))));
        var_28 = ((/* implicit */short) (!(((/* implicit */_Bool) (signed char)-43))));
        var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) ((((/* implicit */_Bool) (-(16210415247392518704ULL)))) ? (((((/* implicit */int) var_16)) % (((/* implicit */int) (signed char)-102)))) : ((~(((/* implicit */int) (short)-8146)))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_10 = 0; i_10 < 15; i_10 += 3) 
    {
        var_30 = ((short) arr_39 [0U]);
        /* LoopNest 2 */
        for (signed char i_11 = 3; i_11 < 13; i_11 += 4) 
        {
            for (signed char i_12 = 1; i_12 < 13; i_12 += 3) 
            {
                {
                    arr_48 [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 16210415247392518706ULL))))) / (((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (signed char)111)) : (((/* implicit */int) (signed char)-127))))));
                    var_31 = ((/* implicit */signed char) (~(var_12)));
                    arr_49 [9U] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((var_8) >= (var_1))))));
                }
            } 
        } 
    }
    var_32 ^= ((/* implicit */short) ((((/* implicit */_Bool) var_13)) ? (min((((/* implicit */unsigned int) (short)7621)), (33849762U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (short)-13551)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))))));
}

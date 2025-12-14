/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178175
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
    var_19 |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) -6913785634094318627LL))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (-6913785634094318632LL) : (-6913785634094318634LL)));
        /* LoopSeq 4 */
        for (signed char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            arr_7 [i_1] [i_1] [(signed char)17] = ((/* implicit */_Bool) (-(((arr_6 [i_0] [i_1] [i_1]) / (arr_6 [i_0] [i_1] [i_1])))));
            var_21 = ((/* implicit */unsigned short) ((var_15) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [(signed char)1] [i_0])))));
            var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) arr_1 [i_1]))));
        }
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned short i_3 = 0; i_3 < 20; i_3 += 3) 
            {
                var_23 &= ((/* implicit */unsigned int) (~(-6913785634094318627LL)));
                arr_13 [i_0] [i_2] [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_0 [i_2 + 1]))));
                var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-19)) && (((/* implicit */_Bool) 1717424401585585309LL))));
            }
            var_25 = var_3;
            /* LoopSeq 1 */
            for (signed char i_4 = 0; i_4 < 20; i_4 += 1) 
            {
                var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) var_11))));
                /* LoopSeq 2 */
                for (long long int i_5 = 1; i_5 < 19; i_5 += 1) 
                {
                    arr_18 [2ULL] [i_5] &= ((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_5 + 1] [i_2 + 1] [i_2 + 1])) != (arr_10 [i_2 + 1])));
                    arr_19 [i_2 + 1] [i_2 + 1] [i_2] [i_2 + 1] [i_2] [i_2 + 1] = ((/* implicit */unsigned short) arr_6 [i_2] [13ULL] [i_5 - 1]);
                    var_27 = ((/* implicit */_Bool) (+(var_2)));
                }
                for (unsigned char i_6 = 1; i_6 < 18; i_6 += 4) 
                {
                    arr_22 [i_0] [i_4] [i_4] [i_4] [i_4] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) arr_10 [i_6 + 2])) : (((((/* implicit */long long int) arr_8 [i_0])) & (-6913785634094318632LL)))));
                    var_28 ^= ((/* implicit */_Bool) arr_21 [i_2 + 1] [i_4] [i_0]);
                    var_29 = ((/* implicit */unsigned long long int) ((arr_8 [i_6 + 1]) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-19)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_17)))))));
                    arr_23 [i_0] [i_2 + 1] [i_4] [i_6 - 1] [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) -15LL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) (short)-6933)))))) : (((arr_16 [i_0] [i_2 + 1] [i_0]) << (((/* implicit */int) arr_2 [i_2] [i_2]))))));
                    arr_24 [i_0] |= ((/* implicit */long long int) var_17);
                }
                var_30 = ((/* implicit */long long int) ((arr_2 [i_2 + 1] [i_2 + 1]) ? (((((/* implicit */int) (short)6933)) >> (((-6913785634094318627LL) + (6913785634094318647LL))))) : (((/* implicit */int) var_17))));
            }
            var_31 = ((/* implicit */unsigned int) ((var_15) != (arr_14 [i_2 + 1])));
        }
        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) /* same iter space */
        {
            arr_27 [i_7] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_9))));
            var_32 = ((/* implicit */_Bool) (+(((/* implicit */int) var_17))));
            var_33 = ((arr_6 [i_0] [i_7] [i_7]) << (((((/* implicit */long long int) var_0)) / (arr_1 [i_0]))));
        }
        for (unsigned long long int i_8 = 0; i_8 < 20; i_8 += 3) 
        {
            arr_30 [i_8] = ((arr_16 [i_8] [i_8] [i_0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))));
            arr_31 [i_8] [19U] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_18)) ? (3195176784673569691LL) : (((/* implicit */long long int) 627523119U))));
            var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) 6913785634094318611LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)6933))) : (3667444177U)));
            var_35 = ((/* implicit */short) max((var_35), (((/* implicit */short) ((((((/* implicit */_Bool) var_18)) ? (arr_21 [i_0] [i_8] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_3))))) <= (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (var_18) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))))))));
        }
        /* LoopSeq 2 */
        for (long long int i_9 = 3; i_9 < 18; i_9 += 4) 
        {
            var_36 = ((/* implicit */int) max((var_36), (((/* implicit */int) arr_3 [i_9 - 2] [i_9 + 2]))));
            arr_34 [i_9] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_21 [i_9 + 1] [(_Bool)1] [i_9]))));
            /* LoopNest 2 */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                for (short i_11 = 3; i_11 < 18; i_11 += 3) 
                {
                    {
                        arr_40 [i_9] [i_10] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_20 [(_Bool)1] [i_9 - 2] [i_10] [i_11 + 1] [i_11])) > ((+(((/* implicit */int) (signed char)-13))))));
                        var_37 = ((/* implicit */long long int) min((var_37), (((/* implicit */long long int) var_7))));
                        arr_41 [i_9] [i_11 + 1] [19ULL] [i_9] [i_9] = -6913785634094318656LL;
                    }
                } 
            } 
        }
        for (long long int i_12 = 0; i_12 < 20; i_12 += 4) 
        {
            var_38 = ((/* implicit */unsigned long long int) max((var_38), (((/* implicit */unsigned long long int) (-(((unsigned int) (signed char)0)))))));
            arr_46 [i_12] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))));
            arr_47 [i_0] [i_0] = ((/* implicit */unsigned char) var_4);
        }
    }
    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
    {
        arr_50 [(short)15] = ((/* implicit */short) ((((/* implicit */_Bool) min(((-(var_18))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) var_7)))))))) ? (((/* implicit */int) (signed char)-13)) : (arr_10 [i_13])));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_14 = 0; i_14 < 16; i_14 += 1) 
        {
            var_39 = ((/* implicit */unsigned int) max((var_39), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_39 [i_13])) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (arr_28 [i_13]))))));
            arr_53 [i_13] |= ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)13675)) ? (((((/* implicit */_Bool) (unsigned short)51855)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-71))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_13] [(unsigned short)10])))));
            var_40 ^= 681470476U;
            var_41 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_1 [i_13]) : (var_6)))) && (((/* implicit */_Bool) var_13))));
        }
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158244
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
    var_15 = ((/* implicit */unsigned long long int) var_0);
    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((((/* implicit */unsigned long long int) max((var_9), (((/* implicit */unsigned int) var_6))))) - (var_2)))));
    var_17 *= ((/* implicit */signed char) ((((/* implicit */int) var_6)) != (((/* implicit */int) var_0))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 1; i_0 < 18; i_0 += 3) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */unsigned long long int) (~((((~(((/* implicit */int) var_3)))) / (((((/* implicit */_Bool) 1905026261307937280ULL)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_1 [i_0]))))))));
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (signed char i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned char i_3 = 0; i_3 < 22; i_3 += 4) 
                {
                    for (unsigned int i_4 = 0; i_4 < 22; i_4 += 1) 
                    {
                        {
                            arr_14 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */signed char) (-(((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) != (arr_8 [(signed char)12] [(signed char)12])))) / (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) <= (arr_6 [i_2] [i_2] [i_2]))))))));
                            var_18 ^= ((/* implicit */short) var_8);
                        }
                    } 
                } 
                var_19 &= ((/* implicit */unsigned short) (+(((((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))) | (arr_7 [i_0 + 4] [i_0 + 4])))));
                arr_15 [i_0] [i_0] [i_2] = ((/* implicit */long long int) var_13);
            }
            var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) arr_6 [i_0] [4] [4]))));
            var_21 -= ((/* implicit */long long int) ((max((var_4), (arr_3 [18U] [i_0]))) <= (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
            arr_16 [(unsigned char)0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_0 [12LL]), (((/* implicit */long long int) var_7)))))));
        }
        for (signed char i_5 = 1; i_5 < 21; i_5 += 1) 
        {
            /* LoopSeq 1 */
            for (int i_6 = 3; i_6 < 21; i_6 += 3) 
            {
                /* LoopNest 2 */
                for (signed char i_7 = 1; i_7 < 18; i_7 += 3) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 4) 
                    {
                        {
                            arr_26 [i_0] [i_5 - 1] [i_0] [i_5] [i_6 + 1] [i_7 + 1] [i_0] = ((/* implicit */unsigned int) var_0);
                            arr_27 [i_0] [i_0 + 1] [i_0] [i_0] [i_0] = ((/* implicit */long long int) var_2);
                        }
                    } 
                } 
                arr_28 [i_0] = ((/* implicit */unsigned int) var_14);
            }
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 22; i_9 += 3) 
            {
                for (unsigned char i_10 = 2; i_10 < 19; i_10 += 3) 
                {
                    {
                        arr_34 [i_0] [i_0] [i_9] [i_0] = ((/* implicit */long long int) ((signed char) (((-(((/* implicit */int) var_1)))) & ((-(((/* implicit */int) var_5)))))));
                        arr_35 [i_0] [i_0] [i_0] = ((/* implicit */signed char) max((((long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_5))))), (((/* implicit */long long int) (-(var_4))))));
                    }
                } 
            } 
            var_22 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((short) var_12)))));
        }
        for (unsigned int i_11 = 0; i_11 < 22; i_11 += 2) 
        {
            var_23 = ((/* implicit */long long int) ((((unsigned long long int) var_13)) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) + (var_13)))));
            arr_38 [i_0] = ((/* implicit */int) ((unsigned long long int) ((unsigned long long int) arr_11 [i_11] [i_0] [i_0 - 1] [i_11])));
        }
        arr_39 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)32767)) ? (((unsigned long long int) 186658710U)) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
        arr_40 [i_0] = ((/* implicit */unsigned short) var_8);
    }
    /* vectorizable */
    for (unsigned long long int i_12 = 1; i_12 < 18; i_12 += 3) /* same iter space */
    {
        arr_45 [i_12] &= ((/* implicit */short) (+(((/* implicit */int) (unsigned char)178))));
        arr_46 [i_12] = ((/* implicit */short) (+(((long long int) var_9))));
    }
    /* vectorizable */
    for (unsigned long long int i_13 = 1; i_13 < 18; i_13 += 3) /* same iter space */
    {
        arr_49 [i_13 - 1] = ((/* implicit */int) (~(var_13)));
        arr_50 [i_13] = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) var_0)) ? (arr_43 [10ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [6U] [i_13] [15LL] [6U] [i_13]))))));
        var_24 -= ((/* implicit */signed char) (-((~(((/* implicit */int) arr_17 [13LL] [i_13]))))));
        arr_51 [(short)18] = ((/* implicit */long long int) ((((unsigned long long int) var_7)) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_31 [i_13 + 2] [(signed char)2] [i_13] [i_13 + 4]))))));
    }
}

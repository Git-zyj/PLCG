/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151925
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
    for (signed char i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 2; i_2 < 17; i_2 += 2) 
                {
                    for (unsigned char i_3 = 1; i_3 < 17; i_3 += 3) 
                    {
                        {
                            arr_8 [(signed char)0] [i_2] [i_2] [i_0] &= ((/* implicit */unsigned char) arr_6 [(unsigned char)10] [i_2] [i_2]);
                            arr_9 [i_0] [i_0] [(signed char)7] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) var_7)) ? (arr_5 [i_0 - 2] [i_2 + 2] [i_3 - 1] [i_0 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) : ((~(arr_5 [(unsigned char)10] [i_2 + 1] [i_3 + 1] [i_0 + 1])))));
                            var_17 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) (signed char)125)), ((unsigned char)226))))) * (var_6)));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_4 = 3; i_4 < 16; i_4 += 4) 
                {
                    for (unsigned long long int i_5 = 1; i_5 < 17; i_5 += 3) 
                    {
                        for (unsigned char i_6 = 1; i_6 < 16; i_6 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) max(((+(((/* implicit */int) (unsigned char)114)))), (max(((-(((/* implicit */int) arr_13 [i_0 + 1] [(signed char)17] [i_0 + 1])))), (((/* implicit */int) min((arr_15 [i_6] [i_1] [i_1] [i_0]), ((unsigned char)195)))))))))));
                                var_19 = ((/* implicit */unsigned long long int) max((var_19), (max((arr_17 [i_6] [14U] [14U] [i_1 + 3]), (arr_17 [i_6] [(signed char)18] [(signed char)18] [i_1 + 3])))));
                                var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (+(max((arr_6 [i_1] [(unsigned char)16] [i_5 + 1]), (((/* implicit */unsigned long long int) var_12)))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_7 = 1; i_7 < 20; i_7 += 2) 
    {
        for (signed char i_8 = 1; i_8 < 19; i_8 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_9 = 3; i_9 < 20; i_9 += 2) 
                {
                    for (unsigned char i_10 = 1; i_10 < 19; i_10 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned char) min((var_21), (var_10)));
                            var_22 = ((/* implicit */signed char) (-(((/* implicit */int) max((arr_22 [i_7]), (arr_22 [i_7]))))));
                            var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) var_9))));
                            var_24 += (+(min((((((/* implicit */_Bool) 4252264619U)) ? (arr_20 [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))), (((/* implicit */unsigned long long int) (+(arr_26 [21U] [i_8] [21U])))))));
                        }
                    } 
                } 
                arr_30 [i_7] [i_7] = ((/* implicit */unsigned char) max((arr_29 [i_7] [i_8] [i_8 + 4]), (min((arr_27 [i_7] [i_8] [i_7] [i_8 + 4]), (arr_27 [i_7 + 1] [(signed char)16] [i_7] [17ULL])))));
                /* LoopNest 3 */
                for (unsigned long long int i_11 = 2; i_11 < 22; i_11 += 3) 
                {
                    for (unsigned long long int i_12 = 2; i_12 < 21; i_12 += 2) 
                    {
                        for (unsigned char i_13 = 1; i_13 < 22; i_13 += 2) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned int) ((unsigned char) var_1));
                                var_26 &= ((/* implicit */signed char) min((((/* implicit */unsigned int) (((~(((/* implicit */int) (signed char)-100)))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_38 [i_12])))))))), (((arr_25 [i_7 + 1] [i_13 - 1] [i_8 + 3]) >> ((((~(var_7))) - (10278578314857398054ULL)))))));
                                var_27 -= arr_24 [i_12];
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_14 = 3; i_14 < 23; i_14 += 3) 
    {
        for (unsigned long long int i_15 = 1; i_15 < 20; i_15 += 1) 
        {
            for (unsigned long long int i_16 = 3; i_16 < 23; i_16 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_17 = 1; i_17 < 22; i_17 += 2) 
                    {
                        for (unsigned int i_18 = 4; i_18 < 21; i_18 += 2) 
                        {
                            {
                                var_28 = ((/* implicit */unsigned char) ((((/* implicit */int) var_11)) ^ (((/* implicit */int) (!(((/* implicit */_Bool) arr_43 [i_16 - 2] [i_15 + 4] [i_15])))))));
                                var_29 = ((/* implicit */unsigned char) 2343576499U);
                                arr_51 [i_14] [i_18] [i_14] [i_14] [(signed char)18] [(signed char)18] &= (~(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) & (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [1ULL]))) : (var_7))))));
                                arr_52 [i_17 + 2] [i_15] [i_15] [i_14] = ((/* implicit */signed char) arr_49 [10ULL] [i_17] [i_16] [i_16] [10ULL]);
                                arr_53 [i_15] [i_15] [12ULL] [i_15] [i_15] [(unsigned char)5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_41 [i_14 + 1]))))) ? ((+(var_13))) : (((/* implicit */unsigned long long int) arr_43 [i_18] [(signed char)4] [i_16]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_19 = 1; i_19 < 22; i_19 += 2) 
                    {
                        for (signed char i_20 = 1; i_20 < 20; i_20 += 4) 
                        {
                            {
                                arr_59 [i_15] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_54 [i_14] [i_16] [i_15] [i_19] [i_20] [i_20]))))), (max((arr_54 [8U] [i_15] [i_15] [21ULL] [8U] [i_19]), (((/* implicit */unsigned long long int) var_10))))));
                                var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) var_1))));
                                var_31 -= (+((-(arr_54 [i_16] [i_15 + 2] [2ULL] [i_15 + 1] [i_20 + 2] [i_16]))));
                            }
                        } 
                    } 
                    arr_60 [i_14] [i_15] = ((/* implicit */signed char) ((((arr_44 [i_15]) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_57 [i_14 - 2] [i_15] [1ULL] [i_15] [i_14] [i_14] [(unsigned char)4])) ? (var_6) : (2343576499U)))))) || (((/* implicit */_Bool) (~((+(var_14))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_21 = 3; i_21 < 23; i_21 += 2) 
                    {
                        for (unsigned long long int i_22 = 1; i_22 < 23; i_22 += 3) 
                        {
                            {
                                arr_68 [i_14] [i_14] [i_14] [i_14] [(unsigned char)21] [i_15] [14ULL] = ((/* implicit */signed char) ((unsigned long long int) var_12));
                                var_32 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) / ((+(((/* implicit */int) (unsigned char)255))))));
                            }
                        } 
                    } 
                    arr_69 [i_15] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_40 [i_14 - 2])) ? (((/* implicit */int) arr_40 [i_14 - 1])) : (((/* implicit */int) arr_40 [i_14 - 1]))))) ^ (max((((/* implicit */unsigned int) var_16)), (max((((/* implicit */unsigned int) var_5)), (4294967283U)))))));
                }
            } 
        } 
    } 
}

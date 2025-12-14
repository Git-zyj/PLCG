/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169688
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
    var_11 += ((/* implicit */signed char) (_Bool)1);
    var_12 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_1)))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((short) var_4)))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))) : (arr_2 [i_0])))) ? (((unsigned long long int) arr_0 [i_0])) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [i_0])))))));
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_0 [(short)5]))))) ? (((/* implicit */int) (signed char)-1)) : (((((/* implicit */_Bool) (signed char)26)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10))))));
        arr_5 [i_0] = ((/* implicit */unsigned char) var_0);
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 21; i_1 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_2 = 1; i_2 < 20; i_2 += 3) 
        {
            /* LoopSeq 3 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                arr_14 [i_3] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)0))))) ? (((/* implicit */int) (signed char)0)) : ((-(((/* implicit */int) (signed char)0))))));
                arr_15 [i_3] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_12 [i_3] [10LL] [i_3]))));
                arr_16 [i_1] [i_1] [i_2] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_10 [i_1] [i_1])))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_8 [i_3]))));
                arr_17 [i_3] [(signed char)15] [i_2] [4U] = ((/* implicit */signed char) ((_Bool) arr_9 [i_2 + 1] [i_2]));
            }
            for (unsigned int i_4 = 0; i_4 < 21; i_4 += 4) /* same iter space */
            {
                var_14 = ((((/* implicit */int) arr_7 [i_2 - 1] [(unsigned short)1])) > (((/* implicit */int) var_10)));
                var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) (+(((/* implicit */int) arr_12 [i_4] [6ULL] [i_1])))))));
            }
            for (unsigned int i_5 = 0; i_5 < 21; i_5 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                {
                    for (signed char i_7 = 2; i_7 < 20; i_7 += 4) 
                    {
                        {
                            var_16 += ((/* implicit */signed char) arr_27 [i_2 - 1] [i_5] [i_6 - 1] [i_6 - 1] [i_7 - 1] [i_7]);
                            var_17 = ((/* implicit */unsigned int) ((arr_29 [i_1] [i_6] [(signed char)8] [i_1] [i_1]) < (((/* implicit */long long int) ((/* implicit */int) (signed char)120)))));
                            arr_30 [i_1] [i_2] [i_6] = ((/* implicit */unsigned int) ((var_9) + (((/* implicit */unsigned long long int) arr_11 [i_7] [6U]))));
                        }
                    } 
                } 
                var_18 *= (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_21 [14LL]))))));
                arr_31 [i_2] [i_2] [(short)7] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_25 [i_2 - 1] [i_2] [20U] [(short)1] [i_2] [i_2 + 1])));
                /* LoopNest 2 */
                for (short i_8 = 0; i_8 < 21; i_8 += 4) 
                {
                    for (short i_9 = 0; i_9 < 21; i_9 += 3) 
                    {
                        {
                            arr_37 [8U] [i_2] [i_5] [i_9] [(signed char)4] [i_9] [i_9] = ((((/* implicit */int) var_6)) != (((/* implicit */int) arr_23 [i_2 - 1] [i_2] [i_2 - 1] [i_2])));
                            arr_38 [i_1] [i_1] [i_1] [i_9] = ((/* implicit */unsigned long long int) (short)-11);
                        }
                    } 
                } 
            }
            arr_39 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_36 [i_1] [1U] [i_2] [(_Bool)1] [i_2] [i_1] [i_2 - 1])) ? (((((/* implicit */int) arr_9 [i_1] [i_2])) + (((/* implicit */int) arr_27 [i_2] [i_2] [i_1] [i_1] [i_1] [i_1])))) : (((/* implicit */int) (signed char)-1))));
            /* LoopNest 2 */
            for (long long int i_10 = 0; i_10 < 21; i_10 += 4) 
            {
                for (long long int i_11 = 0; i_11 < 21; i_11 += 4) 
                {
                    {
                        arr_45 [2ULL] [i_10] [5U] [i_2] [i_1] [i_1] = (+(((unsigned int) var_6)));
                        arr_46 [i_1] [i_2] [i_10] [(unsigned char)10] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_2)))) ? (((/* implicit */int) (signed char)4)) : (((/* implicit */int) arr_22 [i_2] [15ULL] [i_2 + 1] [i_2]))));
                        arr_47 [i_1] [i_2] [i_2] [i_10] [i_11] = ((/* implicit */short) ((_Bool) arr_44 [(unsigned char)7]));
                    }
                } 
            } 
            var_19 = ((/* implicit */unsigned short) (_Bool)1);
        }
        var_20 = ((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_1] [i_1])) == (((/* implicit */int) arr_9 [i_1] [i_1]))));
        arr_48 [(signed char)11] = arr_33 [i_1] [i_1] [i_1] [i_1] [i_1] [(short)13];
    }
    /* vectorizable */
    for (unsigned char i_12 = 0; i_12 < 14; i_12 += 4) 
    {
        var_21 -= ((((/* implicit */_Bool) arr_13 [i_12] [(_Bool)1] [i_12] [(signed char)8])) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_23 [(short)10] [i_12] [(unsigned short)19] [i_12]))) - (0U))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_21 [i_12]))))));
        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) arr_7 [(_Bool)1] [i_12])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_0)))))))));
        var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) arr_7 [(signed char)18] [i_12]))));
        var_24 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_18 [i_12] [i_12] [(unsigned short)8] [(unsigned char)11])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_35 [i_12] [i_12] [6ULL] [i_12] [i_12] [i_12] [i_12]))))));
    }
}

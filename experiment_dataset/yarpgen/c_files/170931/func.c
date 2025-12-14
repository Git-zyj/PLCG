/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170931
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
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_17)) ? ((+((-(((/* implicit */int) var_16)))))) : (((/* implicit */int) var_18))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned short i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 20; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */long long int) (~(arr_7 [i_3 - 1] [i_3 - 2] [i_3 + 2] [i_3 + 1])));
                                var_21 *= ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_0 [i_0 + 1])))));
                                var_22 = ((((/* implicit */int) arr_12 [i_0 + 1] [(unsigned char)20] [i_0 + 1] [i_0 + 1] [(short)14] [(unsigned char)20])) << ((((-(2054550730U))) - (2240416557U))));
                                arr_14 [i_3 - 2] [i_3 + 2] [i_3 - 2] [(unsigned char)0] = ((/* implicit */_Bool) arr_11 [(unsigned char)7] [i_1] [i_2] [(_Bool)1]);
                            }
                        } 
                    } 
                    var_23 -= ((/* implicit */unsigned long long int) (~((+(var_13)))));
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 22; i_5 += 3) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 22; i_6 += 2) 
                        {
                            {
                                var_24 &= ((/* implicit */unsigned long long int) (~(arr_8 [(signed char)15])));
                                var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) arr_6 [(_Bool)1] [18LL] [i_2] [(unsigned char)3])) ? (((/* implicit */int) var_18)) : (((/* implicit */int) arr_10 [14] [1U] [i_2] [i_5] [i_6]))))))));
                            }
                        } 
                    } 
                }
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    var_26 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_20 [(_Bool)1] [i_0 + 1] [19U] [9ULL]))))) > (((((/* implicit */_Bool) (-(7137824333842008963LL)))) ? (((/* implicit */unsigned long long int) max((var_0), (((/* implicit */unsigned int) arr_23 [(signed char)6] [10LL] [(signed char)6]))))) : (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-115))) : (arr_16 [i_0] [(signed char)7] [(unsigned char)19] [i_7])))))));
                    arr_24 [i_7] [i_7] [i_7] [0U] = ((/* implicit */signed char) (-(((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_7))))) * (((arr_3 [3ULL]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)70)))))))));
                    arr_25 [i_0 + 1] [i_7] [i_7] [i_7] = (((+((+(var_12))))) != (((/* implicit */long long int) 3089301640U)));
                }
                /* vectorizable */
                for (unsigned long long int i_8 = 1; i_8 < 20; i_8 += 4) 
                {
                    var_27 = ((/* implicit */_Bool) min((var_27), (((_Bool) -7137824333842008965LL))));
                    arr_28 [i_0] [i_1] [10] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)-31)) <= (((/* implicit */int) (signed char)-55)))))) / (arr_7 [i_0] [(signed char)14] [(unsigned char)14] [i_0 + 1])));
                    var_28 = ((/* implicit */unsigned short) (unsigned char)227);
                    var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) var_12))));
                    arr_29 [i_0] [i_0 + 1] [(signed char)2] [5LL] = ((/* implicit */unsigned long long int) var_10);
                }
                var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) ((((/* implicit */unsigned int) arr_8 [i_1])) & (min((((/* implicit */unsigned int) arr_8 [i_1])), (arr_17 [i_0] [9ULL] [3ULL] [i_0 + 1] [i_1] [i_1] [i_1]))))))));
                var_31 += ((/* implicit */int) ((((/* implicit */long long int) (~(((((/* implicit */int) arr_6 [10U] [(unsigned char)11] [8ULL] [3ULL])) >> (((((/* implicit */int) (signed char)-11)) + (12)))))))) ^ (arr_11 [i_0 + 1] [14U] [i_1] [i_1])));
            }
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183787
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    var_20 += ((/* implicit */unsigned char) ((short) min((((int) arr_4 [(unsigned char)9])), (((((/* implicit */int) var_2)) - (((/* implicit */int) var_2)))))));
                    arr_8 [i_2] [i_1] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_16)), (arr_1 [i_0])))) ? (min((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_17))))), (arr_1 [i_0]))) : (((((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_0] [i_1] [i_1] [i_2]))))) ? (min((var_19), (((/* implicit */unsigned long long int) (_Bool)0)))) : (((/* implicit */unsigned long long int) var_8))))));
                }
            } 
        } 
    } 
    var_21 &= ((/* implicit */short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_10)) ? (var_8) : (((/* implicit */long long int) var_6))))))) ? (((/* implicit */int) (unsigned short)30440)) : ((+(min((((/* implicit */int) var_7)), (var_18)))))));
    var_22 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_14)))))));
    /* LoopNest 3 */
    for (unsigned short i_3 = 3; i_3 < 15; i_3 += 3) 
    {
        for (unsigned int i_4 = 0; i_4 < 18; i_4 += 1) 
        {
            for (long long int i_5 = 1; i_5 < 17; i_5 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_6 = 3; i_6 < 17; i_6 += 4) /* same iter space */
                    {
                        var_23 *= ((/* implicit */unsigned char) ((long long int) (+(arr_4 [i_5 + 1]))));
                        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((min((((/* implicit */long long int) arr_11 [i_6 - 3])), (arr_14 [i_3 - 2] [i_4] [i_5]))), (((/* implicit */long long int) ((int) arr_16 [15U] [15U] [i_3] [15U] [i_4])))))) ? (((/* implicit */int) ((unsigned short) arr_13 [i_3 - 1]))) : (((/* implicit */int) (unsigned short)35096))));
                    }
                    /* vectorizable */
                    for (unsigned int i_7 = 3; i_7 < 17; i_7 += 4) /* same iter space */
                    {
                        var_25 = ((/* implicit */_Bool) arr_5 [i_3] [i_4] [i_4] [6U]);
                        /* LoopSeq 4 */
                        for (unsigned long long int i_8 = 0; i_8 < 18; i_8 += 4) 
                        {
                            arr_22 [i_7] [i_5] [i_5] [i_3 + 3] = ((/* implicit */long long int) ((unsigned int) arr_4 [i_3 + 2]));
                            var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_4] [i_5] [i_5 + 1] [(unsigned char)10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_5 - 1] [i_5 - 1] [i_5 + 1] [i_8]))) : (var_19)));
                            arr_23 [i_8] &= ((/* implicit */long long int) ((short) arr_14 [i_8] [i_7] [i_8]));
                            var_27 = (~(((/* implicit */int) arr_11 [i_3 - 3])));
                        }
                        for (unsigned short i_9 = 0; i_9 < 18; i_9 += 1) 
                        {
                            var_28 = ((/* implicit */short) 584603018U);
                            var_29 = ((/* implicit */long long int) arr_11 [i_3 + 1]);
                            arr_26 [i_3 + 1] [i_3] [i_5] [i_5] [i_7 - 3] [i_7 - 3] [8U] = (-(((/* implicit */int) var_16)));
                            var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) var_7))));
                        }
                        for (unsigned int i_10 = 1; i_10 < 15; i_10 += 4) /* same iter space */
                        {
                            var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_19 [i_3 - 1])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [i_3] [i_3] [i_3])) ? (var_15) : (((/* implicit */int) var_16))))) : (arr_7 [i_5 - 1] [i_7 - 2] [i_10 - 1]))))));
                            var_32 |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_7]))) : (arr_4 [i_4])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_7 - 2]))) : (((((/* implicit */_Bool) arr_0 [(_Bool)1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (arr_19 [(signed char)9])))));
                        }
                        for (unsigned int i_11 = 1; i_11 < 15; i_11 += 4) /* same iter space */
                        {
                            var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) ((((((/* implicit */_Bool) arr_19 [(short)14])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (arr_28 [i_3] [i_3] [i_3] [2LL] [i_3 - 3] [i_3] [i_3 - 3]))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_24 [i_3] [i_3] [i_7] [i_11 + 3])) >= (((/* implicit */int) arr_24 [i_3] [i_4] [i_5 - 1] [i_7 - 2])))))))))));
                            var_34 = ((/* implicit */long long int) (~(((/* implicit */int) var_2))));
                            arr_34 [i_3] [i_4] [i_4] [i_5] = ((/* implicit */unsigned long long int) ((var_7) ? (var_18) : (arr_21 [i_3 + 1] [i_3 + 2] [i_3 + 2] [i_3] [i_5 + 1] [i_11 + 1])));
                        }
                        var_35 *= ((/* implicit */unsigned short) ((_Bool) ((long long int) arr_11 [14U])));
                        var_36 = ((/* implicit */long long int) (~(((/* implicit */int) arr_12 [i_3 + 1] [i_3 + 1]))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned short i_12 = 0; i_12 < 18; i_12 += 1) 
                    {
                        arr_38 [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_21 [i_3 - 1] [i_3 - 3] [i_4] [14U] [i_12] [i_12]), (arr_21 [9U] [9U] [i_4] [i_4] [i_4] [i_4])))) ? (((int) arr_25 [i_3 + 1] [i_3] [i_3] [i_3] [i_12])) : ((+(((/* implicit */int) ((unsigned char) var_12)))))));
                        var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) min((var_1), (var_2)))) : (((((/* implicit */_Bool) arr_32 [i_3] [i_3] [i_3] [i_5] [i_12] [i_12])) ? (((/* implicit */int) arr_9 [i_4])) : (((/* implicit */int) arr_5 [i_3] [i_3] [i_3 - 1] [i_3]))))))) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (unsigned short)36583))));
                        arr_39 [(unsigned short)2] [i_5] [i_4] [(unsigned short)2] &= ((_Bool) arr_0 [i_3 - 1]);
                    }
                }
            } 
        } 
    } 
}

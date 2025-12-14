/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175175
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
    var_14 = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */unsigned long long int) max((var_13), (var_9)))) + (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_5))))));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_1 - 1] [i_0] = ((/* implicit */signed char) (-(((((/* implicit */unsigned int) ((/* implicit */int) ((arr_6 [i_0] [i_0 - 1] [i_0] [i_0 + 2]) > (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_2]))))))) ^ (((317274611U) + (3977692692U)))))));
                    var_15 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(min((arr_1 [2]), (((/* implicit */unsigned long long int) var_0))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 - 1])))))) : (arr_1 [i_0])));
                    /* LoopSeq 2 */
                    for (signed char i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        var_16 ^= ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((317274631U) * (3977692710U)))))))));
                        var_17 = (+(3977692679U));
                        /* LoopSeq 3 */
                        for (unsigned char i_4 = 2; i_4 < 16; i_4 += 3) 
                        {
                            var_18 = ((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */int) arr_11 [i_3] [i_1 - 1] [i_1 - 1] [i_1 - 1])) == (((/* implicit */int) arr_11 [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1 - 1]))))), (((var_11) % (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_3] [i_1 - 1] [i_1 - 1] [i_1 - 1])))))));
                            arr_12 [i_0] [(unsigned char)9] [i_2] [i_3] [i_0] [(signed char)9] = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) 3977692722U)) ? (3977692698U) : (317274596U))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 317274598U))))))))));
                            var_19 -= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_11 [i_1] [(unsigned short)4] [i_3] [(short)5])) ? (arr_1 [i_0 + 1]) : (arr_1 [i_4 + 2]))), (((/* implicit */unsigned long long int) (~(317274611U))))));
                            arr_13 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_2] [i_0 - 1] |= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_4 [i_1] [i_1 - 1] [i_1 + 1])), (((var_0) + (((/* implicit */long long int) var_9))))))) < (arr_1 [i_0])));
                        }
                        for (int i_5 = 0; i_5 < 18; i_5 += 3) 
                        {
                            arr_17 [i_0] [i_2] [i_2] [i_3] [(signed char)0] &= ((/* implicit */unsigned short) (-(((/* implicit */int) arr_10 [(unsigned short)8] [i_0 - 1] [i_1] [i_2] [i_3] [i_0 - 1]))));
                            var_20 = ((/* implicit */signed char) min((((/* implicit */int) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_11)), (arr_0 [i_0])))) < (max((((/* implicit */unsigned long long int) var_13)), (arr_1 [i_1])))))), (((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_1] [i_0])) ? (((/* implicit */int) arr_14 [i_0 + 2] [i_0 - 1])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))))));
                        }
                        for (signed char i_6 = 0; i_6 < 18; i_6 += 2) 
                        {
                            var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_12))) % (var_0)))) && (((/* implicit */_Bool) (+(var_4))))))) * (((/* implicit */int) (!(((var_4) != (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_0])))))))))))));
                            arr_20 [i_0] [i_6] = (~(((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) var_12)))))));
                            arr_21 [i_0] [i_0] [i_1] [i_2] [i_0] [17U] = ((/* implicit */long long int) min((var_13), (((((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [(unsigned short)12] [i_2]))))) - (min((((/* implicit */int) var_1)), (arr_16 [i_0 + 2] [i_1 - 1] [1ULL] [17U] [i_3] [i_6])))))));
                        }
                    }
                    for (unsigned int i_7 = 0; i_7 < 18; i_7 += 3) 
                    {
                        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((/* implicit */_Bool) max((max((arr_19 [15ULL] [i_0] [i_2] [i_1] [i_1 - 1] [i_0]), (((/* implicit */long long int) var_6)))), (((/* implicit */long long int) ((((/* implicit */int) arr_14 [i_0] [i_1])) < (((/* implicit */int) var_3)))))))) || (((/* implicit */_Bool) ((int) (-(((/* implicit */int) var_7)))))))))));
                        var_23 = ((((arr_14 [i_1] [i_1 - 1]) ? (((/* implicit */int) arr_14 [4] [i_1 - 1])) : (arr_23 [i_1] [i_1 + 1] [i_7] [i_7]))) << (((((int) (+(3977692700U)))) + (317274596))));
                        var_24 &= ((/* implicit */short) (~(min((arr_23 [i_7] [i_7] [i_2] [i_7]), (arr_5 [i_7] [i_0 + 1])))));
                        arr_25 [i_2] [i_2] [i_2] [i_7] &= ((/* implicit */signed char) min((var_5), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) arr_1 [i_7]))) >> (((min((317274592U), (3977692695U))) - (317274566U))))))));
                        var_25 ^= var_2;
                    }
                }
            } 
        } 
    } 
    var_26 |= ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) * (min((((/* implicit */unsigned long long int) var_10)), (var_2))))) >= (max((((/* implicit */unsigned long long int) (~(317274587U)))), (var_2)))));
    var_27 *= ((/* implicit */int) ((var_2) >= (((/* implicit */unsigned long long int) (~(min((317274611U), (317274599U))))))));
    var_28 |= ((/* implicit */int) (~(max((((/* implicit */long long int) var_4)), (var_0)))));
}

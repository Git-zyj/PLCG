/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129536
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
    for (unsigned char i_0 = 3; i_0 < 14; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_11 [i_0] [i_1] [4U] [i_0] [i_2] = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) max((((/* implicit */unsigned short) (short)2146)), ((unsigned short)47787))))))));
                        var_12 = (!(((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [4LL] [i_1] [i_0 - 2])));
                    }
                    for (unsigned char i_4 = 2; i_4 < 16; i_4 += 2) 
                    {
                        arr_15 [i_0] [i_2] = ((/* implicit */long long int) ((arr_0 [i_0]) ? (((/* implicit */int) arr_14 [i_0] [i_0 + 3] [(signed char)12] [3LL])) : (((/* implicit */int) ((unsigned char) arr_0 [(unsigned char)9])))));
                        arr_16 [i_0] [i_0 - 1] [(unsigned char)5] [14ULL] [i_0 - 2] [i_0] = min((((((/* implicit */_Bool) -8331404601078675663LL)) ? (((/* implicit */long long int) max((2147483647), (((/* implicit */int) (_Bool)1))))) : ((+(-835778908894416102LL))))), (((/* implicit */long long int) (~(((/* implicit */int) arr_14 [i_1] [i_1] [i_1] [i_4 + 1]))))));
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 3) 
                    {
                        var_13 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_2 [i_0 - 3])) + ((+(((/* implicit */int) arr_3 [i_1] [i_2] [16ULL]))))));
                        var_14 = ((/* implicit */unsigned int) min((835778908894416107LL), (((((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [(signed char)17] [i_0]))) + (-4075361828442544047LL))) + ((+(6597069766656LL)))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_6 = 0; i_6 < 18; i_6 += 4) 
                    {
                        var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) ((((/* implicit */_Bool) -4075361828442544034LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)24))) : (2147483648U))))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 4) /* same iter space */
                        {
                            arr_25 [i_7] [i_6] [i_2] [i_0 + 4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_20 [i_0] [i_1] [i_6]))))) ? (((((/* implicit */_Bool) 16ULL)) ? (-835778908894416102LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)127))))) : (4075361828442544070LL)));
                            arr_26 [i_0 - 3] [i_0 - 3] [i_0 - 3] = ((/* implicit */_Bool) ((arr_2 [i_6]) ? (((((/* implicit */_Bool) arr_1 [i_0 + 3])) ? (((/* implicit */int) (signed char)-11)) : (((/* implicit */int) var_3)))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) arr_0 [(short)16])))))));
                            var_16 = ((/* implicit */unsigned int) min((var_16), (((arr_3 [i_0] [i_1] [i_6]) ? (arr_6 [i_6] [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)7284)))))));
                            arr_27 [(_Bool)1] [i_1] [i_2] [i_2] [i_6] [i_6] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) arr_21 [i_0] [i_1] [i_0] [i_0] [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 - 3] [i_0 - 1] [i_0 - 3]))) : (11444471930167364169ULL)));
                            arr_28 [i_7] [i_2] [i_1] [i_0 - 1] = ((/* implicit */long long int) var_10);
                        }
                        for (unsigned long long int i_8 = 0; i_8 < 18; i_8 += 4) /* same iter space */
                        {
                            var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [13U])) & (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3))))) : (((((/* implicit */_Bool) arr_31 [i_0 - 2] [i_0 - 2] [i_2] [i_6] [i_0 - 2] [i_2])) ? (2249510481130725741ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]))))))))));
                            var_18 ^= ((/* implicit */long long int) arr_7 [i_0 + 2] [i_8]);
                        }
                    }
                    /* LoopNest 2 */
                    for (signed char i_9 = 1; i_9 < 15; i_9 += 2) 
                    {
                        for (int i_10 = 0; i_10 < 18; i_10 += 3) 
                        {
                            {
                                arr_39 [i_0 + 1] [i_9] = ((/* implicit */short) (!(((/* implicit */_Bool) (-(var_2))))));
                                var_19 ^= ((/* implicit */unsigned char) ((((/* implicit */int) min((((/* implicit */short) arr_36 [i_0] [i_0] [i_0 + 4] [i_0] [i_0 - 2] [i_0 + 3])), ((short)2577)))) >> (((/* implicit */int) arr_36 [i_0] [i_1] [(unsigned char)3] [i_9 + 2] [i_9 + 2] [i_10]))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [5ULL] [i_1] [i_1] [i_2]))) : (((var_6) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-69)) ^ (((/* implicit */int) (unsigned short)49159)))))));
                    var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) arr_32 [i_0 + 1] [i_0 + 3]))));
                    arr_40 [i_0] [(unsigned short)13] [i_0] [2LL] = ((((/* implicit */_Bool) (unsigned char)64)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32256))) : (14LL));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */short) max((((/* implicit */unsigned int) var_7)), (max(((+(var_9))), (((/* implicit */unsigned int) ((((/* implicit */int) var_10)) * (((/* implicit */int) var_3)))))))));
    var_23 = ((/* implicit */unsigned int) var_10);
    var_24 = ((/* implicit */unsigned int) var_8);
    var_25 -= ((/* implicit */unsigned int) max((1ULL), (((/* implicit */unsigned long long int) var_8))));
}

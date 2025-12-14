/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168383
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
    var_10 *= ((/* implicit */short) (+(-994099750)));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (int i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        arr_10 [i_1] [i_1] = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) min((var_3), (((/* implicit */int) arr_8 [i_1] [i_1] [i_1] [i_3]))))) ? (((/* implicit */unsigned int) min((var_3), (((/* implicit */int) arr_9 [i_0] [i_0] [i_0]))))) : (((unsigned int) (signed char)-99)))));
                        arr_11 [i_3] [i_1] [i_2] [i_3] &= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (0ULL)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-83)) % (((/* implicit */int) var_5))))) : (((((/* implicit */_Bool) var_2)) ? (2497952128U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))) << (((((/* implicit */int) arr_7 [i_2] [i_2] [i_2] [i_2] [i_2])) + (5230)))));
                        arr_12 [i_0] [i_3] [i_0] [i_3] &= ((/* implicit */unsigned short) ((-1239205288029515730LL) * (((/* implicit */long long int) ((((/* implicit */_Bool) 262601828)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (0U))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned int i_4 = 0; i_4 < 21; i_4 += 3) /* same iter space */
                        {
                            var_11 *= ((/* implicit */unsigned int) ((var_9) | (arr_14 [i_1] [i_1] [i_2] [i_3] [i_4] [i_4])));
                            var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [i_1] [i_1] [i_2] [i_2]))))) ? (((/* implicit */unsigned long long int) 1239205288029515729LL)) : (((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_4]))) : (arr_13 [i_4] [i_3] [i_1] [i_1] [i_1] [i_0])))));
                        }
                        /* vectorizable */
                        for (unsigned int i_5 = 0; i_5 < 21; i_5 += 3) /* same iter space */
                        {
                            var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) ((((/* implicit */_Bool) arr_17 [i_3])) ? (((/* implicit */unsigned long long int) 1239205288029515737LL)) : (arr_17 [i_3]))))));
                            arr_18 [i_5] [i_1] [i_2] [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) 2497952148U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_5] [(signed char)14] [i_2] [i_1] [(signed char)14]))) : (1797015167U)))));
                            var_14 = ((/* implicit */int) 1797015157U);
                            var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((((/* implicit */int) (signed char)10)) / (((/* implicit */int) arr_5 [i_0] [i_3] [i_2] [i_3])))))));
                            arr_19 [5] [i_3] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) (~((~(((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                        }
                        for (unsigned int i_6 = 0; i_6 < 21; i_6 += 3) /* same iter space */
                        {
                            var_16 += ((/* implicit */short) min((((/* implicit */int) arr_16 [i_3] [i_3] [i_6])), (var_9)));
                            var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_22 [i_6] [(_Bool)1] [i_2] [7LL] [i_0])) && (((/* implicit */_Bool) 2497952146U)))) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 2497952142U)) && (((/* implicit */_Bool) var_2))))))))))))));
                        }
                    }
                    /* vectorizable */
                    for (signed char i_7 = 2; i_7 < 20; i_7 += 2) 
                    {
                        var_18 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_7 + 1] [i_7] [i_7 - 1] [i_7])) ? (((/* implicit */int) arr_5 [i_7] [i_7] [i_7 - 2] [i_7 - 1])) : (((/* implicit */int) var_0))));
                        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) var_6))));
                        arr_27 [i_0] [i_0] [i_1] [i_2] [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_2] [i_0] [i_2])) ? (((((/* implicit */_Bool) arr_17 [i_1])) ? (((/* implicit */unsigned long long int) var_7)) : (var_2))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
                    }
                    /* vectorizable */
                    for (short i_8 = 3; i_8 < 18; i_8 += 1) 
                    {
                        var_20 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) 2497952142U)) & (15537384360030084173ULL)));
                        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (-(2497952129U))))));
                        var_22 *= ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_6 [i_8 - 1] [i_0] [i_2]))));
                        var_23 -= ((/* implicit */short) ((((/* implicit */int) arr_29 [i_8 - 2] [i_8 - 2] [i_8 - 2] [8LL])) & ((+(((/* implicit */int) arr_8 [(short)12] [i_1] [i_2] [i_2]))))));
                    }
                    var_24 = ((/* implicit */int) max((var_24), (((((/* implicit */_Bool) (+((+(((/* implicit */int) (signed char)-11))))))) ? (((/* implicit */int) min((arr_29 [i_0] [i_0] [i_2] [(signed char)8]), ((short)30409)))) : (((/* implicit */int) (unsigned short)26))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_9 = 0; i_9 < 21; i_9 += 3) 
                    {
                        var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_8 [18U] [i_1] [i_2] [i_9])))))));
                        var_26 &= ((/* implicit */unsigned int) ((((/* implicit */int) arr_32 [i_0] [i_0] [i_0])) % (((/* implicit */int) var_5))));
                    }
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_5)) : ((~(var_3)))));
}

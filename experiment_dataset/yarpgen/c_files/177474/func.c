/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177474
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (short)24596)) || (((/* implicit */_Bool) var_9))));
        arr_5 [5LL] = ((/* implicit */short) (+(((/* implicit */int) (unsigned char)217))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (short i_2 = 3; i_2 < 19; i_2 += 2) 
            {
                for (unsigned int i_3 = 0; i_3 < 20; i_3 += 2) 
                {
                    {
                        var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_7)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_0] [(short)6] [i_2] [(unsigned short)10]))))) : (((((/* implicit */int) var_0)) ^ (((/* implicit */int) (unsigned char)230)))))))));
                        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0] [(short)4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (arr_11 [i_0 + 1] [i_1] [i_2 + 1] [i_1])));
                    }
                } 
            } 
        } 
    }
    /* LoopNest 2 */
    for (long long int i_4 = 0; i_4 < 10; i_4 += 1) 
    {
        for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_9)))) ? (6670402643262296147ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)86), (arr_0 [i_4])))))))) && (((/* implicit */_Bool) max((6670402643262296138ULL), (((/* implicit */unsigned long long int) arr_12 [i_5] [i_5] [i_4] [i_4])))))));
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 1) 
                {
                    for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 4) 
                    {
                        {
                            var_21 |= ((/* implicit */unsigned long long int) ((-8317640720800978572LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)23)))));
                            var_22 = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) (~(arr_10 [i_4] [i_4] [i_6] [i_4])))) || (((5422668051775404480ULL) < (13152333750596770519ULL))))))));
                            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_9))))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_8 = 0; i_8 < 10; i_8 += 4) 
                {
                    for (unsigned char i_9 = 0; i_9 < 10; i_9 += 2) 
                    {
                        {
                            var_24 |= ((/* implicit */short) min(((-(12049158104501310218ULL))), (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_8 [i_5] [12LL] [i_9])) / (((/* implicit */int) (unsigned short)63428)))) - ((-(((/* implicit */int) arr_8 [i_4] [i_4] [i_9])))))))));
                            var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) arr_0 [i_5]))));
                            var_26 = ((/* implicit */short) (+((+(arr_13 [i_4] [i_5] [i_4] [i_9] [i_9])))));
                            var_27 = ((/* implicit */short) ((((((/* implicit */unsigned long long int) arr_27 [i_4] [i_5] [i_8])) & (((((/* implicit */_Bool) (short)7488)) ? (463915981504193222ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)39))))))) | (((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)11821))) & (arr_19 [i_4] [i_5])))) ^ (((((/* implicit */_Bool) 6353960210740487626LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)38))) : (6670402643262296147ULL)))))));
                            arr_30 [i_4] [i_4] [i_8] [i_9] = ((/* implicit */short) (((~(((((/* implicit */unsigned long long int) -1960218482289736890LL)) | (8814309272232881068ULL))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_8] [i_5] [i_4])))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_28 = var_0;
}

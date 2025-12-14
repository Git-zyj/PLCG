/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115864
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
    for (int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_10 = ((/* implicit */short) max((var_10), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [(signed char)14] [i_0])) ? (((/* implicit */int) arr_2 [(unsigned char)10] [(unsigned char)10])) : (((/* implicit */int) arr_2 [20] [20]))))) ? (((/* implicit */int) ((short) arr_2 [(unsigned short)8] [i_0]))) : (((((/* implicit */int) arr_2 [12U] [i_0])) | (((/* implicit */int) arr_2 [(unsigned char)12] [i_0])))))))));
        var_11 = ((/* implicit */unsigned long long int) min((var_11), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~((-(4294967282U)))))))))));
        arr_4 [i_0] = ((/* implicit */short) var_6);
        arr_5 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)97))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_1 = 3; i_1 < 11; i_1 += 1) 
    {
        arr_10 [i_1] = ((/* implicit */unsigned short) (short)-13191);
        var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(short)2])) ? (arr_9 [i_1 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1 + 2] [i_1]))))))));
        /* LoopNest 2 */
        for (signed char i_2 = 2; i_2 < 13; i_2 += 1) 
        {
            for (unsigned char i_3 = 0; i_3 < 15; i_3 += 3) 
            {
                {
                    var_13 = ((/* implicit */signed char) var_8);
                    arr_16 [i_1] [(short)14] [i_1] &= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned char)159)) || ((_Bool)1))) ? (4294967284U) : (2237235605U)));
                }
            } 
        } 
        arr_17 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_5))) / (3779647691339714153LL)));
        arr_18 [i_1] = ((/* implicit */unsigned char) (-((+(348972453U)))));
    }
    var_14 = ((/* implicit */unsigned short) max(((unsigned char)189), (((/* implicit */unsigned char) (_Bool)1))));
    var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) (-(((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (var_8) : (var_8)))) ^ (((((/* implicit */_Bool) var_6)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))))))));
    var_16 = ((/* implicit */_Bool) var_6);
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113621
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
    for (long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_15))))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) max((((/* implicit */unsigned char) var_15)), ((unsigned char)41))))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) arr_4 [i_0] [i_1]))) & (((/* implicit */int) arr_2 [i_1]))))) : (((((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [(short)15] [i_1])) & (((/* implicit */int) arr_2 [i_0]))))) ^ (((((/* implicit */_Bool) var_7)) ? (824907637U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))));
                var_19 = ((/* implicit */_Bool) var_6);
            }
        } 
    } 
    var_20 = ((((/* implicit */_Bool) 8213300792802244761ULL)) ? (((((/* implicit */_Bool) ((short) (signed char)59))) ? (((/* implicit */long long int) ((((/* implicit */int) var_14)) * (((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) var_6)) ? (var_17) : (((/* implicit */long long int) ((/* implicit */int) var_4))))))) : (((/* implicit */long long int) (-(((/* implicit */int) var_2))))));
    var_21 = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)9827))));
    var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)15)) : (((/* implicit */int) var_6))))) : (((((/* implicit */_Bool) (unsigned short)55708)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_8))))), (((/* implicit */long long int) var_4)))))));
    /* LoopSeq 2 */
    for (unsigned char i_2 = 0; i_2 < 25; i_2 += 1) 
    {
        var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) max((arr_5 [16]), (max((((/* implicit */unsigned short) (unsigned char)244)), (arr_5 [(signed char)4]))))))));
        arr_7 [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((long long int) arr_5 [i_2])) : (((((/* implicit */_Bool) max((arr_6 [i_2]), (((/* implicit */int) var_12))))) ? (((/* implicit */long long int) ((((/* implicit */int) var_0)) ^ (arr_6 [(short)2])))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) arr_6 [i_2])) : (-6406269086331535407LL)))))));
    }
    for (int i_3 = 0; i_3 < 24; i_3 += 2) 
    {
        var_24 &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)240)) ^ (var_9)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_3]))) : (((((/* implicit */_Bool) (unsigned char)15)) ? (var_13) : (var_17)))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_9 [i_3] [i_3])) : (((/* implicit */int) arr_9 [i_3] [i_3])))) : (min((((/* implicit */int) arr_5 [i_3])), (arr_6 [i_3])))));
        /* LoopNest 2 */
        for (unsigned int i_4 = 2; i_4 < 23; i_4 += 3) 
        {
            for (short i_5 = 0; i_5 < 24; i_5 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 0; i_6 < 24; i_6 += 1) 
                    {
                        for (long long int i_7 = 0; i_7 < 24; i_7 += 2) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned int) (+((-(((unsigned long long int) arr_9 [i_5] [i_6]))))));
                                var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) (signed char)-25)) ? (((/* implicit */int) (unsigned char)210)) : (((/* implicit */int) (unsigned char)255)))) : (max((67108864), (((/* implicit */int) (unsigned short)9821))))));
                                var_27 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_4 + 1])) ? (arr_6 [i_4 + 1]) : (((/* implicit */int) var_7))))) ? (((((/* implicit */int) arr_9 [i_4 + 1] [i_3])) * (((/* implicit */int) var_15)))) : (min((((/* implicit */int) arr_15 [i_4 - 1] [i_4 - 2])), ((+(((/* implicit */int) arr_12 [i_3] [i_3] [i_5]))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (signed char i_8 = 0; i_8 < 24; i_8 += 2) 
                    {
                        var_28 = ((/* implicit */_Bool) (~(((/* implicit */int) ((short) ((long long int) var_16))))));
                        var_29 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_11 [i_4 - 2] [i_4 + 1] [i_4 - 2]))))) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (-4915686132294429081LL)));
                        var_30 = ((/* implicit */long long int) max((var_30), (((-8364227955656656583LL) & (((/* implicit */long long int) min((((/* implicit */unsigned int) var_2)), (((((/* implicit */_Bool) 130816U)) ? (163674176U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-25))))))))))));
                    }
                    var_31 = ((/* implicit */unsigned int) max((((/* implicit */int) ((short) arr_11 [i_3] [i_5] [i_5]))), ((~(((/* implicit */int) (unsigned short)44283))))));
                }
            } 
        } 
        var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((max((8924649474283149016LL), (((/* implicit */long long int) var_2)))) / (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_3] [i_3])))))) ? ((-(((/* implicit */int) min((((/* implicit */unsigned char) var_15)), ((unsigned char)64)))))) : ((+(((/* implicit */int) var_11))))));
    }
}

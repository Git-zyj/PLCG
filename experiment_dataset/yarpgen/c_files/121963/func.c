/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121963
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_15 = ((/* implicit */long long int) min((((/* implicit */int) arr_0 [i_0])), (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (_Bool)1))))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (short i_2 = 3; i_2 < 10; i_2 += 3) 
            {
                for (signed char i_3 = 3; i_3 < 8; i_3 += 1) 
                {
                    {
                        var_16 = ((/* implicit */unsigned long long int) (_Bool)1);
                        var_17 = ((/* implicit */unsigned int) ((((((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)-77))))) <= (var_3))) ? (((((/* implicit */_Bool) arr_12 [i_2] [i_2 - 2] [i_2] [i_3] [i_3] [i_3])) ? (arr_12 [i_1] [i_2 - 1] [i_2] [i_2] [7U] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_1] [i_2 + 1] [(unsigned char)9] [i_3 - 2]))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_8 [(short)0] [i_2 + 1] [i_2 - 2] [i_1])) > (((/* implicit */int) (_Bool)1))))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 3 */
        for (long long int i_4 = 0; i_4 < 11; i_4 += 1) 
        {
            arr_18 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-13)) ? (-620579547273558305LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
            arr_19 [i_4] [i_0] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) (signed char)127))) ? (((((/* implicit */_Bool) (short)-5912)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))) : (arr_12 [i_0] [i_0] [i_0] [i_0] [1] [(short)8]))) : (((/* implicit */long long int) (~(((/* implicit */int) var_6)))))));
            arr_20 [i_4] [i_4] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((unsigned int) 262128LL))) > (((((/* implicit */_Bool) (unsigned short)43358)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)22175)))))))) * (((/* implicit */int) ((signed char) ((var_10) | (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))));
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 11; i_5 += 1) 
        {
            arr_25 [i_5] = ((/* implicit */unsigned int) arr_10 [i_0] [2ULL] [i_0] [i_0]);
            arr_26 [8LL] [i_0] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((4381691784212289603ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-22048)))))) ? (((/* implicit */int) ((_Bool) arr_8 [i_5] [i_0] [i_0] [i_5]))) : (((/* implicit */int) arr_22 [i_5] [i_5]))));
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            arr_29 [i_6] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 273122883U)) ? (((/* implicit */int) arr_28 [i_0] [(short)7] [i_6])) : (((/* implicit */int) arr_6 [i_0] [i_6] [i_0] [i_0])))) == (((/* implicit */int) ((unsigned short) arr_3 [i_6])))));
            var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)43358)) ? (14065052289497262010ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))));
        }
    }
    for (unsigned char i_7 = 1; i_7 < 16; i_7 += 3) 
    {
        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_7])) ? (arr_30 [i_7 + 2]) : (((/* implicit */long long int) 4227858432U))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 16U)) ? (12582912U) : (var_9)))) ? (((((/* implicit */_Bool) (unsigned char)64)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_8)))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_7 + 1]))) != (var_10)))))) : (((((/* implicit */_Bool) (signed char)-126)) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) arr_31 [i_7])) ? (((/* implicit */int) (unsigned short)41495)) : (((/* implicit */int) (_Bool)1))))))));
        var_20 = ((/* implicit */unsigned long long int) (signed char)98);
    }
    var_21 = ((/* implicit */_Bool) var_5);
}

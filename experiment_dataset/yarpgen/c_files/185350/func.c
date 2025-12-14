/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185350
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
    var_16 = ((/* implicit */unsigned char) var_0);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_17 = ((/* implicit */unsigned int) var_3);
        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */unsigned long long int) 1730320943U)) : (9822814884722547364ULL)))) ? (((/* implicit */unsigned int) ((((arr_0 [i_0]) & (((/* implicit */int) (_Bool)1)))) ^ (((((/* implicit */_Bool) arr_1 [(unsigned short)12] [i_0])) ? (224182121) : (((/* implicit */int) (unsigned char)255))))))) : (max((((/* implicit */unsigned int) (signed char)52)), (arr_1 [i_0] [i_0])))));
        var_19 ^= ((((/* implicit */int) var_2)) / (arr_2 [(short)0]));
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_20 = ((/* implicit */unsigned char) ((int) ((4294967295U) << ((((-(1023U))) - (4294966252U))))));
            var_21 ^= ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned short) max((((/* implicit */unsigned int) var_11)), (arr_3 [i_0] [i_0] [i_0])))))));
            arr_6 [i_0] [i_1] = max((((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)34003))))) + ((-(4294966245U))))), (((/* implicit */unsigned int) var_4)));
            var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)8192)), (arr_0 [i_0])))) ? ((-(1023U))) : (((/* implicit */unsigned int) (-(arr_0 [(_Bool)1])))))))));
        }
        for (long long int i_2 = 4; i_2 < 9; i_2 += 4) 
        {
            var_23 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2] [i_2 - 1] [i_2 - 4]))) < (min((3552437475U), (((/* implicit */unsigned int) (unsigned short)57333))))));
            var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9139080)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)75))))) ? ((~(11887506479817075822ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [1LL] [i_2 - 3])) ? (arr_1 [i_2 - 4] [i_2 - 4]) : (arr_1 [i_2] [i_2 - 3]))))));
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_25 = ((/* implicit */long long int) (~(((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-55))) : (arr_8 [i_0] [i_0] [i_0])))) / (18446744073709551615ULL)))));
            arr_11 [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_3 [i_0] [i_3] [i_3])))) ? (((((/* implicit */unsigned int) arr_0 [i_0])) * (arr_4 [i_0] [i_3] [i_3]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 7U))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_3])) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((arr_10 [i_3]) ? (1ULL) : (arr_5 [i_0] [i_3] [i_3]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
            var_26 -= ((/* implicit */unsigned char) ((min((((/* implicit */unsigned int) arr_2 [12U])), (max((((/* implicit */unsigned int) var_1)), (arr_1 [i_0] [i_3]))))) << ((((-(((/* implicit */int) arr_10 [i_0])))) + (17)))));
            var_27 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) arr_10 [i_0])), ((+(max((((/* implicit */unsigned int) (_Bool)0)), (8U)))))));
        }
    }
    /* LoopSeq 1 */
    for (int i_4 = 0; i_4 < 23; i_4 += 4) 
    {
        var_28 = ((/* implicit */int) ((((/* implicit */_Bool) max((((arr_12 [i_4]) / (4294966273U))), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) 1027U)) == (5848962935684046707ULL))))))) ? (((((/* implicit */_Bool) arr_12 [i_4])) ? (1023U) : (arr_12 [i_4]))) : (arr_12 [i_4])));
        var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 3145599922U)) ? (min((((((/* implicit */_Bool) (unsigned short)12280)) ? (562949953421311LL) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_4]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) 4294966265U)) ? (1448044906) : (((/* implicit */int) (_Bool)0))))))) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)103)))))));
    }
}

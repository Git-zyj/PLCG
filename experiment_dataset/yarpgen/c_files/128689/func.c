/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128689
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
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_6 [i_1] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (1172589501) : (1172589501)))) ? (1172589501) : (((/* implicit */int) arr_5 [i_2])))), ((~(((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) 2147483647)))))))));
                    arr_7 [i_0] [i_0] [i_1] = ((/* implicit */signed char) (+(((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_2] [i_2])) ? (((/* implicit */int) arr_1 [i_0])) : (-2147483647)))) - (((arr_2 [(unsigned char)17] [i_1] [i_2]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_17)))))))));
                    var_19 = ((/* implicit */short) (-(((((/* implicit */_Bool) min((arr_1 [i_2]), (arr_1 [i_0])))) ? (max((((/* implicit */int) (_Bool)0)), (-2147483647))) : (((/* implicit */int) (unsigned char)187))))));
                }
            } 
        } 
        arr_8 [i_0] [i_0] = ((/* implicit */_Bool) ((max((((/* implicit */int) var_2)), ((((-2147483647 - 1)) | (((/* implicit */int) (short)32756)))))) / (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (short)-17007)) : (min((var_11), (((/* implicit */int) (short)(-32767 - 1)))))))));
        /* LoopSeq 1 */
        for (int i_3 = 1; i_3 < 19; i_3 += 1) 
        {
            var_20 = ((/* implicit */short) ((((((/* implicit */_Bool) ((int) arr_5 [i_3 + 2]))) && (((/* implicit */_Bool) min((2147483647), (((/* implicit */int) var_17))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_10 [i_0])) : (((/* implicit */int) var_15)))))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_3 + 2] [i_3 - 1] [i_3 + 1])) || (((/* implicit */_Bool) arr_2 [i_3 + 2] [i_3] [i_3 + 1])))))));
            arr_13 [12LL] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) & (8443544806555593113LL)))))) ? (((arr_3 [(signed char)12] [i_3 + 2]) >> (((((/* implicit */int) var_16)) - (147))))) : (((((/* implicit */_Bool) 4085127547141540220LL)) ? (max((arr_3 [i_0] [i_3]), (((/* implicit */long long int) 2147483647)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)209)) || (((/* implicit */_Bool) 2047U))))))))));
        }
    }
    for (unsigned char i_4 = 0; i_4 < 21; i_4 += 1) /* same iter space */
    {
        arr_16 [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(var_0)))) ? (min((((/* implicit */unsigned long long int) var_18)), (arr_0 [i_4] [i_4]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
        var_21 |= ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)56)) >> (((((/* implicit */int) (unsigned char)102)) - (76)))));
    }
    for (unsigned char i_5 = 0; i_5 < 21; i_5 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) arr_17 [i_5] [i_5])) ? (((/* implicit */int) arr_18 [i_5] [i_5])) : (((/* implicit */int) max(((unsigned char)38), (var_14)))))));
        arr_19 [i_5] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_10 [i_5])) ? (((/* implicit */int) arr_10 [i_5])) : (((/* implicit */int) arr_10 [i_5]))))));
        var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_5])) ? (((((/* implicit */_Bool) (~(4294967285U)))) ? (((/* implicit */int) (short)32767)) : (((((/* implicit */int) (unsigned char)218)) % (((/* implicit */int) (signed char)56)))))) : (((((/* implicit */_Bool) ((long long int) var_4))) ? (((((/* implicit */_Bool) (unsigned char)223)) ? (((/* implicit */int) arr_11 [i_5])) : (((/* implicit */int) (unsigned char)238)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_5])) && (((/* implicit */_Bool) (short)(-32767 - 1)))))))))))));
    }
    for (unsigned char i_6 = 0; i_6 < 21; i_6 += 1) /* same iter space */
    {
        var_24 = ((/* implicit */long long int) 2147483647);
        /* LoopNest 2 */
        for (short i_7 = 0; i_7 < 21; i_7 += 4) 
        {
            for (unsigned int i_8 = 0; i_8 < 21; i_8 += 1) 
            {
                {
                    var_25 = min((((((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)-16)), (-474111513881928961LL)))) ? (max((((/* implicit */unsigned long long int) 2013265920)), (17676491045188358880ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_6] [i_6])) ? (((/* implicit */int) arr_20 [i_7] [i_7])) : (((/* implicit */int) arr_20 [i_8] [i_6]))))));
                    arr_27 [i_6] [i_7] [i_8] = ((/* implicit */unsigned char) max((arr_23 [i_8]), (((/* implicit */unsigned short) var_1))));
                    arr_28 [i_6] [i_7] [(short)14] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_15)) ? (2542116126U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_6])))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_10 [i_8]), (var_16))))) : (((((/* implicit */_Bool) var_12)) ? (max((((/* implicit */unsigned long long int) var_3)), (arr_0 [i_7] [(signed char)7]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [(signed char)14])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_22 [i_6] [(unsigned char)7])))))))));
                }
            } 
        } 
    }
    var_26 |= ((/* implicit */signed char) min((((/* implicit */int) var_6)), (((((1099511627648LL) != (((/* implicit */long long int) -697560178)))) ? (((/* implicit */int) max((var_13), (((/* implicit */short) var_1))))) : (((((/* implicit */int) var_5)) * (((/* implicit */int) (unsigned char)46))))))));
}

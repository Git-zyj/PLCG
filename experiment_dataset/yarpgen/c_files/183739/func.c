/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183739
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
    for (unsigned long long int i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    var_14 -= ((/* implicit */int) ((unsigned int) ((unsigned short) arr_4 [(signed char)14] [i_1] [i_1])));
                    var_15 = ((/* implicit */short) (unsigned char)22);
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (~(max((((((/* implicit */_Bool) 5653715107522997366LL)) ? (((/* implicit */long long int) 1884618158U)) : (-5653715107522997366LL))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) >= (33546240U))))))));
                }
            } 
        } 
    } 
    var_16 ^= 477488306662026869ULL;
    var_17 = ((/* implicit */unsigned long long int) max((((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) == (((((/* implicit */_Bool) 5653715107522997366LL)) ? (16063532438252508495ULL) : (16063532438252508495ULL)))))), (var_8)));
    var_18 ^= ((/* implicit */unsigned short) var_13);
    /* LoopNest 3 */
    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 1) 
    {
        for (signed char i_4 = 0; i_4 < 14; i_4 += 3) 
        {
            for (short i_5 = 1; i_5 < 10; i_5 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_6 = 1; i_6 < 13; i_6 += 3) /* same iter space */
                    {
                        arr_19 [i_3] [i_6] [i_4] [i_5] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((477488306662026869ULL), (((/* implicit */unsigned long long int) arr_13 [i_6 - 1]))))) ? ((-(arr_6 [i_6] [i_4] [(_Bool)1] [i_6]))) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_6] [i_4] [i_4])))));
                        var_19 |= min((((((unsigned long long int) (unsigned short)56667)) / (arr_5 [i_6 + 1] [i_6 + 1] [(_Bool)0]))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((short) (unsigned short)65530)))))));
                        arr_20 [i_5] [i_6] = ((/* implicit */signed char) arr_14 [i_3] [i_4] [3U]);
                    }
                    for (unsigned int i_7 = 1; i_7 < 13; i_7 += 3) /* same iter space */
                    {
                        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) <= ((+(var_11)))))) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [(_Bool)1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_3]))) : (var_11)))) ? (((/* implicit */int) ((var_11) != (((/* implicit */long long int) ((/* implicit */int) var_0)))))) : (((((/* implicit */_Bool) (signed char)-112)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)-102)))))))))));
                        var_21 = ((/* implicit */short) ((((((/* implicit */int) arr_13 [i_3])) ^ (((/* implicit */int) var_4)))) >= ((~(((/* implicit */int) arr_13 [i_3]))))));
                    }
                    var_22 = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) arr_12 [i_3] [i_4] [12LL])) || (((/* implicit */_Bool) 3084181377U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)44137))) : (arr_11 [i_5 + 4] [i_5 + 3]))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [(short)22] [(short)22] [i_5 + 2])) * (((/* implicit */int) var_1))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_3 [(short)4] [i_4])) == (2047))))) : (((long long int) 2383211635457043120ULL)))))));
                    var_23 = ((/* implicit */short) max(((+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_3]))) > (arr_18 [i_5] [2U] [2U] [i_3])))))), (((/* implicit */int) (signed char)-54))));
                    var_24 = ((/* implicit */short) ((((/* implicit */_Bool) 477488306662026869ULL)) ? (arr_18 [i_3] [i_3] [(unsigned short)4] [i_3]) : (0U)));
                    var_25 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_11 [i_5 + 2] [i_4])) ? (arr_11 [i_5 + 4] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [(short)0] [i_4] [i_4])))))));
                }
            } 
        } 
    } 
}

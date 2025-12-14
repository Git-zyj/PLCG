/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116749
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
    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) (((((-(((/* implicit */int) var_2)))) + (2147483647))) >> (((((4946555185244629622LL) << (((((/* implicit */int) ((unsigned short) var_2))) - (107))))) - (4946555185244629611LL))))))));
    var_17 = ((/* implicit */unsigned long long int) (~(var_7)));
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((-(var_7))) << (((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_12)))) - (37371)))))) ? (((/* implicit */long long int) ((/* implicit */int) (((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (short)-2030))) : ((-9223372036854775807LL - 1LL)))) < (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)240)))))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (3646504695299724249ULL)))) ? ((+(4946555185244629622LL))) : (max((((/* implicit */long long int) (signed char)126)), (var_6)))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            var_19 = ((long long int) (-(((/* implicit */int) (unsigned short)16191))));
            var_20 = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_1 + 1]))) * (var_9)))) ? (((arr_3 [i_0] [i_1 - 1] [i_0]) << (((var_10) + (3388862549504995909LL))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)0)) == (((/* implicit */int) arr_5 [i_0] [i_0])))))))));
            /* LoopSeq 1 */
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                var_21 = ((/* implicit */signed char) ((((/* implicit */long long int) 536838144U)) * (min((arr_6 [i_1 - 1] [i_1 - 1] [i_1 + 1]), (((/* implicit */long long int) var_14))))));
                /* LoopSeq 1 */
                for (unsigned short i_3 = 2; i_3 < 17; i_3 += 1) 
                {
                    var_22 = ((/* implicit */long long int) var_15);
                    arr_11 [i_3] [i_1 + 1] [i_2] [i_3 + 1] [i_0] [i_0] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((((/* implicit */long long int) arr_3 [(short)7] [i_1 - 1] [i_0])) % (-896077088551917178LL)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0] [i_3] [i_3])) && (((/* implicit */_Bool) (signed char)0))))) : (((/* implicit */int) ((((/* implicit */int) var_0)) > (((/* implicit */int) arr_8 [i_3] [i_0])))))))));
                }
                /* LoopNest 2 */
                for (signed char i_4 = 2; i_4 < 17; i_4 += 2) 
                {
                    for (long long int i_5 = 2; i_5 < 17; i_5 += 4) 
                    {
                        {
                            arr_17 [i_0] [i_1 + 1] [i_2] [i_0] [i_1] = ((/* implicit */unsigned short) ((unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_0])) * (var_9)))))));
                            var_23 = ((/* implicit */_Bool) ((((/* implicit */int) ((signed char) ((arr_0 [i_0]) < (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0]))))))) ^ ((+((-(((/* implicit */int) (unsigned short)9838))))))));
                            arr_18 [i_0] [i_0] [i_2] [i_0] [i_5] = ((/* implicit */short) min((((long long int) var_15)), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)63488)) >= (((/* implicit */int) var_13))))) * (((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775807LL))))))))));
                            var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_8))))) * (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))) : (-9223372036854775802LL)));
                            var_25 = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) (unsigned short)65535)))))));
                        }
                    } 
                } 
                arr_19 [i_0] [i_1] [(short)14] [i_2] |= ((/* implicit */unsigned int) ((unsigned char) (!(((/* implicit */_Bool) arr_0 [(short)8])))));
                var_26 ^= ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2])) ? (var_8) : (arr_10 [i_0] [i_0] [i_2] [i_1 - 1])))));
            }
            arr_20 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned int) arr_12 [i_1 + 1] [i_1 + 1] [i_0] [i_1])))));
            var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) ((int) ((((/* implicit */_Bool) (signed char)41)) ? (((/* implicit */int) ((((/* implicit */_Bool) 495663819848496183LL)) || (((/* implicit */_Bool) (short)32762))))) : (((((/* implicit */_Bool) (unsigned char)51)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_12 [i_0] [i_0] [(_Bool)1] [i_1]))))))))));
        }
        for (long long int i_6 = 0; i_6 < 18; i_6 += 4) 
        {
            arr_23 [i_0] = ((/* implicit */unsigned char) -495663819848496196LL);
            arr_24 [i_0] = ((/* implicit */long long int) (((_Bool)1) ? ((+(((/* implicit */int) arr_4 [i_0])))) : ((-(((((/* implicit */_Bool) (signed char)42)) ? (((/* implicit */int) (signed char)9)) : (((/* implicit */int) (_Bool)0))))))));
            var_28 = ((/* implicit */unsigned char) var_1);
        }
        var_29 = ((/* implicit */unsigned char) ((unsigned short) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [(unsigned char)14]));
        var_30 &= max(((unsigned short)0), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_13 [(unsigned char)2] [i_0] [i_0] [3LL] [i_0] [i_0])))))))));
        var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) min((((/* implicit */int) arr_9 [i_0] [i_0] [8] [i_0] [i_0] [i_0])), ((~(((/* implicit */int) ((_Bool) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))))));
    }
}

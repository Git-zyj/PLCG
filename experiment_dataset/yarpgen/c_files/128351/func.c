/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128351
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
    var_17 = ((/* implicit */long long int) (((~((~(((/* implicit */int) var_12)))))) >> (((/* implicit */int) (_Bool)0))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 20; i_0 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */long long int) ((((int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))))) * (((/* implicit */int) (((~(arr_1 [i_0]))) < (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)13549))) + ((-9223372036854775807LL - 1LL))))))))));
        arr_2 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (arr_1 [i_0]))))));
        var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned short) arr_1 [i_0])))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_13 [i_2] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned char) (~(((/* implicit */int) (_Bool)1))))))));
                                arr_14 [i_0] [i_1] [i_1] [i_4] = ((/* implicit */unsigned long long int) var_0);
                                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) min((arr_12 [i_0] [i_0] [i_2] [i_3] [i_3]), (arr_12 [i_0] [12] [i_0] [i_3] [i_4])))) ^ (((((/* implicit */int) var_11)) | (((/* implicit */int) var_13))))))) ? (min((((int) (_Bool)0)), (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (_Bool)1))));
                                arr_15 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (~(-2055325416)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 20; i_5 += 2) 
                    {
                        for (signed char i_6 = 0; i_6 < 20; i_6 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned char) max((((33554431ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((2055325394) < (((/* implicit */int) var_4)))))))), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_3 [i_0] [i_6])) || (((/* implicit */_Bool) -2055325434)))), (((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) var_10)))))))));
                                var_22 = (unsigned short)2048;
                                var_23 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1] [i_2]))) >= (min((max((18446744073675997184ULL), (33554419ULL))), (((/* implicit */unsigned long long int) var_12))))));
                            }
                        } 
                    } 
                    arr_21 [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) (((~(((/* implicit */int) var_11)))) > (((/* implicit */int) ((unsigned char) (unsigned char)80))))))));
                }
            } 
        } 
    }
    for (int i_7 = 0; i_7 < 20; i_7 += 1) /* same iter space */
    {
        var_24 *= ((/* implicit */short) ((((/* implicit */_Bool) min((arr_18 [i_7] [i_7] [i_7] [(unsigned short)4] [i_7] [i_7] [i_7]), (((/* implicit */int) var_5))))) && (((/* implicit */_Bool) min((arr_18 [i_7] [(signed char)18] [i_7] [18ULL] [i_7] [i_7] [i_7]), (arr_18 [i_7] [i_7] [i_7] [(_Bool)1] [i_7] [i_7] [i_7]))))));
        var_25 = (!(((((/* implicit */unsigned long long int) ((arr_4 [i_7]) ? (2055325427) : (((/* implicit */int) (unsigned char)7))))) >= (((((/* implicit */_Bool) arr_16 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7])) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))));
        arr_24 [i_7] [i_7] = ((/* implicit */unsigned short) ((long long int) ((((((/* implicit */int) var_16)) + (2147483647))) >> (((((/* implicit */int) var_1)) + (124))))));
        var_26 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)1)), (arr_8 [i_7] [i_7] [i_7] [i_7] [i_7])))) ? (((/* implicit */int) ((short) var_2))) : (((/* implicit */int) min((((/* implicit */signed char) (_Bool)0)), (arr_5 [i_7] [i_7])))))) << (((((/* implicit */int) ((unsigned short) min((((/* implicit */short) (_Bool)1)), (var_8))))) - (50608)))));
        arr_25 [i_7] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_8 [i_7] [i_7] [i_7] [i_7] [i_7]))));
    }
    var_27 = min((((((/* implicit */_Bool) (~(((/* implicit */int) var_12))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_4)))), (((((((/* implicit */int) var_2)) >> (((2098138268) - (2098138242))))) ^ ((~(((/* implicit */int) var_6)))))));
    var_28 = ((/* implicit */_Bool) var_10);
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13032
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
    var_15 = ((unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (998187534U) : (((/* implicit */unsigned int) max((var_12), (((/* implicit */int) var_8)))))));
    var_16 = ((/* implicit */signed char) ((8599533340956004340ULL) >> (((/* implicit */int) (_Bool)1))));
    var_17 ^= ((/* implicit */unsigned long long int) (_Bool)1);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            {
                                arr_12 [i_3] [i_1] [i_2] [11LL] [3ULL] = ((/* implicit */unsigned char) ((signed char) max((((/* implicit */unsigned long long int) arr_10 [i_1 + 2] [i_1] [i_1 - 1] [i_1 - 1] [i_0])), (arr_3 [i_2]))));
                                arr_13 [i_0] [i_0] [i_3] [i_3] [i_0] [i_2] [i_4] = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (_Bool)1)))))));
                            }
                        } 
                    } 
                    arr_14 [i_2] [10U] = ((/* implicit */unsigned short) (_Bool)1);
                    /* LoopSeq 3 */
                    for (int i_5 = 0; i_5 < 22; i_5 += 2) 
                    {
                        var_18 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) var_5))) ? (((/* implicit */unsigned long long int) var_9)) : (var_7)))) ? (var_2) : (min((((/* implicit */unsigned int) ((signed char) var_2))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_8 [i_0] [i_2] [i_0] [i_0])))))));
                        var_19 += (+((~(4033915368U))));
                        var_20 += ((/* implicit */_Bool) 4294967295U);
                        arr_18 [i_1] = ((/* implicit */int) ((unsigned short) max((var_5), (((/* implicit */unsigned long long int) (_Bool)1)))));
                    }
                    for (unsigned int i_6 = 2; i_6 < 19; i_6 += 3) 
                    {
                        arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_8 [i_0] [i_2] [i_1] [i_0])))) ? (max((((/* implicit */unsigned int) -1680533048)), (arr_4 [i_2] [i_2] [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))), (max((max((var_7), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) ((unsigned short) var_13)))))));
                        var_21 = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) var_1)) ? (min((var_0), (((/* implicit */unsigned int) (_Bool)1)))) : (((4093438819U) << (((/* implicit */int) (_Bool)1)))))));
                    }
                    for (signed char i_7 = 0; i_7 < 22; i_7 += 3) 
                    {
                        arr_26 [i_0] [i_1 + 1] [i_2] [i_7] [i_2] = max((((/* implicit */unsigned int) var_12)), (min((((unsigned int) var_1)), (((/* implicit */unsigned int) ((_Bool) var_13))))));
                        var_22 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -809213898)) ? (((/* implicit */unsigned long long int) 965330477U)) : (arr_25 [(_Bool)1] [i_1 + 1] [i_2])))) ? ((+(arr_25 [i_0] [i_1 + 1] [i_2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) 13510798882111488ULL))))))));
                        arr_27 [i_0] [i_0] [5U] [(unsigned short)1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((unsigned int) var_4)), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_8)))))))) || (((/* implicit */_Bool) max((min((var_1), (var_6))), (max((var_9), (var_4))))))));
                        arr_28 [i_0] [i_1] [i_2] [i_2] [i_0] [i_0] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (+(2747131654U)))))) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_12) > (((/* implicit */int) arr_16 [i_1 - 1]))))))));
                        arr_29 [12U] [i_7] [i_2] [i_0] [i_0] = ((/* implicit */int) max((var_2), (((/* implicit */unsigned int) max(((unsigned short)6144), ((unsigned short)30720))))));
                    }
                    arr_30 [i_2] [i_1] [i_1] &= ((/* implicit */_Bool) (((!((!(((/* implicit */_Bool) var_3)))))) ? ((+(((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))) : ((-(((/* implicit */int) ((_Bool) var_9)))))));
                }
            } 
        } 
    } 
}

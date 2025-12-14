/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162275
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
    for (unsigned long long int i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                var_16 &= ((/* implicit */short) min(((unsigned short)12224), (((/* implicit */unsigned short) (unsigned char)192))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_12 [i_0] [i_1] [i_0] |= (((-(max((((/* implicit */long long int) arr_11 [(unsigned char)0] [i_1])), (arr_10 [i_0] [(signed char)5] [i_2] [i_0]))))) - (((/* implicit */long long int) ((arr_6 [i_0] [2] [i_1] [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_1] [i_3]))) : (((((/* implicit */_Bool) arr_10 [6LL] [i_1] [(signed char)4] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4294967294U)))))));
                            arr_13 [i_0] [(_Bool)1] [i_2] [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (unsigned char)248)))) ? (((((/* implicit */_Bool) var_12)) ? (arr_9 [i_0]) : (arr_9 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)0), (((/* implicit */unsigned char) (signed char)0))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) var_1)), (11507283448600837565ULL))), (((/* implicit */unsigned long long int) (signed char)16))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_10))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 2552915230U)) || (((/* implicit */_Bool) 7U))))) : (((/* implicit */int) var_15))))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)208)) * (((/* implicit */int) (unsigned short)65535))))), (var_2)))));
    /* LoopSeq 2 */
    for (short i_4 = 0; i_4 < 24; i_4 += 4) 
    {
        var_18 = ((/* implicit */unsigned long long int) 2U);
        var_19 &= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3U)) ? (-7483004295062462187LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))), (((arr_14 [i_4]) & ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)61379))) : (arr_14 [i_4])))))));
    }
    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
    {
        arr_19 [i_5] [i_5] = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_4)), (-7605248420133916775LL)))) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (short)-11419)))))))));
        var_20 = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-16))));
    }
    var_21 = ((/* implicit */_Bool) ((int) var_13));
    var_22 = ((/* implicit */long long int) var_8);
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125724
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
    /* vectorizable */
    for (int i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        arr_2 [(_Bool)1] = (!(((/* implicit */_Bool) arr_1 [i_0])));
        var_17 = ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)0))));
        var_18 = ((/* implicit */_Bool) ((((long long int) 2147483647)) ^ ((((_Bool)1) ? (218735088682240475LL) : (arr_0 [i_0] [i_0 + 2])))));
        var_19 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) -1612376774)) : (arr_0 [i_0 + 2] [i_0 - 1])));
    }
    /* LoopNest 3 */
    for (signed char i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        for (signed char i_2 = 1; i_2 < 20; i_2 += 4) 
        {
            for (unsigned short i_3 = 0; i_3 < 22; i_3 += 3) 
            {
                {
                    arr_10 [i_1] [5] [i_2 + 2] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (min((((unsigned long long int) var_14)), (arr_3 [i_1]))) : (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 13624623631244575561ULL)) ? (1612376774) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (_Bool)1)))))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 22; i_4 += 3) 
                    {
                        for (unsigned int i_5 = 0; i_5 < 22; i_5 += 3) 
                        {
                            {
                                arr_16 [i_3] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) ((unsigned long long int) -9223372036854775788LL)))) || (((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_15 [i_1] [i_3] [i_3] [i_4] [i_4] [i_2 + 1] [i_4])) ? (((/* implicit */int) arr_15 [i_1] [i_2 + 2] [i_3] [i_3] [17] [i_4] [i_5])) : (((/* implicit */int) (_Bool)1)))), (((int) 13U)))))));
                                var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((34359738367LL), (((/* implicit */long long int) -464421942))))) ? ((+(((/* implicit */int) (unsigned char)30)))) : ((~((~(((/* implicit */int) arr_14 [i_1] [i_2] [i_3] [i_4] [i_4] [i_5] [i_5])))))))))));
                                var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) arr_5 [i_5]))))), (((((/* implicit */_Bool) var_1)) ? (arr_5 [i_3]) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_1] [i_1] [i_3] [i_3] [2ULL] [i_1] [i_1])))))))) ? (max((((/* implicit */int) min((arr_12 [(_Bool)1] [(_Bool)1] [i_3] [(_Bool)1] [i_1]), (var_10)))), ((-(((/* implicit */int) var_14)))))) : ((+(((/* implicit */int) (_Bool)0))))));
                            }
                        } 
                    } 
                    var_22 = ((short) (-(((unsigned int) arr_15 [i_1] [i_1] [i_3] [i_3] [i_2 + 2] [i_2 - 1] [i_1]))));
                    /* LoopNest 2 */
                    for (short i_6 = 0; i_6 < 22; i_6 += 2) 
                    {
                        for (short i_7 = 0; i_7 < 22; i_7 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (+(arr_3 [i_1])))))) ? (((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) -1612376774)) && (((/* implicit */_Bool) var_16)))))))) : (max((((((/* implicit */_Bool) (unsigned char)123)) ? (-5044615987034583659LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (5044615987034583666LL))))))));
                                var_24 = ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)1))));
                                var_25 ^= ((/* implicit */_Bool) max((((var_11) ? (((var_12) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65511))) : (var_9))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_6)) != (((/* implicit */int) arr_18 [i_1] [(unsigned short)4] [i_1] [i_6] [i_7] [i_1])))))))), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)20922)))))));
                                var_26 = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) & (max((((/* implicit */unsigned long long int) (_Bool)1)), (arr_3 [i_2]))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) var_2))));
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 23; i_8 += 3) 
    {
        for (unsigned short i_9 = 0; i_9 < 23; i_9 += 2) 
        {
            {
                var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) ((((long long int) (+(((/* implicit */int) arr_25 [i_8] [i_8]))))) << (min((((((/* implicit */_Bool) var_10)) ? (var_3) : (((/* implicit */unsigned long long int) var_2)))), (((/* implicit */unsigned long long int) max((var_11), (arr_26 [i_8] [(unsigned short)19] [i_8])))))))))));
                var_29 ^= ((/* implicit */unsigned char) min((((/* implicit */int) (!((!(((/* implicit */_Bool) arr_24 [i_9]))))))), ((~(min((((/* implicit */int) (unsigned char)31)), (var_13)))))));
            }
        } 
    } 
}

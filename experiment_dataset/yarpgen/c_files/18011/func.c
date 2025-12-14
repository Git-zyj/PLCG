/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18011
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
    var_17 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((((/* implicit */int) var_13)) - (((/* implicit */int) (unsigned short)29321))))))) ? (min(((+(((/* implicit */int) var_15)))), (((/* implicit */int) ((unsigned char) (unsigned short)65535))))) : (((/* implicit */int) var_10))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_1] [6ULL] [17LL] = ((/* implicit */unsigned char) var_3);
                    var_18 = ((/* implicit */unsigned char) max((13417935497203097223ULL), (((/* implicit */unsigned long long int) (unsigned short)49593))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned short) (short)10);
    /* LoopNest 3 */
    for (unsigned long long int i_3 = 1; i_3 < 17; i_3 += 2) 
    {
        for (long long int i_4 = 0; i_4 < 18; i_4 += 3) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 4) 
            {
                {
                    var_20 = ((/* implicit */long long int) var_1);
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 1; i_6 < 17; i_6 += 2) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 3) 
                        {
                            {
                                arr_22 [(short)3] [(short)3] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */long long int) ((((/* implicit */long long int) (+(((((/* implicit */unsigned int) ((/* implicit */int) var_15))) - (arr_4 [i_3] [(unsigned char)9])))))) < (min((((/* implicit */long long int) arr_6 [i_3] [i_5] [i_4] [i_6 - 1])), (((((/* implicit */_Bool) (unsigned char)179)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)179))) : (9223372036854775807LL)))))));
                                var_21 = ((/* implicit */int) arr_13 [5U] [5U]);
                                arr_23 [i_4] [i_7] [(unsigned char)0] [i_3] [i_7] = ((/* implicit */_Bool) ((max((((-2147483625) / (arr_20 [i_7] [i_7] [i_7] [i_7] [i_7]))), (arr_20 [i_7] [4LL] [i_3] [i_3 - 1] [i_6 + 1]))) * (((/* implicit */int) ((2789379977U) == (((/* implicit */unsigned int) arr_20 [i_7] [i_3 + 1] [i_3 + 1] [6ULL] [i_6 - 1])))))));
                                var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) 1505587319U)) ? (2789379977U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1505587312U)) ? (((/* implicit */int) arr_1 [i_3 - 1])) : (((/* implicit */int) ((((/* implicit */long long int) 2789380001U)) == (-9223372036854775807LL))))))))))));
                                var_23 = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_0 [(unsigned short)9] [i_5])) ? (((/* implicit */int) (unsigned char)76)) : (((/* implicit */int) arr_21 [i_3] [i_7] [i_3] [i_7]))))))));
                            }
                        } 
                    } 
                    var_24 += ((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) var_6))) != (var_9))) ? (((arr_6 [i_3 - 1] [i_3] [i_3 + 1] [i_3 - 1]) ? (((/* implicit */int) arr_6 [i_3 - 1] [i_3] [i_3 + 1] [i_3 + 1])) : (var_11))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [3LL] [i_4] [i_4] [i_4])))))));
                }
            } 
        } 
    } 
}

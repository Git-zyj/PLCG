/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178851
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
    var_19 = ((/* implicit */long long int) var_5);
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 13; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)251))) > (908269620U)))) < (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (unsigned char)175)) : (((/* implicit */int) arr_1 [i_0] [i_0 - 1]))))));
                var_21 &= ((/* implicit */unsigned long long int) ((arr_0 [i_0] [i_1]) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)68)))));
                var_22 = ((((((/* implicit */_Bool) arr_3 [i_0 - 2] [i_0 - 2])) ? (arr_3 [i_0 + 1] [i_0 + 1]) : (((/* implicit */int) (signed char)-54)))) / (((((((/* implicit */int) (signed char)-38)) ^ (((/* implicit */int) (signed char)-20)))) << (((/* implicit */int) (signed char)3)))));
                /* LoopNest 3 */
                for (long long int i_2 = 3; i_2 < 10; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                arr_13 [i_0] = (i_0 % 2 == zero) ? (((/* implicit */unsigned long long int) ((((arr_6 [i_0] [i_0 - 3] [13] [i_0 - 2]) << (((arr_4 [i_0]) - (947772559))))) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)16)))))) : (((/* implicit */unsigned long long int) ((((arr_6 [i_0] [i_0 - 3] [13] [i_0 - 2]) << (((((arr_4 [i_0]) - (947772559))) + (1129560940))))) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)16))))));
                                var_23 ^= ((/* implicit */_Bool) (signed char)24);
                                var_24 = ((/* implicit */signed char) arr_6 [i_0] [i_0] [i_0] [10]);
                            }
                        } 
                    } 
                } 
                var_25 = ((((/* implicit */int) var_7)) % (((/* implicit */int) max((arr_10 [i_0] [i_0] [i_1] [2ULL] [i_0] [i_0 + 1] [i_0]), (arr_10 [i_0] [i_1] [i_1] [i_1] [i_0] [i_0 - 1] [(signed char)10])))));
            }
        } 
    } 
}

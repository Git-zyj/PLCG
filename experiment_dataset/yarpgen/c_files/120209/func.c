/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120209
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
    for (long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 7; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1])))))) ? (var_9) : (((/* implicit */unsigned long long int) ((var_3) + (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) | (((((/* implicit */_Bool) var_6)) ? (arr_3 [i_1 + 3] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(unsigned char)6])))))))) : (((arr_0 [i_1 - 1]) - (arr_0 [i_1 + 3])))));
                arr_5 [i_1] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned char)212)) ? (432345564227567616LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-9639))))) > (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_3 [i_1] [i_0])))) >= (((((/* implicit */_Bool) var_3)) ? (arr_3 [i_0] [(_Bool)1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(unsigned char)1])))))))))));
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            {
                                arr_18 [i_0] [i_0] [i_1] [i_0] [i_3] [(_Bool)1] = ((/* implicit */unsigned long long int) arr_17 [i_0] [i_1 + 3] [i_1] [i_2] [i_3] [i_1] [(signed char)5]);
                                arr_19 [0ULL] [i_1] [0ULL] [i_0] [i_2] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) ((arr_3 [i_1 - 1] [i_1 + 3]) > (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_1] [i_4] [i_0] [(_Bool)1])))))) >> (((((((/* implicit */_Bool) (unsigned char)205)) ? (((((/* implicit */_Bool) arr_14 [i_0] [(signed char)8] [(signed char)2])) ? (arr_8 [i_1 + 2] [i_1 + 2] [i_2]) : (((/* implicit */int) var_2)))) : (((((/* implicit */int) arr_9 [i_3])) | (((/* implicit */int) arr_10 [i_1] [i_3] [i_1])))))) - (493138919)))));
                                arr_20 [i_0] [i_0] [i_0] [i_0] [i_3] = ((/* implicit */unsigned char) var_4);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) var_10))) ^ (var_13))) & (((/* implicit */long long int) ((/* implicit */int) var_14)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_9)));
    var_20 = var_10;
}

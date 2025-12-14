/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149306
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
    var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) (signed char)67))));
    var_17 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)32767), ((unsigned short)6837))))) / (var_10)));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            {
                arr_5 [i_1] [3U] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) > (((/* implicit */int) arr_4 [i_0] [i_0]))))) : ((~(((/* implicit */int) (signed char)4))))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        {
                            var_18 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((arr_6 [i_1]) >= (((/* implicit */long long int) ((/* implicit */int) arr_3 [10LL]))))))) / (((((/* implicit */long long int) ((/* implicit */int) arr_0 [6U]))) ^ (9223372036854775807LL)))))) ? (min((((/* implicit */long long int) ((_Bool) (unsigned char)33))), (((arr_8 [i_0] [i_0] [(signed char)2] [(unsigned short)2]) ^ (((/* implicit */long long int) ((/* implicit */int) (short)7534))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-27)) ? (((/* implicit */int) ((short) 5184066445464694038LL))) : (((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */int) (short)-7534)) : (((/* implicit */int) (unsigned char)1)))))))));
                            var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [(_Bool)0]))) : (((((/* implicit */_Bool) (unsigned char)28)) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_1] [(unsigned short)12] [(unsigned short)12] [i_3] [i_0]))) : (arr_6 [i_3]))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (+(arr_1 [i_2]))))))))))));
                            var_20 -= ((/* implicit */_Bool) ((((2951990296U) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [(short)0] [i_1 - 1]))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (short)-19854)))) : (((/* implicit */int) arr_4 [(_Bool)0] [i_1]))));
                            var_21 = ((/* implicit */long long int) arr_3 [i_0]);
                        }
                    } 
                } 
                arr_12 [i_0] [i_0] [i_1] = ((/* implicit */signed char) (+(max((arr_8 [i_1 - 1] [i_1] [i_1 + 1] [i_0]), (((/* implicit */long long int) arr_4 [i_0] [i_0]))))));
            }
        } 
    } 
}

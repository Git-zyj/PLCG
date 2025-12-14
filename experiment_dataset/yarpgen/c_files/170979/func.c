/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170979
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
    for (signed char i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 23; i_3 += 2) 
                    {
                        {
                            var_12 = ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)5))));
                            var_13 -= ((/* implicit */unsigned short) ((int) ((int) var_10)));
                            var_14 |= ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (unsigned char)47)) ? (((/* implicit */int) arr_6 [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) arr_6 [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1]))))));
                            var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) ((short) (-(((/* implicit */int) arr_6 [4] [i_1 + 1] [i_2] [i_3 - 1]))))))));
                            var_16 = ((/* implicit */unsigned long long int) max((var_16), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 8319266974427693962ULL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_0)))) ^ (((/* implicit */int) ((unsigned short) (unsigned char)8)))))) : (min((((unsigned long long int) arr_0 [i_1 + 1] [i_1])), (((/* implicit */unsigned long long int) ((arr_7 [i_3 - 1] [i_2] [(unsigned char)15] [i_0 - 1]) ^ (var_2))))))))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) (signed char)-65))) ? (225150094U) : (((/* implicit */unsigned int) (-(arr_7 [i_0 - 1] [i_1 - 1] [i_1] [i_0 + 1])))))))));
                var_18 = ((/* implicit */long long int) (-(((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_9)))) + (((/* implicit */int) ((var_2) != (((/* implicit */int) var_7)))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_4 = 0; i_4 < 24; i_4 += 2) 
                {
                    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) arr_6 [i_0] [i_1] [i_4] [i_1]))) || (((/* implicit */_Bool) arr_8 [i_4] [i_1] [i_1 - 1] [i_0] [i_0])))))));
                    var_20 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_4 [i_4] [i_0] [i_0]) ? (-723031053) : (arr_8 [i_0] [16LL] [i_4] [i_4] [i_0])))) ? (var_10) : (((/* implicit */unsigned long long int) var_11))));
                    var_21 -= ((/* implicit */short) (~(((/* implicit */int) arr_11 [i_1] [i_1 - 1] [i_1] [i_1]))));
                }
            }
        } 
    } 
    var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) var_0))));
}

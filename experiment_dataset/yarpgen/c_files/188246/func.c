/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188246
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 3; i_0 < 11; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) var_11);
        var_16 *= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)22442)) >= (((/* implicit */int) (unsigned short)43095))));
    }
    for (unsigned int i_1 = 0; i_1 < 13; i_1 += 1) 
    {
        var_17 *= ((/* implicit */unsigned short) ((unsigned int) var_4));
        var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (_Bool)1)) : (min((arr_6 [i_1]), (arr_6 [i_1]))))) == (max((((/* implicit */int) (signed char)-106)), (arr_6 [i_1]))))))));
    }
    for (unsigned short i_2 = 1; i_2 < 20; i_2 += 4) 
    {
        var_19 += ((/* implicit */unsigned char) (+(var_9)));
        var_20 = ((/* implicit */signed char) (((-(((/* implicit */int) arr_9 [i_2 + 1])))) >> (((((591641666) - (((/* implicit */int) (_Bool)1)))) - (591641635)))));
        var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) min((((/* implicit */unsigned char) var_6)), ((unsigned char)126))))));
        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) max((((/* implicit */short) ((((/* implicit */int) arr_8 [i_2 + 1])) > (((/* implicit */int) arr_8 [i_2 - 1]))))), (max((arr_9 [i_2]), (((/* implicit */short) arr_8 [i_2 + 1])))))))));
    }
    /* LoopNest 2 */
    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 1) 
    {
        for (unsigned short i_4 = 1; i_4 < 16; i_4 += 3) 
        {
            {
                var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) var_3))));
                var_24 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) arr_8 [i_4 + 1]))))) == (((/* implicit */int) max((arr_8 [i_3]), (arr_8 [i_4 - 1]))))));
                var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) var_9))));
                arr_16 [i_3] = ((/* implicit */unsigned int) (unsigned char)0);
            }
        } 
    } 
}

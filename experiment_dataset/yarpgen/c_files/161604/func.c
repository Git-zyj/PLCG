/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161604
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
    var_14 |= ((/* implicit */unsigned int) var_11);
    var_15 = ((/* implicit */unsigned int) ((unsigned long long int) ((((unsigned int) var_12)) < (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_6))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_2 = 2; i_2 < 12; i_2 += 2) 
            {
                var_16 = (~(arr_6 [i_0 - 2] [i_0 + 2] [i_2 + 2] [i_2 - 2]));
                var_17 = ((/* implicit */int) ((_Bool) (+(((/* implicit */int) (unsigned char)189)))));
                var_18 |= ((/* implicit */_Bool) ((((/* implicit */int) ((short) (signed char)112))) << ((((((-(arr_3 [i_0] [i_1] [i_0]))) + (2014446446))) - (17)))));
            }
            for (unsigned short i_3 = 1; i_3 < 13; i_3 += 3) 
            {
                var_19 = ((/* implicit */unsigned int) arr_8 [(short)8] [i_1] [9ULL]);
                var_20 = (((((+(((/* implicit */int) (signed char)-112)))) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */int) var_5)) != (((/* implicit */int) (signed char)112))))));
            }
            for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 3) 
            {
                arr_12 [i_0 + 2] [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_8 [i_0 + 1] [i_0 + 1] [i_0 + 1])) * (((/* implicit */int) arr_8 [i_0 + 2] [i_0 - 2] [i_0 - 1]))));
                var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) (+(arr_1 [i_0 - 2]))))));
                var_22 = (!(((/* implicit */_Bool) var_9)));
            }
            var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((((/* implicit */int) var_9)) <= (((/* implicit */int) arr_9 [i_0] [i_0 - 1] [i_0] [(unsigned char)0])))))));
        }
        for (short i_5 = 0; i_5 < 14; i_5 += 3) 
        {
            arr_17 [i_0] [i_5] = ((/* implicit */unsigned long long int) var_13);
            var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) ((arr_1 [(short)10]) % (((arr_1 [i_5]) + (arr_1 [i_5]))))))));
            arr_18 [i_0] [i_0] [i_5] |= ((/* implicit */unsigned long long int) arr_9 [i_0 + 1] [i_0 - 2] [i_0] [i_0 + 2]);
        }
        /* vectorizable */
        for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 4) 
        {
            var_25 |= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_4 [i_0])) * ((-(arr_11 [(short)9])))));
            arr_21 [(_Bool)1] |= (-(((/* implicit */int) (unsigned char)18)));
        }
        for (short i_7 = 3; i_7 < 12; i_7 += 4) 
        {
            arr_26 [10ULL] [10ULL] |= ((/* implicit */int) ((((/* implicit */long long int) ((var_2) ^ (var_2)))) ^ (((((/* implicit */_Bool) ((int) var_9))) ? (((/* implicit */long long int) var_3)) : ((~(-2083464731929670768LL)))))));
            var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((short) var_5)))))) ? (max((((/* implicit */int) arr_9 [i_0 + 2] [i_7 + 2] [(short)7] [i_7 - 3])), ((+(var_7))))) : (((/* implicit */int) var_6)))))));
            arr_27 [i_7] [i_0] [i_7] = ((/* implicit */unsigned short) var_5);
        }
        arr_28 [i_0 - 1] = ((/* implicit */unsigned long long int) var_0);
    }
    var_27 = ((/* implicit */unsigned short) ((short) ((short) var_12)));
}

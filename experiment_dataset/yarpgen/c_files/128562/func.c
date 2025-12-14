/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128562
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
    for (short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned int) ((short) arr_2 [i_1]));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (short i_4 = 0; i_4 < 16; i_4 += 3) 
                            {
                                var_16 = ((/* implicit */short) (-(3021755811U)));
                                var_17 = ((/* implicit */unsigned short) var_14);
                            }
                            var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(var_3)))) ? (((/* implicit */long long int) ((((/* implicit */int) ((signed char) arr_13 [i_0]))) - ((+(((/* implicit */int) var_11))))))) : (((((long long int) arr_1 [i_0])) << ((+(((/* implicit */int) var_8))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_5 = 1; i_5 < 21; i_5 += 3) 
    {
        for (signed char i_6 = 0; i_6 < 23; i_6 += 1) 
        {
            {
                var_19 = ((/* implicit */signed char) (~(((((_Bool) var_4)) ? (((/* implicit */int) ((var_3) <= (((/* implicit */unsigned long long int) arr_15 [i_5]))))) : (((/* implicit */int) var_4))))));
                var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_5])) ? (((/* implicit */int) arr_19 [i_5])) : (((/* implicit */int) var_11))))) ? (((((/* implicit */_Bool) var_13)) ? (var_10) : (((/* implicit */unsigned long long int) var_14)))) : (((/* implicit */unsigned long long int) ((1155824988U) - (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))))) ? (var_7) : (((/* implicit */int) arr_17 [i_5]))));
                /* LoopSeq 3 */
                for (int i_7 = 0; i_7 < 23; i_7 += 1) 
                {
                    var_21 &= ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((short) var_1))) : (((/* implicit */int) arr_16 [(signed char)8]))));
                    arr_23 [i_6] [(signed char)6] &= ((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [(_Bool)1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_6]))) : (var_3)))) ? (((((/* implicit */int) var_0)) * (((/* implicit */int) var_12)))) : (((/* implicit */int) var_9))))), (((unsigned int) arr_16 [2LL]))));
                }
                for (int i_8 = 0; i_8 < 23; i_8 += 3) /* same iter space */
                {
                    var_22 = ((/* implicit */short) (+(var_13)));
                    var_23 &= ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) arr_15 [i_5 + 2])) : (var_10)));
                    var_24 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) 1273211485U)), (max((11057691687589078438ULL), (((/* implicit */unsigned long long int) 1891274258U))))));
                }
                for (int i_9 = 0; i_9 < 23; i_9 += 3) /* same iter space */
                {
                    var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((int) (!(((/* implicit */_Bool) var_6))))))));
                    arr_30 [0U] [i_6] [i_6] [i_5] = ((/* implicit */signed char) 770470492U);
                }
                arr_31 [i_5] = ((/* implicit */_Bool) min(((+(arr_24 [i_5] [i_5 + 1]))), (((/* implicit */int) arr_25 [i_5 + 1]))));
                var_26 ^= arr_22 [i_5 - 1] [i_5 + 1] [i_6];
            }
        } 
    } 
}

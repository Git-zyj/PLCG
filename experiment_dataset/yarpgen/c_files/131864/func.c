/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131864
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
    var_13 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((signed char) (!(((/* implicit */_Bool) (short)4))))))));
    var_14 = ((/* implicit */int) ((long long int) ((max((-5477617779645750396LL), (((/* implicit */long long int) (signed char)-83)))) ^ (((/* implicit */long long int) var_11)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 14; i_2 += 2) 
                {
                    for (int i_3 = 3; i_3 < 12; i_3 += 4) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_3 + 2] [i_3 - 1] [i_3 - 2])) ? (((arr_8 [i_3]) << (((((/* implicit */int) (unsigned char)192)) - (173))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2]))))))))) || (((/* implicit */_Bool) min((max((((/* implicit */unsigned int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])), (arr_5 [i_0] [i_0] [i_0]))), (((unsigned int) arr_1 [i_2])))))));
                            arr_10 [i_0] [i_1 + 1] &= ((/* implicit */signed char) (-(arr_0 [i_3])));
                            var_16 = ((/* implicit */short) max((arr_6 [i_3 - 1] [i_3 - 3] [i_1 + 1] [i_3 - 3]), (arr_8 [i_3])));
                            var_17 = ((/* implicit */unsigned char) (signed char)-83);
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (signed char i_4 = 0; i_4 < 14; i_4 += 1) 
                {
                    arr_13 [i_0] [i_0] [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_12 [(signed char)1] [10U] [i_1 + 1]), (((/* implicit */unsigned int) arr_11 [i_1] [i_1] [i_1] [i_1]))))) && (((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_11 [(signed char)13] [i_0] [i_0] [i_0])) ^ (arr_12 [i_0] [i_0] [i_1]))))));
                    var_18 ^= ((/* implicit */short) max((((/* implicit */unsigned int) 23)), (((unsigned int) 0))));
                }
                for (long long int i_5 = 0; i_5 < 14; i_5 += 3) 
                {
                    var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) arr_0 [i_5]))));
                    var_20 = arr_8 [i_0];
                    var_21 = ((/* implicit */int) min((var_21), (((((/* implicit */_Bool) min((arr_15 [i_1 - 1] [i_1 + 1] [i_1] [i_1 + 1]), (((/* implicit */unsigned int) arr_2 [i_1] [i_1] [i_1 - 1]))))) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_1 + 1] [i_1 - 1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)75)))) : (((((/* implicit */_Bool) arr_2 [i_1] [8] [i_1 + 1])) ? (((/* implicit */int) arr_2 [i_0] [i_1] [i_1 - 1])) : (((/* implicit */int) (unsigned short)33604))))))));
                    var_22 -= (-(arr_4 [i_0] [i_1] [1U]));
                }
                /* LoopSeq 1 */
                for (int i_6 = 1; i_6 < 12; i_6 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 0; i_7 < 14; i_7 += 3) 
                    {
                        for (long long int i_8 = 0; i_8 < 14; i_8 += 3) 
                        {
                            {
                                var_23 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) min((((/* implicit */unsigned int) arr_21 [i_0] [i_1] [i_6 + 2] [i_7] [i_8])), (arr_6 [i_0] [i_1 + 1] [i_6 + 1] [i_8]))))) ? (((/* implicit */int) (!(((((/* implicit */int) (signed char)(-127 - 1))) <= (((/* implicit */int) (unsigned short)24029))))))) : (((/* implicit */int) (unsigned char)239))));
                                var_24 = ((/* implicit */unsigned char) min((var_24), (((unsigned char) ((((/* implicit */_Bool) max(((unsigned char)255), (((/* implicit */unsigned char) (signed char)38))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((arr_4 [i_0] [i_0] [i_0]) >= (arr_15 [i_0] [i_1] [i_6] [i_7])))))))));
                                var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((8092602809453995873LL), (((/* implicit */long long int) (unsigned short)33604))))) ? (((((/* implicit */int) arr_3 [i_7])) ^ (((/* implicit */int) arr_3 [i_0])))) : ((+(((/* implicit */int) arr_3 [i_6 - 1]))))));
                                arr_22 [i_8] [i_1] [i_0] [i_1] [i_8] &= max((((/* implicit */unsigned int) max(((short)-11), ((short)-11)))), (min((min((((/* implicit */unsigned int) arr_20 [(unsigned short)6] [(unsigned short)6] [i_6 - 1] [(unsigned short)6] [(signed char)13] [i_8])), (2982570184U))), (((unsigned int) (signed char)75)))));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0] [i_1] [4U])) ? (((/* implicit */unsigned int) ((((((/* implicit */int) (short)-1)) + (2147483647))) << ((((((+(((/* implicit */int) (signed char)-83)))) + (112))) - (29)))))) : (((arr_5 [i_1 - 1] [i_6 - 1] [(signed char)3]) << (((((/* implicit */int) var_1)) - (125)))))));
                    var_27 -= ((/* implicit */int) max((max((((/* implicit */long long int) (short)15734)), (min((arr_18 [i_0] [i_1] [(unsigned char)4] [i_1 - 1]), (((/* implicit */long long int) arr_9 [i_0] [i_1 - 1] [i_6] [i_0] [i_0] [i_6])))))), (((/* implicit */long long int) arr_1 [i_0]))));
                }
            }
        } 
    } 
}

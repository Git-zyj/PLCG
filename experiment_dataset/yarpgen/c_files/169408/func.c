/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169408
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            {
                arr_7 [i_1] = ((long long int) min((-19LL), (((/* implicit */long long int) (short)-177))));
                var_19 = ((/* implicit */short) (~(min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) 5587943100887827461ULL))))), (((var_5) >> (((((/* implicit */int) arr_6 [i_0])) - (12632)))))))));
                arr_8 [i_0] [i_1] = ((/* implicit */unsigned char) (-(arr_5 [i_1])));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    arr_11 [i_2] &= ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)1)))))));
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max(((unsigned short)65516), (arr_3 [i_1] [(short)7])))) ? (((/* implicit */int) (short)-177)) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)-24592))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (arr_5 [i_1]) : (arr_5 [i_1]))))));
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 12; i_3 += 1) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            var_21 = ((/* implicit */long long int) ((((/* implicit */int) max((arr_0 [i_1 - 1] [i_1 - 1]), (arr_0 [i_1 - 1] [10ULL])))) - (((((((((/* implicit */int) var_7)) - (arr_1 [i_1]))) + (2147483647))) << (((min((var_3), (((/* implicit */unsigned long long int) (short)-1)))) - (9165243788532983272ULL)))))));
                            var_22 = ((/* implicit */unsigned short) 972360893198620911LL);
                            arr_18 [i_0] [10] [10] [i_1] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)16))) + (((((((/* implicit */_Bool) (short)-14)) ? (12935829474037480129ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0]))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)0)) > (((/* implicit */int) var_8))))))))));
                            var_23 = var_12;
                            arr_19 [i_1] = (-(1598157817U));
                        }
                        /* vectorizable */
                        for (unsigned char i_5 = 1; i_5 < 10; i_5 += 3) 
                        {
                            var_24 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_12 [i_1 + 1] [i_1 + 1] [i_1 + 1]))));
                            var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((long long int) arr_5 [i_2])))));
                        }
                        var_26 &= ((/* implicit */unsigned short) (~((-(((int) (short)-9023))))));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 12; i_6 += 1) /* same iter space */
                    {
                        arr_25 [i_1] [i_2] [i_1] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_16 [i_1]))));
                        arr_26 [i_1] [2ULL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)6))) >= (var_15)))) : (((/* implicit */int) arr_12 [i_0] [i_1 - 1] [i_1 - 1]))));
                    }
                }
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned short) 9223372036854775807LL);
}

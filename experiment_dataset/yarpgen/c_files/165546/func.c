/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165546
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
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_2)) : (max((((((/* implicit */int) (unsigned short)36831)) + (((/* implicit */int) var_16)))), ((-(((/* implicit */int) var_4))))))));
    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) var_12))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 |= ((/* implicit */int) var_10);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (int i_4 = 2; i_4 < 17; i_4 += 3) 
                            {
                                var_20 = ((/* implicit */signed char) arr_12 [i_0] [i_0]);
                                var_21 = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)65535))));
                                var_22 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) (unsigned char)112)) + (((/* implicit */int) var_8)))) >> ((((-(((/* implicit */int) var_16)))) + (24859)))))) && (((/* implicit */_Bool) min((arr_0 [i_1] [i_4 + 1]), (((/* implicit */signed char) ((var_6) == (((/* implicit */unsigned long long int) arr_12 [i_2] [i_3]))))))))));
                                var_23 -= ((/* implicit */short) (((!((_Bool)1))) ? (((((/* implicit */_Bool) arr_5 [i_3] [i_4 - 1])) ? (((var_10) ? (arr_4 [i_0]) : (((/* implicit */unsigned int) arr_3 [i_3])))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_3] [i_3] [4ULL] [i_3]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0])))));
                            }
                            for (int i_5 = 3; i_5 < 17; i_5 += 3) 
                            {
                                var_24 = ((/* implicit */int) (!(((/* implicit */_Bool) ((int) var_13)))));
                                var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) ((unsigned int) (+(((/* implicit */int) arr_10 [i_5 - 2] [i_5 - 2]))))))));
                            }
                            var_26 = ((/* implicit */unsigned int) min((((/* implicit */short) ((((/* implicit */long long int) (-(((/* implicit */int) var_2))))) != (((((/* implicit */long long int) arr_15 [i_0])) / (arr_12 [i_3] [i_0])))))), (arr_9 [i_0] [i_0] [i_0])));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 18; i_6 += 4) 
                {
                    for (unsigned int i_7 = 1; i_7 < 16; i_7 += 3) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned int) (((((!(((/* implicit */_Bool) arr_17 [8ULL] [8ULL] [i_7])))) ? (((((/* implicit */int) (signed char)32)) + (arr_17 [i_0] [i_6] [i_6]))) : (((/* implicit */int) arr_2 [i_7 + 2])))) % (((/* implicit */int) var_5))));
                            var_28 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1))));
                            var_29 &= ((/* implicit */unsigned int) (~(((/* implicit */int) var_1))));
                            var_30 = ((/* implicit */short) max((((/* implicit */long long int) var_2)), ((-(arr_12 [i_7 + 2] [i_0])))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_8 = 1; i_8 < 16; i_8 += 3) 
                {
                    var_31 = ((/* implicit */signed char) var_9);
                    var_32 = ((/* implicit */int) arr_6 [i_8] [i_0] [i_0]);
                    var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) arr_10 [i_0] [i_0]))));
                }
                /* vectorizable */
                for (unsigned int i_9 = 0; i_9 < 18; i_9 += 3) 
                {
                    var_34 = ((/* implicit */unsigned char) arr_12 [i_0] [i_0]);
                    var_35 = ((/* implicit */_Bool) var_0);
                    var_36 = ((/* implicit */int) max((var_36), (((/* implicit */int) ((((/* implicit */_Bool) (short)-14988)) && (((/* implicit */_Bool) (short)(-32767 - 1))))))));
                    var_37 = (i_0 % 2 == zero) ? (((/* implicit */unsigned int) ((((var_6) << (((((/* implicit */int) arr_5 [i_0] [i_0])) - (92))))) * (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_0] [i_1])))))))) : (((/* implicit */unsigned int) ((((var_6) << (((((((/* implicit */int) arr_5 [i_0] [i_0])) - (92))) - (28))))) * (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_0] [i_1]))))))));
                }
            }
        } 
    } 
    var_38 = ((/* implicit */unsigned short) max((var_38), (((/* implicit */unsigned short) var_3))));
}

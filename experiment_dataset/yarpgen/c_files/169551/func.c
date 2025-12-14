/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169551
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
    for (unsigned char i_0 = 2; i_0 < 24; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] [5] = ((/* implicit */int) ((min((((/* implicit */unsigned int) ((signed char) (short)-11051))), (((((/* implicit */_Bool) (short)11062)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0 - 2])) ? (((/* implicit */int) (short)-11057)) : (((/* implicit */int) (short)11079)))))));
                var_19 *= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-11051))) + (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) + (max((3615473586U), (((/* implicit */unsigned int) (short)(-32767 - 1)))))))));
                var_20 = ((/* implicit */short) (unsigned short)17479);
                /* LoopSeq 1 */
                for (unsigned char i_2 = 1; i_2 < 23; i_2 += 4) 
                {
                    arr_9 [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) min((((int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (short)32765))) : (-6238501843401563161LL)))), (((min((((/* implicit */int) arr_7 [i_0])), (-1538987111))) ^ (((/* implicit */int) arr_1 [i_1] [i_1]))))));
                    var_21 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((577479703U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0])))))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_4 [i_0 + 1] [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0])))) : (((/* implicit */int) min((arr_4 [i_0 - 2] [i_0] [i_0]), (((/* implicit */unsigned short) arr_1 [i_0] [i_0])))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_22 -= ((/* implicit */unsigned long long int) ((127U) < (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0 - 2])))));
                        var_23 -= ((/* implicit */unsigned long long int) arr_5 [i_1] [i_2] [i_3]);
                        var_24 = ((/* implicit */unsigned char) arr_7 [i_3]);
                    }
                    for (short i_4 = 0; i_4 < 25; i_4 += 1) 
                    {
                        arr_18 [i_1] [i_2 - 1] [i_0] [i_1] [i_0] &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_11 [i_4] [i_1] [i_1]))));
                        var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) ((signed char) (unsigned short)3187)))));
                    }
                    /* vectorizable */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        arr_21 [i_2] [i_0 - 2] = ((/* implicit */unsigned char) arr_12 [i_0] [i_2] [i_1] [i_1] [i_0] [i_0]);
                        var_26 = ((((/* implicit */_Bool) 7005708164997860074ULL)) ? (((/* implicit */int) (signed char)43)) : ((+(((/* implicit */int) (short)-11091)))));
                        arr_22 [i_0 - 1] [i_1] [i_1] [i_5] = (((!(((/* implicit */_Bool) (signed char)33)))) ? (3615473588U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_2 + 2] [i_0 + 1]))));
                        arr_23 [i_0] [(signed char)21] [i_5] = ((/* implicit */unsigned char) arr_0 [i_5]);
                    }
                }
                arr_24 [i_0 - 1] [i_1] [i_1] |= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_17 [i_0] [i_0 - 2] [i_0 - 1] [i_0])) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_18)) : (-1652823088))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))), ((-(((((/* implicit */int) var_18)) + (((/* implicit */int) arr_3 [i_1]))))))));
            }
        } 
    } 
    var_27 = (signed char)31;
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164487
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
    var_20 ^= (!(((/* implicit */_Bool) ((int) var_2))));
    var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) var_15))));
    var_22 += ((/* implicit */short) min((((/* implicit */long long int) ((unsigned short) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))), (var_7)));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) max((var_8), (((/* implicit */int) (_Bool)1)))))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                for (unsigned short i_3 = 0; i_3 < 13; i_3 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned char i_4 = 4; i_4 < 10; i_4 += 3) 
                        {
                            var_24 *= ((/* implicit */unsigned char) arr_7 [10U] [i_1] [i_1]);
                            arr_14 [i_0] [i_1] [i_2] [i_2] [i_2] |= ((/* implicit */int) ((unsigned long long int) ((signed char) arr_12 [i_0] [i_0] [i_2] [i_2] [(_Bool)1])));
                            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_4 + 2] [i_4] [i_4] [i_4] [i_4 - 3])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_10 [i_4 + 1] [i_4 - 1] [i_4 + 1] [i_4 + 2] [i_4 - 3]))));
                            arr_15 [i_0] [(short)8] [1U] [i_4] [(unsigned char)6] = ((/* implicit */int) var_2);
                        }
                        /* vectorizable */
                        for (unsigned short i_5 = 2; i_5 < 12; i_5 += 1) 
                        {
                            var_26 ^= ((/* implicit */long long int) ((12582912U) << (((((/* implicit */int) arr_10 [i_5 - 2] [i_5 - 2] [i_5 + 1] [i_5 - 2] [i_0])) + (20)))));
                            arr_18 [i_0] [i_2] [i_5] [i_3] [i_5] = ((/* implicit */int) arr_16 [i_5 - 2] [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 + 1]);
                            var_27 = ((/* implicit */unsigned int) (-(1590658287)));
                            var_28 = ((/* implicit */_Bool) (+(((1078801510) - (((/* implicit */int) var_6))))));
                            var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) (-(((/* implicit */int) arr_8 [i_1] [i_5 + 1])))))));
                        }
                        arr_19 [i_0] [i_0] [i_0] [(_Bool)1] = ((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]);
                        arr_20 [i_3] [i_2] [(unsigned short)0] [i_0] = ((/* implicit */_Bool) max(((~(((/* implicit */int) arr_7 [0U] [0U] [i_3])))), ((+(((/* implicit */int) arr_4 [i_3]))))));
                    }
                } 
            } 
        } 
        arr_21 [i_0] [i_0] = ((/* implicit */short) (~(((((/* implicit */_Bool) (~(((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0]))))) ? ((~(((/* implicit */int) (short)29456)))) : (((/* implicit */int) (signed char)126))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_6 = 1; i_6 < 12; i_6 += 3) 
        {
            arr_25 [(unsigned short)5] = ((/* implicit */unsigned char) (((!(var_9))) ? (((/* implicit */int) ((signed char) arr_12 [6LL] [i_0] [i_0] [i_0] [i_0]))) : (-1078801515)));
            var_30 = ((/* implicit */unsigned short) (-(-1078801511)));
            var_31 = ((/* implicit */signed char) (~((~(((/* implicit */int) (_Bool)1))))));
        }
        var_32 *= ((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0])) ? (1354748537) : (((/* implicit */int) arr_1 [i_0] [i_0]))))), (min((-7966858162459705016LL), (((/* implicit */long long int) (unsigned short)31478)))))) - (((/* implicit */long long int) ((/* implicit */int) max((arr_13 [i_0] [i_0] [i_0] [i_0]), (arr_13 [i_0] [i_0] [i_0] [i_0])))))));
    }
}

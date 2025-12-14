/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169448
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 16; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    var_12 = var_10;
                    var_13 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((var_10) & (var_10)))) || ((!(((/* implicit */_Bool) var_5)))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? (((/* implicit */long long int) var_2)) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) var_8)) : (var_5))))) : (((/* implicit */long long int) ((/* implicit */int) var_11)))));
                }
            } 
        } 
    } 
    var_14 = ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_9)) ? (var_3) : (var_9)))))) ? (((/* implicit */long long int) var_9)) : (((((/* implicit */_Bool) (-(var_5)))) ? (((/* implicit */long long int) ((var_3) % (var_3)))) : (max((var_5), (((/* implicit */long long int) var_11)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 4) 
    {
        /* LoopSeq 2 */
        for (int i_4 = 0; i_4 < 14; i_4 += 1) 
        {
            /* LoopSeq 1 */
            for (long long int i_5 = 0; i_5 < 14; i_5 += 3) 
            {
                var_15 = ((/* implicit */short) ((var_6) > (((/* implicit */long long int) var_8))));
                /* LoopNest 2 */
                for (long long int i_6 = 0; i_6 < 14; i_6 += 4) 
                {
                    for (long long int i_7 = 3; i_7 < 12; i_7 += 1) 
                    {
                        {
                            arr_25 [i_3] [i_4] [i_4] [i_5] [(_Bool)1] [i_7] = (-(((/* implicit */int) var_7)));
                            var_16 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) var_11))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (signed char i_8 = 3; i_8 < 10; i_8 += 1) 
                {
                    arr_28 [i_4] [i_3] [i_4] [i_5] [i_4] = (~(var_6));
                    /* LoopSeq 3 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        arr_33 [i_4] [i_4] [i_5] [i_8 + 4] [i_9] = ((/* implicit */int) ((((/* implicit */long long int) ((var_7) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_10)))) < (var_6)));
                        var_17 = ((/* implicit */int) (+(var_9)));
                    }
                    for (long long int i_10 = 0; i_10 < 14; i_10 += 4) 
                    {
                        var_18 *= ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (signed char)46)))))));
                        var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) (+((~(var_0))))))));
                    }
                    for (unsigned int i_11 = 3; i_11 < 11; i_11 += 3) 
                    {
                        var_20 = ((/* implicit */int) ((((((/* implicit */_Bool) var_2)) ? (var_10) : (((/* implicit */unsigned int) var_2)))) + (((/* implicit */unsigned int) (-(((/* implicit */int) var_1)))))));
                        var_21 ^= ((/* implicit */unsigned int) var_5);
                    }
                    var_22 = ((/* implicit */int) (((!(((/* implicit */_Bool) var_9)))) ? (((((/* implicit */_Bool) var_10)) ? (var_0) : (((/* implicit */unsigned int) var_2)))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))));
                }
                for (long long int i_12 = 0; i_12 < 14; i_12 += 3) 
                {
                    arr_42 [i_4] [i_12] [i_5] [i_12] [i_4] = ((/* implicit */_Bool) (~((-(((/* implicit */int) var_4))))));
                    arr_43 [i_3] [i_4] [i_4] [i_12] [(_Bool)1] = ((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_11))) - (var_0))) * (((((/* implicit */_Bool) 5U)) ? (511U) : (((/* implicit */unsigned int) -1463777704))))));
                    var_23 = ((/* implicit */short) (+((+(((/* implicit */int) (_Bool)1))))));
                }
            }
            /* LoopSeq 1 */
            for (int i_13 = 0; i_13 < 14; i_13 += 2) 
            {
                arr_46 [i_13] [i_4] [(signed char)4] [i_4] = (+(((/* implicit */int) ((var_3) < (var_9)))));
                /* LoopSeq 2 */
                for (long long int i_14 = 0; i_14 < 14; i_14 += 1) 
                {
                    var_24 = ((/* implicit */_Bool) ((var_4) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_10)));
                    var_25 = (~(((/* implicit */int) var_4)));
                }
                for (int i_15 = 3; i_15 < 13; i_15 += 4) 
                {
                    var_26 ^= ((/* implicit */signed char) (~(var_6)));
                    arr_53 [i_3] [i_4] [i_13] [i_3] [i_3] [i_4] = ((/* implicit */unsigned int) ((var_1) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_4))));
                }
            }
            var_27 |= ((/* implicit */signed char) ((_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) - (var_9))));
            arr_54 [i_4] = ((/* implicit */int) ((((((/* implicit */long long int) var_3)) <= (var_6))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_9))) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
        }
        for (int i_16 = 0; i_16 < 14; i_16 += 3) 
        {
            var_28 = ((((var_2) + (2147483647))) << (((((((var_8) + (((/* implicit */int) var_4)))) + (1161491173))) - (6))));
            arr_59 [i_16] [i_3] [i_3] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_9)) ? (var_3) : (var_10)))));
        }
        var_29 ^= ((/* implicit */_Bool) ((signed char) var_8));
        arr_60 [i_3] = ((/* implicit */_Bool) ((((var_3) ^ (((/* implicit */unsigned int) var_2)))) + (((/* implicit */unsigned int) ((/* implicit */int) ((var_5) < (((/* implicit */long long int) ((/* implicit */int) var_4)))))))));
    }
}

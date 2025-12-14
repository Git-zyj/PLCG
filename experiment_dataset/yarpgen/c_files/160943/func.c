/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160943
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
    var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) ? (((((/* implicit */_Bool) var_18)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_16))))))));
    var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) (-((((!(((/* implicit */_Bool) var_10)))) ? ((~(((/* implicit */int) var_16)))) : (((/* implicit */int) max((var_13), (var_9)))))))))));
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_9)))) ? (((((/* implicit */_Bool) var_4)) ? (var_17) : (var_5))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_1) == (((/* implicit */unsigned int) ((/* implicit */int) var_16)))))))))) ? (((((/* implicit */int) (unsigned char)208)) >> (((1996398773U) - (1996398757U))))) : (((/* implicit */int) ((((((/* implicit */_Bool) var_1)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) var_16))))) == (((/* implicit */unsigned int) ((((/* implicit */int) var_2)) * (((/* implicit */int) var_11))))))))));
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (-((+(((/* implicit */int) (unsigned char)39))))))) < (var_4)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            arr_6 [8U] [i_1] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1] [i_0] [i_0])) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_1] [i_0])))))) ? ((+(arr_1 [i_1]))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_13))))));
            /* LoopSeq 1 */
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned short i_3 = 0; i_3 < 10; i_3 += 2) 
                {
                    for (unsigned int i_4 = 2; i_4 < 9; i_4 += 3) 
                    {
                        {
                            arr_14 [8U] [i_2] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned char) (+(402653184U)));
                            var_23 = ((/* implicit */unsigned int) min((var_23), (((((((/* implicit */_Bool) var_5)) ? (arr_13 [i_3] [i_3] [i_1] [i_3] [i_1] [i_3]) : (arr_12 [i_0] [i_1] [i_2] [i_3] [i_4 - 1]))) - ((-(arr_1 [i_1])))))));
                            var_24 = ((/* implicit */unsigned char) arr_4 [i_0] [i_1] [i_2]);
                        }
                    } 
                } 
                var_25 = ((/* implicit */unsigned int) arr_0 [i_0] [i_0]);
            }
            var_26 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [(unsigned short)6] [i_1] [i_1])))))) == (((((/* implicit */_Bool) var_8)) ? (arr_1 [i_0]) : (1218579648U)))));
        }
        arr_15 [i_0] = ((/* implicit */unsigned short) ((var_5) == (var_5)));
        var_27 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)58))) : (arr_13 [2U] [i_0] [i_0] [i_0] [i_0] [i_0])))) ? (arr_12 [i_0] [i_0] [i_0] [(unsigned char)2] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)66))));
    }
    for (unsigned char i_5 = 0; i_5 < 14; i_5 += 2) 
    {
        var_28 = min((((/* implicit */unsigned int) var_16)), (((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_15)), (arr_17 [i_5])))) ? (min((arr_17 [i_5]), (((/* implicit */unsigned int) var_7)))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)13412))))))));
        arr_18 [i_5] |= ((/* implicit */unsigned int) ((max((arr_16 [i_5]), (arr_16 [i_5]))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_17 [i_5])) ? (arr_16 [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) < (arr_16 [i_5])))))));
    }
}

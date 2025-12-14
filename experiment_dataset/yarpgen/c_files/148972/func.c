/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148972
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_18 *= ((/* implicit */_Bool) ((var_1) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_16))))));
        /* LoopSeq 3 */
        for (short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            var_19 = ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_3));
            var_20 = ((/* implicit */int) (~(-4138826203883637118LL)));
        }
        for (short i_2 = 0; i_2 < 24; i_2 += 2) 
        {
            var_21 = ((/* implicit */signed char) (~(var_3)));
            arr_8 [i_0] [i_0] [i_2] = ((/* implicit */short) (-((~(((/* implicit */int) var_5))))));
            /* LoopSeq 3 */
            for (unsigned int i_3 = 0; i_3 < 24; i_3 += 2) 
            {
                var_22 = ((((/* implicit */int) ((signed char) var_5))) & (((/* implicit */int) var_7)));
                var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) ? (((/* implicit */int) var_0)) : ((-(((/* implicit */int) var_16)))))))));
                var_24 = ((((/* implicit */_Bool) (-(var_17)))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) var_15)) : (var_17))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_3))));
            }
            for (unsigned char i_4 = 2; i_4 < 22; i_4 += 4) 
            {
                arr_15 [i_0] [i_0] [i_0] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_11)))));
                arr_16 [i_0] [i_2] [i_4 - 2] = ((/* implicit */_Bool) var_3);
            }
            for (unsigned short i_5 = 0; i_5 < 24; i_5 += 4) 
            {
                var_25 = ((/* implicit */short) (-(((/* implicit */int) var_0))));
                var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) var_6))));
            }
        }
        for (short i_6 = 1; i_6 < 22; i_6 += 3) 
        {
            arr_24 [i_6] [i_6] = ((/* implicit */long long int) (-(((/* implicit */int) ((unsigned short) var_15)))));
            /* LoopNest 2 */
            for (long long int i_7 = 0; i_7 < 24; i_7 += 1) 
            {
                for (unsigned long long int i_8 = 1; i_8 < 22; i_8 += 2) 
                {
                    {
                        arr_30 [i_0] [i_6] [i_7] [i_8] = ((/* implicit */short) ((signed char) ((unsigned short) 4138826203883637117LL)));
                        var_27 = (~(((/* implicit */int) ((unsigned char) var_5))));
                        arr_31 [i_0] [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -590954560527038381LL)) ? (((/* implicit */int) (unsigned short)11314)) : (((/* implicit */int) (unsigned char)5))));
                        arr_32 [i_0] [i_6 + 2] [i_6] [i_6] = ((/* implicit */long long int) (~(var_15)));
                    }
                } 
            } 
            var_28 = ((/* implicit */signed char) min((var_28), (((signed char) var_15))));
        }
        var_29 = ((/* implicit */unsigned short) var_7);
        var_30 = ((/* implicit */long long int) var_16);
    }
    var_31 = ((/* implicit */_Bool) ((long long int) ((unsigned long long int) 2772972092941420930LL)));
    var_32 = ((/* implicit */unsigned int) (-(min((min((var_9), (((/* implicit */long long int) var_4)))), (((/* implicit */long long int) (~(((/* implicit */int) var_8)))))))));
}

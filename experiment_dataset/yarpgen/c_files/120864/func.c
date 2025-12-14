/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120864
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
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_18)) && (((/* implicit */_Bool) var_14)))) ? (((/* implicit */int) min((var_10), (((/* implicit */unsigned char) var_11))))) : (((((/* implicit */int) var_12)) * (((/* implicit */int) var_4))))))) ? (((int) ((((/* implicit */_Bool) -2147483632)) || (((/* implicit */_Bool) var_3))))) : (((/* implicit */int) var_10))));
    var_21 = ((/* implicit */unsigned int) ((min((((/* implicit */long long int) ((unsigned short) var_8))), (var_0))) ^ (var_13)));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */signed char) min((((/* implicit */unsigned int) (-(var_17)))), ((+(2818061709U)))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (short i_4 = 2; i_4 < 15; i_4 += 2) 
                            {
                                var_22 = (_Bool)1;
                                arr_14 [i_0] [i_3] [i_3] [i_0] [i_0] [i_0] = arr_10 [(short)3] [i_4] [i_4] [i_3];
                            }
                            for (short i_5 = 0; i_5 < 17; i_5 += 4) 
                            {
                                var_23 ^= ((/* implicit */_Bool) (+(((/* implicit */int) (!(arr_16 [6U] [(short)1] [5LL] [i_3] [i_3]))))));
                                arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) min(((+((-(var_13))))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_3] [i_5]))) * (498066754U))))));
                                arr_18 [i_0] [i_0] [(_Bool)1] [(unsigned char)4] [(unsigned char)5] [(unsigned char)4] [i_0] = ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (_Bool)1))))))) ? (3796900541U) : (((/* implicit */unsigned int) (-2147483647 - 1))));
                                arr_19 [i_5] = ((/* implicit */short) ((((arr_7 [i_0] [i_2] [i_2] [i_5]) ? (var_18) : (((/* implicit */long long int) ((/* implicit */int) var_2))))) / (((/* implicit */long long int) (+(((/* implicit */int) (short)39)))))));
                                var_24 -= ((/* implicit */unsigned short) (-(var_18)));
                            }
                            arr_20 [i_2] [11] [i_2] [i_3] [i_3] [i_0] = ((/* implicit */_Bool) (~(498066754U)));
                        }
                    } 
                } 
            }
        } 
    } 
    var_25 = ((/* implicit */_Bool) min((var_14), (((/* implicit */unsigned char) ((_Bool) (-(((/* implicit */int) (short)6408))))))));
}

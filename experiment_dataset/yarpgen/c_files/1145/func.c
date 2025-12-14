/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1145
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
    var_16 += ((/* implicit */short) ((4294967267U) ^ (((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */int) var_13)) == (((/* implicit */int) (unsigned short)43768))))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) arr_0 [i_0]))) || (((/* implicit */_Bool) ((int) -700665118))))))));
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) ((arr_0 [i_0]) || (((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_2 [i_0]), (var_6)))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) : (arr_1 [i_0]))) : (((/* implicit */unsigned int) ((arr_0 [(unsigned short)10]) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_11))))))))));
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_3 [i_0]))));
    }
    /* LoopNest 2 */
    for (int i_1 = 2; i_1 < 11; i_1 += 4) 
    {
        for (int i_2 = 0; i_2 < 13; i_2 += 4) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_3 = 2; i_3 < 11; i_3 += 2) 
                {
                    for (int i_4 = 0; i_4 < 13; i_4 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_8 [i_1] [i_1 - 1])))) ? ((~((~(((/* implicit */int) var_10)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) -4)))))));
                            arr_19 [i_4] [i_3] [i_1] = ((/* implicit */short) ((int) (!(((/* implicit */_Bool) (unsigned short)23550)))));
                            var_19 = ((/* implicit */unsigned short) (((~(((/* implicit */int) ((short) arr_0 [7ULL]))))) != (max((((/* implicit */int) (unsigned char)61)), (((((/* implicit */_Bool) arr_17 [i_1] [i_1] [i_1] [i_2] [i_3] [i_4])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_9 [i_1] [i_2] [i_3]))))))));
                            var_20 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)196)) * (0)))) ? (((/* implicit */int) (signed char)94)) : (max((((/* implicit */int) (signed char)66)), (-1))))));
                            var_21 *= ((/* implicit */unsigned char) max((((/* implicit */int) var_2)), (max(((-(((/* implicit */int) (_Bool)1)))), (((((/* implicit */int) (unsigned char)198)) / (((/* implicit */int) (unsigned short)49152))))))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */unsigned char) var_8);
            }
        } 
    } 
    var_23 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) max((((/* implicit */unsigned short) var_10)), (var_0))))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_9))))) : (((((/* implicit */_Bool) (unsigned char)220)) ? (129619228U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-5902)))))));
    var_24 = ((/* implicit */short) var_3);
}

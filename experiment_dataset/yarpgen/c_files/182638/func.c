/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182638
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
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_3)), (5647520975554554447LL))))))) || (((((/* implicit */unsigned int) ((/* implicit */int) ((9223372036854775807LL) != (((/* implicit */long long int) ((/* implicit */int) (unsigned short)55318))))))) <= (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_11)))))));
    var_18 = ((/* implicit */signed char) ((7828418750034541642LL) | (((/* implicit */long long int) ((/* implicit */int) var_8)))));
    /* LoopSeq 2 */
    for (int i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        var_19 = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) arr_0 [i_0 + 2]))))));
        var_20 = var_8;
        arr_2 [i_0] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_1 [i_0])), (570245696U)))) && (((/* implicit */_Bool) arr_1 [i_0 + 1])))), ((((!(((/* implicit */_Bool) var_12)))) || (((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned long long int) var_14)))))))));
    }
    for (long long int i_1 = 0; i_1 < 15; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 15; i_2 += 2) 
        {
            for (short i_3 = 0; i_3 < 15; i_3 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_4 = 0; i_4 < 15; i_4 += 3) 
                    {
                        for (unsigned long long int i_5 = 2; i_5 < 13; i_5 += 1) 
                        {
                            {
                                arr_14 [i_1] [i_2] [i_4] [i_1] [i_3] = ((/* implicit */unsigned int) arr_0 [i_4]);
                                arr_15 [i_3] [i_4] [i_3] [i_3] [i_2] [i_3] = ((/* implicit */long long int) (~((-(((/* implicit */int) arr_4 [i_5 - 2]))))));
                                var_21 = ((/* implicit */short) var_1);
                                var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) ((int) arr_5 [i_5]))) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) 2047)) : (var_15))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) (signed char)29)))))))) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [i_1] [i_1])))));
                                var_23 ^= ((/* implicit */signed char) -2047);
                            }
                        } 
                    } 
                    arr_16 [i_2] [i_3] [i_2] [i_2] = min((((/* implicit */int) (signed char)34)), ((+(((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_3])) || (((/* implicit */_Bool) var_15))))))));
                    var_24 = ((/* implicit */int) ((max(((+(((/* implicit */int) var_3)))), ((-(((/* implicit */int) arr_13 [i_1] [i_3] [i_2] [i_1] [8U])))))) <= (((/* implicit */int) ((unsigned char) (-(var_15)))))));
                    arr_17 [i_3] [i_3] [i_3] [i_2] = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) (unsigned short)4094)) : (((/* implicit */int) (signed char)11)))));
                    arr_18 [i_3] [i_2] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((unsigned int) 5460834059034881143LL))) ? (((/* implicit */long long int) max((arr_10 [i_1] [i_1] [i_1]), (((/* implicit */int) arr_7 [i_1]))))) : ((~(7828418750034541642LL))))) << (((((arr_5 [i_1]) & (arr_6 [i_3]))) - (94611405659111443LL)))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 2; i_6 < 11; i_6 += 3) 
        {
            for (unsigned int i_7 = 0; i_7 < 15; i_7 += 2) 
            {
                {
                    var_25 = ((/* implicit */signed char) 7U);
                    var_26 ^= ((/* implicit */signed char) max((((/* implicit */int) (unsigned short)4068)), (((((/* implicit */_Bool) ((unsigned int) arr_13 [i_1] [(signed char)10] [i_6] [i_6 + 3] [i_7]))) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1])) || (((/* implicit */_Bool) (short)29571)))))))));
                }
            } 
        } 
        var_27 ^= ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) min((((/* implicit */int) var_7)), (arr_12 [4LL] [i_1] [i_1] [4LL] [i_1])))) || (((/* implicit */_Bool) ((((/* implicit */int) (signed char)-58)) + (((/* implicit */int) arr_26 [i_1] [i_1] [i_1] [i_1]))))))));
    }
    var_28 -= ((/* implicit */unsigned char) ((unsigned long long int) var_1));
}

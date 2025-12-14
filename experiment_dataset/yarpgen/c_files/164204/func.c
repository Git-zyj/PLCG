/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164204
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
    for (int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_19 = ((/* implicit */int) var_9);
        arr_3 [(signed char)20] [i_0] &= ((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) max((arr_2 [i_0] [i_0]), (((/* implicit */unsigned long long int) 1206672628340066387LL)))))))), (((((/* implicit */_Bool) (~(arr_0 [i_0])))) ? (arr_1 [(signed char)18]) : (min((((/* implicit */int) (_Bool)0)), (var_15)))))));
    }
    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) var_3))));
    var_21 &= ((/* implicit */unsigned char) min(((signed char)65), (((/* implicit */signed char) (_Bool)0))));
    /* LoopSeq 1 */
    for (short i_1 = 0; i_1 < 25; i_1 += 4) 
    {
        var_22 *= ((unsigned int) ((((/* implicit */_Bool) -1206672628340066390LL)) ? (((/* implicit */int) (unsigned short)19297)) : (((/* implicit */int) (unsigned char)177))));
        /* LoopNest 3 */
        for (unsigned short i_2 = 0; i_2 < 25; i_2 += 2) 
        {
            for (long long int i_3 = 0; i_3 < 25; i_3 += 3) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 2) 
                {
                    {
                        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) max((arr_5 [i_1]), ((short)-384)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1])) || (((/* implicit */_Bool) arr_5 [i_4])))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_5 = 1; i_5 < 21; i_5 += 4) 
                        {
                            var_24 = ((/* implicit */unsigned char) (-(arr_14 [i_5 + 4] [i_5 + 3] [i_5] [i_5 + 3] [i_5])));
                            var_25 = (~(((/* implicit */int) arr_11 [i_1] [i_5 - 1])));
                        }
                        /* LoopSeq 3 */
                        for (unsigned char i_6 = 0; i_6 < 25; i_6 += 3) 
                        {
                            var_26 = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_8 [i_1] [i_1])) ? (((/* implicit */int) (short)32556)) : (((/* implicit */int) arr_4 [i_3])))), (((/* implicit */int) min((var_3), (arr_4 [i_1]))))));
                            var_27 = ((/* implicit */_Bool) min((((/* implicit */long long int) 1166038080)), (((min(((_Bool)1), (var_3))) ? (((((/* implicit */_Bool) var_14)) ? (-1206672628340066388LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                            var_28 = ((/* implicit */unsigned char) ((long long int) max((1764858881), (((/* implicit */int) arr_9 [i_1] [i_1] [i_1] [i_1])))));
                            var_29 = ((/* implicit */short) (+(min((((/* implicit */long long int) arr_9 [i_6] [i_6] [i_3] [i_4])), ((~(arr_14 [i_1] [i_2] [i_6] [(unsigned short)4] [i_6])))))));
                        }
                        for (short i_7 = 0; i_7 < 25; i_7 += 3) /* same iter space */
                        {
                            var_30 *= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) 0U)), (arr_7 [i_1] [i_4] [(unsigned char)10])))) ? (((/* implicit */int) (_Bool)1)) : ((-(((/* implicit */int) var_10))))));
                            arr_22 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) var_4);
                        }
                        for (short i_8 = 0; i_8 < 25; i_8 += 3) /* same iter space */
                        {
                            var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) ((short) (~(var_8)))))));
                            var_32 = ((/* implicit */_Bool) max((max((arr_7 [i_1] [i_1] [i_1]), (((/* implicit */long long int) arr_16 [i_1] [i_1] [i_1])))), (((/* implicit */long long int) ((((/* implicit */int) var_11)) > (((/* implicit */int) arr_8 [i_4] [i_2])))))));
                        }
                        var_33 = ((/* implicit */int) 4294967295U);
                    }
                } 
            } 
        } 
    }
}

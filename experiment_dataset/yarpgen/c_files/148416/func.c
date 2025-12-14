/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148416
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
    var_11 = ((/* implicit */unsigned char) var_0);
    var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? ((~(((/* implicit */int) var_1)))) : (((/* implicit */int) ((0LL) > (((/* implicit */long long int) ((/* implicit */int) (unsigned char)164))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_13 += ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */int) arr_4 [i_1])) * (((/* implicit */int) arr_4 [i_0])))));
                    arr_8 [i_0] [i_1] [(_Bool)1] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [(unsigned short)9] [i_2])) ? (((((/* implicit */_Bool) arr_5 [i_2] [i_1] [i_1] [i_0])) ? (((/* implicit */long long int) (((_Bool)1) ? (1195928572U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0)))))) : (((long long int) arr_6 [i_2] [(_Bool)1] [i_0])))) : (max((((/* implicit */long long int) arr_3 [i_0])), ((-(arr_7 [i_0] [i_0])))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 7; i_4 += 1) 
                        {
                            {
                                var_14 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((arr_12 [i_0] [(unsigned char)6] [i_2] [(short)2] [i_3] [i_3] [(_Bool)1]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [(_Bool)1] [i_3] [i_2] [(short)2]))))), (((var_0) >> (((arr_7 [i_0] [i_0]) + (1838382267513084422LL)))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_2) ? (arr_7 [i_4 + 2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6)))))));
                                var_15 = ((/* implicit */short) ((((((/* implicit */unsigned int) ((/* implicit */int) min((var_7), (var_2))))) + ((((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (3145728U))))) == (min((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) > (((/* implicit */int) (short)4095))))), (arr_0 [i_1])))));
                                var_16 ^= ((/* implicit */short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned char)48)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)15))) : (4003348725U)))))) && (((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)240)) && ((_Bool)1)))))))));
                            }
                        } 
                    } 
                }
                for (unsigned int i_5 = 0; i_5 < 11; i_5 += 4) 
                {
                    var_17 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((short) var_8))) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 11; i_6 += 4) 
                    {
                        for (short i_7 = 0; i_7 < 11; i_7 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_17 [i_0]), (((/* implicit */unsigned short) (!(arr_1 [i_5] [i_6]))))))) ? (((((/* implicit */_Bool) max((arr_14 [i_0]), (((/* implicit */unsigned int) var_6))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_15 [i_1] [i_5]))))) : (min((arr_0 [i_5]), (arr_14 [i_0]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_5 [i_6] [(short)6] [i_0] [i_6])), (arr_7 [i_1] [i_6])))) ? (((/* implicit */int) max((((/* implicit */unsigned char) arr_21 [i_0] [i_0] [(unsigned short)4] [i_5] [i_5] [i_0] [i_7])), (var_10)))) : (((/* implicit */int) max((((/* implicit */unsigned char) arr_20 [i_0] [6U] [4U] [i_5] [i_6] [i_7] [i_7])), (arr_6 [i_0] [(_Bool)1] [i_7])))))))));
                                var_19 ^= ((/* implicit */short) ((long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) var_6)) + (((/* implicit */int) var_9))))), (((arr_2 [i_0] [i_6]) ? (arr_12 [i_7] [i_6] [i_6] [i_1] [i_1] [i_6] [i_0]) : (arr_14 [i_6]))))));
                            }
                        } 
                    } 
                }
                var_20 &= ((/* implicit */short) (((!(((/* implicit */_Bool) (~(((/* implicit */int) var_7))))))) ? ((-(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0])))))) : (((/* implicit */int) arr_15 [i_0] [i_0]))));
                /* LoopSeq 1 */
                for (short i_8 = 0; i_8 < 11; i_8 += 3) 
                {
                    var_21 = ((/* implicit */_Bool) ((unsigned int) 0U));
                    arr_26 [i_0] [i_0] = ((/* implicit */short) (+(((/* implicit */int) var_6))));
                }
            }
        } 
    } 
}

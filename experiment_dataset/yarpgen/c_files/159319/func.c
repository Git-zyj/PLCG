/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159319
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((var_11) ? (((((/* implicit */_Bool) (signed char)72)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (signed char)54)))) : (((unsigned int) var_2)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((unsigned short) var_6))) <= ((-(((/* implicit */int) var_5))))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    arr_11 [i_0] [i_2] [i_2] [i_0] = ((/* implicit */unsigned int) var_2);
                    arr_12 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_2 [i_2])))) ? (((/* implicit */int) (unsigned short)43495)) : (((/* implicit */int) ((_Bool) var_0)))));
                    arr_13 [i_0] [i_0] [(unsigned char)0] = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) var_6)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))));
                }
                arr_14 [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned long long int) arr_1 [i_0])))));
                /* LoopNest 2 */
                for (short i_3 = 0; i_3 < 13; i_3 += 1) 
                {
                    for (unsigned int i_4 = 0; i_4 < 13; i_4 += 2) 
                    {
                        {
                            arr_21 [i_4] [(unsigned short)8] [i_3] [i_1] [i_1] [i_0] &= ((/* implicit */unsigned short) max((((/* implicit */unsigned int) max((var_10), (var_11)))), ((+(4294967272U)))));
                            arr_22 [i_0] [i_0] [(_Bool)0] [i_4] = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) var_0)), (var_7))))));
                            arr_23 [i_4] [i_3] [i_1] [(_Bool)1] |= ((/* implicit */_Bool) var_8);
                            arr_24 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_0 [i_0]), (((/* implicit */unsigned char) var_3))))) && (((/* implicit */_Bool) max((arr_18 [i_0] [i_1]), (((/* implicit */unsigned short) (short)0)))))));
                            arr_25 [i_4] [i_3] [i_1] = ((/* implicit */unsigned int) arr_19 [i_4] [(_Bool)1] [i_3] [i_0] [i_0] [i_0]);
                        }
                    } 
                } 
                arr_26 [i_0] [(_Bool)1] [i_0] = (_Bool)1;
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 3) 
        {
            {
                arr_32 [(unsigned char)5] = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 24U)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_31 [i_5])))), ((-(((/* implicit */int) var_9))))))) ? (((/* implicit */int) ((((/* implicit */int) min((arr_27 [(unsigned char)8]), (var_9)))) >= (((((/* implicit */int) var_1)) & (((/* implicit */int) arr_30 [i_5] [(unsigned char)11] [(unsigned short)7]))))))) : (((/* implicit */int) ((((var_2) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_2)))) >= (((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) arr_30 [(_Bool)1] [i_6] [i_6])) : (((/* implicit */int) (short)28785)))))))));
                arr_33 [(short)10] = ((/* implicit */signed char) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)0)));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        for (unsigned int i_8 = 0; i_8 < 13; i_8 += 3) 
        {
            {
                arr_41 [i_7] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_8)) ? (arr_2 [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_8])))))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_10))) / (var_7))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)48948)))))));
                arr_42 [i_7] [i_7] [(short)10] = ((/* implicit */_Bool) (+(((/* implicit */int) ((signed char) var_1)))));
            }
        } 
    } 
    var_12 = ((_Bool) (-(((/* implicit */int) var_10))));
}

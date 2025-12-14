/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129294
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        arr_3 [i_0] |= (unsigned char)105;
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)210)) ? (((/* implicit */long long int) ((/* implicit */int) max(((short)32752), (((/* implicit */short) arr_0 [i_0 + 1])))))) : (((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (arr_1 [i_0 - 1]) : (arr_1 [i_0 - 1])))));
        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) var_3))));
        var_20 = ((/* implicit */short) (((~(-9016745179073015950LL))) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)198)))));
    }
    for (long long int i_1 = 2; i_1 < 21; i_1 += 4) 
    {
        /* LoopSeq 1 */
        for (long long int i_2 = 0; i_2 < 22; i_2 += 1) 
        {
            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_4)), (max(((unsigned short)22348), (((/* implicit */unsigned short) (unsigned char)210))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_7 [i_2] [i_1]) != (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) var_2)), (var_13))))))))) : (arr_7 [i_1] [i_1])));
            arr_12 [i_2] [i_1] = ((/* implicit */short) var_10);
            var_22 &= ((/* implicit */long long int) ((max(((~(((/* implicit */int) arr_11 [i_1] [i_1] [i_1])))), (((/* implicit */int) max((arr_11 [i_2] [i_1] [i_1]), (((/* implicit */unsigned short) arr_6 [i_1]))))))) ^ (((/* implicit */int) max((arr_5 [i_1 - 2] [i_2]), (arr_5 [i_1 - 1] [i_1]))))));
            var_23 = ((/* implicit */unsigned int) ((unsigned char) var_10));
            /* LoopNest 2 */
            for (signed char i_3 = 0; i_3 < 22; i_3 += 2) 
            {
                for (unsigned int i_4 = 0; i_4 < 22; i_4 += 2) 
                {
                    {
                        var_24 = ((/* implicit */short) (-(((/* implicit */int) ((short) ((long long int) var_17))))));
                        var_25 = (((!(((/* implicit */_Bool) (short)5533)))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_14 [i_1] [i_3] [i_4]));
                        /* LoopSeq 2 */
                        for (long long int i_5 = 0; i_5 < 22; i_5 += 1) /* same iter space */
                        {
                            var_26 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_4] [i_2]))) | ((+(arr_13 [i_1 + 1] [i_2] [i_2] [i_4])))));
                            arr_19 [i_5] [i_2] [i_3] [i_4] [i_5] [i_5] [i_2] = arr_18 [i_1] [i_4] [i_3] [i_5] [i_5];
                        }
                        for (long long int i_6 = 0; i_6 < 22; i_6 += 1) /* same iter space */
                        {
                            arr_24 [i_3] [i_2] [i_1] = ((/* implicit */short) max((min((((unsigned char) arr_21 [i_1] [i_1] [i_1] [i_1] [i_1])), ((unsigned char)62))), (((unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)-32582)))))));
                            var_27 -= max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_8 [i_1 + 1]))))), (arr_5 [i_1] [i_2]));
                        }
                    }
                } 
            } 
        }
        var_28 = ((/* implicit */short) (-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_16 [i_1] [i_1] [i_1 - 1] [i_1]))))));
        /* LoopNest 2 */
        for (unsigned char i_7 = 1; i_7 < 21; i_7 += 2) 
        {
            for (short i_8 = 0; i_8 < 22; i_8 += 4) 
            {
                {
                    arr_29 [i_1] [i_7] [i_8] = arr_5 [i_1] [i_1];
                    var_29 |= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)11)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) : (-7944858828715883110LL)));
                }
            } 
        } 
        var_30 = ((/* implicit */short) max((((/* implicit */long long int) min((arr_5 [i_1 - 1] [i_1 - 2]), (arr_5 [i_1 - 1] [i_1 - 1])))), (-8722708963458958165LL)));
    }
    var_31 -= ((/* implicit */long long int) var_9);
}

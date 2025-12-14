/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168659
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
    var_20 ^= ((/* implicit */unsigned int) var_15);
    var_21 = ((/* implicit */_Bool) ((((/* implicit */int) var_6)) - (((/* implicit */int) (unsigned char)255))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 2; i_1 < 13; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    var_22 = ((/* implicit */int) (unsigned char)0);
                    arr_10 [i_2] [i_1 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_6 [(unsigned char)9] [i_1 - 1] [i_2]), (arr_7 [i_0] [i_2])))) ? (((/* implicit */int) arr_8 [i_0] [i_1 + 1] [i_2] [(unsigned char)2])) : (((/* implicit */int) (unsigned char)255))));
                    arr_11 [i_2] [i_2] [i_0] = ((/* implicit */unsigned int) var_6);
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned char) (+(min((((/* implicit */unsigned int) (unsigned char)255)), (620384494U)))));
        /* LoopSeq 3 */
        for (unsigned int i_3 = 0; i_3 < 15; i_3 += 2) /* same iter space */
        {
            var_24 = ((/* implicit */unsigned short) (~(min((min((-821665024), (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) arr_6 [i_3] [i_0] [i_0])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)0))))))));
            var_25 ^= ((unsigned char) var_7);
            arr_15 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)4)) ? (((/* implicit */int) var_12)) : (766643525)))) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [(signed char)6])) || (((/* implicit */_Bool) (signed char)8)))))))) ? (((/* implicit */int) arr_8 [i_0 - 1] [(_Bool)1] [(_Bool)1] [(_Bool)1])) : (((((/* implicit */int) arr_5 [i_0 + 3] [i_3])) - (((/* implicit */int) (unsigned short)13075))))));
        }
        for (unsigned int i_4 = 0; i_4 < 15; i_4 += 2) /* same iter space */
        {
            var_26 = min((((/* implicit */unsigned short) var_7)), ((unsigned short)20417));
            var_27 ^= ((/* implicit */unsigned long long int) (-(((/* implicit */int) min((((/* implicit */short) (unsigned char)239)), (arr_5 [i_0 - 1] [i_0 + 3]))))));
            var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) arr_17 [i_0 - 1]))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_4]))) : (min((arr_9 [i_0 - 1] [i_0 + 2] [i_0 - 1] [i_0 + 1]), (((/* implicit */long long int) min((115711119U), (((/* implicit */unsigned int) arr_14 [i_0])))))))));
        }
        for (signed char i_5 = 1; i_5 < 14; i_5 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned int i_6 = 0; i_6 < 15; i_6 += 2) 
            {
                for (unsigned char i_7 = 0; i_7 < 15; i_7 += 3) 
                {
                    {
                        arr_27 [i_0 + 1] [i_5] [i_6] [(unsigned char)11] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0 + 3] [i_0] [i_0 + 2] [i_0 + 3])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_4))))) ? (((/* implicit */int) ((unsigned char) (_Bool)0))) : ((+(((/* implicit */int) (unsigned short)47719)))))) - (((/* implicit */int) var_16))));
                        /* LoopSeq 1 */
                        for (signed char i_8 = 0; i_8 < 15; i_8 += 1) 
                        {
                            var_29 = (_Bool)0;
                            var_30 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((int) (unsigned char)63))) & (arr_9 [i_0 + 2] [i_0 - 1] [i_0 + 1] [i_5 + 1])));
                        }
                        /* LoopSeq 1 */
                        for (unsigned char i_9 = 0; i_9 < 15; i_9 += 1) 
                        {
                            var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (signed char)-10)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)16731)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-15732))) : (0U)))) ? ((-(((/* implicit */int) (unsigned char)174)))) : (((/* implicit */int) (unsigned short)1))))));
                            var_32 = ((/* implicit */unsigned short) min(((-(arr_6 [i_5 - 1] [i_5 + 1] [i_5 - 1]))), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)1)))))));
                        }
                        var_33 = ((/* implicit */unsigned char) max((var_33), (((/* implicit */unsigned char) var_0))));
                    }
                } 
            } 
            arr_32 [14] = ((/* implicit */short) min((((/* implicit */int) var_6)), (((arr_3 [i_5 + 1] [i_5]) & (((/* implicit */int) var_6))))));
            var_34 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)0)) - (((/* implicit */int) min((((/* implicit */unsigned short) arr_22 [i_0 - 1] [i_0] [i_5 + 1])), ((unsigned short)1))))));
        }
        var_35 = ((/* implicit */unsigned int) max((var_35), (((arr_7 [i_0 + 1] [i_0 + 1]) & (max((arr_7 [i_0 + 1] [i_0 - 1]), (arr_7 [i_0 + 2] [i_0 - 1])))))));
    }
    var_36 *= ((/* implicit */unsigned long long int) var_18);
}

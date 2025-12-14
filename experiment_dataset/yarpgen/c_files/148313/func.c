/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148313
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
    for (unsigned short i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        for (int i_1 = 3; i_1 < 23; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_0] [i_0])) >> (((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 4193280)) ? (-1788316932) : (((/* implicit */int) (_Bool)1)))))) + (5)))));
                var_16 = ((/* implicit */signed char) (~(((/* implicit */int) ((arr_3 [i_0 - 1]) != (arr_3 [i_0 + 1]))))));
                var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1684392535)) ? (((/* implicit */int) (unsigned short)63820)) : (-4193280)))) ? (((/* implicit */int) (unsigned char)181)) : (7)))) ? (((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [18] [i_1])) >> (((-1407578871) + (1407578900)))))) : (4294967295U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_1 [i_0] [i_1]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_5 [(signed char)22] [i_1])) != (1684392535)))) : (((/* implicit */int) arr_0 [i_1 - 2] [i_1 - 3])))))));
                var_18 = ((arr_3 [i_0 + 2]) >> (((/* implicit */int) arr_5 [i_0] [12])));
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 23; i_2 += 1) 
                {
                    for (int i_3 = 3; i_3 < 23; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (signed char i_4 = 0; i_4 < 24; i_4 += 3) 
                            {
                                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)107)) <= (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))))) : (((arr_7 [i_0] [i_1 - 2]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_1 - 1] [i_0 + 2] [i_3])))))));
                                var_20 = ((/* implicit */_Bool) arr_7 [i_0] [i_0]);
                                arr_14 [i_0] [4] [i_0 + 2] [i_0] [i_0] = ((/* implicit */unsigned short) (((((!(((/* implicit */_Bool) (signed char)-88)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_7 [i_1] [i_1]) <= (((/* implicit */unsigned int) -1)))))) : ((~(arr_7 [i_3] [i_1]))))) & (((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */int) (signed char)44)) == (((/* implicit */int) (signed char)-45))))), ((+(1655410989))))))));
                                arr_15 [i_4] [i_3] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) arr_11 [i_0] [i_0]);
                            }
                            for (signed char i_5 = 0; i_5 < 24; i_5 += 2) 
                            {
                                var_21 = ((/* implicit */int) arr_16 [i_0] [i_0]);
                                var_22 = ((/* implicit */unsigned int) arr_2 [i_5] [(signed char)1] [i_1]);
                            }
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (unsigned short i_6 = 2; i_6 < 23; i_6 += 3) 
                            {
                                arr_21 [i_0] [i_6] [i_0] [i_0] [(_Bool)1] [i_0 + 2] = ((/* implicit */unsigned char) var_1);
                                arr_22 [i_0] [i_1] [i_2] [i_6] [1] = ((/* implicit */unsigned short) var_14);
                                var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_2] [i_2])) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) ((signed char) arr_12 [i_0] [i_2 + 1] [i_1 - 3] [i_0])))));
                                var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-44))));
                            }
                            /* vectorizable */
                            for (signed char i_7 = 2; i_7 < 22; i_7 += 4) 
                            {
                                arr_26 [i_0] [i_1 - 2] [i_2] [i_3 - 2] [i_3 - 2] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_7] [i_1] [i_2] [i_2] [i_7 + 2])) || ((!(((/* implicit */_Bool) var_5))))));
                                var_25 = ((/* implicit */unsigned char) (~(((((/* implicit */int) arr_25 [13LL] [i_0 + 2] [(unsigned char)17] [i_2] [i_2] [i_3] [16U])) & (((/* implicit */int) arr_8 [i_1 - 3] [(_Bool)1] [i_7]))))));
                            }
                            var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) var_5))));
                            var_27 = ((/* implicit */int) (signed char)126);
                        }
                    } 
                } 
            }
        } 
    } 
    var_28 = ((/* implicit */signed char) ((((/* implicit */int) var_7)) | (var_5)));
    var_29 = ((/* implicit */unsigned char) (-(var_8)));
    var_30 = ((/* implicit */long long int) -1403430822);
}

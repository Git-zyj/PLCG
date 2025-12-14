/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161378
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_10 = (((~(384617970))) != (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [(unsigned short)10] [16U]))))));
        arr_2 [(signed char)0] = ((/* implicit */_Bool) arr_1 [(_Bool)1] [i_0]);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_7 [i_1] [(_Bool)1] = ((/* implicit */short) var_9);
        /* LoopNest 3 */
        for (long long int i_2 = 2; i_2 < 17; i_2 += 4) 
        {
            for (short i_3 = 3; i_3 < 16; i_3 += 2) 
            {
                for (short i_4 = 1; i_4 < 14; i_4 += 2) 
                {
                    {
                        arr_20 [i_2] [2LL] [i_3] = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) arr_12 [(signed char)2] [i_2 + 1] [(unsigned short)13] [14LL])) ? (((/* implicit */int) arr_3 [i_4] [i_2])) : (((/* implicit */int) var_2)))) < (((/* implicit */int) arr_19 [i_1])))) ? (((/* implicit */int) arr_1 [i_1] [i_4])) : (((/* implicit */int) var_3))));
                        arr_21 [i_2] [4LL] [i_2] [4LL] = ((/* implicit */signed char) ((arr_19 [i_1]) ? (((/* implicit */int) ((((/* implicit */int) arr_1 [17U] [(unsigned short)5])) == (((((/* implicit */int) arr_17 [(signed char)17])) ^ (((/* implicit */int) var_3))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_12 [(signed char)2] [0U] [i_3] [i_4])))))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_5 = 3; i_5 < 19; i_5 += 2) 
    {
        var_11 = ((/* implicit */signed char) var_4);
        var_12 = ((/* implicit */unsigned int) arr_23 [(_Bool)1]);
        /* LoopSeq 1 */
        for (signed char i_6 = 2; i_6 < 18; i_6 += 4) 
        {
            var_13 = ((/* implicit */long long int) ((var_9) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_23 [(unsigned short)12]))))) ? (var_7) : (arr_26 [i_5] [19LL]))))));
            var_14 *= ((/* implicit */signed char) (-(((((/* implicit */long long int) ((/* implicit */int) var_0))) - (arr_26 [i_6] [i_6 - 2])))));
        }
        /* LoopNest 2 */
        for (signed char i_7 = 0; i_7 < 21; i_7 += 4) 
        {
            for (short i_8 = 0; i_8 < 21; i_8 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_9 = 3; i_9 < 20; i_9 += 2) 
                    {
                        for (unsigned long long int i_10 = 2; i_10 < 17; i_10 += 2) 
                        {
                            {
                                arr_36 [(signed char)8] [i_9] [i_8] [(_Bool)1] [(_Bool)1] [(signed char)8] [i_10] = ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_25 [i_5] [i_7] [16U])))))));
                                arr_37 [i_5 - 2] [i_9] [(short)16] [i_9 - 1] [(unsigned short)4] [(short)14] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(var_7)))) ? (((((/* implicit */_Bool) arr_22 [(signed char)14] [(_Bool)1])) ? (((((/* implicit */_Bool) 2765385232U)) ? (-384617970) : (((/* implicit */int) (short)63)))) : (((/* implicit */int) var_0)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [i_5] [12LL])))))));
                                arr_38 [i_5] [i_5] [13LL] [i_5] [i_9] = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) (short)32765)))))));
                                var_15 -= ((/* implicit */long long int) var_9);
                            }
                        } 
                    } 
                    arr_39 [i_5] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_33 [(signed char)6] [17U]))));
                    var_16 = ((/* implicit */unsigned int) var_8);
                }
            } 
        } 
    }
    var_17 = ((/* implicit */long long int) ((((/* implicit */int) (!(var_1)))) << (((/* implicit */int) var_2))));
}

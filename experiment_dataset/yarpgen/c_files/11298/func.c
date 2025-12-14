/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11298
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = 1020511704;
        var_18 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))) <= ((-(((/* implicit */int) arr_2 [i_0]))))));
        arr_4 [i_0] = (unsigned char)121;
    }
    for (unsigned char i_1 = 1; i_1 < 13; i_1 += 4) 
    {
        var_19 = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) ((long long int) arr_5 [i_1 + 2]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -2728495187798949057LL))))) : (arr_7 [i_1 - 1]))));
        arr_8 [i_1] = ((int) (+(((/* implicit */int) (!(((/* implicit */_Bool) -1020511700)))))));
        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((unsigned char) (unsigned char)14)))));
        var_21 = (!(((arr_5 [i_1 - 1]) == (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_12 [i_2] [i_2] = arr_0 [(unsigned char)18];
        /* LoopNest 3 */
        for (unsigned char i_3 = 0; i_3 < 12; i_3 += 4) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (int i_5 = 0; i_5 < 12; i_5 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_6 = 1; i_6 < 10; i_6 += 3) 
                        {
                            var_22 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) (+(arr_17 [i_4]))))) ? ((+(max((((/* implicit */long long int) (unsigned char)85)), (arr_21 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_5]))))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_11 [i_6 - 1] [i_6 + 2])))))));
                            arr_24 [i_2] [(_Bool)1] [i_3] [(_Bool)1] [i_2] |= ((/* implicit */int) (-(((((_Bool) 2031616)) ? (((((/* implicit */_Bool) -4181568040048973119LL)) ? (8644586882257234742LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)58))))) : (((/* implicit */long long int) arr_7 [i_2]))))));
                        }
                        for (int i_7 = 0; i_7 < 12; i_7 += 4) 
                        {
                            arr_29 [i_2] [i_2] [i_4] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)27)), ((-2147483647 - 1))));
                            arr_30 [i_2] [i_4] [i_4] [i_2] [(_Bool)1] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)219)) * (((/* implicit */int) (unsigned char)240))));
                            arr_31 [i_4] [i_2] [i_4] = ((/* implicit */_Bool) (-((+(((int) (unsigned char)12))))));
                            var_23 -= ((/* implicit */_Bool) max((((arr_20 [i_2] [i_3] [i_3] [i_7]) << (((((/* implicit */int) (unsigned char)149)) - (145))))), ((~(((((/* implicit */int) (unsigned char)128)) | (arr_0 [i_3])))))));
                        }
                        var_24 = ((/* implicit */long long int) ((int) ((((/* implicit */int) (_Bool)1)) << (((arr_10 [i_4]) + (1913915426))))));
                        var_25 = ((/* implicit */long long int) (!((_Bool)0)));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_8 = 0; i_8 < 12; i_8 += 2) 
        {
            for (int i_9 = 1; i_9 < 8; i_9 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_10 = 0; i_10 < 12; i_10 += 3) 
                    {
                        for (unsigned char i_11 = 1; i_11 < 11; i_11 += 3) 
                        {
                            {
                                var_26 = ((/* implicit */int) min((var_26), ((-(((/* implicit */int) (unsigned char)28))))));
                                arr_42 [i_9] [i_10] [i_2] [i_2] [i_9] = (-((-(((/* implicit */int) (unsigned char)200)))));
                                arr_43 [i_9] [i_10] [4LL] [i_10] [i_11 + 1] [5LL] = ((((/* implicit */_Bool) (~((-(((/* implicit */int) arr_25 [i_11] [i_9] [i_10] [i_9 + 1] [i_9] [i_9] [i_2]))))))) ? (((int) (~(((/* implicit */int) (unsigned char)178))))) : ((-(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)173)) || (((/* implicit */_Bool) arr_37 [i_9] [i_8] [i_9] [i_10]))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (int i_12 = 1; i_12 < 10; i_12 += 2) 
                    {
                        var_27 = (-(299408275));
                        arr_47 [i_2] [i_2] [i_2] [i_9] = ((/* implicit */_Bool) arr_35 [i_2] [i_8] [i_9]);
                    }
                }
            } 
        } 
        var_28 = ((/* implicit */int) max((((/* implicit */long long int) ((unsigned char) arr_5 [i_2]))), (arr_5 [i_2])));
    }
    var_29 &= ((/* implicit */int) ((long long int) 631983869));
    var_30 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) -154953361)) : (var_1)))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (!(var_2)))))))));
    var_31 = ((/* implicit */unsigned char) ((_Bool) (~(max((((/* implicit */long long int) -726743509)), ((-9223372036854775807LL - 1LL)))))));
    var_32 = ((/* implicit */int) ((((var_2) ? (((int) var_15)) : (((/* implicit */int) ((unsigned char) var_4))))) >= (((((/* implicit */int) ((_Bool) (unsigned char)171))) + (((/* implicit */int) ((_Bool) (_Bool)1)))))));
}

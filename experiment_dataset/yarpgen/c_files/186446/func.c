/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186446
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
    for (long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */int) (unsigned char)90);
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    for (unsigned char i_3 = 1; i_3 < 20; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 21; i_4 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_1]);
                                var_22 = ((/* implicit */unsigned char) arr_5 [i_2] [i_3] [i_4]);
                                var_23 = ((/* implicit */_Bool) min((((((var_15) < (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))) ? (var_13) : ((((_Bool)1) ? (((/* implicit */long long int) var_12)) : (arr_2 [i_0]))))), (((/* implicit */long long int) arr_0 [i_1]))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        /* LoopSeq 1 */
        for (int i_6 = 0; i_6 < 22; i_6 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned char i_7 = 2; i_7 < 19; i_7 += 4) 
            {
                for (int i_8 = 0; i_8 < 22; i_8 += 4) 
                {
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        {
                            var_24 ^= arr_5 [i_6] [i_6] [i_8];
                            var_25 &= ((/* implicit */_Bool) (-(max((7160657575387355251LL), (((/* implicit */long long int) (-(((/* implicit */int) arr_9 [i_5] [i_8] [i_7] [i_5] [i_5] [i_8] [i_5])))))))));
                            arr_27 [i_9] [i_9] [i_5] [i_8] [i_5] [i_5] [i_5] = ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_5] [i_5] [i_8] [i_9]))) & (((((7160657575387355251LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)155))))) | (((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_8])) / (-1418345841)))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (int i_10 = 0; i_10 < 22; i_10 += 2) 
            {
                for (long long int i_11 = 0; i_11 < 22; i_11 += 2) 
                {
                    for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_35 [i_5]))))) ? ((-(-8951097684505981254LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_22 [i_12])), (-3065332304398743370LL)))) ? (arr_5 [i_6] [i_6] [i_12]) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_31 [i_12] [i_11] [i_10] [i_6] [i_5]))))))))));
                            var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_23 [i_5] [i_5] [(unsigned char)19])) ^ (((arr_5 [i_10] [i_5] [i_10]) | (1883763673)))))) ? (((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_31 [i_5] [i_12] [i_5] [i_11] [i_12])) ? (((/* implicit */int) arr_12 [i_5] [i_5])) : (arr_15 [i_11] [i_5])))))) : (29491433737906357LL)));
                            var_28 = ((/* implicit */_Bool) (unsigned char)114);
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) 
                        {
                            var_29 = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */_Bool) 4459435264138214043LL)) ? (-1883763674) : (((/* implicit */int) (unsigned char)122))))), (((arr_39 [i_15 + 1] [i_5]) ? (arr_13 [i_15 + 1] [0LL]) : (((/* implicit */long long int) ((/* implicit */int) arr_39 [i_15 + 1] [i_5])))))));
                            var_30 = ((/* implicit */int) min((var_30), (arr_22 [i_13])));
                            var_31 = ((/* implicit */_Bool) (unsigned char)138);
                        }
                        for (unsigned char i_16 = 0; i_16 < 22; i_16 += 2) 
                        {
                            var_32 = ((/* implicit */unsigned char) ((((min((((/* implicit */int) arr_9 [i_5] [i_13] [i_13] [i_6] [i_6] [i_5] [i_6])), (arr_32 [i_5] [i_6] [i_5]))) / (((/* implicit */int) arr_8 [i_14] [i_5] [i_5])))) * (max((max((arr_15 [i_5] [i_5]), (((/* implicit */int) arr_21 [i_5] [i_13] [i_5])))), (((/* implicit */int) arr_47 [(_Bool)0] [i_6] [(_Bool)1] [i_13] [i_16] [i_16]))))));
                            var_33 = arr_44 [i_16] [i_6] [i_16] [i_16];
                            var_34 = ((/* implicit */long long int) (-((-(((/* implicit */int) arr_18 [i_5] [i_14]))))));
                        }
                        var_35 *= ((/* implicit */unsigned char) ((((arr_35 [i_14]) && (arr_35 [i_14]))) ? (max((((/* implicit */int) ((((/* implicit */_Bool) 4330144794333123567LL)) || (((/* implicit */_Bool) arr_10 [i_14] [14LL] [i_5]))))), (((int) -2004940156)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_5] [i_5] [(unsigned char)13])) && (((var_4) || (((/* implicit */_Bool) arr_23 [i_13] [i_13] [i_5])))))))));
                        arr_49 [i_5] [i_5] [i_5] = (unsigned char)87;
                        var_36 = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_42 [i_6]) / (arr_42 [i_5])))) ? (min((((/* implicit */long long int) (!(arr_43 [i_5] [i_6] [(_Bool)1] [i_14] [(_Bool)1] [i_14])))), (((long long int) var_11)))) : (((/* implicit */long long int) ((((2004940161) < (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */int) ((((/* implicit */int) var_16)) < (var_7)))) : (((/* implicit */int) (unsigned char)159)))))));
                        arr_50 [i_5] [i_5] [i_5] [i_13] [i_14] [i_14] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_5]))))) - (arr_48 [(_Bool)1] [i_6] [i_6] [i_14] [19])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))))))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_14]))) / (((-6550875596243744386LL) / (3556979457595228676LL)))))));
                    }
                } 
            } 
        }
        var_37 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned char)186)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (7160657575387355251LL)))))) ? (((((/* implicit */_Bool) -7563689345684061663LL)) ? (421873718) : (((((/* implicit */int) arr_43 [i_5] [(unsigned char)5] [(_Bool)1] [i_5] [i_5] [(_Bool)1])) + (((/* implicit */int) arr_9 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])))))) : (((/* implicit */int) min(((!(((/* implicit */_Bool) -1883763684)))), (var_16))))));
    }
    var_38 = max((((var_16) ? (((/* implicit */int) ((unsigned char) (unsigned char)193))) : (((/* implicit */int) ((unsigned char) (_Bool)0))))), (var_5));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107918
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
    for (long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_1 = 1; i_1 < 22; i_1 += 4) /* same iter space */
        {
            arr_5 [i_0] [i_1 + 1] = ((/* implicit */_Bool) (((-(var_3))) - (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))));
            var_20 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_4 [i_0] [i_0])) < (((/* implicit */int) var_2)))) ? (((((/* implicit */_Bool) (unsigned char)8)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned char)14)))) : (((/* implicit */int) arr_1 [i_0]))));
            arr_6 [0LL] &= ((/* implicit */long long int) ((arr_3 [i_0] [i_1 + 1] [i_0]) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_4 [i_1 + 1] [i_1 + 1]))));
        }
        for (unsigned char i_2 = 1; i_2 < 22; i_2 += 4) /* same iter space */
        {
            arr_10 [i_0] [i_0] [(_Bool)1] = ((/* implicit */unsigned char) ((var_6) | ((~(min((var_6), (((/* implicit */long long int) (unsigned char)238))))))));
            var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) min((((/* implicit */long long int) (~(((/* implicit */int) var_10))))), ((~(arr_8 [i_2 + 1]))))))));
        }
        for (unsigned char i_3 = 1; i_3 < 22; i_3 += 4) /* same iter space */
        {
            var_22 += ((/* implicit */_Bool) arr_2 [i_0] [i_3 - 1]);
            /* LoopSeq 3 */
            for (long long int i_4 = 0; i_4 < 23; i_4 += 1) 
            {
                /* LoopNest 2 */
                for (long long int i_5 = 2; i_5 < 22; i_5 += 1) 
                {
                    for (long long int i_6 = 2; i_6 < 22; i_6 += 4) 
                    {
                        {
                            var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-((+(((/* implicit */int) arr_20 [(_Bool)1] [i_3]))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) max(((unsigned char)4), (((/* implicit */unsigned char) (_Bool)0))))) || (((/* implicit */_Bool) arr_9 [i_3 - 1] [i_5 - 2]))))) : (((/* implicit */int) arr_15 [22LL] [14LL] [i_0]))));
                            var_24 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_9 [i_5 - 2] [i_5 - 2]))));
                            var_25 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_17)) ? ((((_Bool)1) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned char)8)))) : (((/* implicit */int) max((arr_20 [i_3 + 1] [i_4]), (var_12)))))) << (((((/* implicit */_Bool) -27LL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_0] [i_4] [i_5] [22LL]))))) : (((/* implicit */int) (unsigned char)236))))));
                            var_26 = ((/* implicit */unsigned char) max((var_26), ((unsigned char)11)));
                            var_27 *= ((unsigned char) (~((~(((/* implicit */int) (unsigned char)251))))));
                        }
                    } 
                } 
                var_28 = ((/* implicit */_Bool) max((var_28), (((((/* implicit */int) min((arr_17 [i_3 - 1] [i_3 - 1] [i_3 + 1] [i_3 + 1]), (arr_17 [i_3] [i_3 - 1] [i_3 + 1] [i_3 + 1])))) >= (((((/* implicit */_Bool) arr_17 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 - 1])) ? (((/* implicit */int) (unsigned char)207)) : (((/* implicit */int) arr_17 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 + 1]))))))));
            }
            for (long long int i_7 = 2; i_7 < 21; i_7 += 2) /* same iter space */
            {
                var_29 += ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_3 - 1] [i_7])))))));
                arr_24 [i_0] [i_0] = (((-((-(((/* implicit */int) (_Bool)1)))))) <= (((((((/* implicit */int) arr_13 [i_0] [i_0] [18LL])) >> (((5346642610884104266LL) - (5346642610884104243LL))))) >> ((((~(((/* implicit */int) (_Bool)1)))) + (28))))));
            }
            for (long long int i_8 = 2; i_8 < 21; i_8 += 2) /* same iter space */
            {
                arr_29 [i_0] [i_8] |= arr_27 [i_3 - 1] [i_8];
                /* LoopSeq 1 */
                for (unsigned char i_9 = 0; i_9 < 23; i_9 += 1) 
                {
                    var_30 = ((/* implicit */long long int) min((var_30), (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)215)))))));
                    arr_33 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) max((((((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_0] [i_3] [i_8] [0LL]))))) / (((/* implicit */int) max((((/* implicit */unsigned char) arr_13 [(_Bool)1] [i_0] [11LL])), (arr_9 [i_3 + 1] [i_0])))))), (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_13 [i_0] [i_0] [i_0]))))))))));
                    arr_34 [i_0] = ((/* implicit */_Bool) arr_26 [i_9] [i_0] [i_0] [(_Bool)1]);
                }
                var_31 = ((/* implicit */_Bool) arr_20 [i_3 - 1] [i_3 + 1]);
            }
            var_32 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((unsigned char)231), (((/* implicit */unsigned char) (_Bool)1))))) && (((/* implicit */_Bool) arr_0 [20LL]))));
            arr_35 [i_0] = (i_0 % 2 == 0) ? (((/* implicit */_Bool) (((((-(((/* implicit */int) arr_27 [i_3 + 1] [i_0])))) + (2147483647))) << (((((/* implicit */int) ((unsigned char) ((((/* implicit */int) arr_0 [i_0])) | (((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_3])))))) - (63)))))) : (((/* implicit */_Bool) (((((-(((/* implicit */int) arr_27 [i_3 + 1] [i_0])))) + (2147483647))) << (((((((/* implicit */int) ((unsigned char) ((((/* implicit */int) arr_0 [i_0])) | (((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_3])))))) - (63))) - (128))))));
            arr_36 [i_0] [i_3 + 1] = ((/* implicit */unsigned char) (((((-(((/* implicit */int) var_2)))) % (((/* implicit */int) arr_27 [i_0] [i_0])))) * (((((/* implicit */int) arr_32 [i_0] [(_Bool)1] [i_3] [i_3] [5LL] [i_3 + 1])) >> ((((-(((/* implicit */int) var_18)))) + (146)))))));
        }
        var_33 ^= arr_19 [i_0] [i_0] [i_0] [i_0];
        var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_4 [(_Bool)1] [i_0])), ((unsigned char)4)))) ? (((/* implicit */int) ((((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) == (((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_0]))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_31 [i_0] [i_0] [i_0] [(_Bool)1]))) != (arr_30 [i_0] [i_0] [i_0] [(_Bool)1] [i_0]))))))) ? (((/* implicit */int) arr_11 [(unsigned char)3] [i_0])) : (((/* implicit */int) arr_11 [i_0] [i_0]))));
        var_35 = ((/* implicit */long long int) (~(((((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0])) ^ (((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0]))))));
    }
    var_36 += ((/* implicit */long long int) ((_Bool) -8LL));
    var_37 = (-(min((((/* implicit */long long int) (-(((/* implicit */int) var_8))))), (min((((/* implicit */long long int) (_Bool)1)), (0LL))))));
}

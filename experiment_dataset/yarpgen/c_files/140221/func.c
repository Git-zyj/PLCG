/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140221
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
    /* LoopSeq 4 */
    for (unsigned short i_0 = 3; i_0 < 22; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */int) 823501823U);
        var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) 823501823U))));
        /* LoopSeq 2 */
        for (signed char i_1 = 3; i_1 < 22; i_1 += 2) 
        {
            var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) arr_4 [i_0] [i_1] [i_0]))));
            var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) min((arr_0 [i_0 - 1]), (((/* implicit */int) (signed char)-49))))) * (((((/* implicit */_Bool) arr_0 [i_0 - 3])) ? (((/* implicit */unsigned long long int) arr_0 [i_0 - 1])) : (0ULL))))))));
            var_19 = ((/* implicit */unsigned char) ((var_5) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1]))))) : (((/* implicit */int) ((((/* implicit */int) ((var_7) < (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))) > (((/* implicit */int) (signed char)-58)))))));
            /* LoopSeq 1 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) (signed char)58)), (var_9)))) ? (((arr_4 [i_0] [9ULL] [9ULL]) - (((/* implicit */int) arr_5 [i_1])))) : (((var_5) ? (((/* implicit */int) arr_3 [i_0] [i_1] [i_2])) : (((/* implicit */int) (signed char)58))))))) ? (((((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_2] [i_0] [i_0]))) - (var_7))) / (((/* implicit */unsigned int) var_2)))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_1 + 1] [i_2])))));
                var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) 3471465473U))));
            }
        }
        for (signed char i_3 = 0; i_3 < 23; i_3 += 2) 
        {
            var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-49))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) min((arr_7 [i_3] [i_3] [i_3]), (((/* implicit */int) var_6))))))) : (((unsigned int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) arr_10 [i_3]))))))))));
            var_23 &= ((/* implicit */signed char) 1477803006U);
            /* LoopNest 3 */
            for (signed char i_4 = 0; i_4 < 23; i_4 += 3) 
            {
                for (unsigned short i_5 = 0; i_5 < 23; i_5 += 4) 
                {
                    for (int i_6 = 3; i_6 < 21; i_6 += 3) 
                    {
                        {
                            var_24 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_12 [i_0] [i_0] [i_4] [i_3]) | (arr_12 [i_0 - 2] [i_5] [i_0 - 2] [i_4])))) ? ((~(arr_12 [i_0] [i_4] [i_5] [i_6]))) : (((((/* implicit */_Bool) 3471465472U)) ? (arr_12 [i_0] [i_0 - 2] [i_0 - 3] [i_0 - 3]) : (arr_12 [i_0] [i_0] [i_5] [i_6 - 1])))));
                            var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) min((823501823U), (((/* implicit */unsigned int) (unsigned char)200))))) ? (((/* implicit */int) (unsigned short)13493)) : (((/* implicit */int) (signed char)53)))))));
                            var_26 ^= ((/* implicit */int) min(((-(3471465472U))), (((/* implicit */unsigned int) arr_9 [i_4]))));
                            arr_19 [i_4] [i_4] = arr_5 [i_4];
                        }
                    } 
                } 
            } 
        }
    }
    for (unsigned short i_7 = 3; i_7 < 22; i_7 += 2) /* same iter space */
    {
        var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_4) : (((/* implicit */int) (signed char)-39))))) ? (arr_0 [i_7 + 1]) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_7])))))))) ? (3471465473U) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_7])) - (((((/* implicit */_Bool) 3471465470U)) ? (((/* implicit */int) (signed char)58)) : (((/* implicit */int) (signed char)69)))))))));
        var_28 = min((((unsigned int) ((4294967295U) < (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-59)))))), (min((((/* implicit */unsigned int) arr_8 [i_7 - 2] [i_7 - 2] [i_7] [i_7])), (((1073741823U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)55))))))));
        arr_22 [i_7] [i_7] = ((/* implicit */signed char) arr_18 [i_7] [i_7]);
    }
    for (unsigned short i_8 = 3; i_8 < 22; i_8 += 2) /* same iter space */
    {
        var_29 = min((arr_0 [(unsigned short)16]), (((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_8] [i_8 + 1] [i_8]))))));
        var_30 &= ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */int) arr_13 [(signed char)13] [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8])) <= (((/* implicit */int) arr_13 [i_8] [i_8 - 2] [14] [i_8 + 1] [i_8])))))));
    }
    for (signed char i_9 = 3; i_9 < 17; i_9 += 3) 
    {
        var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) ((((((/* implicit */_Bool) var_15)) && ((!(((/* implicit */_Bool) (unsigned short)13485)))))) ? (((/* implicit */int) min((min((arr_3 [i_9] [i_9] [i_9]), (((/* implicit */unsigned short) (signed char)55)))), (min(((unsigned short)13472), (((/* implicit */unsigned short) arr_17 [i_9] [i_9] [(unsigned short)14]))))))) : (((/* implicit */int) var_13)))))));
        var_32 |= ((/* implicit */_Bool) min((((/* implicit */int) arr_29 [i_9 - 3])), (((((/* implicit */_Bool) arr_20 [(unsigned char)4] [(unsigned char)4])) ? (((/* implicit */int) arr_27 [i_9 - 3] [i_9])) : (((/* implicit */int) max((((/* implicit */unsigned char) arr_15 [i_9])), (arr_24 [i_9] [i_9 - 2]))))))));
    }
    var_33 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) min((max((((/* implicit */unsigned int) (unsigned char)70)), (823501823U))), (((/* implicit */unsigned int) var_2)))))));
    var_34 = ((/* implicit */_Bool) (((+(((((/* implicit */_Bool) (-2147483647 - 1))) ? (2549091627319746044ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)52050))))))) >> (((var_3) - (11606735181795594327ULL)))));
    var_35 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) var_12)), (var_10))))))) / (((/* implicit */int) var_6))));
    var_36 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1096198084)) ? (min((max((823501822U), (((/* implicit */unsigned int) var_2)))), (((((/* implicit */_Bool) (signed char)-56)) ? (((/* implicit */unsigned int) var_15)) : (3471465473U))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (3471465473U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)56)))))) < (max((var_0), (((/* implicit */unsigned long long int) (_Bool)0))))))))));
}

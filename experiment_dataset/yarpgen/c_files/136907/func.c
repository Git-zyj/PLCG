/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136907
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
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 1) /* same iter space */
        {
            var_20 = ((/* implicit */short) (~(((/* implicit */int) arr_4 [i_1] [i_1] [i_1]))));
            var_21 = ((/* implicit */int) arr_1 [i_0] [(unsigned short)1]);
            var_22 = ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1] [i_1] [i_0])) && (((/* implicit */_Bool) var_5))));
        }
        for (unsigned short i_2 = 0; i_2 < 23; i_2 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_23 = ((/* implicit */unsigned short) (-((-(arr_3 [i_0] [i_0] [i_3])))));
                arr_11 [(short)16] [i_0] = ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [14LL] [i_2]))) : (1561125519U));
            }
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 23; i_4 += 1) 
            {
                for (int i_5 = 0; i_5 < 23; i_5 += 1) 
                {
                    {
                        arr_17 [i_5] = ((/* implicit */signed char) ((int) -828950443));
                        arr_18 [16U] [i_5] = ((/* implicit */signed char) var_5);
                    }
                } 
            } 
            var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 828950442)) ? (((/* implicit */unsigned long long int) 828950433)) : (arr_7 [11LL] [i_2] [i_2]))))));
            var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) (unsigned short)52163))));
        }
        for (int i_6 = 0; i_6 < 23; i_6 += 2) 
        {
            arr_21 [i_0] [(unsigned short)21] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned long long int) var_4)))));
            /* LoopSeq 2 */
            for (short i_7 = 2; i_7 < 22; i_7 += 2) /* same iter space */
            {
                arr_26 [i_6] [i_6] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [i_7 - 2]))));
                arr_27 [i_7] [i_6] [i_6] = ((/* implicit */unsigned int) var_10);
            }
            for (short i_8 = 2; i_8 < 22; i_8 += 2) /* same iter space */
            {
                var_26 = ((/* implicit */unsigned int) arr_16 [i_0] [i_0] [i_8 - 2] [i_8 + 1] [i_8]);
                arr_31 [(short)10] [(unsigned short)2] [(short)10] [(short)10] = ((/* implicit */unsigned int) (~((-(((/* implicit */int) (signed char)68))))));
                var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_23 [i_8 - 1] [i_0] [i_8 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_8]))) : (var_3)));
            }
            var_28 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_20 [i_0] [i_6] [i_0])) < (((/* implicit */int) (unsigned short)33712))));
        }
        /* LoopSeq 4 */
        for (unsigned int i_9 = 4; i_9 < 20; i_9 += 1) 
        {
            var_29 = ((/* implicit */int) ((unsigned short) arr_24 [i_9 + 3] [i_9 - 2] [i_9] [i_9 + 1]));
            arr_35 [(signed char)6] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_10 [i_9 + 1] [(signed char)7] [i_9 + 2] [i_0])) % (((/* implicit */int) arr_10 [i_9 - 3] [i_9 - 3] [i_9 - 3] [i_9 + 1]))));
            var_30 = ((/* implicit */short) ((((/* implicit */int) (((-2147483647 - 1)) != (0)))) - (((/* implicit */int) arr_23 [i_0] [i_9 + 2] [(_Bool)1]))));
        }
        for (unsigned short i_10 = 0; i_10 < 23; i_10 += 2) 
        {
            var_31 = ((/* implicit */unsigned short) (+(((/* implicit */int) (signed char)-33))));
            var_32 = (+(((/* implicit */int) var_8)));
            arr_39 [i_10] [i_10] [i_10] = ((/* implicit */unsigned short) ((arr_7 [i_0] [i_10] [i_0]) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)26683)))));
        }
        for (signed char i_11 = 0; i_11 < 23; i_11 += 2) /* same iter space */
        {
            var_33 = ((/* implicit */unsigned short) arr_41 [i_0] [i_0]);
            var_34 = ((/* implicit */unsigned int) max((var_34), (((/* implicit */unsigned int) (+((-2147483647 - 1)))))));
            var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_2) / (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))) ? ((-(var_19))) : (((/* implicit */int) arr_20 [i_0] [i_11] [i_11]))));
            var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_29 [i_0])) : (((int) 2557243014U))));
        }
        for (signed char i_12 = 0; i_12 < 23; i_12 += 2) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned int i_13 = 4; i_13 < 21; i_13 += 1) /* same iter space */
            {
                var_37 = ((/* implicit */unsigned long long int) min((var_37), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_25 [i_13] [i_13 - 1] [i_13 - 2] [i_13 - 2])) ? (arr_25 [i_13] [i_13 + 1] [i_13 + 1] [i_13 + 1]) : (arr_25 [(unsigned char)18] [i_13 - 4] [(unsigned char)18] [i_13 - 4]))))));
                arr_46 [i_13] [i_0] [i_0] = ((/* implicit */int) (unsigned short)52146);
            }
            for (unsigned int i_14 = 4; i_14 < 21; i_14 += 1) /* same iter space */
            {
                arr_49 [(unsigned char)10] [i_12] [i_12] [i_14] = ((/* implicit */short) arr_4 [i_0] [i_0] [i_0]);
                var_38 = ((/* implicit */int) ((signed char) arr_5 [i_14 + 2] [i_14 + 1] [i_14 - 3]));
            }
            /* LoopSeq 1 */
            for (int i_15 = 0; i_15 < 23; i_15 += 2) 
            {
                var_39 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)41))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)65535))))) : ((+(673418404U)))));
                arr_53 [i_12] [i_12] [i_12] [i_12] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_14 [i_0])) ? (var_18) : (((/* implicit */int) (unsigned short)45982))))));
                arr_54 [i_12] = ((/* implicit */int) (short)-7446);
                var_40 = ((/* implicit */signed char) (+(((((/* implicit */int) (signed char)-76)) - (((/* implicit */int) var_5))))));
            }
            arr_55 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)68)) | (-1068360311)))) ? (arr_2 [i_0] [i_0] [i_12]) : ((~(var_2)))));
            arr_56 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)121)) - (((/* implicit */int) (unsigned short)13390))));
        }
        arr_57 [(unsigned short)14] = ((/* implicit */signed char) ((int) arr_5 [i_0] [i_0] [i_0]));
        var_41 = ((/* implicit */unsigned long long int) min((var_41), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_16)) | (arr_3 [i_0] [i_0] [i_0]))))));
    }
    var_42 = (signed char)68;
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144581
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
    var_14 ^= min((((/* implicit */long long int) var_0)), (var_12));
    var_15 = ((/* implicit */unsigned short) ((var_9) <= (((/* implicit */unsigned long long int) -8821724435005277979LL))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) (-(1326353188))))));
        var_17 = ((/* implicit */unsigned char) arr_3 [(unsigned short)5]);
        /* LoopSeq 3 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (short i_2 = 4; i_2 < 21; i_2 += 3) 
            {
                var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_1 - 1] [i_2 - 4])) ? (((/* implicit */int) arr_0 [i_1 - 1] [i_2 - 4])) : (((/* implicit */int) arr_0 [i_1 - 1] [i_2 - 3]))));
                var_19 ^= arr_1 [i_1 - 1] [i_2 - 2];
                var_20 *= ((/* implicit */unsigned char) ((((-1326353188) < (((/* implicit */int) (short)7255)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))) : (var_6))))));
                var_21 -= ((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [12U] [i_1] [i_1])) * (((/* implicit */int) ((signed char) -1326353189)))));
            }
            /* LoopSeq 3 */
            for (long long int i_3 = 0; i_3 < 24; i_3 += 3) 
            {
                var_22 = ((/* implicit */_Bool) min((var_22), (((((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) 1007885882))))) < (((/* implicit */int) var_3))))));
                var_23 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1 - 1]))) < (((var_7) + (((/* implicit */long long int) -1326353182))))));
                var_24 = ((/* implicit */_Bool) ((arr_6 [i_0] [i_0] [(unsigned char)10]) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_0])) : (((/* implicit */int) ((var_12) < (var_6))))));
                var_25 = ((/* implicit */short) (-((-(((/* implicit */int) var_3))))));
            }
            for (unsigned short i_4 = 1; i_4 < 20; i_4 += 2) /* same iter space */
            {
                var_26 = ((/* implicit */long long int) ((unsigned char) arr_5 [i_0] [i_1 - 1] [i_4 + 4]));
                var_27 *= ((/* implicit */unsigned short) ((((/* implicit */int) var_11)) ^ (((((/* implicit */_Bool) 1174898931116281452LL)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)-1))))));
            }
            for (unsigned short i_5 = 1; i_5 < 20; i_5 += 2) /* same iter space */
            {
                var_28 = ((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_0])) < (((/* implicit */int) var_10))));
                var_29 |= ((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) (unsigned short)45066)) ? (arr_14 [i_0] [i_0] [i_1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)71))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [21LL] [i_1] [i_5 - 1]))) * (arr_8 [i_0] [i_1] [i_5])))));
                arr_16 [(signed char)8] [i_5] [i_1] = ((/* implicit */unsigned short) (-(arr_7 [i_0] [i_1] [i_5 + 3] [i_1 - 1])));
            }
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
        {
            arr_21 [i_0] [i_6] = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_6])))))));
            /* LoopNest 2 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (long long int i_8 = 0; i_8 < 24; i_8 += 2) 
                {
                    {
                        var_30 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_19 [i_0] [i_8])) ? (((var_9) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)1))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_24 [i_0] [i_6] [i_7] [(short)16])) ? (6072787363942103083LL) : (((/* implicit */long long int) ((/* implicit */int) var_1))))))));
                        arr_26 [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */unsigned short) ((arr_3 [i_6]) ? (((long long int) var_5)) : (((/* implicit */long long int) arr_7 [21LL] [i_6] [i_6] [i_8]))));
                    }
                } 
            } 
        }
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
        {
            var_31 = ((/* implicit */unsigned short) (~(arr_18 [i_0] [i_0] [i_0])));
            var_32 = ((/* implicit */_Bool) max((var_32), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-7255))) : (var_7)))) > (arr_25 [i_9] [i_9] [6LL])))));
            var_33 = ((/* implicit */short) min((var_33), (((/* implicit */short) var_1))));
            arr_30 [i_9] [(signed char)22] = ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) ^ (arr_27 [i_9]));
            var_34 = ((/* implicit */unsigned int) (!(((((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0])) > (((/* implicit */int) (signed char)14))))));
        }
        arr_31 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_24 [i_0] [(short)2] [i_0] [i_0])) : (((/* implicit */int) var_4))))) ? (arr_22 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_0])))));
        /* LoopSeq 4 */
        for (int i_10 = 0; i_10 < 24; i_10 += 3) 
        {
            var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_22 [i_0] [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_15 [i_0] [i_10] [i_10] [i_10]))));
            arr_34 [i_10] [i_0] [i_10] = ((/* implicit */int) (((!(((/* implicit */_Bool) var_7)))) || (((/* implicit */_Bool) arr_33 [i_0] [i_10] [i_0]))));
        }
        for (unsigned short i_11 = 0; i_11 < 24; i_11 += 2) /* same iter space */
        {
            var_36 = var_8;
            var_37 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_33 [22U] [i_0] [i_0])) : (((/* implicit */int) arr_33 [i_0] [i_11] [i_11]))));
            var_38 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_25 [i_0] [i_11] [i_0])) ? (var_7) : (arr_19 [i_0] [i_0]))) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_0] [i_0] [19])))))));
            var_39 = ((unsigned int) 4294967288U);
        }
        for (unsigned short i_12 = 0; i_12 < 24; i_12 += 2) /* same iter space */
        {
            var_40 = ((/* implicit */signed char) (~(((/* implicit */int) arr_5 [i_0] [i_12] [i_12]))));
            var_41 = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (1125932531) : (((/* implicit */int) var_10))));
            var_42 = ((/* implicit */signed char) (+(((((/* implicit */int) var_10)) ^ (((/* implicit */int) (signed char)31))))));
            var_43 = ((/* implicit */_Bool) arr_12 [i_0] [i_0]);
        }
        for (unsigned short i_13 = 0; i_13 < 24; i_13 += 2) /* same iter space */
        {
            arr_42 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_40 [7LL] [7LL] [i_13])) ? (((/* implicit */int) var_13)) : (((((/* implicit */int) (short)-28906)) | (((/* implicit */int) arr_23 [i_0] [i_0] [i_0]))))));
            arr_43 [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_10))));
            arr_44 [(signed char)21] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_35 [i_0] [(unsigned short)1] [i_13])) ? (((/* implicit */long long int) ((arr_8 [i_0] [i_13] [i_0]) % (((/* implicit */unsigned int) ((/* implicit */int) (short)7255)))))) : ((+(-1174898931116281451LL)))));
            /* LoopSeq 2 */
            for (int i_14 = 3; i_14 < 23; i_14 += 2) 
            {
                var_44 = ((/* implicit */unsigned short) (short)-14876);
                arr_48 [i_0] [i_0] [i_0] [i_14] = ((/* implicit */signed char) var_4);
            }
            for (unsigned int i_15 = 0; i_15 < 24; i_15 += 2) 
            {
                arr_51 [i_15] [i_13] [i_0] [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_11))));
                arr_52 [i_0] = ((arr_8 [i_0] [i_0] [i_0]) >> (((((/* implicit */int) var_3)) - (22))));
            }
        }
    }
}

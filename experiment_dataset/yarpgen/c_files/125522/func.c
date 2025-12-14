/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125522
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
    var_19 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_13)))) || (((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) <= (var_11)))))), ((~(((((/* implicit */_Bool) (unsigned short)41217)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)24319))) : (14912765581906606106ULL)))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned short) (((-(((/* implicit */int) arr_0 [i_0])))) - (((/* implicit */int) ((unsigned char) arr_1 [i_0])))));
        var_21 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_1 [i_0])))) : (((((/* implicit */int) var_8)) + (((/* implicit */int) var_6))))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 12; i_1 += 3) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_4 [i_1] [(signed char)6])))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_1 [i_1]))));
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 3) 
        {
            arr_7 [i_1] = ((/* implicit */unsigned char) ((unsigned short) var_5));
            arr_8 [i_1] [9ULL] [i_1] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_3 [i_1]))));
            var_23 = ((/* implicit */signed char) ((((/* implicit */int) arr_6 [i_1] [i_1])) - (((/* implicit */int) arr_6 [i_1] [i_1]))));
        }
        /* LoopSeq 3 */
        for (unsigned short i_3 = 0; i_3 < 12; i_3 += 3) 
        {
            arr_11 [i_1] [i_1] = ((/* implicit */unsigned short) (((-(((/* implicit */int) var_6)))) + (((/* implicit */int) arr_6 [i_1] [i_1]))));
            var_24 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_3]))) : (var_5)))) ? (((/* implicit */int) arr_9 [i_3] [i_3] [i_3])) : (((/* implicit */int) arr_3 [i_1]))));
            var_25 -= ((/* implicit */signed char) arr_2 [i_1]);
        }
        for (signed char i_4 = 0; i_4 < 12; i_4 += 1) /* same iter space */
        {
            var_26 ^= ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)41217))));
            var_27 += ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)31851))) : (364422119241579273ULL)));
            arr_14 [8ULL] |= ((/* implicit */unsigned char) arr_1 [(unsigned char)2]);
        }
        for (signed char i_5 = 0; i_5 < 12; i_5 += 1) /* same iter space */
        {
            arr_18 [i_1] [i_5] [i_1] = ((/* implicit */unsigned long long int) arr_3 [i_1]);
            /* LoopSeq 2 */
            for (unsigned short i_6 = 0; i_6 < 12; i_6 += 3) 
            {
                var_28 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_19 [i_5] [i_1] [i_5])) - (((/* implicit */int) var_10)))))));
                arr_23 [i_1] [i_5] [i_6] = ((/* implicit */unsigned short) var_16);
                arr_24 [i_6] [i_1] [i_6] [i_6] = ((/* implicit */unsigned long long int) arr_6 [i_1] [i_1]);
            }
            for (signed char i_7 = 0; i_7 < 12; i_7 += 3) 
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_8 = 0; i_8 < 12; i_8 += 4) 
                {
                    var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_16)) ? (var_11) : (arr_10 [i_8])));
                    var_30 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_5] [i_7] [i_7])) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_25 [i_8] [i_8] [i_8] [i_1])) : (((/* implicit */int) var_6)))) : ((+(((/* implicit */int) var_17))))));
                }
                for (unsigned char i_9 = 0; i_9 < 12; i_9 += 2) 
                {
                    arr_32 [i_1] [i_1] = ((/* implicit */unsigned short) ((signed char) ((unsigned long long int) var_10)));
                    var_31 ^= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) >= (((((/* implicit */_Bool) arr_21 [(unsigned short)4] [i_5] [i_5] [i_5])) ? (var_14) : (var_11)))));
                    arr_33 [i_1] [(signed char)5] [i_1] [9ULL] [i_1] = ((/* implicit */unsigned char) arr_19 [4ULL] [i_1] [i_1]);
                }
                for (signed char i_10 = 0; i_10 < 12; i_10 += 3) 
                {
                    var_32 |= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_7] [i_10])) ? (((/* implicit */int) arr_19 [i_5] [10ULL] [i_5])) : (((/* implicit */int) var_7))))) - (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (arr_35 [8ULL] [i_5] [(unsigned short)6] [i_10])))));
                    var_33 &= ((/* implicit */signed char) (~(arr_20 [i_10] [10ULL] [i_1])));
                    var_34 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)0))));
                    var_35 = ((/* implicit */unsigned short) min((var_35), (((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)16300)))))));
                }
                /* LoopSeq 1 */
                for (signed char i_11 = 3; i_11 < 11; i_11 += 2) 
                {
                    var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_17 [i_11 - 3])) + (((/* implicit */int) arr_38 [i_1] [i_11 - 2] [i_11 - 3] [i_11 + 1]))));
                    var_37 = ((/* implicit */unsigned long long int) min((var_37), (((/* implicit */unsigned long long int) arr_3 [i_11 + 1]))));
                }
                var_38 = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) var_15)))));
                arr_39 [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((var_5) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [(unsigned short)9] [i_1] [i_1] [i_1])))));
                arr_40 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_27 [i_7] [i_1] [i_1])) : (((/* implicit */int) var_4))))) > (arr_4 [i_1] [i_1])));
            }
            var_39 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_9 [i_1] [i_1] [i_1]))));
            var_40 = (~(((arr_36 [i_1] [6ULL] [i_1]) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))));
        }
        var_41 ^= ((/* implicit */signed char) ((((/* implicit */int) arr_28 [i_1] [i_1] [8ULL] [(unsigned short)2])) >> (((((/* implicit */int) arr_28 [i_1] [i_1] [i_1] [(unsigned short)8])) - (11308)))));
    }
}

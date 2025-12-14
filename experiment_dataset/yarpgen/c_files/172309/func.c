/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172309
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
    var_20 += ((/* implicit */unsigned long long int) (+(((/* implicit */int) max((((/* implicit */unsigned short) var_17)), (var_6))))));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            arr_4 [i_0] = ((/* implicit */unsigned int) min((((/* implicit */long long int) min((((((/* implicit */int) arr_2 [i_0] [i_1] [i_1])) ^ (((/* implicit */int) var_19)))), (((/* implicit */int) arr_1 [i_0]))))), (min((2956180079478907210LL), (((/* implicit */long long int) (short)-15580))))));
            var_21 = ((/* implicit */int) arr_2 [i_0] [i_0] [i_0]);
            var_22 = ((/* implicit */short) arr_0 [i_0] [i_1]);
            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (max((var_15), (((/* implicit */long long int) arr_0 [i_0] [i_0])))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_13)), ((unsigned short)44340)))))))) ? (var_10) : (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0])) ^ (arr_0 [i_0] [i_1]))))));
            var_24 = (+(((var_1) | (((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_1]))))))));
        }
        for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 1) 
        {
            var_25 = ((/* implicit */long long int) max((var_25), (2956180079478907226LL)));
            var_26 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)25388)) || (((/* implicit */_Bool) min((min((((/* implicit */long long int) var_3)), (var_9))), (min((((/* implicit */long long int) arr_0 [i_0] [i_0])), (arr_6 [i_0]))))))));
            var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((2956180079478907196LL) % (arr_6 [i_0])))))))));
            var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) ((((/* implicit */_Bool) -5781100674649201734LL)) ? (8565440280661679539LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-24))))))));
            var_29 = ((/* implicit */unsigned long long int) -2956180079478907230LL);
        }
        for (signed char i_3 = 0; i_3 < 16; i_3 += 1) 
        {
            /* LoopSeq 4 */
            for (long long int i_4 = 4; i_4 < 13; i_4 += 1) /* same iter space */
            {
                arr_11 [i_0] [i_4] = ((/* implicit */signed char) ((((/* implicit */unsigned int) min(((-(((/* implicit */int) (unsigned short)30662)))), (((/* implicit */int) max(((unsigned short)32041), (((/* implicit */unsigned short) var_13)))))))) == (max((((/* implicit */unsigned int) var_2)), (arr_10 [i_4] [i_4 + 1] [i_4 + 3])))));
                var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) min((arr_5 [i_0] [i_4 + 3]), (arr_5 [i_0] [i_0]))))) ^ (((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_3]))) ^ (-2956180079478907191LL))))))));
            }
            for (long long int i_5 = 4; i_5 < 13; i_5 += 1) /* same iter space */
            {
                var_31 = ((/* implicit */signed char) (((-(max((((/* implicit */long long int) arr_5 [i_0] [i_0])), (2956180079478907217LL))))) / (((/* implicit */long long int) (+(((((/* implicit */int) arr_1 [i_0])) + (((/* implicit */int) var_2)))))))));
                var_32 += ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)25)) ? (((/* implicit */int) arr_5 [i_0] [i_3])) : (((/* implicit */int) arr_7 [i_0] [i_3]))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_0])))))) : (((long long int) 5781100674649201729LL)))), ((~(5781100674649201748LL)))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_6 = 0; i_6 < 16; i_6 += 1) 
                {
                    var_33 = arr_1 [i_0];
                    var_34 = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
                    arr_19 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-100))) ^ (8422701403858114648LL)));
                }
                arr_20 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) arr_9 [i_0] [i_3] [i_5 - 1] [i_0]);
                var_35 = ((/* implicit */int) max((var_35), (min((-169858518), (((((/* implicit */_Bool) 2958489633486743875LL)) ? (((/* implicit */int) ((unsigned char) (signed char)-41))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)32714)) || (((/* implicit */_Bool) (signed char)47)))))))))));
            }
            for (long long int i_7 = 4; i_7 < 13; i_7 += 1) /* same iter space */
            {
                arr_25 [i_7] [i_7] [i_7] = ((/* implicit */unsigned int) min((arr_9 [i_7 - 1] [i_3] [i_7 - 3] [i_7]), (min(((-(16275089616891456817ULL))), (((/* implicit */unsigned long long int) ((arr_22 [i_7 - 1] [i_7] [i_7] [i_0]) | (((/* implicit */long long int) arr_16 [i_7 - 3] [i_3] [i_0])))))))));
                var_36 = ((/* implicit */unsigned long long int) max((var_36), (((/* implicit */unsigned long long int) 5899762484820101579LL))));
            }
            for (unsigned short i_8 = 0; i_8 < 16; i_8 += 1) 
            {
                arr_29 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -788272145850464122LL)) ? (((/* implicit */int) (short)-22057)) : (1989129811)));
                var_37 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_19))));
                var_38 = ((/* implicit */long long int) min((min((((/* implicit */unsigned long long int) arr_27 [i_0] [i_0] [i_3] [i_8])), (3ULL))), (((/* implicit */unsigned long long int) (-(var_16))))));
            }
            arr_30 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (-((+(2163178760U)))));
            /* LoopSeq 1 */
            for (unsigned char i_9 = 1; i_9 < 12; i_9 += 2) 
            {
                var_39 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)17))));
                arr_35 [i_9 + 4] [i_3] [i_9 + 2] [i_9 + 4] = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_34 [i_9 + 4] [i_9 + 4] [i_9 + 3] [i_9 + 3])) ? (((/* implicit */int) arr_34 [i_9 + 2] [i_9 + 3] [i_9] [i_9 + 4])) : (((/* implicit */int) arr_34 [i_9 + 1] [i_9 + 3] [i_9 + 1] [i_9 + 3]))))), (var_18)));
                var_40 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_22 [i_0] [i_3] [i_0] [i_9 + 2])))) ? (((/* implicit */int) arr_12 [i_9 + 4] [i_9 + 4] [i_9])) : (((/* implicit */int) arr_27 [i_0] [i_3] [i_3] [i_3]))))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) var_13)), (arr_10 [i_0] [i_0] [i_9 + 3])))) : (((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (var_9) : (((long long int) 18446744073709551609ULL))))));
            }
            var_41 = ((/* implicit */unsigned long long int) min(((~(((/* implicit */int) (signed char)88)))), (((/* implicit */int) var_12))));
            arr_36 [i_0] [i_0] = ((/* implicit */_Bool) var_19);
        }
        var_42 = ((/* implicit */_Bool) min((((/* implicit */long long int) var_8)), (arr_8 [i_0] [i_0])));
        var_43 = ((/* implicit */unsigned int) var_19);
    }
    for (unsigned long long int i_10 = 3; i_10 < 16; i_10 += 4) 
    {
        var_44 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_38 [(signed char)4]))));
        arr_39 [i_10] [i_10] = min((((long long int) arr_38 [i_10])), (((/* implicit */long long int) arr_38 [i_10])));
    }
    for (unsigned long long int i_11 = 0; i_11 < 20; i_11 += 1) 
    {
        var_45 = ((/* implicit */_Bool) min((((long long int) arr_42 [i_11])), (((/* implicit */long long int) min((arr_41 [i_11]), (arr_41 [i_11]))))));
        var_46 += ((/* implicit */unsigned short) arr_42 [i_11]);
        arr_43 [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551604ULL)) ? (((/* implicit */int) (unsigned short)24835)) : (((/* implicit */int) (unsigned short)32736))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)251))) : (7875045885178234995ULL)));
    }
    for (signed char i_12 = 4; i_12 < 15; i_12 += 2) 
    {
        var_47 = ((/* implicit */long long int) max((var_47), (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)45600)))))));
        arr_46 [i_12 + 2] = ((/* implicit */_Bool) ((int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_12]))) | (((((/* implicit */_Bool) (signed char)73)) ? (10564818894621666268ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)88))))))));
        var_48 = ((/* implicit */unsigned char) min((-3360659295150049971LL), (((/* implicit */long long int) (unsigned char)33))));
        arr_47 [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_45 [i_12 + 2] [i_12 - 4])) ? (((/* implicit */int) arr_37 [i_12])) : (((/* implicit */int) ((18435525506905322843ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_19))))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) (~(var_1)))))) : (((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */long long int) ((/* implicit */int) arr_37 [i_12]))) : (((((/* implicit */_Bool) (signed char)68)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (-3LL)))))));
    }
}

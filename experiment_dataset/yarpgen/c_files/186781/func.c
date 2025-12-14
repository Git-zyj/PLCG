/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186781
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
    for (int i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        arr_3 [i_0] [i_0 + 3] = ((/* implicit */int) ((short) 8599737070762839939LL));
        var_11 = ((/* implicit */long long int) (-(140291999)));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            arr_6 [i_0] [i_1] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1] [i_1] [i_1 + 1]))) / (var_6))) - (((/* implicit */unsigned int) ((int) var_9))))))));
            arr_7 [i_1] [i_1] = ((/* implicit */unsigned int) ((((((((/* implicit */int) arr_2 [i_0] [(unsigned char)12])) / (((/* implicit */int) arr_1 [i_0])))) != (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_2 [i_1] [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_1 - 2])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_0 [i_1] [7ULL])) ? (((/* implicit */int) var_8)) : (var_10)))))) : (arr_4 [i_1 - 2] [i_0 - 1] [i_1 + 3])));
        }
        var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (var_3) : (var_2)))) % ((+(var_1)))))), (max((((/* implicit */unsigned long long int) arr_1 [i_0 + 3])), (((((/* implicit */_Bool) var_6)) ? (arr_4 [i_0] [i_0] [i_0 + 4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))))))))))));
        var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) (+(var_6))))));
    }
    for (unsigned char i_2 = 0; i_2 < 11; i_2 += 3) 
    {
        var_14 -= ((/* implicit */long long int) max((((/* implicit */unsigned int) (-(((int) arr_8 [i_2]))))), ((((+(arr_0 [i_2] [i_2]))) / (((((/* implicit */unsigned int) ((/* implicit */int) var_8))) * (arr_0 [i_2] [i_2])))))));
        arr_11 [i_2] = ((/* implicit */int) (~(min((((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [i_2]))))), (((((/* implicit */_Bool) var_5)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_2])))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_3 = 0; i_3 < 11; i_3 += 4) /* same iter space */
        {
            var_15 |= ((/* implicit */unsigned int) (+(((/* implicit */int) var_4))));
            var_16 = ((((/* implicit */int) arr_9 [i_3])) << (((((/* implicit */int) arr_9 [i_3])) - (35))));
            var_17 = ((/* implicit */unsigned short) ((unsigned int) ((unsigned char) var_4)));
            /* LoopSeq 1 */
            for (unsigned short i_4 = 2; i_4 < 10; i_4 += 3) 
            {
                arr_17 [7U] [i_2] [(_Bool)1] [i_2] = ((/* implicit */unsigned short) var_4);
                arr_18 [i_2] [(unsigned char)10] [i_2] [9] = ((/* implicit */unsigned int) ((int) arr_15 [i_4 - 1]));
            }
        }
        for (unsigned short i_5 = 0; i_5 < 11; i_5 += 4) /* same iter space */
        {
            /* LoopSeq 3 */
            for (short i_6 = 0; i_6 < 11; i_6 += 4) 
            {
                var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) var_8)) > (((int) ((unsigned long long int) -140291993)))));
                var_19 = (-(((long long int) arr_15 [i_2])));
            }
            for (long long int i_7 = 2; i_7 < 7; i_7 += 3) /* same iter space */
            {
                arr_26 [i_2] [i_5] [i_5] [i_2] = ((/* implicit */unsigned char) var_7);
                arr_27 [i_2] [i_5] [(unsigned char)3] [i_7] = ((/* implicit */unsigned short) ((((-9180684514986142789LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65521))))) - (((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_12 [i_7] [i_5]) ? (((/* implicit */long long int) var_6)) : (var_1)))) ? (arr_0 [i_7 - 2] [i_5]) : (((/* implicit */unsigned int) (~(var_3)))))))));
                arr_28 [i_2] [i_5] [i_5] [i_7] |= ((/* implicit */short) ((int) (+(((((/* implicit */_Bool) 18446744073709551615ULL)) ? (18446744073709551589ULL) : (((/* implicit */unsigned long long int) 854429540)))))));
                var_20 += ((/* implicit */long long int) (!(((/* implicit */_Bool) ((signed char) (~(((/* implicit */int) var_9))))))));
            }
            /* vectorizable */
            for (long long int i_8 = 2; i_8 < 7; i_8 += 3) /* same iter space */
            {
                /* LoopSeq 2 */
                for (unsigned char i_9 = 1; i_9 < 9; i_9 += 3) 
                {
                    arr_34 [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_2] [i_2])) ? (arr_31 [i_2]) : (((/* implicit */unsigned long long int) arr_29 [i_8] [i_8 + 4] [i_8 + 4] [i_9 + 1]))));
                    arr_35 [i_2] [i_5] [i_8] [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_30 [i_8 + 3] [i_8] [i_8 - 1] [i_9 - 1]))));
                    var_21 += ((/* implicit */unsigned char) (+(((/* implicit */int) arr_32 [i_5] [i_9 + 2] [i_9 + 1] [i_9]))));
                    arr_36 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (arr_30 [i_9] [i_9 + 2] [i_9 - 1] [i_8 - 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_9 + 2] [i_9 - 1] [i_8 - 2])))));
                }
                for (signed char i_10 = 0; i_10 < 11; i_10 += 3) 
                {
                    var_22 = ((((/* implicit */_Bool) arr_40 [i_8 + 4] [i_8 - 2] [i_8 + 3])) || ((!(((/* implicit */_Bool) (signed char)74)))));
                    var_23 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) var_5)) ^ ((-(arr_21 [i_2] [i_10])))));
                    var_24 -= ((/* implicit */signed char) (~((+(var_2)))));
                    arr_41 [i_2] [i_10] [i_10] [i_10] [i_2] [i_2] = ((((/* implicit */_Bool) (short)20917)) ? (18446744073709551615ULL) : (6885522764965226788ULL));
                    var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) arr_14 [i_2] [i_5]))));
                }
                var_26 = ((/* implicit */int) max((var_26), (arr_37 [i_2] [i_5] [i_2] [i_8] [i_8 - 1])));
                arr_42 [i_2] [i_5] [i_2] [i_8] = ((/* implicit */short) var_7);
                arr_43 [i_2] [i_2] [i_2] [i_8 + 1] = ((/* implicit */unsigned short) (~(arr_31 [i_2])));
                arr_44 [i_2] [i_2] [i_2] = ((/* implicit */long long int) ((int) var_9));
            }
            var_27 = max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_2])) ? ((+(((/* implicit */int) arr_1 [i_2])))) : ((+(780628196)))))), (((((/* implicit */_Bool) ((arr_33 [i_5] [i_2] [i_2]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_5] [i_2])))))) ? (((var_0) | (var_6))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_1) <= (((/* implicit */long long int) arr_33 [i_2] [i_5] [i_5])))))))));
            arr_45 [i_2] [i_2] = (!(((/* implicit */_Bool) 11561221308744324828ULL)));
            arr_46 [i_2] [i_2] [i_2] = min((((/* implicit */int) var_9)), ((+(((/* implicit */int) ((arr_15 [i_5]) <= (var_10)))))));
        }
    }
    for (unsigned char i_11 = 0; i_11 < 13; i_11 += 3) 
    {
        arr_49 [i_11] [i_11] = ((/* implicit */int) min(((!(((/* implicit */_Bool) arr_4 [i_11] [i_11] [i_11])))), ((!(((((/* implicit */_Bool) arr_0 [(unsigned short)1] [i_11])) || (((/* implicit */_Bool) arr_1 [i_11]))))))));
        arr_50 [i_11] = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) arr_0 [i_11] [i_11])) ? (((/* implicit */long long int) (-(var_3)))) : (((long long int) var_1)))));
    }
    var_28 = ((/* implicit */long long int) (-((((!(((/* implicit */_Bool) var_2)))) ? (((/* implicit */int) var_9)) : (var_10)))));
    var_29 = ((/* implicit */long long int) var_8);
}

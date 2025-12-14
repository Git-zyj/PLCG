/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154291
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_17 += ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)78)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1744)))))) ? (((/* implicit */int) (signed char)-58)) : (((/* implicit */int) (signed char)25))))));
        var_18 = arr_1 [i_0];
        arr_3 [i_0] = ((((/* implicit */_Bool) max((((/* implicit */int) (signed char)56)), (-1034642633)))) ? (((/* implicit */long long int) arr_2 [i_0])) : (((((/* implicit */long long int) ((/* implicit */int) (signed char)66))) | (arr_1 [i_0]))));
        var_19 = ((/* implicit */unsigned short) (-((+(((((/* implicit */_Bool) var_12)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))))));
    }
    for (int i_1 = 0; i_1 < 15; i_1 += 4) /* same iter space */
    {
        var_20 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_16))))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_7))))) : ((((~(arr_1 [i_1]))) | (((/* implicit */long long int) (~(((/* implicit */int) var_16)))))))));
        arr_7 [(signed char)1] [i_1] &= ((/* implicit */int) ((unsigned long long int) (~(-1677424959))));
        var_21 = ((/* implicit */unsigned int) min((((/* implicit */long long int) min((((/* implicit */unsigned int) var_3)), (arr_4 [i_1])))), (((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */long long int) arr_4 [i_1])) : (var_6)))));
        /* LoopSeq 3 */
        for (unsigned long long int i_2 = 3; i_2 < 14; i_2 += 3) /* same iter space */
        {
            var_22 -= ((/* implicit */int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) 3275060734U)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (signed char)-35))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)59))) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)65))) : (1644911351020607843ULL)))))));
            var_23 &= ((/* implicit */unsigned long long int) ((int) var_11));
        }
        /* vectorizable */
        for (unsigned long long int i_3 = 3; i_3 < 14; i_3 += 3) /* same iter space */
        {
            arr_12 [i_3] = ((/* implicit */signed char) var_9);
            var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) 3190939U))));
            arr_13 [i_1] [i_1] |= ((/* implicit */unsigned int) (+(arr_0 [i_3 - 3] [i_3 - 1])));
        }
        for (signed char i_4 = 0; i_4 < 15; i_4 += 2) 
        {
            arr_16 [4ULL] [i_4] [i_4] = ((/* implicit */long long int) max(((signed char)47), (var_7)));
            /* LoopSeq 3 */
            for (unsigned short i_5 = 1; i_5 < 14; i_5 += 2) 
            {
                var_25 &= ((/* implicit */signed char) 1873924014U);
                arr_20 [0U] [i_4] [i_4] [i_1] &= ((/* implicit */long long int) (((-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_8))))) == (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)(-127 - 1))))))));
                var_26 = ((/* implicit */signed char) arr_10 [i_5 - 1] [i_4]);
            }
            for (signed char i_6 = 3; i_6 < 14; i_6 += 4) 
            {
                var_27 = ((/* implicit */unsigned long long int) min((var_27), (max((((/* implicit */unsigned long long int) 305440081)), ((~(min((var_8), (((/* implicit */unsigned long long int) var_14))))))))));
                arr_24 [i_6] [i_4] = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */long long int) arr_4 [i_6 - 2])) != (arr_19 [i_6 + 1])))), (((((/* implicit */_Bool) (signed char)65)) ? (arr_4 [i_6 - 3]) : (var_4)))));
                var_28 = ((/* implicit */long long int) (-(((((/* implicit */unsigned long long int) arr_1 [i_6 - 2])) ^ (var_8)))));
            }
            /* vectorizable */
            for (long long int i_7 = 2; i_7 < 13; i_7 += 3) 
            {
                arr_27 [10U] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) var_0))) ? (((/* implicit */unsigned int) arr_2 [i_1])) : (935761200U)));
                var_29 = ((/* implicit */long long int) ((((/* implicit */long long int) (+(((/* implicit */int) var_5))))) != (var_12)));
                var_30 &= ((/* implicit */int) var_8);
                var_31 += ((/* implicit */unsigned long long int) (signed char)-21);
            }
            var_32 = ((/* implicit */unsigned long long int) var_5);
            arr_28 [(unsigned short)1] [i_4] [i_4] = ((/* implicit */long long int) (signed char)60);
        }
    }
    for (int i_8 = 0; i_8 < 15; i_8 += 4) /* same iter space */
    {
        var_33 = ((/* implicit */long long int) min((var_33), (max((((/* implicit */long long int) var_16)), (((((/* implicit */long long int) ((/* implicit */int) ((1644911351020607851ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_8]))))))) / (((((/* implicit */_Bool) arr_26 [11LL] [i_8] [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (arr_6 [i_8])))))))));
        /* LoopSeq 3 */
        for (signed char i_9 = 0; i_9 < 15; i_9 += 3) /* same iter space */
        {
            var_34 &= ((/* implicit */signed char) ((max((((/* implicit */unsigned long long int) (signed char)-119)), (9271524644839571138ULL))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_25 [3ULL] [i_9] [i_9] [i_9])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)-83)))))));
            /* LoopSeq 2 */
            for (int i_10 = 4; i_10 < 12; i_10 += 4) 
            {
                var_35 = ((/* implicit */unsigned int) min((var_35), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (min((min((((/* implicit */unsigned long long int) 7718428395217187499LL)), (5970519254444928613ULL))), (((/* implicit */unsigned long long int) arr_5 [i_8])))) : (((/* implicit */unsigned long long int) arr_17 [i_8] [i_8] [i_10 + 3])))))));
                arr_37 [13] [i_9] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_15 [i_10 + 2]))))), (((((/* implicit */unsigned long long int) -6497244970573419582LL)) % (((((/* implicit */_Bool) arr_21 [i_8] [i_9] [i_8])) ? (arr_33 [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)59)))))))));
                arr_38 [i_8] = ((/* implicit */unsigned long long int) (-(((var_12) / (((/* implicit */long long int) 14U))))));
                var_36 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) 15166278052566403277ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)53))) : (7492134536298089798ULL)))));
            }
            for (unsigned short i_11 = 2; i_11 < 14; i_11 += 3) 
            {
                arr_41 [i_11] [i_9] [i_8] = ((/* implicit */unsigned int) 9223372036854775807LL);
                var_37 = ((/* implicit */unsigned long long int) max((var_37), (((/* implicit */unsigned long long int) ((var_0) < (((/* implicit */unsigned long long int) arr_40 [i_8])))))));
                var_38 = ((/* implicit */unsigned int) max((((unsigned long long int) arr_21 [i_8] [i_11 - 1] [i_8])), (((/* implicit */unsigned long long int) var_10))));
                arr_42 [i_8] [5LL] [i_9] [1ULL] = ((/* implicit */int) 18446744073709551610ULL);
            }
            arr_43 [i_8] [i_8] [i_8] |= ((/* implicit */unsigned short) -6497244970573419590LL);
        }
        for (signed char i_12 = 0; i_12 < 15; i_12 += 3) /* same iter space */
        {
            var_39 = ((/* implicit */int) min((var_39), (((/* implicit */int) var_8))));
            var_40 = ((/* implicit */signed char) var_0);
            var_41 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_8] [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)96))) : (arr_29 [1U] [i_12])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [i_8] [i_8])))))) : (max((13850398232352061253ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (6568971423041931787LL) : (((/* implicit */long long int) ((/* implicit */int) var_16)))))))));
            arr_46 [7ULL] [i_12] &= ((/* implicit */long long int) (-(((/* implicit */int) var_2))));
        }
        /* vectorizable */
        for (int i_13 = 0; i_13 < 15; i_13 += 2) 
        {
            arr_49 [i_13] = ((/* implicit */unsigned long long int) var_6);
            var_42 = ((/* implicit */long long int) max((var_42), (((/* implicit */long long int) ((((/* implicit */int) arr_15 [i_8])) % (((/* implicit */int) arr_15 [i_8])))))));
        }
        arr_50 [i_8] &= ((/* implicit */int) max((arr_33 [i_8]), (((((/* implicit */_Bool) arr_17 [i_8] [i_8] [i_8])) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))));
    }
    var_43 = ((/* implicit */long long int) ((((/* implicit */int) var_2)) == (((/* implicit */int) (signed char)-97))));
}

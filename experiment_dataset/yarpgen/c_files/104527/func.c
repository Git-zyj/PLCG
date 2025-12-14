/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104527
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
    for (signed char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 18; i_1 += 3) 
        {
            {
                arr_7 [i_0] [i_0] [i_1] = ((/* implicit */signed char) (-(min((((/* implicit */long long int) arr_1 [i_0] [i_1 + 2])), (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1])))))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 3; i_2 < 18; i_2 += 1) 
                {
                    for (unsigned short i_3 = 2; i_3 < 19; i_3 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */long long int) arr_6 [i_0] [i_0]);
                            arr_14 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [(signed char)7] [i_0] [i_0])) ? (((((/* implicit */int) min((((/* implicit */unsigned short) (short)3151)), ((unsigned short)65534)))) | (((/* implicit */int) arr_13 [8LL] [i_1] [i_1 + 2] [i_1 - 1])))) : ((~(((/* implicit */int) arr_6 [i_2 - 2] [i_1 + 1]))))));
                            var_19 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) arr_6 [i_1] [i_1 + 2]))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) + (arr_12 [13LL] [i_1] [i_1] [i_3]))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)14217))))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) (-(((/* implicit */int) arr_8 [i_0] [i_0]))))) < (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */long long int) var_4)) : (-6LL)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned char i_4 = 4; i_4 < 13; i_4 += 1) /* same iter space */
    {
        arr_18 [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_4 - 3])) ? ((~(7ULL))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_15 [(unsigned short)10])))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [16LL])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)32767))))) ? (((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */unsigned long long int) arr_11 [i_4 - 1] [i_4])) : (var_2))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 13974944667335859663ULL)) ? (arr_11 [i_4] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [10])))))))) : ((-(((((/* implicit */_Bool) arr_13 [i_4] [i_4] [i_4 - 2] [i_4 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (6076707302154495129ULL)))))));
        var_20 -= ((/* implicit */short) (((!(((/* implicit */_Bool) arr_8 [i_4 - 1] [i_4 - 1])))) ? ((-(((/* implicit */int) arr_8 [i_4 - 2] [i_4 + 1])))) : (((((((/* implicit */int) arr_5 [i_4 - 3])) + (2147483647))) >> (((((/* implicit */int) arr_5 [i_4 - 4])) + (86)))))));
        var_21 += ((/* implicit */short) max(((~(12370036771555056486ULL))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 16883578511107289831ULL)) ? (((/* implicit */int) arr_5 [i_4])) : (((/* implicit */int) arr_6 [i_4] [i_4])))) > (((((/* implicit */_Bool) 1563165562602261784ULL)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_1 [i_4] [i_4])))))))));
        arr_19 [i_4] &= ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_2 [i_4]))));
    }
    for (unsigned char i_5 = 4; i_5 < 13; i_5 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_5] [i_5] [i_5 - 4] [i_5]))) <= (max((((/* implicit */long long int) (signed char)113)), (9223372036854775807LL)))))), (max((((((/* implicit */_Bool) 12370036771555056497ULL)) ? (arr_9 [i_5] [i_5] [i_5 - 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_5 - 1] [7LL]))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)65535)))))))));
        var_23 -= ((/* implicit */signed char) (~((+(((((/* implicit */_Bool) arr_15 [i_5])) ? (((/* implicit */int) (unsigned short)41829)) : (((/* implicit */int) (signed char)32))))))));
    }
    var_24 -= ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))));
    var_25 = ((/* implicit */short) var_13);
    var_26 = ((/* implicit */_Bool) max(((-(((((/* implicit */int) var_6)) ^ (((/* implicit */int) (unsigned short)18)))))), (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (short)-3151))))));
}

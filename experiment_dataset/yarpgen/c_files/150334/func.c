/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150334
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) ((((/* implicit */int) arr_2 [i_1])) > (((/* implicit */int) arr_4 [i_1] [0LL]))))))) & (((((/* implicit */_Bool) min((((/* implicit */int) var_7)), (4161536)))) ? (((/* implicit */int) arr_3 [i_0] [i_1] [i_0])) : (((/* implicit */int) ((unsigned short) arr_2 [i_1]))))))))));
                arr_5 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) var_4)) > (((/* implicit */int) (((+(-4161540))) != (((/* implicit */int) var_17)))))));
                arr_6 [i_1] = ((((/* implicit */unsigned long long int) var_0)) > (min((6794243996815366550ULL), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0])))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned short i_2 = 0; i_2 < 13; i_2 += 3) /* same iter space */
    {
        arr_9 [i_2] = ((/* implicit */long long int) var_7);
        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) min((((((/* implicit */unsigned int) max((-4161537), (var_0)))) & ((-(arr_1 [i_2]))))), (((/* implicit */unsigned int) arr_4 [i_2] [i_2])))))));
        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_2])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_2] [i_2] [i_2])))))) || (((/* implicit */_Bool) arr_3 [i_2] [i_2] [i_2]))))) != (((/* implicit */int) ((((/* implicit */int) arr_2 [i_2])) > (var_16)))))))));
        arr_10 [i_2] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) 67076096U)), ((~(((((/* implicit */_Bool) 18374686479671623680ULL)) ? (((/* implicit */unsigned long long int) -4161544)) : (var_5)))))));
    }
    /* vectorizable */
    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) var_15))));
        arr_13 [(unsigned short)6] &= ((/* implicit */long long int) (-(67076098U)));
    }
    for (short i_4 = 0; i_4 < 13; i_4 += 1) 
    {
        arr_17 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) min((arr_7 [i_4] [i_4]), (arr_7 [i_4] [i_4])))) : (((/* implicit */int) ((((/* implicit */int) var_8)) >= ((-(-4161540))))))));
        arr_18 [i_4] = ((/* implicit */unsigned short) ((unsigned long long int) ((0ULL) > (18446744073709551610ULL))));
        arr_19 [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_4] [i_4] [i_4])) || ((((+(18446744073709551604ULL))) > (((/* implicit */unsigned long long int) arr_1 [i_4]))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 4) 
        {
            var_22 ^= ((/* implicit */short) (+(((((/* implicit */_Bool) arr_8 [i_4])) ? (((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) arr_11 [i_5]))))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_7 [i_4] [i_5]))))))));
            var_23 = ((/* implicit */int) (!(((/* implicit */_Bool) 4161536))));
        }
        for (signed char i_6 = 0; i_6 < 13; i_6 += 1) 
        {
            var_24 += ((/* implicit */short) arr_24 [(unsigned char)6] [i_6] [i_6]);
            var_25 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_2)), (arr_16 [i_4])))), (72057594037927935ULL))))));
        }
    }
    var_26 += ((/* implicit */unsigned int) max((var_10), (((/* implicit */unsigned long long int) min((4161539), (((/* implicit */int) (short)-32748)))))));
    var_27 |= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_7)) ? ((~(((/* implicit */int) var_6)))) : (max((var_0), (((/* implicit */int) var_8)))))), (2047)));
}

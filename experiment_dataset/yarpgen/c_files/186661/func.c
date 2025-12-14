/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186661
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_12 ^= ((/* implicit */_Bool) (-(max((arr_1 [i_0]), (((/* implicit */unsigned long long int) (signed char)34))))));
        var_13 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_0]))));
    }
    for (signed char i_1 = 1; i_1 < 22; i_1 += 3) 
    {
        arr_4 [i_1 + 1] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1 - 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)35))))), ((~(arr_3 [i_1 - 1])))));
        arr_5 [i_1] = ((/* implicit */unsigned char) (~(min((((/* implicit */unsigned long long int) var_5)), (arr_3 [i_1 - 1])))));
    }
    for (unsigned char i_2 = 0; i_2 < 15; i_2 += 2) 
    {
        arr_8 [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)-59)) & (((/* implicit */int) (signed char)-43))));
        var_14 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)248)) ? (6875444055229718605ULL) : (18446744073709551608ULL)))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_2] [(_Bool)1]))) - (arr_3 [i_2])))) ? (arr_3 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_6 [(short)2] [i_2])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_2 [i_2] [(short)7]), (((/* implicit */short) var_7))))))));
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_6) ? (arr_0 [i_2] [i_2]) : (arr_0 [i_2] [i_2])))) ? (((((/* implicit */_Bool) arr_0 [i_2] [(signed char)12])) ? (var_8) : (17034682880417629043ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)15)) ? (((/* implicit */int) (signed char)-45)) : (((/* implicit */int) (signed char)-64)))))));
    }
    /* LoopSeq 2 */
    for (unsigned char i_3 = 1; i_3 < 20; i_3 += 3) /* same iter space */
    {
        arr_11 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_0)), (arr_3 [i_3])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_10 [i_3]), (arr_10 [i_3]))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)117))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_3 + 1] [i_3]))) : ((~(1412061193291922572ULL)))))));
        arr_12 [i_3] = ((/* implicit */_Bool) arr_3 [i_3 - 1]);
        var_16 = ((/* implicit */signed char) min((6875444055229718605ULL), (((/* implicit */unsigned long long int) (signed char)-111))));
        arr_13 [i_3] = ((/* implicit */int) var_11);
        arr_14 [i_3] [(unsigned char)2] |= ((/* implicit */int) (unsigned short)53552);
    }
    for (unsigned char i_4 = 1; i_4 < 20; i_4 += 3) /* same iter space */
    {
        arr_19 [i_4] [i_4 + 1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 1776384992)) ? (11571300018479833011ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) == (((((((/* implicit */_Bool) arr_10 [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_3 [i_4]))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-42)))))));
        arr_20 [i_4] [i_4] = ((/* implicit */_Bool) (+(max((arr_3 [i_4 - 1]), (((/* implicit */unsigned long long int) min((arr_10 [i_4]), (((/* implicit */signed char) (_Bool)1)))))))));
        var_17 *= min((max((((/* implicit */unsigned long long int) arr_16 [i_4 + 1] [0U])), (arr_3 [i_4 - 1]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_4 - 1])) ? (arr_17 [i_4 + 1]) : (((/* implicit */unsigned int) 2147483647))))));
    }
    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) var_11))));
}

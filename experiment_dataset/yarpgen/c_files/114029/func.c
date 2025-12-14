/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114029
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
    var_17 = ((/* implicit */_Bool) var_14);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) min((((/* implicit */unsigned short) var_8)), (var_0))))));
        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_0 [i_0]), (arr_0 [i_0])))) ? (((((/* implicit */_Bool) (-(arr_0 [i_0])))) ? (arr_0 [i_0]) : (((((/* implicit */_Bool) var_11)) ? (35184372088831LL) : (arr_0 [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((arr_0 [i_0]) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)112))))))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) : (arr_1 [i_0] [i_0])))) ? (((((/* implicit */unsigned long long int) 3028084499306357299LL)) - (arr_1 [i_0] [i_0]))) : (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_0 [i_0]), (((/* implicit */long long int) var_2))))) ? (((3362292551278817349LL) - (((/* implicit */long long int) ((/* implicit */int) var_11))))) : (((/* implicit */long long int) (-(((/* implicit */int) (signed char)-59))))))))));
        /* LoopSeq 3 */
        for (signed char i_1 = 2; i_1 < 9; i_1 += 2) /* same iter space */
        {
            arr_6 [i_1] [i_0] [i_1 - 1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_11)) ? (arr_0 [i_1 - 1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))))) : (-3362292551278817350LL))))));
            arr_7 [(unsigned short)3] [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */int) arr_4 [i_1 + 1])), ((+(var_13))))))));
            var_19 ^= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (unsigned char)143)) : (((((/* implicit */int) arr_4 [i_0])) | (((/* implicit */int) (short)8160)))))) / (((((((/* implicit */int) arr_4 [4LL])) + (2147483647))) << (((((min((33550336), (var_2))) + (1313858555))) - (5)))))));
        }
        for (signed char i_2 = 2; i_2 < 9; i_2 += 2) /* same iter space */
        {
            var_20 = ((/* implicit */short) ((((/* implicit */int) max((((/* implicit */signed char) ((arr_1 [i_2] [i_0]) >= (((/* implicit */unsigned long long int) var_13))))), (arr_4 [i_2 - 2])))) / (var_2)));
            arr_10 [(unsigned short)6] = ((/* implicit */int) (((!(((/* implicit */_Bool) min(((signed char)41), (var_11)))))) && (((/* implicit */_Bool) (unsigned char)240))));
        }
        for (signed char i_3 = 2; i_3 < 9; i_3 += 2) /* same iter space */
        {
            var_21 = (-((~(((/* implicit */int) arr_12 [i_0] [i_3])))));
            var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) (unsigned char)150))));
            arr_13 [3U] [i_3] [(unsigned short)2] = ((/* implicit */int) arr_5 [i_0] [i_3]);
        }
    }
    for (long long int i_4 = 0; i_4 < 14; i_4 += 4) 
    {
        arr_17 [i_4] = max((((((/* implicit */_Bool) arr_16 [i_4] [i_4])) ? (((/* implicit */int) arr_16 [i_4] [i_4])) : (((/* implicit */int) arr_16 [i_4] [i_4])))), (((/* implicit */int) arr_14 [i_4])));
        arr_18 [(signed char)9] = ((/* implicit */_Bool) var_12);
        var_23 = ((((/* implicit */_Bool) (~(((/* implicit */int) arr_14 [i_4]))))) ? (((long long int) arr_15 [i_4])) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */signed char) arr_14 [i_4])), (arr_16 [i_4] [i_4]))))));
    }
    /* vectorizable */
    for (unsigned short i_5 = 0; i_5 < 18; i_5 += 4) 
    {
        arr_23 [i_5] = ((/* implicit */unsigned short) arr_20 [i_5]);
        arr_24 [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (short)1542))) | (((((/* implicit */_Bool) var_15)) ? (arr_20 [i_5]) : (((/* implicit */long long int) ((/* implicit */int) arr_21 [2LL])))))));
    }
    var_24 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_11))));
}

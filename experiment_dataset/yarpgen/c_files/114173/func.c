/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114173
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
    var_20 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_14))));
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((+(((/* implicit */int) var_15)))), (((((/* implicit */int) (unsigned char)255)) - (0)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (var_17)))) ? (((/* implicit */unsigned int) ((int) var_8))) : (var_1))))));
    var_22 &= ((/* implicit */signed char) var_6);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        arr_4 [5] [11ULL] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) 3687439087U)))) || (var_7))))));
        /* LoopSeq 4 */
        for (short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            var_23 = ((/* implicit */signed char) var_10);
            arr_8 [2U] [2U] [i_0] = ((/* implicit */int) max((((/* implicit */signed char) ((var_2) != (((/* implicit */int) arr_5 [i_0]))))), ((signed char)-2)));
            var_24 = ((/* implicit */short) max((max((((/* implicit */unsigned int) arr_0 [i_1])), (((((/* implicit */_Bool) arr_1 [1U])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (arr_3 [i_1]))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) max((arr_5 [i_1]), (var_18)))))))));
        }
        for (unsigned short i_2 = 0; i_2 < 12; i_2 += 3) /* same iter space */
        {
            var_25 = ((/* implicit */unsigned short) arr_12 [(_Bool)1] [i_0] [i_0]);
            var_26 *= ((/* implicit */unsigned char) min((3157922871U), (((/* implicit */unsigned int) (unsigned short)65535))));
            var_27 = ((/* implicit */signed char) max(((unsigned short)1), ((unsigned short)65535)));
            var_28 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_0] [i_2])) << (((((((/* implicit */_Bool) var_6)) ? (arr_3 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_2]))))) - (1068102449U)))))) ? (((unsigned int) min((2147483647), (arr_12 [(short)4] [7] [i_0])))) : (((/* implicit */unsigned int) max((((var_8) + (((/* implicit */int) var_16)))), (((/* implicit */int) arr_10 [i_0] [i_0] [i_2])))))));
            var_29 = min(((-2147483647 - 1)), (((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_10 [i_2] [i_2] [i_0]))))) || (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_12)), (arr_6 [i_0] [i_0] [i_0]))))))));
        }
        /* vectorizable */
        for (unsigned short i_3 = 0; i_3 < 12; i_3 += 3) /* same iter space */
        {
            var_30 -= ((/* implicit */short) ((((/* implicit */int) (signed char)76)) != (((/* implicit */int) (unsigned char)0))));
            arr_16 [i_3] [i_3] = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) arr_3 [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (arr_6 [i_3] [i_3] [i_0]))));
        }
        /* vectorizable */
        for (unsigned short i_4 = 0; i_4 < 12; i_4 += 3) /* same iter space */
        {
            var_31 = (+(((/* implicit */int) arr_17 [i_0] [i_4])));
            var_32 += ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_0 [(unsigned char)10])) : (((/* implicit */int) var_10))))));
        }
        var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_19 [i_0] [i_0] [i_0])), (arr_6 [i_0] [i_0] [i_0])))) ? (((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) arr_19 [4ULL] [4ULL] [i_0])) : (((/* implicit */int) arr_19 [i_0] [i_0] [i_0])))) : (((/* implicit */int) min((((/* implicit */short) var_13)), (arr_5 [i_0]))))));
    }
    var_34 = ((/* implicit */unsigned int) max((var_34), (((/* implicit */unsigned int) (+(((/* implicit */int) (short)17289)))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144855
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
    /* LoopSeq 4 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((_Bool) min((arr_0 [i_0] [i_0]), (((/* implicit */unsigned int) ((int) (short)15829))))));
        arr_3 [i_0 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)10))))) ? (2165119465U) : (((/* implicit */unsigned int) ((/* implicit */int) max(((!(((/* implicit */_Bool) (signed char)-11)))), (arr_1 [i_0] [i_0 - 1])))))));
    }
    for (short i_1 = 0; i_1 < 12; i_1 += 2) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */long long int) var_13);
        /* LoopSeq 2 */
        for (unsigned short i_2 = 0; i_2 < 12; i_2 += 1) 
        {
            arr_10 [i_2] [i_2] [11LL] = (~(((/* implicit */int) var_13)));
            arr_11 [i_2] = (((!(((/* implicit */_Bool) arr_8 [i_2])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-11)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)127))))) : (max((var_14), (var_15))));
            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) 11536218913805895219ULL)) ? (11536218913805895210ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
            var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) max(((_Bool)1), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 6910525159903656396ULL)) ? (((/* implicit */int) arr_8 [i_1])) : (((/* implicit */int) arr_9 [i_1] [i_1] [6U]))))))))))));
        }
        for (long long int i_3 = 0; i_3 < 12; i_3 += 4) 
        {
            var_22 = ((/* implicit */int) (signed char)10);
            arr_15 [i_1] [i_3] = ((/* implicit */signed char) var_1);
        }
        var_23 = 18446744073709551615ULL;
        var_24 = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)200))))))))));
    }
    /* vectorizable */
    for (short i_4 = 1; i_4 < 20; i_4 += 1) 
    {
        var_25 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_4 - 1] [i_4]))) >= (((((/* implicit */_Bool) arr_16 [i_4 - 1] [(short)18])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (arr_17 [i_4])))));
        var_26 = ((/* implicit */signed char) (+(((/* implicit */int) arr_16 [i_4 + 1] [i_4]))));
        arr_18 [(unsigned short)18] = (~(((/* implicit */int) arr_16 [(signed char)4] [(_Bool)1])));
    }
    for (unsigned char i_5 = 0; i_5 < 24; i_5 += 4) 
    {
        arr_22 [i_5] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_20 [i_5] [i_5])) ? (arr_21 [i_5]) : (((/* implicit */int) arr_20 [i_5] [i_5]))))));
        var_27 -= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (signed char)(-127 - 1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1141523504)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) : ((+(6910525159903656421ULL)))));
    }
    var_28 = ((/* implicit */short) (~(min((0), (((/* implicit */int) (signed char)(-127 - 1)))))));
    var_29 = ((/* implicit */long long int) min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (!(var_6)))))), (((int) 4316603123378516249LL))));
}

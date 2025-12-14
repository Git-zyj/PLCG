/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17945
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
    for (unsigned int i_0 = 4; i_0 < 19; i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */short) arr_2 [i_0] [i_0]);
        /* LoopSeq 2 */
        for (short i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            var_14 = max((((/* implicit */unsigned int) min((((/* implicit */unsigned char) arr_3 [i_0 - 4])), (arr_2 [i_0 - 3] [i_1 - 2])))), (var_10));
            arr_7 [i_0] [i_1 + 1] [i_1] = ((/* implicit */_Bool) (~(min((((/* implicit */unsigned int) arr_0 [i_1 - 1])), (var_4)))));
            var_15 = ((/* implicit */short) ((((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) && (var_2))) ? (((arr_0 [i_0 - 4]) % (((/* implicit */int) arr_1 [i_0 + 1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) var_2))))))));
            var_16 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_6 [i_0]) : (((/* implicit */int) (unsigned char)6))))) ? ((-(((/* implicit */int) arr_3 [i_1])))) : (((/* implicit */int) arr_2 [12LL] [i_0])))) % (((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_2 [i_1] [i_0])) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))))))));
        }
        for (unsigned int i_2 = 0; i_2 < 20; i_2 += 1) 
        {
            arr_11 [i_0] [i_0 - 2] [i_0 - 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)20)) ? (((/* implicit */int) (unsigned char)235)) : (((/* implicit */int) (unsigned short)49152))));
            var_17 = ((/* implicit */signed char) var_2);
        }
    }
    for (unsigned int i_3 = 4; i_3 < 19; i_3 += 1) /* same iter space */
    {
        arr_14 [i_3] = ((/* implicit */unsigned char) min((((unsigned int) ((var_6) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)127)))))), (((/* implicit */unsigned int) arr_0 [i_3]))));
        arr_15 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) var_7)) - (((/* implicit */int) ((unsigned char) ((var_6) ? (((/* implicit */int) arr_3 [10U])) : (((/* implicit */int) arr_13 [i_3]))))))));
    }
    for (unsigned int i_4 = 4; i_4 < 19; i_4 += 1) /* same iter space */
    {
        arr_19 [i_4] = ((/* implicit */unsigned short) max((((unsigned int) var_10)), (((/* implicit */unsigned int) ((((/* implicit */long long int) min((0U), (((/* implicit */unsigned int) arr_12 [i_4] [i_4]))))) >= (var_11))))));
        arr_20 [i_4] = ((/* implicit */unsigned int) var_13);
        var_18 = ((/* implicit */unsigned char) arr_0 [i_4]);
        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) (unsigned short)56))));
        arr_21 [i_4 + 1] = ((((/* implicit */_Bool) min((((/* implicit */int) ((unsigned char) arr_9 [i_4 - 2] [i_4]))), ((~(((/* implicit */int) (unsigned short)6144))))))) ? (((/* implicit */long long int) var_4)) : (((((min((var_11), (((/* implicit */long long int) arr_9 [i_4 - 2] [i_4 - 3])))) + (9223372036854775807LL))) >> (((((/* implicit */int) ((short) var_0))) - (24657))))));
    }
    var_20 = ((/* implicit */signed char) var_6);
    /* LoopSeq 2 */
    for (signed char i_5 = 0; i_5 < 12; i_5 += 2) 
    {
        var_21 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_18 [i_5]))) >= ((~(max((2251799813677056LL), (((/* implicit */long long int) (short)-32757))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_6 = 0; i_6 < 12; i_6 += 3) 
        {
            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)32746)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)6))));
            arr_28 [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_10 [i_5] [i_6])) == ((~(((/* implicit */int) (short)-32746))))));
            var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(var_12)))) ? (((/* implicit */int) ((((/* implicit */int) arr_12 [i_5] [i_6])) == (arr_27 [9U] [9U] [9U])))) : (((/* implicit */int) arr_1 [i_6]))));
        }
        var_24 = ((/* implicit */signed char) arr_23 [3U]);
    }
    for (signed char i_7 = 0; i_7 < 13; i_7 += 2) 
    {
        var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_10 [i_7] [i_7])) : (((((/* implicit */int) max((var_13), (((/* implicit */unsigned short) var_9))))) % (((/* implicit */int) min((((/* implicit */unsigned short) var_0)), (arr_17 [i_7]))))))));
        var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) arr_9 [15U] [i_7]))));
    }
}

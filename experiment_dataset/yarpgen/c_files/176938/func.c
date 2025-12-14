/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176938
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
    var_16 = ((/* implicit */_Bool) ((short) ((short) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (short)-32759)) : (((/* implicit */int) (short)32767))))));
    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_2)))))))))));
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) (short)32760)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((var_4), (((/* implicit */long long int) var_9)))))))) : (((/* implicit */int) (!((!(var_9))))))));
        var_18 = ((/* implicit */_Bool) ((((var_1) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_1 [i_0])))) >> (((/* implicit */int) ((_Bool) arr_2 [i_0])))));
        var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) (((!(var_6))) ? (((arr_1 [i_0]) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) var_6)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 14; i_1 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1])) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((long long int) (short)32767)) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1] [i_1])))));
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_21 = ((/* implicit */long long int) ((short) arr_7 [i_2]));
            arr_10 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32760)) ? (((/* implicit */int) arr_2 [i_2])) : (((/* implicit */int) (short)16368))))) ? (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)0)))) : (((/* implicit */int) (short)(-32767 - 1)))));
            var_22 -= ((/* implicit */unsigned char) ((arr_0 [i_2] [i_2]) ? (((/* implicit */int) arr_0 [i_2] [i_1])) : (((/* implicit */int) var_10))));
            var_23 -= ((/* implicit */long long int) ((short) arr_1 [i_2]));
        }
        var_24 = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) var_4))) >> (((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_15))))));
    }
    for (long long int i_3 = 0; i_3 < 14; i_3 += 2) /* same iter space */
    {
        var_25 |= ((/* implicit */long long int) ((short) ((var_8) ? (arr_9 [i_3]) : (arr_9 [i_3]))));
        var_26 += ((/* implicit */long long int) min(((!(((/* implicit */_Bool) arr_7 [i_3])))), (min((var_10), (arr_13 [i_3] [i_3])))));
    }
    for (long long int i_4 = 0; i_4 < 14; i_4 += 2) /* same iter space */
    {
        var_27 |= ((/* implicit */long long int) ((((arr_0 [i_4] [i_4]) && (arr_0 [i_4] [1LL]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((((/* implicit */int) var_12)) + (2147483647))) >> (((var_4) + (6900824574976901005LL))))))))) : (((/* implicit */int) ((_Bool) min((((/* implicit */short) (unsigned char)63)), ((short)0)))))));
        var_28 -= ((((long long int) (_Bool)1)) >> (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */short) var_9)), (var_3))))))));
        var_29 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */int) min(((short)(-32767 - 1)), (((/* implicit */short) var_15))))), (((((/* implicit */_Bool) (unsigned char)247)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_2 [i_4])))))))));
    }
    /* LoopSeq 3 */
    for (long long int i_5 = 0; i_5 < 12; i_5 += 1) 
    {
        /* LoopNest 3 */
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
        {
            for (unsigned char i_7 = 0; i_7 < 12; i_7 += 4) 
            {
                for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                {
                    {
                        var_30 = ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) ((short) arr_11 [(_Bool)1])))) >> (((/* implicit */int) (!(min((var_14), (var_10))))))));
                        var_31 |= ((/* implicit */short) ((long long int) ((unsigned char) var_4)));
                    }
                } 
            } 
        } 
        var_32 += ((/* implicit */unsigned char) (!(((_Bool) ((((/* implicit */_Bool) arr_26 [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_0))))));
    }
    for (short i_9 = 2; i_9 < 17; i_9 += 3) 
    {
        arr_29 [i_9] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_27 [i_9 - 2]), (arr_27 [i_9 + 2])))) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)-32753)) && (((/* implicit */_Bool) (short)-16381))))) : (((((/* implicit */_Bool) (short)32749)) ? (((/* implicit */int) (short)12)) : (((/* implicit */int) (short)448))))));
        arr_30 [i_9 - 1] [i_9 - 1] = ((/* implicit */long long int) ((short) (short)(-32767 - 1)));
    }
    for (short i_10 = 0; i_10 < 10; i_10 += 3) 
    {
        arr_34 [i_10] = ((/* implicit */unsigned char) min(((short)31744), ((short)0)));
        arr_35 [i_10] = ((/* implicit */short) ((max(((!(arr_28 [i_10]))), (((((/* implicit */_Bool) 9223372036854775807LL)) || (((/* implicit */_Bool) 66060288LL)))))) ? (((long long int) var_10)) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) min((var_9), (var_8))))))));
        var_33 += ((/* implicit */short) var_14);
    }
}

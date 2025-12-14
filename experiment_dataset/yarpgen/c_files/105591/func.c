/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105591
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0] [i_0])) + (((/* implicit */int) (signed char)-66))))) ? (((arr_3 [i_0]) ? (((unsigned int) -3349739278664910417LL)) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (316795205U)))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))))));
        var_16 |= ((((/* implicit */_Bool) (short)7)) ? (((/* implicit */int) (short)7)) : (((/* implicit */int) (short)-7)));
        arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 1994108547743150271LL)) ? (((((/* implicit */_Bool) (signed char)-116)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_3 [i_0])))) : (((/* implicit */int) ((((/* implicit */int) var_11)) == (((/* implicit */int) min(((unsigned char)13), (((/* implicit */unsigned char) arr_1 [i_0]))))))))));
    }
    for (unsigned char i_1 = 2; i_1 < 12; i_1 += 3) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned char i_2 = 1; i_2 < 10; i_2 += 3) 
        {
            var_17 |= ((/* implicit */signed char) ((unsigned char) var_6));
            arr_12 [i_2] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) - (((((/* implicit */_Bool) arr_10 [i_1])) ? (((/* implicit */long long int) arr_9 [i_2] [i_2])) : (9223372036854775807LL)))));
            var_18 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_1 - 2])) ? (1994108547743150271LL) : (((/* implicit */long long int) arr_9 [(unsigned short)4] [i_1 - 1]))));
        }
        for (unsigned short i_3 = 1; i_3 < 9; i_3 += 4) 
        {
            var_19 = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1] [i_1]))) : (arr_6 [i_1 + 1]))) / (((/* implicit */unsigned int) ((/* implicit */int) (short)-27))))) + (((/* implicit */unsigned int) (-(((/* implicit */int) var_1)))))));
            arr_15 [i_1] [i_1] [i_3] = ((/* implicit */int) var_1);
            var_20 += ((long long int) ((short) ((((/* implicit */_Bool) 6236487122063737296LL)) || (((/* implicit */_Bool) 15592256301063489058ULL)))));
            arr_16 [i_1] [i_1] = ((/* implicit */long long int) ((var_3) ? (min((((((/* implicit */int) var_6)) >> (((/* implicit */int) var_5)))), (((/* implicit */int) ((((/* implicit */int) var_11)) == (arr_11 [i_3])))))) : (((((((/* implicit */_Bool) (unsigned short)41252)) ? (((/* implicit */int) arr_13 [i_3])) : (((/* implicit */int) (signed char)127)))) + (((/* implicit */int) min((((/* implicit */unsigned short) var_13)), (arr_7 [i_1]))))))));
        }
        for (long long int i_4 = 2; i_4 < 11; i_4 += 4) 
        {
            var_21 = (!(var_5));
            arr_21 [i_1] [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_2)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)17168)))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (3349739278664910427LL)))))) ? ((+(arr_17 [i_1 - 2] [i_1]))) : (((/* implicit */unsigned long long int) ((var_0) ? (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)127)), (var_10)))) : (((/* implicit */int) var_12)))))));
            arr_22 [i_4] [i_4 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_13 [i_4])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_1 [i_1 - 1]))));
            arr_23 [i_1] [i_4] [i_4] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_12)) : (((((/* implicit */_Bool) arr_9 [i_4] [i_4 + 2])) ? (((/* implicit */int) (short)-4546)) : (((/* implicit */int) arr_19 [i_1 - 1])))))))));
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            arr_26 [i_1 + 1] = ((/* implicit */int) (signed char)(-127 - 1));
            var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) (+((-(((/* implicit */int) min((var_14), (((/* implicit */unsigned char) (signed char)31))))))))))));
            arr_27 [i_1] [i_5] = ((/* implicit */int) max((((((/* implicit */_Bool) max(((short)(-32767 - 1)), (var_13)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)27)) || (var_3))))) : ((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) min(((signed char)127), (((/* implicit */signed char) (_Bool)0)))))));
        }
        arr_28 [i_1 - 1] |= ((/* implicit */signed char) var_12);
    }
    var_23 = 1003032800U;
    var_24 |= ((/* implicit */unsigned int) var_6);
    var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) (signed char)(-127 - 1)))));
}

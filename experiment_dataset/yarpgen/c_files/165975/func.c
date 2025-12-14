/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165975
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
    var_15 += ((/* implicit */short) max((var_8), (((/* implicit */unsigned long long int) min((max((((/* implicit */long long int) var_12)), (var_13))), (((/* implicit */long long int) max((var_1), (((/* implicit */unsigned int) var_0))))))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_16 = ((/* implicit */signed char) max((min((arr_0 [i_0] [i_0]), (((/* implicit */unsigned long long int) ((int) var_6))))), (min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) arr_1 [i_0])) : (arr_0 [i_0] [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_12)))))))));
        var_17 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((short) var_9))) ? (min((var_1), (((/* implicit */unsigned int) var_0)))) : (arr_1 [i_0]))) * (min((3254529665U), (((/* implicit */unsigned int) (short)-19489))))));
        var_18 = ((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (short)19488)), (arr_1 [i_0])))), (max((var_11), (((/* implicit */unsigned long long int) var_12)))))), (((/* implicit */unsigned long long int) max((-1039475718), (((/* implicit */int) (_Bool)1)))))));
        var_19 = ((/* implicit */unsigned int) min((max((min((var_4), (((/* implicit */unsigned long long int) arr_1 [i_0])))), (max((var_11), (arr_0 [i_0] [i_0]))))), (((/* implicit */unsigned long long int) ((short) arr_0 [i_0] [i_0])))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 14; i_1 += 3) 
    {
        var_20 = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */int) (signed char)127)) & (((/* implicit */int) arr_3 [i_1] [i_1])))));
        arr_4 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_12))))) ? (((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) : (((/* implicit */unsigned long long int) arr_1 [i_1 + 2]))));
        arr_5 [i_1] = arr_0 [i_1 - 1] [i_1];
    }
    for (unsigned short i_2 = 0; i_2 < 22; i_2 += 3) 
    {
        /* LoopSeq 2 */
        for (int i_3 = 0; i_3 < 22; i_3 += 3) 
        {
            var_21 ^= ((/* implicit */long long int) ((((unsigned int) ((((/* implicit */int) var_7)) * (((/* implicit */int) var_10))))) != (((/* implicit */unsigned int) ((((((/* implicit */int) (short)19489)) < (((/* implicit */int) (short)32767)))) ? (((/* implicit */int) ((((/* implicit */int) arr_6 [i_2])) == (arr_8 [i_2] [i_2])))) : (max((((/* implicit */int) var_5)), (arr_8 [i_2] [i_2]))))))));
            var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) arr_9 [i_3]))));
            var_23 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (signed char)51)))) % (var_8)));
        }
        for (unsigned short i_4 = 3; i_4 < 21; i_4 += 3) 
        {
            var_24 = ((/* implicit */long long int) max((((((_Bool) arr_8 [i_2] [i_2])) ? (((/* implicit */unsigned long long int) var_14)) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) | (var_11))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_6 [i_4 - 1]), (((/* implicit */unsigned short) var_0)))))) | (((9452756396271891565ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
            arr_13 [i_2] [i_2] = ((/* implicit */signed char) max((((/* implicit */unsigned short) (signed char)1)), ((unsigned short)65535)));
            var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((min((arr_12 [i_4 + 1]), (((/* implicit */long long int) var_2)))), (((/* implicit */long long int) arr_6 [i_2]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) var_11))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2] [i_4])) ? (var_11) : (var_4)))))))) : (((((/* implicit */_Bool) arr_11 [i_4 - 2] [i_4 - 2] [i_4 - 3])) ? (((/* implicit */long long int) min((((/* implicit */int) arr_6 [i_4])), (arr_8 [i_4] [i_2])))) : (min((arr_12 [i_2]), (((/* implicit */long long int) var_1))))))));
        }
        var_26 = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) arr_8 [i_2] [i_2])) ? (arr_8 [i_2] [i_2]) : (arr_8 [i_2] [i_2]))));
        var_27 = ((/* implicit */short) ((unsigned short) min((((/* implicit */unsigned long long int) arr_9 [i_2])), (var_11))));
        var_28 = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)(-127 - 1))) <= (348074565)));
        var_29 = ((/* implicit */_Bool) max((18446744073709551613ULL), (((/* implicit */unsigned long long int) arr_12 [i_2]))));
    }
}

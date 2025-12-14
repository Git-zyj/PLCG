/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170469
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
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) 0U)) : (var_5)))) ? (max((((/* implicit */unsigned long long int) var_3)), (var_10))) : (((/* implicit */unsigned long long int) var_4))))) ? (((((/* implicit */_Bool) (+(var_10)))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((((/* implicit */int) (short)-6596)) < (var_4)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) var_9))))))));
    /* LoopSeq 3 */
    for (short i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_1 [i_0 + 2]), (arr_1 [i_0 + 1])))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_2 [i_0] [i_0]), (arr_2 [i_0] [i_0]))))) : (max((4294967295U), (var_1))))) : (var_1)));
        arr_3 [i_0] = ((/* implicit */int) var_6);
        /* LoopSeq 1 */
        for (unsigned int i_1 = 3; i_1 < 14; i_1 += 4) 
        {
            var_13 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_1])) && (((/* implicit */_Bool) var_4)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1] [i_1 - 1] [i_1])) ? (((/* implicit */unsigned int) var_4)) : (4294967295U)))) : (14927983295968294701ULL))))));
            var_14 = ((/* implicit */signed char) var_4);
        }
    }
    for (unsigned short i_2 = 0; i_2 < 13; i_2 += 4) 
    {
        arr_10 [i_2] = min((arr_7 [i_2]), (((signed char) arr_1 [i_2])));
        var_15 = ((/* implicit */unsigned int) min((var_15), (0U)));
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 4) 
        {
            for (unsigned short i_4 = 1; i_4 < 11; i_4 += 4) 
            {
                {
                    arr_16 [i_2] [i_3] [(unsigned short)3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_3] [i_4 + 1] [i_4 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)76))) : (((((/* implicit */_Bool) 14531130265855115756ULL)) ? (((((/* implicit */_Bool) (signed char)-71)) ? (var_5) : (((/* implicit */unsigned long long int) var_4)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_0))))))))));
                    var_16 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) -1568993577))) ? (((/* implicit */int) ((signed char) 4294967295U))) : (((/* implicit */int) ((signed char) arr_13 [i_2])))))) <= (max((max((((/* implicit */unsigned long long int) -1553112981)), (14531130265855115756ULL))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_5 [i_2])))))))));
                    var_17 = (+(((((/* implicit */_Bool) arr_9 [i_4])) ? (var_1) : (1828103861U))));
                    var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) (signed char)102))));
                    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_4 + 2])) ? (9U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_2])))))), (min((var_0), (((/* implicit */unsigned long long int) arr_14 [i_4 - 1])))))))));
                }
            } 
        } 
    }
    for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 4) 
    {
        var_20 ^= ((/* implicit */unsigned long long int) (((+(2148645289U))) << (((((((/* implicit */_Bool) arr_0 [(short)12] [i_5])) ? (((/* implicit */int) arr_4 [i_5] [i_5] [i_5])) : (((/* implicit */int) arr_4 [i_5] [i_5] [i_5])))) - (1633)))));
        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) max((((/* implicit */int) (signed char)121)), (((((/* implicit */int) arr_0 [i_5] [i_5])) << (((((/* implicit */int) arr_17 [i_5])) - (124))))))))));
    }
    var_22 = ((/* implicit */int) var_3);
    var_23 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((unsigned long long int) var_6))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((signed char) (unsigned char)174)))))));
}

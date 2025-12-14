/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178462
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        arr_2 [(unsigned short)20] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned long long int) arr_0 [i_0])))));
        arr_3 [i_0] = ((/* implicit */unsigned char) min((min((min((var_5), (arr_1 [i_0]))), (((/* implicit */unsigned long long int) var_8)))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_18)), (((770467707453182085LL) ^ (((/* implicit */long long int) ((/* implicit */int) (short)-11899))))))))));
        arr_4 [3LL] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (+(((/* implicit */int) arr_0 [i_0]))))), (((var_11) / (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))))), (((max((((/* implicit */unsigned long long int) var_9)), (var_1))) * ((+(var_1)))))));
        arr_5 [i_0] = ((/* implicit */short) (+((+(max((((/* implicit */unsigned long long int) var_11)), (arr_1 [i_0])))))));
        var_20 &= ((/* implicit */unsigned char) ((max((((/* implicit */int) (short)-11899)), ((~(((/* implicit */int) (_Bool)0)))))) <= ((~(((((/* implicit */int) var_18)) >> (((((/* implicit */int) var_3)) - (42787)))))))));
    }
    var_21 |= ((/* implicit */_Bool) var_17);
    var_22 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) (short)-11887))))));
    /* LoopSeq 3 */
    for (int i_1 = 0; i_1 < 14; i_1 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 4; i_2 < 12; i_2 += 3) 
        {
            for (int i_3 = 1; i_3 < 12; i_3 += 2) 
            {
                for (signed char i_4 = 4; i_4 < 12; i_4 += 2) 
                {
                    {
                        arr_15 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) max((((15292820657027062069ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_3]))))), (((/* implicit */unsigned long long int) var_14))));
                        arr_16 [i_1] = ((/* implicit */unsigned short) max((((/* implicit */long long int) var_17)), (((((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1))))) / (min((var_9), (((/* implicit */long long int) (unsigned short)63759))))))));
                        arr_17 [i_1] |= ((/* implicit */short) min((max((((/* implicit */unsigned long long int) max((arr_9 [i_4 - 3] [(_Bool)1] [i_1]), (var_11)))), ((~(15292820657027062073ULL))))), (max((arr_1 [i_2 - 2]), (((/* implicit */unsigned long long int) min((arr_7 [i_1] [i_1]), (((/* implicit */int) arr_0 [i_2 - 2])))))))));
                        arr_18 [i_3 + 1] [i_3] [(short)3] [i_3] = ((/* implicit */int) min((((/* implicit */long long int) arr_8 [i_4 + 1] [i_2])), (((arr_9 [i_2 + 1] [i_2 - 2] [i_2 + 2]) / (arr_9 [i_2 + 2] [i_2 + 2] [i_2 + 1])))));
                        var_23 ^= ((/* implicit */unsigned char) max((min((max((var_1), (((/* implicit */unsigned long long int) var_8)))), (((/* implicit */unsigned long long int) var_18)))), (max((min((((/* implicit */unsigned long long int) var_11)), (var_6))), (min((((/* implicit */unsigned long long int) arr_8 [i_3] [i_3])), (var_10)))))));
                    }
                } 
            } 
        } 
        arr_19 [i_1] [i_1] = ((/* implicit */int) max((min((((-1042859611292266512LL) / (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_1] [10] [i_1] [i_1] [i_1] [i_1]))))), (((/* implicit */long long int) arr_7 [i_1] [i_1])))), (((/* implicit */long long int) ((((/* implicit */int) arr_13 [i_1] [i_1] [i_1] [i_1] [i_1] [4LL])) * ((+(((/* implicit */int) arr_8 [i_1] [i_1])))))))));
    }
    for (int i_5 = 0; i_5 < 14; i_5 += 2) /* same iter space */
    {
        var_24 |= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_12 [i_5])) && (((/* implicit */_Bool) arr_12 [i_5])))), ((!(((/* implicit */_Bool) var_15))))));
        arr_22 [i_5] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) arr_9 [i_5] [i_5] [(unsigned short)5])), (min((((/* implicit */unsigned long long int) ((var_16) ^ (((/* implicit */int) var_14))))), ((~(var_6)))))));
        var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) max((arr_13 [i_5] [i_5] [i_5] [i_5] [i_5] [(signed char)1]), (arr_12 [i_5]))))) | ((~(arr_14 [(_Bool)1] [i_5])))))), ((~(max((((/* implicit */unsigned long long int) arr_6 [i_5])), (arr_1 [i_5]))))))))));
        var_26 -= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (short)11899)), (((max((((/* implicit */unsigned long long int) arr_13 [i_5] [i_5] [i_5] [6LL] [i_5] [i_5])), (arr_1 [i_5]))) >> (((((/* implicit */int) arr_20 [i_5])) - (49630)))))));
    }
    for (int i_6 = 0; i_6 < 14; i_6 += 2) /* same iter space */
    {
        var_27 += max((max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_20 [i_6])), (arr_6 [7ULL])))), (((arr_11 [i_6] [i_6] [i_6] [i_6]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-31026))))))), (((/* implicit */unsigned long long int) var_3)));
        var_28 = ((/* implicit */int) min((((/* implicit */unsigned long long int) min(((~(1496555853))), ((~(var_17)))))), (min((((/* implicit */unsigned long long int) min((696663760133431630LL), (((/* implicit */long long int) -1496555853))))), (min((((/* implicit */unsigned long long int) arr_24 [i_6])), (arr_11 [i_6] [i_6] [i_6] [i_6])))))));
        var_29 = ((/* implicit */unsigned short) max((min((var_10), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_14))))))), (min((min((var_5), (5ULL))), (((/* implicit */unsigned long long int) max((1496555873), (2078162020))))))));
        arr_25 [i_6] = ((/* implicit */unsigned long long int) (!((!((!(((/* implicit */_Bool) 1551955607))))))));
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149436
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
    for (unsigned int i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        var_18 = ((/* implicit */unsigned long long int) ((unsigned char) min((((((/* implicit */_Bool) (unsigned short)37372)) ? (2640816245U) : (659633228U))), (((/* implicit */unsigned int) arr_0 [i_0 - 1])))));
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 12; i_1 += 3) /* same iter space */
        {
            var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_10))));
            arr_6 [i_0] [i_0] [i_0 - 1] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) min((var_0), ((unsigned char)255))))))), (min((((/* implicit */unsigned long long int) min((var_14), (var_0)))), (var_7)))));
            arr_7 [i_0] [i_0] = ((/* implicit */unsigned char) min((min((arr_2 [i_0]), (arr_2 [i_0]))), (var_4)));
            var_20 = ((/* implicit */unsigned char) var_15);
            var_21 = ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) 2640816260U)) : (var_7)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0] [4ULL]))) : (min((min((var_16), (((/* implicit */unsigned int) var_1)))), (((/* implicit */unsigned int) ((var_7) == (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_1]))))))));
        }
        for (long long int i_2 = 0; i_2 < 12; i_2 += 3) /* same iter space */
        {
            var_22 = max((5040636439709356167ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0])) ? (((/* implicit */int) arr_0 [i_2])) : (((/* implicit */int) (_Bool)1))))) ? (min((arr_5 [i_0] [1U] [i_2]), (((/* implicit */long long int) var_8)))) : (((/* implicit */long long int) ((int) var_6)))))));
            var_23 = var_8;
            var_24 = ((/* implicit */unsigned char) (unsigned short)65297);
        }
        for (unsigned char i_3 = 0; i_3 < 12; i_3 += 3) 
        {
            arr_12 [i_0] [i_3] [i_3] = ((/* implicit */int) (+(var_10)));
            var_25 = ((/* implicit */unsigned short) ((unsigned long long int) 253571896U));
        }
        arr_13 [i_0] = (!(((/* implicit */_Bool) ((var_11) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)12288)) ? (7727050583078215651LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))))))));
    }
    for (unsigned int i_4 = 0; i_4 < 20; i_4 += 2) 
    {
        var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) 2361671311U)) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)213)), (var_10)))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned char)253)), (var_16)))) : (min((var_11), (((/* implicit */unsigned long long int) arr_14 [i_4])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 9376802595012983112ULL)) ? (((/* implicit */int) (unsigned short)65277)) : (((/* implicit */int) (unsigned char)64)))))))))));
        var_27 = ((/* implicit */signed char) (_Bool)1);
    }
    var_28 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((unsigned char) max(((_Bool)1), ((_Bool)1))))), (((((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned long long int) 1654151052U))))) ? (((((/* implicit */_Bool) var_11)) ? (var_7) : (((/* implicit */unsigned long long int) var_10)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (var_15) : (((/* implicit */unsigned int) var_12)))))))));
    var_29 = ((/* implicit */unsigned char) var_12);
}

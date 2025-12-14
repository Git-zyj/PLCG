/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100581
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
    var_19 = ((/* implicit */unsigned char) max((((((/* implicit */long long int) ((/* implicit */int) var_8))) + ((+(5612266575801748879LL))))), (var_9)));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_20 = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) && (((/* implicit */_Bool) 5612266575801748879LL)))), ((!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))))));
        arr_3 [(unsigned char)4] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)62)) / (((/* implicit */int) ((unsigned char) arr_2 [i_0])))));
    }
    for (long long int i_1 = 1; i_1 < 16; i_1 += 2) 
    {
        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (-5612266575801748879LL) : (arr_1 [i_1] [i_1])))))));
        /* LoopSeq 3 */
        for (long long int i_2 = 0; i_2 < 19; i_2 += 4) /* same iter space */
        {
            var_22 = ((long long int) 2248766841U);
            var_23 &= ((/* implicit */unsigned char) max((min((((/* implicit */unsigned long long int) ((5612266575801748878LL) & (((/* implicit */long long int) 2U))))), (arr_9 [i_1 + 2] [3ULL] [i_1 - 1]))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1 - 1])))))) % ((~(arr_8 [i_1 + 3] [i_2]))))))));
        }
        for (long long int i_3 = 0; i_3 < 19; i_3 += 4) /* same iter space */
        {
            var_24 = ((/* implicit */long long int) ((((unsigned long long int) ((long long int) arr_1 [i_1] [i_1]))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1424270068678354449LL)))))) != (((((/* implicit */_Bool) 4294967291U)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)194)))))))))));
            var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned long long int) (unsigned char)58))))) ? (max((((/* implicit */unsigned long long int) (unsigned char)193)), (var_3))) : (5921873818220135329ULL))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3051584946U)) ? (((/* implicit */long long int) ((unsigned int) var_18))) : (var_11)))))))));
            var_26 = ((unsigned long long int) ((((/* implicit */unsigned long long int) arr_8 [i_1 + 2] [i_3])) * (((((/* implicit */unsigned long long int) -5612266575801748878LL)) | (var_15)))));
        }
        for (long long int i_4 = 0; i_4 < 19; i_4 += 4) /* same iter space */
        {
            arr_17 [i_4] = ((/* implicit */unsigned long long int) arr_6 [i_4]);
            var_27 &= max((((((/* implicit */_Bool) var_3)) ? ((+(arr_11 [i_1 - 1] [i_4] [i_4]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U)))))))), (((((/* implicit */_Bool) 1183271249U)) ? (1123700883587072LL) : (5612266575801748878LL))));
            var_28 = ((/* implicit */unsigned int) min((((min((var_15), (((/* implicit */unsigned long long int) (unsigned char)77)))) * (((((/* implicit */_Bool) (unsigned char)209)) ? (((/* implicit */unsigned long long int) 947054925U)) : (arr_14 [i_1] [i_4]))))), (min((((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1 - 1]))) : (5862495693506972493ULL))), (((/* implicit */unsigned long long int) max(((unsigned char)145), ((unsigned char)136))))))));
            arr_18 [(unsigned char)7] = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)151)) || (((/* implicit */_Bool) 5612266575801748877LL)))));
        }
    }
    var_29 = var_8;
}

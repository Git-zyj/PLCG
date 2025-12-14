/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143010
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
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)31)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)58))) : (var_3)))) ? (((((/* implicit */_Bool) (unsigned char)202)) ? (var_3) : (((/* implicit */long long int) var_13)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (var_12) : (((/* implicit */int) var_7)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1852692279601868468LL)) ? (var_0) : (var_12)))) ? (var_3) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (var_12) : (var_2)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (3074788912U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)58)))))) ? (((((/* implicit */_Bool) var_12)) ? (var_12) : (((/* implicit */int) var_1)))) : (((((/* implicit */_Bool) 2267240508U)) ? (((/* implicit */int) (unsigned char)189)) : (var_13))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 3; i_1 < 19; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    var_17 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_5 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)194)))))) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [2LL] [i_1]))) : (4969938536474193678ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0] [8ULL])) ? (var_9) : (var_15))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 33292288)) ? (4969938536474193657ULL) : (((/* implicit */unsigned long long int) arr_7 [i_0] [i_1] [4]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [(unsigned short)8] [(unsigned short)8])) ? (((/* implicit */unsigned int) var_10)) : (arr_1 [i_0])))) : (arr_7 [i_1 - 2] [i_1 - 1] [16LL])))) : (((var_11) ? (((((/* implicit */_Bool) (unsigned char)58)) ? (0ULL) : (((/* implicit */unsigned long long int) -1100966761)))) : (((var_11) ? (5186287538954766574ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))))));
                    var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)60)) ? (((((/* implicit */_Bool) (unsigned char)197)) ? (((/* implicit */int) arr_3 [i_2])) : (var_12))) : (((((/* implicit */_Bool) 13476805537235357939ULL)) ? (-19) : (((/* implicit */int) arr_8 [i_0] [10LL]))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (signed char)63)))))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)55))) : (arr_1 [2U]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [14ULL] [i_1])) ? (((/* implicit */int) (unsigned char)61)) : (((/* implicit */int) (signed char)(-127 - 1))))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)88))) : (var_4)))) ? (((/* implicit */unsigned long long int) arr_1 [i_1 - 1])) : (13476805537235357937ULL))))))));
                }
            } 
        } 
        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (arr_7 [12ULL] [i_0] [12ULL]) : (((/* implicit */long long int) arr_1 [i_0]))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) arr_1 [i_0])) : (var_5))) : (((((/* implicit */_Bool) var_15)) ? (arr_7 [14U] [i_0] [14U]) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [(signed char)10]))))))))));
    }
}

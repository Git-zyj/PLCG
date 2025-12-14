/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1705
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
    var_10 = var_8;
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_2 [i_1] [i_0])) : (((/* implicit */int) var_4))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3434656884U)) ? (((var_8) ? (arr_1 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_2))))) : (arr_1 [i_0] [i_1])))) : (((15504452123292243275ULL) | (((/* implicit */unsigned long long int) 20LL)))))))));
            var_12 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)19)) - (((/* implicit */int) (unsigned short)18))));
        }
        /* vectorizable */
        for (unsigned short i_2 = 0; i_2 < 18; i_2 += 1) /* same iter space */
        {
            var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (arr_1 [(_Bool)1] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
            var_14 = ((/* implicit */unsigned char) ((int) ((((/* implicit */int) (unsigned short)65507)) % (((/* implicit */int) (unsigned short)56563)))));
            var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) 172319098U)) ? (8388607ULL) : (((((/* implicit */_Bool) (signed char)-43)) ? (8388583ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))));
            var_16 &= ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) 4294967295U)) ? (var_3) : (((/* implicit */int) arr_6 [i_0] [i_0])))));
        }
        for (unsigned short i_3 = 0; i_3 < 18; i_3 += 1) /* same iter space */
        {
            var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)28)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)65535))));
            var_18 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_10 [i_0])) ? (((/* implicit */int) arr_7 [i_0])) : (((/* implicit */int) var_5)))) / (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_10 [i_0])) : (((/* implicit */int) var_5))))));
            var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned char)61))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_0 [i_3] [i_0])) : (((/* implicit */int) arr_0 [i_3] [i_0])))) : (max((((/* implicit */int) (unsigned char)57)), (((((/* implicit */_Bool) (short)19016)) ? (-1029084085) : (((/* implicit */int) (_Bool)0))))))));
        }
        var_20 += ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)157)), ((unsigned short)14877)))) >> (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) || (var_6))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 13988847351883042996ULL)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))) ? (((/* implicit */unsigned long long int) ((var_8) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_6 [i_0] [i_0]))))) : (((((/* implicit */_Bool) (unsigned char)9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (9463279269222859944ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_1), (((/* implicit */unsigned short) arr_9 [i_0]))))))));
    }
    var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) max((((min((((/* implicit */unsigned long long int) var_2)), (var_0))) ^ (min((var_0), (((/* implicit */unsigned long long int) 1126088735)))))), (((/* implicit */unsigned long long int) var_8)))))));
}

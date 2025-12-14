/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177623
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
    for (signed char i_0 = 1; i_0 < 16; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0 - 1] = ((/* implicit */signed char) ((unsigned long long int) ((arr_1 [i_0 - 1] [i_0 - 1]) >= (arr_1 [i_0 + 1] [i_0 + 2]))));
        arr_3 [i_0 + 1] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_0 [i_0 + 2])), (14232831124455955320ULL)))) && (((/* implicit */_Bool) ((long long int) arr_1 [i_0 - 1] [i_0 + 1])))));
        arr_4 [i_0 + 2] = ((/* implicit */int) ((((((/* implicit */int) ((19LL) == (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 + 1])))))) > (var_13))) ? ((+(7LL))) : (((/* implicit */long long int) (((!(((/* implicit */_Bool) var_5)))) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (((/* implicit */int) ((arr_1 [i_0 + 1] [i_0 + 2]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 2])))))))))));
        arr_5 [i_0 + 2] = ((/* implicit */signed char) ((max((((/* implicit */long long int) ((((/* implicit */int) var_3)) % (var_12)))), (max((((/* implicit */long long int) var_5)), (-16LL))))) >> (0ULL)));
        arr_6 [i_0 + 2] = ((/* implicit */unsigned short) (+(min((var_14), (((/* implicit */int) arr_0 [i_0 + 1]))))));
    }
    for (signed char i_1 = 1; i_1 < 16; i_1 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned int) max((arr_1 [i_1 + 1] [i_1 + 2]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_0 [i_1 - 1])))))));
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */long long int) arr_8 [i_1 - 1] [i_1 - 1])) + (max((arr_7 [i_1 + 1] [i_1 + 2]), (arr_7 [i_1 + 2] [i_1 - 1])))));
    }
    var_21 -= ((/* implicit */int) ((signed char) ((((/* implicit */int) ((1966782805) > (var_9)))) % (((int) var_18)))));
    /* LoopSeq 1 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_11 [i_2] = ((/* implicit */int) max((((((/* implicit */_Bool) ((unsigned short) (-9223372036854775807LL - 1LL)))) ? (arr_9 [i_2] [i_2]) : (((/* implicit */unsigned long long int) 999620851)))), (max((((((/* implicit */_Bool) arr_9 [i_2] [i_2])) ? (arr_9 [i_2] [i_2]) : (((/* implicit */unsigned long long int) var_1)))), (((/* implicit */unsigned long long int) min((var_10), (((/* implicit */int) (unsigned short)63517)))))))));
        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_2])) && (((/* implicit */_Bool) (-2147483647 - 1)))))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_2])))))))) <= (((((/* implicit */_Bool) max((var_7), ((unsigned short)63517)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_2]))) : (max((((/* implicit */unsigned long long int) -29LL)), (var_18))))))))));
        var_23 -= max((((/* implicit */unsigned char) (!(((var_6) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)45205)))))))), (((unsigned char) arr_9 [18] [18])));
        var_24 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) -1LL))) ? (max((((/* implicit */unsigned long long int) 2147483647)), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) 1163791534)) : (arr_9 [(unsigned short)2] [i_2]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)19577)) ? (((/* implicit */int) arr_10 [i_2])) : (((/* implicit */int) arr_10 [i_2])))))));
        var_25 = ((/* implicit */unsigned int) ((max((arr_9 [i_2] [i_2]), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) * (((/* implicit */int) (signed char)-126))))))) != (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)68))) < (4294967294U)))))))));
    }
}

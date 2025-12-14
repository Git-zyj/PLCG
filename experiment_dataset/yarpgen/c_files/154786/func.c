/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154786
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
    for (unsigned char i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        var_20 = (((~(((/* implicit */int) min((((/* implicit */unsigned short) arr_1 [i_0] [i_0])), ((unsigned short)61830)))))) | (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((3340245160U) >= (((/* implicit */unsigned int) ((/* implicit */int) (short)-2268))))))) >= (var_19)))));
        arr_2 [i_0] = arr_1 [i_0 + 1] [i_0 + 1];
    }
    for (unsigned short i_1 = 1; i_1 < 12; i_1 += 3) 
    {
        arr_6 [i_1 - 1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)512)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)22290))) : (var_15))))));
        arr_7 [i_1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 594613723))))) >> (((arr_0 [i_1 + 1]) - (18015090417001894963ULL)))))) < (max((((((/* implicit */_Bool) var_3)) ? (4972047614715451146ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))), (min((((/* implicit */unsigned long long int) var_3)), (arr_0 [i_1])))))));
    }
    /* LoopSeq 1 */
    for (long long int i_2 = 2; i_2 < 23; i_2 += 1) 
    {
        arr_10 [i_2 - 2] = ((/* implicit */short) ((max((((((/* implicit */_Bool) (short)2242)) ? (10131068298269823368ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))), (((/* implicit */unsigned long long int) ((unsigned char) arr_9 [i_2]))))) << (((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) arr_9 [i_2])) : (((/* implicit */int) (unsigned short)2449))))) ? ((+(var_11))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)10770)) : (((/* implicit */int) arr_9 [i_2]))))))) - (603647708U)))));
        var_21 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (unsigned char)82)), ((unsigned short)516)));
    }
    var_22 = ((/* implicit */unsigned long long int) var_7);
    /* LoopSeq 1 */
    for (short i_3 = 0; i_3 < 13; i_3 += 4) 
    {
        arr_15 [i_3] = ((/* implicit */_Bool) min((((arr_3 [i_3]) - ((-(var_16))))), (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_1)) ? (var_10) : (arr_11 [i_3])))))));
        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned short)50731)) ? (((/* implicit */int) (unsigned char)80)) : (((/* implicit */int) (unsigned short)61836)))), (2147483637)))) ? (max((((((/* implicit */_Bool) arr_8 [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_15))), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) arr_8 [i_3])), (var_2)))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)64995)))));
        arr_16 [i_3] = ((/* implicit */short) ((var_6) <= (((/* implicit */unsigned int) ((((/* implicit */int) arr_12 [i_3] [i_3])) - (((/* implicit */int) max((var_3), (((/* implicit */unsigned short) arr_8 [(unsigned short)0]))))))))));
        var_24 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)56048)) ? (max((((/* implicit */int) (short)-12588)), (((((/* implicit */_Bool) -1054244495)) ? ((-2147483647 - 1)) : (((/* implicit */int) var_5)))))) : (((/* implicit */int) ((unsigned short) ((((/* implicit */int) (short)22313)) - (1)))))));
    }
}

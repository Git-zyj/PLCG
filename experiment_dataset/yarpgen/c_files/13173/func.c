/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13173
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
    var_14 = ((/* implicit */int) var_10);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) ((var_13) > (((/* implicit */unsigned long long int) 800372821U))));
        var_15 = ((/* implicit */long long int) min((18446744073709551615ULL), (536870656ULL)));
    }
    for (unsigned short i_1 = 0; i_1 < 19; i_1 += 1) 
    {
        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */unsigned long long int) 913315406)) : (6110194881630610419ULL)));
        /* LoopSeq 2 */
        for (long long int i_2 = 2; i_2 < 18; i_2 += 1) /* same iter space */
        {
            arr_9 [i_1] [i_2] = ((int) ((256113804) % (((int) (unsigned short)41502))));
            var_17 = ((/* implicit */int) (-(((((/* implicit */long long int) 924658853)) - (((((/* implicit */_Bool) var_1)) ? (3929796936742993164LL) : (262143LL)))))));
            arr_10 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned char)52)) ? (((/* implicit */unsigned long long int) 1511268386)) : (var_13)))))) ? (((/* implicit */unsigned long long int) var_4)) : (((((/* implicit */_Bool) (+(8984547060137803627ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2 + 1] [i_2 - 1]))) : (12168354987646673152ULL)))));
        }
        for (long long int i_3 = 2; i_3 < 18; i_3 += 1) /* same iter space */
        {
            var_18 -= ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) 3494594475U)) / (arr_11 [i_3 - 1] [i_3 - 1] [i_1]))) != (((/* implicit */unsigned long long int) var_0))));
            /* LoopSeq 2 */
            for (long long int i_4 = 0; i_4 < 19; i_4 += 3) 
            {
                var_19 = ((/* implicit */int) max((var_19), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1905262383)) ? (((/* implicit */unsigned int) 322970178)) : (3831547915U)))) ? (((((/* implicit */_Bool) -16894325)) ? (((/* implicit */int) ((-2777528472079293499LL) == (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_1] [i_3 + 1] [i_1])))))) : (var_4))) : (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (signed char)-17)) : (((/* implicit */int) (short)17041))))) <= (arr_8 [i_3 + 1]))))))));
                arr_16 [i_1] = ((((/* implicit */_Bool) -1806188590)) ? (-1905262384) : (-256113805));
            }
            for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 4) 
            {
                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)52)) ? (min((((/* implicit */long long int) ((unsigned char) 18446744073709551615ULL))), (((((/* implicit */_Bool) (signed char)30)) ? (-860489365863292803LL) : (((/* implicit */long long int) 256113804)))))) : (((/* implicit */long long int) 1806188590))));
                var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) max((((/* implicit */long long int) (unsigned char)255)), ((-(((long long int) arr_11 [i_1] [i_3] [i_5])))))))));
                var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-40)) > (-1806188590)));
            }
            var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) (+((~(arr_6 [18ULL])))))) ? ((~(arr_11 [i_3 + 1] [i_3 + 1] [i_3 - 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))));
        }
        var_24 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)204))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)32767)) || (((/* implicit */_Bool) (short)-15))))) : (((/* implicit */int) ((((/* implicit */_Bool) 5036117215229415578ULL)) && (((/* implicit */_Bool) -1905262383)))))));
    }
}

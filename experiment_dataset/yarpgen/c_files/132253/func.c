/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132253
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
    var_14 = ((((7289826322988295866LL) == (((/* implicit */long long int) ((/* implicit */int) (unsigned char)74))))) ? (11331122485125082781ULL) : (((/* implicit */unsigned long long int) var_0)));
    /* LoopSeq 2 */
    for (long long int i_0 = 3; i_0 < 9; i_0 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) max(((~((~(11331122485125082771ULL))))), (((unsigned long long int) var_10)))))));
        arr_4 [i_0] [i_0 - 1] = ((((/* implicit */unsigned long long int) 1395371013)) & (min((5640238932068355651ULL), (18446744073709551615ULL))));
        arr_5 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) (+((+(var_6))))))));
        var_16 |= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_4)) != (var_11))))) < (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)10253))) & (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_11)))))));
    }
    for (long long int i_1 = 3; i_1 < 9; i_1 += 1) /* same iter space */
    {
        arr_9 [i_1] = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1643778486)) ? (-1428373947) : (var_3)))), (((var_9) & (((/* implicit */unsigned long long int) var_0))))))) ? (((((/* implicit */_Bool) var_10)) ? (1535663127) : (((/* implicit */int) var_8)))) : ((~(((/* implicit */int) ((((/* implicit */int) var_13)) > (1428373946)))))));
        /* LoopSeq 2 */
        for (int i_2 = 0; i_2 < 12; i_2 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned int i_3 = 0; i_3 < 12; i_3 += 1) 
            {
                for (int i_4 = 0; i_4 < 12; i_4 += 4) 
                {
                    for (unsigned short i_5 = 0; i_5 < 12; i_5 += 1) 
                    {
                        {
                            arr_21 [i_1] [i_3] [i_4] [i_5] = ((/* implicit */long long int) var_8);
                            var_17 = ((/* implicit */short) min((5640238932068355668ULL), (12806505141641195983ULL)));
                            arr_22 [i_1] [2U] [i_2] [i_4] [i_1] |= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 376800572U)) ? (((/* implicit */unsigned long long int) var_5)) : (var_11))) + (((unsigned long long int) (unsigned char)100))));
                        }
                    } 
                } 
            } 
            var_18 = ((/* implicit */long long int) max((var_18), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_12)) % (var_3)))) ? ((~(((/* implicit */int) var_8)))) : (((/* implicit */int) var_13))))) : (((long long int) -8470527801994503797LL))))));
            var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 1073741824U))))) * (((/* implicit */int) ((unsigned char) var_2)))))), (((((((/* implicit */_Bool) (short)19889)) ? (-6756525448005168512LL) : (6237607520638884629LL))) & (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_13))))))))))));
            var_20 &= ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned long long int) (unsigned short)19741)))));
        }
        for (long long int i_6 = 2; i_6 < 11; i_6 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned int i_7 = 1; i_7 < 8; i_7 += 3) 
            {
                for (short i_8 = 3; i_8 < 10; i_8 += 1) 
                {
                    {
                        arr_30 [i_1 - 3] [i_1] [i_1 - 1] [(unsigned short)9] [i_1] [i_1 - 2] = ((/* implicit */long long int) (+(((int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) var_7)) : (var_9))))));
                        var_21 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((unsigned int) (short)-32755))), (max((min((var_11), (((/* implicit */unsigned long long int) var_3)))), (((/* implicit */unsigned long long int) ((var_5) | (((/* implicit */unsigned int) var_6)))))))));
                        var_22 = ((/* implicit */int) (((!(((/* implicit */_Bool) var_0)))) ? (((((/* implicit */_Bool) max((var_11), (((/* implicit */unsigned long long int) -1311335371))))) ? (7115621588584468835ULL) : (((/* implicit */unsigned long long int) 63U)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) var_9))) ? (((long long int) 6237607520638884629LL)) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_5)))))))));
                    }
                } 
            } 
            var_23 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((var_4), (((/* implicit */long long int) var_13)))))));
        }
        arr_31 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) 1428373944))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_6)))) : (max((var_7), (((((/* implicit */_Bool) var_13)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))))));
    }
    var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((short) -2736925777430148857LL)))) == (6237607520638884629LL)));
}

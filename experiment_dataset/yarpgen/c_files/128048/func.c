/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128048
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
    var_14 = ((/* implicit */long long int) ((var_6) < (((/* implicit */long long int) ((/* implicit */int) var_3)))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        var_15 = (short)(-32767 - 1);
        var_16 = ((/* implicit */short) (unsigned char)89);
        arr_4 [i_0] = ((/* implicit */short) ((unsigned char) (short)-1));
        arr_5 [i_0] = ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_11))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */short) (~((-(-335220884)))));
                    arr_13 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 5849926953765479540LL)) ? (((/* implicit */int) var_11)) : (arr_11 [i_0] [i_0] [i_0] [i_1])));
                }
            } 
        } 
    }
    /* vectorizable */
    for (short i_3 = 0; i_3 < 17; i_3 += 4) 
    {
        var_18 = ((/* implicit */unsigned char) ((8494784979361652686LL) != (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_3])))));
        var_19 |= ((/* implicit */short) ((((/* implicit */_Bool) (short)32756)) ? (-400740526) : (((/* implicit */int) ((7385668198914239739LL) != (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_3]))))))));
        arr_18 [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_13))))) : (((/* implicit */int) (short)7516))));
    }
    for (long long int i_4 = 4; i_4 < 9; i_4 += 4) 
    {
        var_20 = ((/* implicit */unsigned char) min((((/* implicit */short) ((unsigned char) (short)-7106))), (var_1)));
        /* LoopSeq 1 */
        for (int i_5 = 1; i_5 < 7; i_5 += 2) 
        {
            var_21 = ((/* implicit */short) (+(min((arr_14 [i_4 - 1]), (arr_12 [i_5] [i_4] [i_4] [i_4])))));
            arr_23 [i_4] [i_5] [i_5] = ((((((/* implicit */int) arr_22 [i_5 - 1] [i_4 - 4])) <= (((((/* implicit */_Bool) (unsigned short)65520)) ? (((/* implicit */int) (short)-13468)) : (((/* implicit */int) (short)(-32767 - 1))))))) ? ((-(((((/* implicit */_Bool) -817393524141651968LL)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (short)25674))))))) : ((~(37989934702750172LL))));
            /* LoopSeq 1 */
            for (long long int i_6 = 0; i_6 < 11; i_6 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned char i_7 = 0; i_7 < 11; i_7 += 2) 
                {
                    var_22 &= ((short) ((short) (unsigned short)65535));
                    var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) var_12))));
                    var_24 = ((/* implicit */long long int) (short)-1);
                    var_25 *= ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (((/* implicit */long long int) max((((/* implicit */int) (unsigned short)28459)), (arr_11 [i_4] [i_5 - 1] [i_6] [i_7])))) : (((((/* implicit */_Bool) -2661752641514803828LL)) ? (((/* implicit */long long int) arr_11 [i_4] [i_5 + 1] [i_5] [i_7])) : (14LL)))));
                    var_26 = ((/* implicit */unsigned short) ((((-6775375467567016758LL) < (((/* implicit */long long int) ((/* implicit */int) ((-9LL) > (((/* implicit */long long int) 2147483647)))))))) && (((/* implicit */_Bool) (~(max((((/* implicit */long long int) (short)21047)), (6801163403159269627LL))))))));
                }
                for (long long int i_8 = 1; i_8 < 10; i_8 += 1) 
                {
                    arr_31 [i_5] |= ((/* implicit */short) (+(min((65535LL), (((/* implicit */long long int) arr_21 [i_4] [i_5] [i_8 + 1]))))));
                    var_27 = (((+(((((/* implicit */_Bool) var_1)) ? (arr_14 [i_4]) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_4]))))))) | (((/* implicit */long long int) (-(((/* implicit */int) arr_6 [i_4]))))));
                }
                var_28 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (short)-31225)))))));
                var_29 ^= ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) (unsigned char)66)) >= (((/* implicit */int) (short)4809)))))))) ? (var_10) : (max((min((((/* implicit */long long int) var_11)), ((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)20654)) : (((/* implicit */int) (short)20313))))))));
                var_30 ^= ((long long int) (!(((/* implicit */_Bool) -1))));
                arr_32 [i_4] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) (+((-(((/* implicit */int) (short)-11732))))))) ? (max((arr_14 [i_5 + 3]), (((/* implicit */long long int) var_5)))) : (((/* implicit */long long int) ((/* implicit */int) var_3)))));
            }
        }
        var_31 -= (short)-10039;
        var_32 = ((/* implicit */int) ((min((3195018808055931187LL), (((/* implicit */long long int) (short)32389)))) ^ (var_6)));
    }
}

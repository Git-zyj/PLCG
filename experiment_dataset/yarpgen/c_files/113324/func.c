/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113324
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
    for (signed char i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        var_16 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)146)) : (((/* implicit */int) (signed char)-9))))))) ? (((/* implicit */long long int) ((((/* implicit */int) (short)-24360)) * (((/* implicit */int) (short)-24360))))) : (arr_0 [0LL])));
        var_17 += ((/* implicit */unsigned char) ((((((/* implicit */int) max((var_3), (var_8)))) == (((/* implicit */int) (signed char)0)))) ? (((/* implicit */long long int) ((((((/* implicit */_Bool) (short)24351)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)(-127 - 1))))) - (((/* implicit */int) (signed char)25))))) : ((-9223372036854775807LL - 1LL))));
        var_18 = -3196315108559096826LL;
        var_19 = ((/* implicit */signed char) (short)24351);
        arr_2 [i_0] = ((((arr_1 [i_0 - 1] [i_0 - 1]) == (((/* implicit */long long int) ((/* implicit */int) var_1))))) ? (var_12) : ((-(min((var_5), (((/* implicit */long long int) (signed char)-67)))))));
    }
    for (unsigned char i_1 = 1; i_1 < 21; i_1 += 4) 
    {
        var_20 -= ((/* implicit */unsigned short) max((970072587513453324LL), (((((/* implicit */_Bool) min((var_7), (var_7)))) ? (arr_3 [(signed char)0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65532)))))));
        arr_5 [i_1] = var_6;
        arr_6 [i_1] = ((/* implicit */signed char) var_2);
        /* LoopNest 2 */
        for (unsigned char i_2 = 1; i_2 < 20; i_2 += 4) 
        {
            for (signed char i_3 = 0; i_3 < 24; i_3 += 3) 
            {
                {
                    arr_11 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)504)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_8 [i_1] [i_3])))))))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (signed char i_4 = 0; i_4 < 24; i_4 += 2) 
                    {
                        var_21 = ((/* implicit */long long int) var_0);
                        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) var_3))));
                        arr_15 [(unsigned short)7] [(unsigned short)7] [i_3] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_1] [i_1 + 1] [i_1] [i_1])) ? (((/* implicit */int) arr_10 [i_1 + 3] [i_1 + 1] [i_1 + 3] [i_1])) : (((/* implicit */int) (unsigned short)65528))));
                        arr_16 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_12 [i_1])) ? (((/* implicit */int) arr_12 [i_1])) : (((/* implicit */int) arr_13 [i_1 + 1]))));
                    }
                    /* vectorizable */
                    for (unsigned char i_5 = 0; i_5 < 24; i_5 += 4) 
                    {
                        var_23 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) < (-970072587513453337LL)));
                        var_24 += ((/* implicit */unsigned char) 6154523308439188626LL);
                    }
                    for (short i_6 = 2; i_6 < 21; i_6 += 1) 
                    {
                        var_25 = ((/* implicit */unsigned short) 2289450591668986430LL);
                        var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) (short)24351))));
                        arr_21 [i_1] [i_6] = ((/* implicit */signed char) ((((/* implicit */int) var_6)) < (((/* implicit */int) max((((/* implicit */unsigned short) min((((/* implicit */short) (unsigned char)3)), (arr_18 [i_1])))), (min((var_14), (((/* implicit */unsigned short) (unsigned char)189)))))))));
                    }
                }
            } 
        } 
        var_27 = ((/* implicit */signed char) ((((/* implicit */int) (short)-1)) - (((/* implicit */int) (short)24350))));
    }
    var_28 = ((/* implicit */signed char) min((max((((/* implicit */long long int) ((((((/* implicit */int) (signed char)-30)) + (2147483647))) << (((((/* implicit */int) (signed char)118)) - (118)))))), (970072587513453308LL))), (((/* implicit */long long int) var_10))));
    var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-119))) | (970072587513453308LL))))));
    var_30 = var_1;
    /* LoopSeq 1 */
    for (signed char i_7 = 2; i_7 < 15; i_7 += 2) 
    {
        var_31 = ((/* implicit */short) (-(((/* implicit */int) var_4))));
        var_32 = ((/* implicit */signed char) max(((+(((/* implicit */int) var_7)))), (((((/* implicit */int) arr_12 [i_7])) - (((/* implicit */int) var_3))))));
    }
}

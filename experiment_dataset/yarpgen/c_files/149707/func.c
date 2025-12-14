/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149707
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
    var_13 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */int) ((var_5) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)88)))))) > (((((/* implicit */int) (unsigned short)65520)) | (((/* implicit */int) var_7))))))), (var_12)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        arr_2 [i_0 + 1] = ((/* implicit */unsigned char) ((unsigned short) arr_0 [i_0 + 1]));
        arr_3 [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) (short)28801))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (short i_2 = 3; i_2 < 16; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) var_0))));
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        arr_13 [i_0] [3U] [i_3] = ((/* implicit */unsigned int) ((unsigned char) arr_7 [i_2 - 3] [i_2 - 3] [i_2 - 2]));
                        var_15 = ((/* implicit */long long int) (+(arr_6 [i_2] [i_2] [i_2 - 1])));
                        var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65336)) || (((/* implicit */_Bool) (short)9562))));
                    }
                    for (short i_4 = 0; i_4 < 17; i_4 += 4) /* same iter space */
                    {
                        arr_17 [i_0] [i_1] [i_0] [i_0] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((3885546480747177684LL) >> (((160327782U) - (160327776U)))))) ? ((-(var_1))) : (((/* implicit */long long int) ((/* implicit */int) (short)28811)))));
                        /* LoopSeq 3 */
                        for (unsigned short i_5 = 0; i_5 < 17; i_5 += 1) 
                        {
                            var_17 += ((/* implicit */signed char) ((_Bool) (~(((/* implicit */int) var_11)))));
                            arr_22 [i_5] [i_1] [i_4] [i_0] [i_1] [i_5] = ((/* implicit */unsigned char) (unsigned short)14293);
                            arr_23 [i_0] [i_5] [i_0] [i_0] = arr_14 [i_5] [i_5] [i_5] [i_5] [i_5];
                            var_18 = ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_7)));
                        }
                        for (unsigned char i_6 = 1; i_6 < 16; i_6 += 2) /* same iter space */
                        {
                            arr_26 [i_0] [i_1] [i_0] [i_4] [i_6] [i_6] = ((/* implicit */unsigned short) ((unsigned long long int) arr_4 [i_0 - 1] [i_2 - 2] [i_2]));
                            arr_27 [i_0] [i_4] [i_2] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_20 [i_0 - 1] [i_4] [i_0 - 1] [i_6 - 1] [i_6] [i_6 - 1] [i_6 - 1])) ? (2099350141U) : (var_5)));
                            arr_28 [i_0] [i_0] [i_1] [i_1] [i_0] |= ((/* implicit */unsigned int) (unsigned short)14298);
                        }
                        for (unsigned char i_7 = 1; i_7 < 16; i_7 += 2) /* same iter space */
                        {
                            var_19 -= ((/* implicit */long long int) (+((~(-1)))));
                            var_20 = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) -821561952)) || (((/* implicit */_Bool) 18446744073709551615ULL)))));
                            var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) - (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_16 [i_7] [i_4] [i_2 - 1] [i_1] [i_0])) : (((/* implicit */int) (_Bool)1))))));
                        }
                        var_22 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_10))));
                        var_23 &= ((long long int) ((((/* implicit */_Bool) 17U)) ? (((/* implicit */unsigned long long int) 16383U)) : (18446744073709551602ULL)));
                    }
                    for (short i_8 = 0; i_8 < 17; i_8 += 4) /* same iter space */
                    {
                        arr_36 [i_2] [i_0] = ((/* implicit */unsigned short) var_5);
                        var_24 = var_9;
                    }
                    arr_37 [i_0] [i_1] [i_2 - 1] [i_2 - 3] = ((/* implicit */unsigned long long int) 274877906943LL);
                }
            } 
        } 
        var_25 += (+(((/* implicit */int) (unsigned short)17175)));
    }
    for (int i_9 = 1; i_9 < 16; i_9 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_10 = 1; i_10 < 17; i_10 += 2) 
        {
            var_26 = ((/* implicit */signed char) (+(((/* implicit */int) (short)-22359))));
            var_27 = ((/* implicit */long long int) ((((/* implicit */int) arr_44 [7ULL])) << (((/* implicit */int) var_7))));
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_11 = 0; i_11 < 19; i_11 += 2) 
        {
            var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) ((((-5056009732814456332LL) == (((/* implicit */long long int) -1375592470)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (127U))))));
            var_29 ^= ((((/* implicit */_Bool) arr_39 [i_9 + 2])) ? (((/* implicit */unsigned long long int) arr_38 [i_9 + 2])) : (4ULL));
        }
        for (long long int i_12 = 2; i_12 < 15; i_12 += 4) 
        {
            var_30 = ((/* implicit */short) min((var_9), (max((-1670688632), (((/* implicit */int) (_Bool)1))))));
            var_31 *= ((/* implicit */unsigned char) (+(max((((/* implicit */unsigned long long int) arr_48 [i_9] [i_12 + 1])), (4553721908187510719ULL)))));
            var_32 = ((/* implicit */short) (+(((/* implicit */int) ((short) (+(2529733951419968223ULL)))))));
        }
    }
}

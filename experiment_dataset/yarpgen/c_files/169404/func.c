/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169404
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
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) ((((((/* implicit */_Bool) -1)) && (((/* implicit */_Bool) var_3)))) ? ((-(((/* implicit */int) (unsigned char)241)))) : (((/* implicit */int) ((var_1) && (((/* implicit */_Bool) 1416181789U))))))))));
    /* LoopSeq 3 */
    for (int i_0 = 3; i_0 < 11; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 3; i_1 < 10; i_1 += 4) 
        {
            for (long long int i_2 = 2; i_2 < 12; i_2 += 3) 
            {
                {
                    arr_6 [i_0] [i_0 - 1] [i_1] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_2 - 2] [i_1 + 2])))))));
                    arr_7 [i_1] = (-(((/* implicit */int) ((unsigned short) arr_1 [i_2 - 2] [i_1 - 2]))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 13; i_4 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) (unsigned char)232);
                                arr_13 [i_0] [i_1] [i_1] [i_3] [i_2] [i_0] [i_1 - 3] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_1 - 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)115))) : (2878785507U)))) && (((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_5 [i_1] [i_2] [i_1])), ((unsigned short)53655))))))), (((((/* implicit */_Bool) (+(1416181802U)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)33218)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)32318))))) : ((-(1435459698U)))))));
                            }
                        } 
                    } 
                    arr_14 [i_0] [8ULL] |= ((/* implicit */int) ((_Bool) ((((/* implicit */int) arr_4 [i_0 - 1] [i_1 - 3] [i_2 - 2])) >= (((/* implicit */int) arr_4 [i_0 - 2] [i_1 - 3] [i_2 - 2])))));
                    var_21 = ((/* implicit */signed char) 130280684518038332ULL);
                }
            } 
        } 
        var_22 += ((/* implicit */signed char) ((((/* implicit */_Bool) (-((~(var_4)))))) && (((((/* implicit */_Bool) var_14)) && (((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_11))))))));
        arr_15 [i_0] = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) max((var_16), (((/* implicit */long long int) (unsigned short)53640))))) ? (((((/* implicit */_Bool) arr_8 [i_0])) ? ((-2147483647 - 1)) : (((/* implicit */int) (short)-30944)))) : ((+(((/* implicit */int) (signed char)72)))))));
        var_23 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((int) var_13))) ? ((+(((/* implicit */int) (short)-8271)))) : (((/* implicit */int) ((((/* implicit */long long int) -444630766)) == (arr_11 [i_0] [i_0]))))))));
    }
    /* vectorizable */
    for (int i_5 = 2; i_5 < 15; i_5 += 3) 
    {
        var_24 = ((/* implicit */long long int) 1416181789U);
        arr_18 [i_5 - 2] [i_5] = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) 938720521)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-6462))) : (var_10))));
        var_25 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((unsigned int) 2878785499U))) + (((((/* implicit */_Bool) 94614303U)) ? (((/* implicit */unsigned long long int) 1416181796U)) : (18446744073709551615ULL)))));
    }
    for (long long int i_6 = 1; i_6 < 19; i_6 += 2) 
    {
        var_26 -= ((/* implicit */short) ((((/* implicit */long long int) var_18)) % (((((/* implicit */_Bool) ((((/* implicit */_Bool) 6701886526182583894ULL)) ? (((/* implicit */int) (_Bool)0)) : (-367285233)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_6]))) : (((long long int) var_9))))));
        var_27 ^= ((/* implicit */short) min((((/* implicit */int) min((((/* implicit */signed char) (_Bool)0)), (arr_19 [i_6 + 1] [i_6 + 1])))), (max((((/* implicit */int) arr_20 [i_6 + 1])), (var_14)))));
        arr_21 [i_6 + 1] |= ((/* implicit */unsigned int) (((!(((((/* implicit */_Bool) 1416181796U)) || (((/* implicit */_Bool) (unsigned short)59540)))))) && (((/* implicit */_Bool) ((int) arr_19 [i_6 + 1] [i_6 - 1])))));
        var_28 = var_9;
        arr_22 [i_6] [i_6] = ((/* implicit */short) var_7);
    }
}

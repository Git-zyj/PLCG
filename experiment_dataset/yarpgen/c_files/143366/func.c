/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143366
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
    var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) var_1))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_18 = ((/* implicit */long long int) ((0ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0])))));
        arr_4 [i_0] [i_0] = ((/* implicit */short) (-(((/* implicit */int) arr_0 [i_0] [i_0]))));
        var_19 = ((/* implicit */signed char) ((((var_14) | (((/* implicit */unsigned long long int) var_3)))) & (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_3 [i_0] [i_0])))))));
    }
    /* LoopSeq 2 */
    for (short i_1 = 0; i_1 < 13; i_1 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_2 = 0; i_2 < 13; i_2 += 1) 
        {
            /* LoopSeq 2 */
            for (long long int i_3 = 0; i_3 < 13; i_3 += 3) 
            {
                var_20 = ((/* implicit */unsigned char) 1914605772U);
                var_21 += ((/* implicit */int) (unsigned short)4064);
            }
            /* vectorizable */
            for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 2) 
            {
                var_22 = ((/* implicit */signed char) ((arr_7 [i_4]) >= (((/* implicit */unsigned long long int) var_7))));
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 3; i_5 < 12; i_5 += 3) 
                {
                    for (long long int i_6 = 3; i_6 < 11; i_6 += 2) 
                    {
                        {
                            arr_20 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (-(var_14)));
                            var_23 |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4064))) * (3107013372U)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))) : (var_0)));
                            var_24 = (~(8351873024047993459LL));
                            var_25 = ((/* implicit */unsigned short) (signed char)-99);
                            var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) ((15164527843964581840ULL) >= (((/* implicit */unsigned long long int) 3406286962290080967LL)))))));
                        }
                    } 
                } 
            }
            var_27 = ((/* implicit */signed char) min((((/* implicit */long long int) (((~(((/* implicit */int) (unsigned short)53153)))) ^ (((/* implicit */int) max(((short)3716), (((/* implicit */short) var_12)))))))), ((+(-7936601771385727490LL)))));
        }
        for (unsigned short i_7 = 0; i_7 < 13; i_7 += 2) 
        {
            var_28 = ((/* implicit */signed char) min((18446744073709551595ULL), (((/* implicit */unsigned long long int) 311695916))));
            var_29 -= min((((/* implicit */unsigned long long int) (-(max((1914605772U), (((/* implicit */unsigned int) var_16))))))), (3637251983650552506ULL));
        }
        var_30 = ((/* implicit */unsigned char) max((max((((((/* implicit */unsigned long long int) -4023140606607825132LL)) ^ (var_1))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) 1843822133U)) | (var_0)))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)32599)) & (((((/* implicit */_Bool) arr_22 [i_1])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (_Bool)1)))))))));
    }
    /* vectorizable */
    for (unsigned char i_8 = 3; i_8 < 7; i_8 += 2) 
    {
        var_31 = ((/* implicit */int) (!(((/* implicit */_Bool) var_9))));
        var_32 |= ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) var_6))));
        var_33 = ((/* implicit */unsigned int) min((var_33), (((/* implicit */unsigned int) arr_8 [i_8 + 3]))));
        var_34 -= ((/* implicit */long long int) ((((3107013353U) / (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) != (1914605768U)));
        /* LoopSeq 1 */
        for (unsigned char i_9 = 0; i_9 < 10; i_9 += 3) 
        {
            var_35 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_12 [i_8] [i_8 - 1] [i_8 - 1]))))) && (((/* implicit */_Bool) (short)0))));
            var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)3)) ? (((/* implicit */long long int) 2255677748U)) : (-4220585478070566287LL)))) || (((/* implicit */_Bool) (signed char)113))));
        }
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138776
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_2 = 1; i_2 < 20; i_2 += 1) 
                {
                    var_15 = ((/* implicit */signed char) (-(var_6)));
                    var_16 += ((/* implicit */signed char) ((((/* implicit */int) (signed char)-120)) | (var_1)));
                }
                /* vectorizable */
                for (unsigned long long int i_3 = 2; i_3 < 22; i_3 += 4) 
                {
                    /* LoopSeq 3 */
                    for (long long int i_4 = 0; i_4 < 24; i_4 += 2) 
                    {
                        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-6)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)238))))) ? (arr_3 [i_1 + 2] [i_3 + 2] [i_1 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))));
                        var_18 = ((/* implicit */int) ((_Bool) var_6));
                        var_19 ^= ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)8))));
                    }
                    for (unsigned short i_5 = 3; i_5 < 22; i_5 += 2) 
                    {
                        arr_14 [i_0] = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (signed char)45)) : (((/* implicit */int) (signed char)0))));
                        var_20 |= ((/* implicit */short) (-(((/* implicit */int) arr_10 [i_3] [i_3 - 1] [i_3] [i_3]))));
                        var_21 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_3 - 2]))));
                    }
                    for (int i_6 = 3; i_6 < 23; i_6 += 3) 
                    {
                        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_0 [i_1] [i_1]))))))));
                        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) arr_13 [i_0] [i_1 + 3] [i_3] [i_3 - 1] [i_6])) ? (17638992912062552284ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 - 1])))));
                        arr_17 [i_0] [i_0] [i_3 - 2] [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_13))))) >> (((((/* implicit */int) (signed char)110)) - (86)))));
                        arr_18 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) 1566578221)))))));
                    }
                    var_24 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_0 + 1]))));
                    /* LoopSeq 3 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                    {
                        var_25 = ((/* implicit */unsigned char) 8936830510563328ULL);
                        var_26 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) (signed char)-6))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_12))))) : (((((/* implicit */_Bool) var_7)) ? (2044ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))));
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                    {
                        var_27 = ((/* implicit */int) var_14);
                        var_28 = ((-1566578226) != (arr_6 [i_1 + 2] [i_1 - 2] [i_1 - 2]));
                        var_29 = (~(((arr_19 [i_1] [i_0]) ^ (((/* implicit */int) (short)32764)))));
                        var_30 = ((/* implicit */short) ((int) arr_20 [i_3 - 2] [i_3] [i_3 - 2] [i_3 + 1]));
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                    {
                        arr_27 [i_0] [i_1] [i_0] [18ULL] = ((/* implicit */unsigned short) ((long long int) arr_21 [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0]));
                        var_31 = ((/* implicit */long long int) ((((unsigned long long int) arr_23 [i_0] [i_0] [i_0] [(short)2])) != (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-47)))))));
                        var_32 = ((/* implicit */int) ((signed char) (((_Bool)1) ? (arr_25 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_9]) : (((/* implicit */long long int) var_1)))));
                    }
                }
                arr_28 [i_0] [i_0] = ((/* implicit */_Bool) ((short) (_Bool)1));
                var_33 = ((/* implicit */signed char) arr_1 [i_1 - 1]);
            }
        } 
    } 
    var_34 = ((/* implicit */unsigned char) (-(((var_10) ? (((((/* implicit */int) var_4)) | ((-2147483647 - 1)))) : ((-(((/* implicit */int) (signed char)111))))))));
}

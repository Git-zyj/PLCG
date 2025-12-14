/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177974
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
    for (unsigned int i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 15; i_1 += 3) 
        {
            {
                arr_8 [i_0] [17] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) ((unsigned char) var_8))) : (((/* implicit */int) ((signed char) var_9)))))) : (((unsigned int) (_Bool)1))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_14 [(unsigned short)6] [i_1] [i_2] [i_3] = (unsigned char)230;
                            /* LoopSeq 1 */
                            for (signed char i_4 = 1; i_4 < 16; i_4 += 3) 
                            {
                                var_12 = min((((long long int) ((short) (unsigned char)26))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (_Bool)1)) : (-1331162186)))) ? (((/* implicit */int) (unsigned short)65535)) : ((+(((/* implicit */int) (_Bool)0))))))));
                                arr_17 [(unsigned short)1] [(short)3] [i_2] [i_3] [4U] = ((/* implicit */unsigned char) (unsigned short)65535);
                                var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))) == (var_9))))) : (max((arr_9 [i_0] [i_2]), (((/* implicit */unsigned long long int) arr_6 [5ULL]))))))))));
                            }
                            arr_18 [i_0] [i_0] [(unsigned short)12] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_9)))));
                            arr_19 [i_0] [(unsigned short)16] [i_2] [11U] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned int) ((short) var_5)))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)117)) : (((/* implicit */int) ((unsigned short) (unsigned short)65535))))) : (((/* implicit */int) var_5))));
                            /* LoopSeq 2 */
                            for (long long int i_5 = 0; i_5 < 18; i_5 += 3) 
                            {
                                arr_24 [i_1] [i_2] [(short)1] [i_5] = ((/* implicit */signed char) ((((((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */long long int) var_9)) : (arr_16 [i_0] [i_1 + 1] [i_0] [i_1] [(signed char)16]))) ^ (((/* implicit */long long int) (-(var_9)))))) ^ (((/* implicit */long long int) (~(3722105289U))))));
                                arr_25 [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)15))));
                                arr_26 [i_5] [i_0] = ((/* implicit */unsigned int) var_3);
                            }
                            for (short i_6 = 0; i_6 < 18; i_6 += 1) 
                            {
                                arr_31 [i_2] [i_6] &= ((/* implicit */short) (-(((/* implicit */int) ((unsigned char) arr_3 [i_0 + 1])))));
                                arr_32 [i_0] = ((/* implicit */short) (unsigned short)65531);
                                var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)24643))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_1 - 3] [i_1] [i_0 + 1] [1LL])))))) : (var_0)));
                            }
                        }
                    } 
                } 
                var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0 - 1])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (2718554848U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [14LL] [(signed char)2])))))) : (arr_15 [i_0])))) ? (((/* implicit */long long int) ((max((((/* implicit */unsigned int) (short)24675)), (var_4))) % (((/* implicit */unsigned int) ((((/* implicit */int) (short)32767)) << (((1122450574U) - (1122450567U))))))))) : ((~(((9223372036854775807LL) & (5172424068112880070LL)))))));
                arr_33 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (+(((int) var_9))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (short)-32758)), (((((/* implicit */_Bool) var_9)) ? (3680585850973938518ULL) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3)))))))));
}

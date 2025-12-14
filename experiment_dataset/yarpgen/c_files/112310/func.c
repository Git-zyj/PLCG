/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112310
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        var_13 = ((((/* implicit */_Bool) (+((-(((/* implicit */int) var_4))))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) 796621780)) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))) >= (((/* implicit */unsigned long long int) ((((-1691048464) + (2147483647))) << (((((((/* implicit */int) arr_0 [i_0])) + (10476))) - (14))))))))) : (((((/* implicit */_Bool) -796621781)) ? (((/* implicit */int) (!((_Bool)1)))) : ((~(((/* implicit */int) (signed char)89)))))));
        arr_3 [i_0] [i_0] = ((/* implicit */short) ((unsigned int) ((unsigned char) arr_0 [i_0 + 3])));
        arr_4 [i_0] [i_0] = ((/* implicit */short) max((var_7), (((/* implicit */int) ((short) 153704434)))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 15; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */int) ((((/* implicit */_Bool) ((1992935149252966732LL) & (((/* implicit */long long int) ((((/* implicit */unsigned int) var_10)) & (arr_8 [i_1] [i_0]))))))) ? (((((var_1) == (-796621790))) ? (max((((/* implicit */long long int) -427293966)), (9223372036854775807LL))) : (((/* implicit */long long int) arr_9 [i_2])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) 925953959)) : (((((/* implicit */_Bool) arr_2 [i_1])) ? (arr_8 [i_2] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_0]))))))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        arr_12 [i_0] [i_0] [i_2] [i_3] |= ((/* implicit */unsigned short) (signed char)-1);
                        /* LoopSeq 3 */
                        for (unsigned int i_4 = 0; i_4 < 16; i_4 += 2) /* same iter space */
                        {
                            var_15 = ((/* implicit */int) ((((/* implicit */unsigned long long int) min(((+(-2))), (((/* implicit */int) (_Bool)0))))) % ((((~(16594151948544672657ULL))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)121)) >= (2147483647)))))))));
                            var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) / (16)))) >= (arr_8 [i_0] [i_0]))))));
                            var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) (-((+(8829195942828473416LL))))))));
                        }
                        for (unsigned int i_5 = 0; i_5 < 16; i_5 += 2) /* same iter space */
                        {
                            var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -8829195942828473413LL)) ? (((/* implicit */int) arr_10 [i_2] [i_2 + 1] [i_2] [i_2 + 1] [i_2] [i_2])) : (((/* implicit */int) var_11))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(arr_10 [i_2] [i_2 + 1] [i_2] [i_2 + 1] [i_2] [i_2]))))) : (((16711680U) % (((/* implicit */unsigned int) arr_17 [i_2] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2]))))));
                            var_19 = ((/* implicit */unsigned int) min((arr_2 [i_2 + 1]), (((((/* implicit */unsigned long long int) 1695011598U)) | (arr_2 [i_2 - 1])))));
                            var_20 = ((/* implicit */short) ((((((((/* implicit */_Bool) (short)-9590)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)85))) : (17168956933129707949ULL))) <= (((/* implicit */unsigned long long int) ((arr_17 [i_2] [i_2] [i_2] [i_2] [i_2]) / (((/* implicit */int) (unsigned char)78))))))) ? ((+(((((/* implicit */_Bool) 4234063359U)) ? (((/* implicit */unsigned int) 1273406481)) : (4278255616U))))) : (((((/* implicit */_Bool) (signed char)65)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (((((/* implicit */_Bool) -9223372036854775806LL)) ? (arr_6 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_1] [i_3] [i_5])))))))));
                        }
                        for (unsigned char i_6 = 0; i_6 < 16; i_6 += 2) 
                        {
                            var_21 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((16731607820305255702ULL), (arr_19 [i_0] [i_0] [i_0] [i_0] [i_0])))) ? ((-(((/* implicit */int) arr_1 [i_0])))) : ((+(arr_11 [i_0] [i_0] [i_2])))))) ? (arr_8 [i_2 + 1] [i_0 - 1]) : (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)1792)) / (1273406479)))) ? (max((((/* implicit */unsigned int) -2021123988)), (1683672855U))) : (((/* implicit */unsigned int) -10))))));
                            var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)74)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U))))) : (((/* implicit */int) arr_20 [i_6] [i_0 - 1] [i_0] [i_0] [i_0]))))) && ((!(((/* implicit */_Bool) (unsigned short)15182))))));
                            var_23 = ((/* implicit */short) (-(((((/* implicit */int) arr_20 [i_0] [i_0] [i_0 + 2] [i_2] [i_3])) - (((/* implicit */int) ((signed char) 1139010715507256639ULL)))))));
                        }
                        arr_22 [i_3] [i_0] [i_0] [i_0] = ((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1405)) ? (16711691U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-1405)))))))));
                        var_24 ^= ((((/* implicit */int) ((unsigned char) var_3))) - ((~((~(412104443))))));
                    }
                    var_25 -= ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) (~(var_10)))), (arr_19 [i_0 + 1] [i_0 - 1] [i_0] [i_0] [i_0 + 2]))) % (((((/* implicit */_Bool) 14947947647354537273ULL)) ? (((((/* implicit */_Bool) 2147483647)) ? (3498796426355014360ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)36))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1)))))))));
                    arr_23 [i_0] [i_0] [i_0] [i_0] = 2147483647;
                }
            } 
        } 
    }
    var_26 = ((/* implicit */unsigned char) (_Bool)1);
    var_27 = ((/* implicit */int) 7768196897719359273LL);
    var_28 = ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)192)), (-1273406481))))))) : (min((var_10), (max((((/* implicit */int) (_Bool)0)), (1273406499)))))));
    var_29 = ((/* implicit */int) (signed char)60);
}

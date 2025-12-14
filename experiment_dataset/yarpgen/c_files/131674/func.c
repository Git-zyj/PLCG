/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131674
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
    var_14 = ((/* implicit */unsigned long long int) var_2);
    /* LoopNest 2 */
    for (signed char i_0 = 4; i_0 < 19; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */signed char) (short)32767);
                arr_7 [i_0 - 3] = ((/* implicit */long long int) ((unsigned long long int) (-(((/* implicit */int) ((signed char) arr_0 [i_1]))))));
                /* LoopSeq 2 */
                for (short i_2 = 2; i_2 < 17; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 3; i_4 < 16; i_4 += 4) 
                        {
                            {
                                var_15 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_12) * (var_4)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_4 + 1] [i_0 - 4]))) : (max((var_3), (((/* implicit */unsigned long long int) 3564918139831986370LL))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_13)))) ? (((/* implicit */int) ((signed char) arr_13 [i_0] [i_1] [11LL] [i_0 + 1]))) : (((/* implicit */int) ((_Bool) arr_15 [i_4] [i_4])))))) : (max(((((_Bool)1) ? (((/* implicit */unsigned long long int) -3564918139831986371LL)) : (var_0))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [(short)0])) - (((/* implicit */int) arr_13 [i_3] [(_Bool)1] [i_1] [i_0])))))))));
                                var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (((-(((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0])))) <= ((((_Bool)1) ? (((/* implicit */int) arr_13 [i_0] [i_1 + 3] [i_2] [i_3])) : (((/* implicit */int) (short)30066))))))) == (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_3)))) != (min((8608014126614140870ULL), (((/* implicit */unsigned long long int) 2794264732U)))))))));
                                var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_12 [i_0] [i_0 - 4] [i_0] [i_0 - 3]), (((/* implicit */long long int) (short)1532))))) ? (arr_2 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_1])))));
                            }
                        } 
                    } 
                    arr_18 [i_2] = max((8608014126614140870ULL), (((/* implicit */unsigned long long int) arr_15 [i_1] [i_0 - 3])));
                    var_18 -= ((/* implicit */unsigned long long int) ((max(((_Bool)1), (arr_3 [i_2] [i_0 - 4]))) ? (1250028892U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_16 [i_0 + 1] [i_1 + 3] [i_2 + 2] [i_1] [i_2]) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))))));
                }
                for (signed char i_5 = 1; i_5 < 19; i_5 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 1) 
                    {
                        for (unsigned long long int i_7 = 1; i_7 < 19; i_7 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_2)) > (((/* implicit */int) (unsigned short)65535))))) != ((((_Bool)1) ? (2147483647) : (((/* implicit */int) (_Bool)1)))))))));
                                arr_26 [i_0] [i_1] [i_0] [i_6] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) (((_Bool)0) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))) ? (-3564918139831986370LL) : (((/* implicit */long long int) (-(((/* implicit */int) arr_9 [(unsigned char)19] [i_0 + 1] [i_1 - 1] [i_7 + 1])))))));
                            }
                        } 
                    } 
                    arr_27 [i_0] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-23))) - (var_13))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [10ULL] [i_0] [i_5 + 1])))))) ? (((((var_11) > (((/* implicit */long long int) 2147483647)))) ? (((1500702564U) >> (((((/* implicit */int) arr_0 [14ULL])) + (5699))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_14 [i_0] [i_0] [i_1] [i_5] [i_1] [(_Bool)1])))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_5 - 1] [i_0] [8LL])))));
                }
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_0)) ? ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (short)-32753))) : (3564918139831986371LL))) : (((/* implicit */long long int) 1110485824U))))));
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 10; i_8 += 4) 
    {
        for (unsigned char i_9 = 1; i_9 < 9; i_9 += 4) 
        {
            {
                arr_35 [i_8] = ((/* implicit */int) ((((unsigned int) 9223372036854775807LL)) << (((/* implicit */int) (!(((/* implicit */_Bool) (+(8608014126614140870ULL)))))))));
                var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) max((((/* implicit */long long int) arr_24 [i_8] [i_8] [i_8] [i_9] [i_8] [i_9])), (-3564918139831986371LL)))))) ? (((/* implicit */int) arr_28 [i_9])) : (((/* implicit */int) max(((unsigned short)16313), (((/* implicit */unsigned short) (_Bool)1))))))))));
                var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (~(((/* implicit */int) arr_3 [i_8] [i_9 - 1]))))), (((unsigned int) var_2)))))));
            }
        } 
    } 
}

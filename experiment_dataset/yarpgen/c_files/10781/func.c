/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10781
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
    var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) 1548392863))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */unsigned int) (_Bool)1);
                var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_2 [i_0] [i_1]) | (arr_2 [i_0] [(_Bool)1])))) ? (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)101)) : (((/* implicit */int) var_11))))) : (((unsigned int) arr_4 [i_0] [i_1]))))) ? (((/* implicit */int) var_5)) : (min(((((_Bool)1) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)1)))), (((((/* implicit */int) var_11)) & (var_2))))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_2 = 3; i_2 < 14; i_2 += 3) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 4) 
        {
            for (unsigned int i_4 = 0; i_4 < 15; i_4 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 15; i_5 += 3) 
                    {
                        for (int i_6 = 2; i_6 < 13; i_6 += 2) 
                        {
                            {
                                arr_17 [7LL] [i_2 - 1] [i_2 - 1] = ((/* implicit */signed char) ((unsigned char) min((((/* implicit */unsigned short) ((_Bool) var_7))), (min((var_9), (var_5))))));
                                var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -1)) ? (((/* implicit */int) ((short) ((int) arr_11 [i_2 - 3] [i_3] [i_2 - 3])))) : (((((/* implicit */int) arr_11 [i_2] [5] [i_2 - 2])) >> (((/* implicit */int) arr_12 [i_2] [i_3] [i_2 - 3] [i_6]))))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */unsigned int) -1511607494);
                    arr_18 [i_4] [(signed char)10] [i_3] [i_2 - 2] |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (((/* implicit */int) ((_Bool) (_Bool)1))) : (((arr_8 [i_2] [(_Bool)1] [i_2]) ? (((/* implicit */int) (signed char)-80)) : (((/* implicit */int) (unsigned short)65535))))))) ? (var_2) : (((((((/* implicit */int) var_10)) - (((/* implicit */int) (_Bool)1)))) & (((((/* implicit */int) var_8)) - (((/* implicit */int) var_1)))))));
                    /* LoopNest 2 */
                    for (long long int i_7 = 1; i_7 < 14; i_7 += 2) 
                    {
                        for (signed char i_8 = 0; i_8 < 15; i_8 += 3) 
                        {
                            {
                                arr_23 [i_2 - 3] [i_2 - 3] [i_4] [(_Bool)1] [i_8] [i_7] [i_3] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)5930)))) ^ (((int) var_9))))) | (((((/* implicit */long long int) ((arr_6 [i_7]) ? (((/* implicit */int) (unsigned char)132)) : (arr_20 [i_2 + 1] [i_3] [i_4] [2LL])))) % (var_4)))));
                                arr_24 [i_2] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) var_9))) ? (((/* implicit */int) ((-4460211873299790074LL) == (((/* implicit */long long int) ((/* implicit */int) min(((_Bool)1), (var_0)))))))) : (((((/* implicit */_Bool) (unsigned char)132)) ? (((((/* implicit */int) var_7)) - (((/* implicit */int) (signed char)0)))) : (((/* implicit */int) (unsigned char)246))))));
                            }
                        } 
                    } 
                    arr_25 [i_4] [i_3] [i_2 + 1] [i_2 + 1] &= ((/* implicit */int) arr_13 [i_4] [i_3] [i_4] [(_Bool)1]);
                }
            } 
        } 
    } 
    var_17 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_9))))) ? (((unsigned long long int) 1695568343U)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_6)))))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_1)) : (var_6)))) ? (((/* implicit */long long int) max((((/* implicit */int) var_1)), (var_6)))) : (((((/* implicit */long long int) ((/* implicit */int) var_10))) % (9065275758825161300LL)))))));
    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) ((((/* implicit */int) var_11)) * (((/* implicit */int) (signed char)0))))) ? (((((/* implicit */_Bool) 2316500876U)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)0)))) : (((((/* implicit */int) (_Bool)0)) % (((/* implicit */int) (short)-9640))))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150853
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
    var_20 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) var_6)) ? (var_1) : (((/* implicit */unsigned long long int) var_4)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) ? (((/* implicit */unsigned long long int) (((((_Bool)1) ? (var_17) : (((/* implicit */long long int) ((/* implicit */int) var_16))))) | (((((var_17) + (9223372036854775807LL))) << (((/* implicit */int) var_16))))))) : ((((!(((/* implicit */_Bool) var_0)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_11)))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_1)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            {
                var_21 = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))) ? (((/* implicit */int) arr_1 [i_0])) : (((var_13) ? (((/* implicit */int) arr_3 [i_0] [i_1 + 1])) : (((/* implicit */int) (unsigned char)139)))))));
                var_22 = (((+((((_Bool)0) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)127)))))) % ((-(((/* implicit */int) var_5)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 1; i_2 < 14; i_2 += 4) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                var_23 = ((/* implicit */unsigned short) arr_7 [i_2 - 1] [i_2]);
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 17; i_4 += 1) 
                {
                    for (unsigned int i_5 = 1; i_5 < 16; i_5 += 3) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 491183801U)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)14260)))));
                            var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_4 [i_2 + 1] [i_4] [i_4]))))) ? (((/* implicit */unsigned long long int) ((unsigned int) arr_1 [i_2]))) : (arr_11 [(signed char)8] [i_2 + 2] [i_5 - 1] [(_Bool)1] [i_5 - 1] [i_5 - 1])))) ? (((/* implicit */int) var_14)) : ((+(((((/* implicit */_Bool) arr_3 [i_2 + 2] [i_4])) ? (((/* implicit */int) arr_3 [i_2] [i_2])) : (((/* implicit */int) (_Bool)1)))))))))));
                            var_26 = ((/* implicit */unsigned char) arr_11 [i_2 + 2] [i_2] [i_2 + 2] [i_2] [i_2 + 2] [i_2 + 2]);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (signed char i_6 = 1; i_6 < 15; i_6 += 1) 
                {
                    for (long long int i_7 = 0; i_7 < 17; i_7 += 4) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                var_27 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_8] [i_7] [i_7] [i_7] [i_3] [i_2])) ? (((((/* implicit */_Bool) 329832626U)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_8)))) : (((/* implicit */int) ((((/* implicit */int) arr_4 [(_Bool)1] [(_Bool)1] [i_7])) >= (((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_2 + 3] [i_3] [i_6 + 2])) ? (((/* implicit */int) arr_10 [(_Bool)1])) : (((/* implicit */int) var_18))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (short)-14257))))) : (var_17)));
                                var_28 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_2 + 1] [i_2] [i_3] [i_6] [i_7] [i_3] [0LL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (((_Bool)0) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_1 [i_7]))))))) : (((((/* implicit */_Bool) var_4)) ? (arr_0 [i_3] [i_6 - 1]) : (arr_13 [i_3] [i_6 - 1])))));
                            }
                        } 
                    } 
                } 
                arr_22 [i_2] = arr_9 [i_2 - 1] [i_2 + 3] [i_2] [i_2];
            }
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103002
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
    var_10 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned short) (signed char)-20))))) ? (max((((/* implicit */int) (short)4096)), (0))) : (((((/* implicit */_Bool) (short)4075)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_1))))))) ^ (((((/* implicit */_Bool) var_8)) ? (max((-3805022477434712118LL), (((/* implicit */long long int) (short)9867)))) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))));
    var_11 = ((/* implicit */_Bool) ((unsigned long long int) var_3));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) ((((/* implicit */_Bool) (short)63)) || (((((/* implicit */_Bool) arr_2 [i_1])) || (((/* implicit */_Bool) arr_2 [6U])))))))));
                arr_5 [i_0] = ((/* implicit */short) ((int) var_4));
                var_13 = ((/* implicit */unsigned long long int) ((int) var_5));
                arr_6 [13U] [13U] = ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */int) var_2)) + (-892986552)))) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)9286)), (arr_0 [i_0])))) || (((/* implicit */_Bool) ((signed char) var_8))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_2 = 2; i_2 < 15; i_2 += 2) 
    {
        for (unsigned int i_3 = 0; i_3 < 16; i_3 += 2) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 2) 
            {
                {
                    var_14 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) max(((short)-32767), (((/* implicit */short) arr_2 [i_2 + 1]))))) ? (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_12 [i_3] [i_3] [i_3] [(short)7])))) : (((/* implicit */int) (short)21770))))));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 16; i_5 += 2) 
                    {
                        for (int i_6 = 4; i_6 < 13; i_6 += 2) 
                        {
                            {
                                var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)18100)) : (((/* implicit */int) (short)-63))))) ? (((((/* implicit */_Bool) arr_3 [i_4] [i_3])) ? (arr_3 [i_3] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [(unsigned short)3] [(unsigned short)3] [(unsigned short)3] [i_4] [i_4] [(unsigned short)3]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (short)-66)))));
                                arr_20 [(short)8] [(short)8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)102)) ? (min((((((/* implicit */_Bool) (signed char)20)) ? (((/* implicit */int) (unsigned char)160)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (unsigned short)65534)))) : (((/* implicit */int) arr_12 [i_3] [i_2] [i_4] [i_3]))));
                                var_16 = ((/* implicit */signed char) ((unsigned long long int) min((9223372036854775807LL), (((/* implicit */long long int) (short)64)))));
                                var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) -9223372036854775807LL))));
                            }
                        } 
                    } 
                    var_18 -= ((/* implicit */unsigned char) arr_1 [(signed char)3] [i_4]);
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((short) (unsigned char)185)))));
}

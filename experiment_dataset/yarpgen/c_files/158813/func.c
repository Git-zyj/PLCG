/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158813
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
    var_13 = ((/* implicit */unsigned char) ((unsigned short) (unsigned char)69));
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 3; i_4 < 14; i_4 += 2) 
                        {
                            {
                                var_14 *= ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) min((arr_2 [i_2]), (((/* implicit */unsigned short) var_6)))))) != (((((/* implicit */_Bool) var_11)) ? (((var_1) ? (var_12) : (((/* implicit */long long int) arr_14 [i_0 + 1] [i_1] [i_1] [8LL] [i_4] [i_2])))) : (-8383378101280940222LL)))));
                                var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) var_3))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (short i_5 = 0; i_5 < 17; i_5 += 3) 
                    {
                        var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (6961220545936662971LL) : (((/* implicit */long long int) arr_12 [i_5] [i_2] [i_1] [i_1] [i_0 - 1]))))) && (((/* implicit */_Bool) (-(arr_16 [i_5] [(unsigned char)2]))))))) / (((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) 2008361446U)) : (-6581808897935358642LL))))))))))));
                        var_17 = ((/* implicit */_Bool) 8383378101280940221LL);
                        var_18 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) var_4))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)22128))))) ? (370859238U) : (((/* implicit */unsigned int) -1207477673))))) : (((((/* implicit */_Bool) (~(var_2)))) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_12)))));
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        arr_20 [i_1] [i_1] [i_1] [i_0] = (+(var_10));
                        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) (!(((/* implicit */_Bool) min(((+(((/* implicit */int) arr_13 [i_0] [i_1] [i_2] [i_1] [(signed char)10])))), (((((/* implicit */_Bool) arr_19 [i_0] [i_2] [i_6])) ? (410550718) : (((/* implicit */int) (unsigned char)173))))))))))));
                    }
                    /* LoopSeq 1 */
                    for (int i_7 = 0; i_7 < 17; i_7 += 2) 
                    {
                        var_20 = ((/* implicit */unsigned short) min((min((var_2), (((/* implicit */unsigned int) var_11)))), (((/* implicit */unsigned int) ((unsigned short) arr_18 [i_0 - 1] [i_0] [i_0] [i_0] [i_0] [i_0])))));
                        arr_23 [i_0] [i_2] [i_1] [i_0] = (+(((/* implicit */int) max((var_6), (arr_5 [i_1])))));
                    }
                    var_21 = ((/* implicit */unsigned char) var_7);
                }
            } 
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139859
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
    for (short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 226955426U)) ? (((/* implicit */int) (short)32757)) : (((/* implicit */int) (unsigned char)54))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)201))) : (32767U));
                /* LoopNest 2 */
                for (unsigned int i_2 = 3; i_2 < 14; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        {
                            arr_13 [i_0] [i_1] [i_1] [i_0] [i_3] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((-(((/* implicit */int) (unsigned char)43)))) % (((/* implicit */int) var_19))))) ? (((/* implicit */int) arr_7 [i_2 - 1] [i_2 - 1] [i_1] [i_0])) : ((~(((/* implicit */int) ((signed char) 0U)))))));
                            arr_14 [i_2] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_8)), (((unsigned int) var_3))))) ? (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (short)32753)) : (((/* implicit */int) (short)8345)))) : (((((/* implicit */int) ((((/* implicit */int) arr_11 [i_2 + 2] [i_1] [i_1] [i_1])) >= (((/* implicit */int) (signed char)116))))) | (((((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_1] [i_0] [i_0])) + (((/* implicit */int) arr_2 [i_1]))))))));
                            arr_15 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) (unsigned char)184))) ? ((-(((/* implicit */int) (short)-30823)))) : (((/* implicit */int) (unsigned char)54))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)16)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)81))) : (3520992336U)))) ? (((/* implicit */int) ((((/* implicit */_Bool) 1294789022U)) || (((/* implicit */_Bool) (unsigned char)3))))) : (((((/* implicit */_Bool) (unsigned char)220)) ? (((/* implicit */int) (unsigned char)81)) : (((/* implicit */int) (unsigned char)215))))))) ? (var_13) : (((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-24))))) ? (((((/* implicit */_Bool) 33554431U)) ? (757273435U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)224))))) : (var_4)))));
    var_21 ^= (-(((unsigned int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_13))))));
}

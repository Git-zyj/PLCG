/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167899
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
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            for (unsigned int i_2 = 2; i_2 < 20; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_0] [i_2] [i_0 + 1] &= ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) arr_2 [i_2 + 1] [i_2] [i_2]))))));
                    var_11 = ((/* implicit */int) max((var_11), (((((/* implicit */_Bool) max((arr_6 [i_2 - 1] [i_2] [i_2 + 1]), (arr_6 [i_2 - 1] [i_2] [i_2 + 1])))) ? (((((/* implicit */_Bool) arr_6 [i_2 - 1] [i_2] [i_2 + 1])) ? (((/* implicit */int) arr_6 [i_2 - 1] [i_2] [i_2 + 1])) : (((/* implicit */int) arr_6 [i_2 - 1] [i_2] [i_2 + 1])))) : (((((/* implicit */_Bool) (unsigned char)37)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (unsigned char)148))))))));
                    var_12 = ((/* implicit */unsigned short) (-((+(arr_4 [i_0] [i_0 + 4] [i_0 - 1] [i_2 - 2])))));
                    arr_9 [i_0] [i_0] [i_0] [i_0 + 3] = ((/* implicit */unsigned int) ((short) ((((/* implicit */int) var_1)) * ((~(((/* implicit */int) (unsigned short)65525)))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */signed char) ((unsigned long long int) (!(((/* implicit */_Bool) (-(1497983233U)))))));
    var_14 &= ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)5))))) || (((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) 251658240)) ? (3207041417381601600LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-21064)))))))));
}

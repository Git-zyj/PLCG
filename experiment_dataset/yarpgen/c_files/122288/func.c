/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122288
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
    var_12 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max(((~(((/* implicit */int) (signed char)-3)))), ((-(((/* implicit */int) var_6)))))))));
    var_13 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 25165824)) ? (((/* implicit */int) (_Bool)0)) : (-1504570148)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) -1504570137)) ? (((/* implicit */int) (unsigned short)52706)) : (25165826)))) ? (((/* implicit */int) max(((short)32767), (((/* implicit */short) (unsigned char)69))))) : (((/* implicit */int) (_Bool)1)))) : (max((((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)49927)))), ((-(1023)))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */short) (((!(((/* implicit */_Bool) min((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)49927)))))) ? (min((max((-873550450), (25165824))), (max((((/* implicit */int) (unsigned char)192)), (arr_1 [i_1]))))) : ((-(((/* implicit */int) max((var_5), (((/* implicit */unsigned short) arr_4 [i_0] [i_0] [i_1] [i_0])))))))));
                    arr_6 [i_1] [i_1] [i_1] = (+(((((/* implicit */_Bool) (~(211853630)))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)186)) : (((/* implicit */int) var_10)))) : (((var_1) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_1)))))));
                    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_9)) ? (arr_0 [i_0]) : (25165824))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (873550454) : (((/* implicit */int) var_7))))))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_9)), (arr_3 [i_1])))) ? (((/* implicit */int) max(((unsigned short)10), (((/* implicit */unsigned short) (signed char)68))))) : ((((_Bool)1) ? (((/* implicit */int) var_8)) : (arr_5 [i_1] [i_1] [i_2]))))) : (min((((/* implicit */int) max((var_0), (((/* implicit */unsigned short) (unsigned char)217))))), ((-(arr_0 [i_2])))))));
                }
            } 
        } 
    } 
}

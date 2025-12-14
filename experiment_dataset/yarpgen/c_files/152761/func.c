/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152761
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
    var_15 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) (signed char)114)) && (((/* implicit */_Bool) var_5))))) >> (((/* implicit */int) ((unsigned char) max(((short)(-32767 - 1)), ((short)-8192)))))));
    /* LoopSeq 2 */
    for (short i_0 = 4; i_0 < 22; i_0 += 1) 
    {
        arr_2 [i_0 - 3] = var_5;
        var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-37)) ? (((/* implicit */int) (short)-23898)) : (((/* implicit */int) (short)-15043)))))));
    }
    for (signed char i_1 = 0; i_1 < 13; i_1 += 2) 
    {
        arr_5 [i_1] = ((/* implicit */short) max((min(((-(((/* implicit */int) (signed char)-10)))), (((/* implicit */int) (short)27804)))), (((/* implicit */int) (signed char)57))));
        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-8192)) ? (((/* implicit */int) (signed char)-86)) : (((/* implicit */int) (unsigned char)41)))))));
        /* LoopNest 3 */
        for (signed char i_2 = 0; i_2 < 13; i_2 += 4) 
        {
            for (signed char i_3 = 0; i_3 < 13; i_3 += 4) 
            {
                for (unsigned char i_4 = 0; i_4 < 13; i_4 += 3) 
                {
                    {
                        arr_13 [i_1] [i_2] [i_3] &= ((/* implicit */signed char) (-(((/* implicit */int) (signed char)-66))));
                        arr_14 [i_1] [i_2] [i_3] [i_4] = ((/* implicit */short) ((signed char) (unsigned char)214));
                    }
                } 
            } 
        } 
        arr_15 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_5))))) && (((/* implicit */_Bool) ((((((/* implicit */int) arr_8 [i_1])) + (2147483647))) >> (((((/* implicit */int) (short)7257)) - (7228))))))))) >= (((/* implicit */int) arr_9 [i_1] [i_1] [i_1]))));
    }
    var_18 = ((/* implicit */signed char) min((var_18), (max((min((((/* implicit */signed char) (!(((/* implicit */_Bool) var_7))))), ((signed char)124))), (max((var_4), (((signed char) var_6))))))));
}

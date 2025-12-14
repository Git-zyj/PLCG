/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179967
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
    var_14 = ((/* implicit */int) var_12);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            for (unsigned char i_2 = 3; i_2 < 14; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] = ((/* implicit */unsigned char) arr_5 [i_2] [i_1] [i_0]);
                    var_15 = ((/* implicit */unsigned char) ((unsigned short) 7794821878719787933ULL));
                    var_16 *= 14762912999146728042ULL;
                }
            } 
        } 
        var_17 = ((/* implicit */short) (~(((/* implicit */int) (!(((_Bool) (short)-32681)))))));
    }
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-9741)) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_2)))) == (max((var_10), (((/* implicit */unsigned int) (unsigned short)65527))))))) : (((/* implicit */int) min((max(((unsigned short)16380), (((/* implicit */unsigned short) (unsigned char)78)))), (min((((/* implicit */unsigned short) var_3)), ((unsigned short)65535))))))));
    var_19 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) max((((var_10) > (((/* implicit */unsigned int) ((/* implicit */int) var_4))))), (((((/* implicit */_Bool) (signed char)-46)) && (var_9))))))));
    var_20 = ((/* implicit */signed char) var_7);
}

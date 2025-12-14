/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107331
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
    for (unsigned short i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */short) (signed char)125);
                    arr_7 [i_0] [i_1] = ((/* implicit */unsigned char) (+(max((((/* implicit */unsigned long long int) (signed char)118)), (9612992113634491196ULL)))));
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (signed char)-111);
                    arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) ((short) ((((/* implicit */int) (unsigned char)26)) >= (((/* implicit */int) (signed char)124)))))) % (((/* implicit */int) (short)32))));
                    var_21 = (short)402;
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */int) min(((signed char)-126), ((signed char)-126)))) >= (((((/* implicit */_Bool) (signed char)38)) ? (((/* implicit */int) (signed char)-18)) : (((/* implicit */int) (short)-31288)))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172293
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
    var_15 = ((/* implicit */short) min((((/* implicit */long long int) var_0)), (((((/* implicit */_Bool) (signed char)-20)) ? (6187439615995122871LL) : (((/* implicit */long long int) ((/* implicit */int) (short)23579)))))));
    var_16 = ((/* implicit */unsigned char) max((((/* implicit */long long int) (unsigned char)182)), (-6187439615995122872LL)));
    /* LoopNest 3 */
    for (signed char i_0 = 4; i_0 < 22; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    arr_6 [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) (signed char)-25);
                    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-3639)) || (min(((!(((/* implicit */_Bool) (unsigned char)32)))), (((((/* implicit */_Bool) 5251089766399674365LL)) && (((/* implicit */_Bool) (unsigned short)58562))))))));
                    arr_7 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)236)) ? (((/* implicit */int) (unsigned char)19)) : (((/* implicit */int) (unsigned char)251))));
                }
            } 
        } 
    } 
}

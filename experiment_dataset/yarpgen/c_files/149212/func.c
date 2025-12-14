/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149212
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
    var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_1)), (var_7)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)0)) ? ((+(((/* implicit */int) (unsigned char)214)))) : (((((/* implicit */_Bool) 10931014172516375362ULL)) ? (((/* implicit */int) (signed char)56)) : (((/* implicit */int) (_Bool)1))))))) : (var_2))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    arr_8 [i_2] [i_0] [(unsigned char)15] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) ((unsigned int) (_Bool)1)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)56))));
                    arr_9 [i_0] [9LL] = ((/* implicit */short) ((int) (short)27341));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */long long int) (((_Bool)1) ? (((((/* implicit */_Bool) var_4)) ? (((unsigned int) (signed char)127)) : (((/* implicit */unsigned int) var_0)))) : (((((470350782270890212ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-18))))) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15)))))));
    var_16 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((int) (unsigned char)119)))))));
}

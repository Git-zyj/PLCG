/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163903
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
    var_14 -= ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_6)) ? (var_3) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-25165)) ? (44056033) : (44056033)))))), (((/* implicit */long long int) (+(((/* implicit */int) (short)14512)))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 14; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */long long int) -2060070630)) == (-1418356253230546670LL))))));
                    arr_10 [i_1] [i_1] = ((((((/* implicit */unsigned long long int) var_3)) / (var_2))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9007199254740992ULL)) ? (var_3) : (((/* implicit */long long int) 2495564706U))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */long long int) (+(var_12)));
    var_16 = ((/* implicit */short) var_1);
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (-(var_13)))) ? (((/* implicit */int) ((((/* implicit */int) min(((short)-31272), (((/* implicit */short) (unsigned char)67))))) >= (((/* implicit */int) max((((/* implicit */short) (signed char)51)), ((short)25173))))))) : (((((/* implicit */int) ((short) (short)22574))) << (((((/* implicit */int) var_7)) - (23668)))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136229
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
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(var_11)))) ? ((+(((var_15) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)25842))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_19 = ((((/* implicit */long long int) min(((+(((/* implicit */int) arr_0 [(unsigned char)12])))), (((/* implicit */int) max(((short)-32248), (((/* implicit */short) (_Bool)1)))))))) + (-951361508447988830LL));
        arr_3 [i_0] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_4)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 13822199386101855196ULL))))) : (min((-1314432954), (((/* implicit */int) var_14))))))) ? (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (short)32253)) ? (160791428) : (((/* implicit */int) (unsigned short)47237))))))) : (((((/* implicit */_Bool) ((4061531444U) & (4294967295U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_1 [i_0] [(signed char)7]) > (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))))))) : (4006318584569385157ULL)))));
    }
}

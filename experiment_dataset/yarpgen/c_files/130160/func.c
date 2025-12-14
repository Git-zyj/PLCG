/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130160
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
    var_16 -= ((/* implicit */short) ((((/* implicit */_Bool) max((min((5547119041454367600LL), (((/* implicit */long long int) (short)32767)))), (((/* implicit */long long int) var_12))))) ? (((/* implicit */int) (unsigned short)47236)) : (((/* implicit */int) min((max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)62698))), (((/* implicit */unsigned short) min(((short)13171), (((/* implicit */short) (signed char)1))))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 14; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((max((-3117808146728592503LL), (((/* implicit */long long int) (short)-7)))) ^ (((/* implicit */long long int) (((_Bool)1) ? (4294967289U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)0)))))))))));
                    arr_9 [i_0] [i_0] = ((/* implicit */unsigned short) ((short) (((_Bool)1) ? (5547119041454367623LL) : (((/* implicit */long long int) ((/* implicit */int) (short)23343))))));
                    var_18 &= ((/* implicit */signed char) max((((/* implicit */int) ((signed char) 4294967295U))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)15)) ? (((/* implicit */int) (short)3)) : (((/* implicit */int) (signed char)99))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)29060)))) : ((-(((/* implicit */int) (short)-16384))))))));
                    arr_10 [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max(((unsigned short)65534), ((unsigned short)42971)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)62698)) && (((/* implicit */_Bool) 0U))))) : (((((/* implicit */int) (unsigned short)33226)) ^ (((/* implicit */int) (signed char)-120))))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (max(((unsigned short)58082), ((unsigned short)22565)))))) : (((/* implicit */int) min((((/* implicit */unsigned short) ((short) 1272907427U))), ((unsigned short)22537)))));
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        var_19 ^= ((/* implicit */_Bool) min((((((/* implicit */_Bool) max(((signed char)-96), ((signed char)127)))) ? (((/* implicit */int) (unsigned short)0)) : (((((/* implicit */int) (unsigned short)22220)) - (((/* implicit */int) (_Bool)1)))))), ((~(((/* implicit */int) min(((unsigned short)7453), (((/* implicit */unsigned short) (signed char)7)))))))));
                        arr_14 [i_1] [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) min((min((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)65531))), (((/* implicit */unsigned short) max((((/* implicit */short) (_Bool)1)), ((short)32753)))))))));
                    }
                }
            } 
        } 
    } 
}

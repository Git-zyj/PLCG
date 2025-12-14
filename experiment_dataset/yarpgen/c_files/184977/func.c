/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184977
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
    var_16 = ((/* implicit */unsigned char) ((unsigned short) ((short) ((int) 3794637154095315747LL))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_17 = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) 3794637154095315767LL)) ? (((int) (_Bool)0)) : (((/* implicit */int) (unsigned char)71)))));
        var_18 = ((/* implicit */long long int) ((((_Bool) (_Bool)1)) ? (((/* implicit */int) ((_Bool) (short)16918))) : (((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((signed char) (_Bool)1)))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((unsigned char) (_Bool)1));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 15; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) 928810507U)) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (_Bool)1))))))));
                    var_20 = 2591245996U;
                    var_21 = ((/* implicit */unsigned long long int) (unsigned char)0);
                    var_22 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) min(((~(((/* implicit */int) (_Bool)0)))), (((/* implicit */int) max(((unsigned char)172), (((/* implicit */unsigned char) (_Bool)1)))))))), (max((((((/* implicit */_Bool) (short)16383)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (3093025818U))), (((/* implicit */unsigned int) (_Bool)1))))));
                    var_23 -= ((/* implicit */unsigned short) 3412526451270693491LL);
                }
            } 
        } 
        arr_9 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) (short)20631)), ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)7))) : (127LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 15718477806807823437ULL)) ? (511) : (((/* implicit */int) (unsigned char)7))))) ? (((((/* implicit */_Bool) (short)-12031)) ? (9223372036854775788LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)14336))))) : (((/* implicit */long long int) (~(((/* implicit */int) (short)-12031)))))))));
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178135
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
    var_13 = ((/* implicit */unsigned int) ((_Bool) ((unsigned int) ((((/* implicit */_Bool) 1673456464U)) ? (1673456475U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)14)))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 2; i_3 < 17; i_3 += 1) 
                    {
                        var_14 = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */int) (unsigned char)32)) & ((-(((/* implicit */int) (signed char)-75)))))));
                        var_15 = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)11)) ? (471365567U) : (3670016U)))) ? (min((((/* implicit */unsigned int) (signed char)84)), (1973593869U))) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)28535)) * (((/* implicit */int) (unsigned char)14))))))), (((/* implicit */unsigned int) ((unsigned short) (unsigned short)28535)))));
                    }
                    for (long long int i_4 = 0; i_4 < 19; i_4 += 3) 
                    {
                        arr_12 [i_0 + 2] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)245)) != (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)28))))));
                        var_16 = ((/* implicit */unsigned char) ((_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) 3997083190U)) : (18446744073709551603ULL))));
                        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)28)) ? (260046848LL) : (((/* implicit */long long int) 2227317204U))))) ? (((((/* implicit */_Bool) 297884105U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)247))) : (1673456464U))) : (((unsigned int) 6978326285884958116ULL)))), (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 3584760232U)) ? (-753427845) : (((/* implicit */int) (unsigned short)0))))), (((((/* implicit */unsigned int) 753427864)) % (2U))))))))));
                        var_18 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 140737488355327LL)) ? (4148769382U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-33)))))) ? (17U) : (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)47)))))));
                    }
                    var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(6U)))) || (((((/* implicit */int) (_Bool)0)) == (((/* implicit */int) (short)-1))))))), (((((/* implicit */_Bool) 342198428)) ? (22U) : (((/* implicit */unsigned int) -134217728)))))))));
                }
            } 
        } 
    } 
}

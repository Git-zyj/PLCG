/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163881
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
    var_14 = (~(((((/* implicit */_Bool) (((_Bool)1) ? (-1420250546) : (((/* implicit */int) (signed char)21))))) ? ((~(((/* implicit */int) (unsigned char)20)))) : ((~(((/* implicit */int) (unsigned char)20)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) (+((-(1295947588187070233ULL))))))));
                var_16 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) -2147483631)) ? (((/* implicit */int) (unsigned char)143)) : (((/* implicit */int) (signed char)112))))))) ? (((((/* implicit */_Bool) (unsigned char)227)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 6915881630829287120LL))))) : (((/* implicit */int) (short)32703)))) : (((/* implicit */int) (_Bool)0))));
                arr_5 [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)41)) ? (((((/* implicit */_Bool) (~(18446744073709551610ULL)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-84))))) : (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-25070)))));
                var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)22261)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)25096))) : (0U)));
                /* LoopNest 2 */
                for (unsigned int i_2 = 4; i_2 < 20; i_2 += 3) 
                {
                    for (unsigned int i_3 = 3; i_3 < 23; i_3 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */_Bool) (~(((/* implicit */int) (short)-26769))));
                            arr_11 [i_1] = ((((/* implicit */_Bool) (+((~(((/* implicit */int) (short)-26772))))))) ? ((+(18446744073709551605ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))));
                            var_19 = ((/* implicit */signed char) (~((+((((_Bool)1) ? (((/* implicit */int) (unsigned char)227)) : (((/* implicit */int) (unsigned char)217))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}

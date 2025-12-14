/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181470
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181470 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181470
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
    var_14 = ((/* implicit */long long int) (((+(((((/* implicit */_Bool) 10935381022918076679ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)41))) : (var_7))))) + (((/* implicit */unsigned long long int) min((6672525364231067353LL), (-6672525364231067353LL))))));
    var_15 = ((/* implicit */unsigned long long int) -1);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 3; i_2 < 14; i_2 += 3) 
                {
                    for (short i_3 = 1; i_3 < 15; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (signed char i_4 = 1; i_4 < 15; i_4 += 4) 
                            {
                                var_16 += ((((((/* implicit */unsigned long long int) -6672525364231067352LL)) != (18446744073709551606ULL))) ? (((((/* implicit */_Bool) min((6672525364231067351LL), (((/* implicit */long long int) (signed char)0))))) ? (((/* implicit */unsigned long long int) -6672525364231067375LL)) : (((unsigned long long int) var_8)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))));
                                var_17 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_14 [i_1] [i_4 + 1] [i_1] [i_4 + 1] [i_4 + 1] [i_4 - 1] [i_4 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (arr_2 [i_2 - 2]))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned char)127)), (((((-6672525364231067352LL) + (9223372036854775807LL))) >> (((((/* implicit */int) (short)18330)) - (18313))))))))));
                                var_18 = ((/* implicit */_Bool) (~(6672525364231067338LL)));
                            }
                            for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 2) 
                            {
                                arr_17 [i_1] = ((((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */long long int) 570570246U)) : (-6672525364231067353LL))) - (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)25757))) : (0LL)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))) : (var_3))));
                                var_19 -= ((unsigned char) (signed char)0);
                            }
                            for (unsigned short i_6 = 0; i_6 < 16; i_6 += 1) 
                            {
                                arr_20 [(unsigned char)8] [9ULL] [i_1] [i_3] [i_3 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((short)-28772), (((/* implicit */short) (unsigned char)18))))) ? (((unsigned long long int) arr_10 [0LL] [i_1] [i_1] [i_1])) : (0ULL)));
                                var_20 = ((/* implicit */unsigned long long int) min(((unsigned short)8589), (((/* implicit */unsigned short) (short)28782))));
                                arr_21 [i_1] [(unsigned char)8] [i_0] [i_1] = ((/* implicit */long long int) (unsigned char)31);
                            }
                            var_21 = ((/* implicit */signed char) var_9);
                        }
                    } 
                } 
                arr_22 [i_1] = ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) >= (var_7))))))) ? (var_7) : (((((((/* implicit */_Bool) 6672525364231067353LL)) ? (116147899045153006ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))))) & (((unsigned long long int) (signed char)-93)))));
            }
        } 
    } 
    var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) min((-13), (((/* implicit */int) min((min(((unsigned char)255), (((/* implicit */unsigned char) var_2)))), ((unsigned char)39)))))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186335
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
    var_13 ^= ((/* implicit */signed char) var_12);
    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 464025495074573895ULL)) ? (((((/* implicit */int) var_9)) >> (((((/* implicit */int) (signed char)21)) >> (((2643350517U) - (2643350504U))))))) : (((/* implicit */int) (signed char)-91))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 12; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                var_15 = ((((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */int) (unsigned char)96)) : (1126846678))) >> (((((((/* implicit */_Bool) (short)-32702)) ? (1946940732) : (((/* implicit */int) (short)-5551)))) - (1946940707))));
                var_16 = ((/* implicit */unsigned long long int) 2987769517U);
            }
        } 
    } 
    var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) var_4))));
    /* LoopSeq 1 */
    for (unsigned char i_2 = 1; i_2 < 23; i_2 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_3 = 0; i_3 < 24; i_3 += 4) 
        {
            for (unsigned int i_4 = 0; i_4 < 24; i_4 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_5 = 3; i_5 < 21; i_5 += 2) 
                    {
                        var_18 &= ((/* implicit */signed char) (!(((/* implicit */_Bool) 1126846678))));
                        var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) 1126846666)) ? (((/* implicit */int) (short)32743)) : (((/* implicit */int) (short)-3419)))))));
                    }
                    arr_14 [i_3] [i_3] [i_2] |= ((/* implicit */long long int) ((((/* implicit */_Bool) (short)6818)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((((/* implicit */_Bool) 1126846675)) && (((/* implicit */_Bool) -1126846700)))))))) : (((((/* implicit */_Bool) (+(-1126846680)))) ? (((unsigned long long int) -7433335982715781567LL)) : (((/* implicit */unsigned long long int) 1581944486U))))));
                }
            } 
        } 
        arr_15 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)121)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-97))) : (18446744073709551609ULL)))) && (((/* implicit */_Bool) ((long long int) -7433335982715781567LL)))));
    }
}

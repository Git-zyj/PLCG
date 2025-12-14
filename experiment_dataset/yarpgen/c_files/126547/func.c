/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126547
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 4; i_4 < 14; i_4 += 2) 
                        {
                            {
                                var_10 = ((/* implicit */int) var_6);
                                var_11 -= ((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL));
                                var_12 -= ((/* implicit */unsigned short) ((((((((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_3] [7] [i_4])) == (((/* implicit */int) (signed char)82)))) ? (((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) arr_7 [i_0] [i_3] [i_2] [i_2])) : (var_4))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (signed char)-23))))))) & (((/* implicit */int) (_Bool)0))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_5 = 0; i_5 < 15; i_5 += 2) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned short) var_7);
                            arr_16 [i_0] [i_5] [i_5] [i_1] [i_0 + 4] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_10 [i_0] [i_0] [i_1] [i_1] [i_5] [i_6] [i_6]) == (((/* implicit */int) (!(((/* implicit */_Bool) 17834992130105513208ULL))))))))) == (max((((var_5) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_7))), (((((/* implicit */_Bool) (short)255)) ? (((/* implicit */unsigned long long int) 4294967280U)) : (0ULL)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (1986578368674686808LL)))) - (((((/* implicit */_Bool) 196391557U)) ? (((/* implicit */unsigned long long int) -2031645358)) : (65535ULL))))))));
    /* LoopNest 3 */
    for (unsigned int i_7 = 3; i_7 < 17; i_7 += 3) 
    {
        for (short i_8 = 2; i_8 < 18; i_8 += 3) 
        {
            for (unsigned short i_9 = 0; i_9 < 20; i_9 += 2) 
            {
                {
                    var_15 ^= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) == (var_2)));
                    /* LoopNest 2 */
                    for (unsigned int i_10 = 0; i_10 < 20; i_10 += 3) 
                    {
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */long long int) var_5);
                                var_17 = ((/* implicit */short) -464114189);
                                var_18 = ((/* implicit */unsigned long long int) var_0);
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned short) 3527944296U);
                }
            } 
        } 
    } 
}

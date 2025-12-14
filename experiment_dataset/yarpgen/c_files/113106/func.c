/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113106
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
    var_12 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 649131523U))));
    var_13 = ((/* implicit */unsigned char) var_4);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */signed char) ((_Bool) arr_5 [i_0] [i_0]));
                /* LoopNest 2 */
                for (long long int i_2 = 3; i_2 < 16; i_2 += 1) 
                {
                    for (unsigned short i_3 = 2; i_3 < 15; i_3 += 3) 
                    {
                        {
                            var_15 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_2] [i_3] [i_1])) ? (((/* implicit */long long int) 1593073570)) : (arr_9 [i_0] [9ULL] [i_2])))), (((unsigned long long int) arr_8 [i_0]))))) ? (max((arr_1 [i_0]), ((+(var_8))))) : (((/* implicit */long long int) ((/* implicit */int) (short)-11033)))));
                            var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) max(((short)-11033), ((short)11050)))))) == (((((((/* implicit */_Bool) -227441861)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) -351843395)))) * (((/* implicit */unsigned long long int) min((18LL), (((/* implicit */long long int) (signed char)-9))))))))))));
                        }
                    } 
                } 
                arr_14 [i_0] [(unsigned char)16] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) ((var_6) ? (((/* implicit */int) (short)11033)) : (arr_5 [(short)10] [(short)10]))))) ? (((((((/* implicit */_Bool) 13ULL)) || (((/* implicit */_Bool) arr_10 [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) 351843421)) : (((((/* implicit */_Bool) arr_10 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) arr_5 [i_0] [10ULL])) : (arr_10 [i_1] [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_0 [i_1]), (arr_8 [i_0])))))));
                var_17 = ((/* implicit */int) (+(min((max((14799874964890980834ULL), (3646869108818570802ULL))), (((arr_3 [(unsigned char)7] [(unsigned char)7]) ? (((/* implicit */unsigned long long int) 18LL)) : (arr_10 [(short)16] [i_1])))))));
                var_18 |= ((/* implicit */unsigned short) 490128716756563211LL);
            }
        } 
    } 
}

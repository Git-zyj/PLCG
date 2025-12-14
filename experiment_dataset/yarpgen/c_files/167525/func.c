/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167525
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
    var_11 = ((/* implicit */signed char) max((((unsigned short) max((18356528897498593159ULL), (((/* implicit */unsigned long long int) var_8))))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((18446744073709551604ULL), (90215176210958456ULL)))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                var_12 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) > (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) <= (var_7))))));
                var_13 = var_8;
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        {
                            var_14 = ((((/* implicit */_Bool) ((((((/* implicit */int) ((short) 2412632084192817866ULL))) + (2147483647))) >> (((((-452659232) ^ (((/* implicit */int) arr_8 [i_0] [i_1])))) + (452684568)))))) ? ((-(((13516968763185010016ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_1]))))))) : (var_4));
                            var_15 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((long long int) arr_9 [i_0] [(unsigned short)2] [(unsigned short)2] [i_2]))))) ? (((/* implicit */int) ((unsigned short) (~(9223372036854775807ULL))))) : ((+(((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_3]))))));
                            var_16 -= var_5;
                            var_17 = ((/* implicit */unsigned short) min((((/* implicit */long long int) (signed char)-117)), (min((var_8), (((/* implicit */long long int) arr_2 [i_0] [i_0]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */int) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_1)), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) var_6)) : ((-9223372036854775807LL - 1LL))))))) <= (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_3)), (var_4)))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))))));
}

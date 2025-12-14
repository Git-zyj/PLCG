/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127055
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
    var_18 = ((/* implicit */unsigned char) (~((~(((/* implicit */int) var_17))))));
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)32767))))) ? ((~(1928988359045916673LL))) : (((/* implicit */long long int) max((((((/* implicit */int) var_17)) | (((/* implicit */int) (unsigned char)118)))), (((/* implicit */int) ((signed char) var_2))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                var_20 += ((/* implicit */unsigned short) ((((arr_2 [i_0]) << (((arr_2 [i_0]) - (7940633544309943031ULL))))) & (arr_2 [i_0])));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned short) max((((((/* implicit */long long int) ((/* implicit */int) var_7))) + (((((/* implicit */_Bool) var_10)) ? (2751561612128585887LL) : (var_3))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((int) var_15))) ? (((/* implicit */int) ((((/* implicit */_Bool) 7436481708910180909ULL)) && (((/* implicit */_Bool) var_2))))) : (((/* implicit */int) (unsigned short)25947)))))));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 1; i_2 < 22; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 25; i_4 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_1]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) (short)-28951)), (arr_5 [(signed char)19] [i_3 + 1] [i_0]))))))) : (((/* implicit */int) (unsigned char)136))));
                                arr_16 [i_0] [i_0] [i_1] [(_Bool)1] [i_1] [i_3] [i_4] &= ((/* implicit */int) min((((unsigned long long int) arr_10 [i_2] [i_2 + 3] [i_3 + 1] [i_3 + 1])), (((/* implicit */unsigned long long int) ((signed char) var_5)))));
                            }
                        } 
                    } 
                } 
                var_22 = ((/* implicit */short) ((unsigned char) ((((/* implicit */unsigned long long int) var_1)) | (5438824010726382021ULL))));
                var_23 = ((/* implicit */unsigned long long int) min((((((/* implicit */int) var_0)) & (((/* implicit */int) arr_3 [i_0])))), (((((/* implicit */int) arr_3 [i_1])) | (((/* implicit */int) arr_3 [i_0]))))));
            }
        } 
    } 
}

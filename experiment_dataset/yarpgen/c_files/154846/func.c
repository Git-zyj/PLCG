/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154846
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
    var_11 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((long long int) 892768229972404717LL))), ((((_Bool)1) ? (17592186044288ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
    var_12 |= ((/* implicit */signed char) var_4);
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 21; i_1 += 1) 
        {
            {
                var_13 = (-(max((((/* implicit */unsigned long long int) ((long long int) -1131339667147903161LL))), (max((((/* implicit */unsigned long long int) 54043195528445952LL)), (12244163558589633978ULL))))));
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0])))))));
                var_14 = ((/* implicit */_Bool) ((((/* implicit */long long int) (((+(((/* implicit */int) (unsigned short)65535)))) * ((~(((/* implicit */int) arr_1 [i_1]))))))) & (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [(_Bool)1])) ? (((/* implicit */int) (unsigned short)65533)) : (((/* implicit */int) (signed char)-115))))) ? (max((((/* implicit */long long int) arr_0 [(short)4] [i_1])), (2006521714072988058LL))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_0 [i_0] [i_0])))))))));
                /* LoopNest 2 */
                for (short i_2 = 4; i_2 < 23; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        {
                            var_15 *= ((/* implicit */unsigned char) ((134217724U) < (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                            var_16 = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_0 + 1] [i_1 - 1] [i_1 - 1])) ? (((((/* implicit */int) arr_0 [i_1 + 2] [i_2 - 3])) * (((/* implicit */int) arr_0 [i_1 - 1] [i_2 - 2])))) : (((((((/* implicit */_Bool) 1978206358)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_4)))) + (((/* implicit */int) max((var_3), (((/* implicit */unsigned short) (_Bool)1)))))))));
                            var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_6)))) ? (((((/* implicit */_Bool) 83637399)) ? (-1131339667147903161LL) : (-9223372036854775786LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 1131339667147903152LL)) && ((_Bool)0)))))))) ? (((((/* implicit */_Bool) ((short) 4294967293U))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_8 [1] [i_1] [i_2 - 2] [i_2 - 2] [i_3] [1]))))) : (max((-9223372036854775795LL), (((/* implicit */long long int) 1978206332)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_3] [i_1])) / (((/* implicit */int) var_4))))) ? (((/* implicit */int) (!(arr_9 [i_0] [i_1] [i_2 + 1] [i_3])))) : (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_1 [9ULL])) : (((/* implicit */int) arr_9 [i_0] [i_1 + 1] [i_2] [i_3])))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}

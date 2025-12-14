/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111939
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
    var_17 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (14982938285476351407ULL) : (((/* implicit */unsigned long long int) var_2))))) ? (min((var_2), (((/* implicit */long long int) var_8)))) : (((/* implicit */long long int) var_9)))) + (((/* implicit */long long int) var_5))));
    var_18 = ((/* implicit */unsigned char) var_7);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned short) ((long long int) (signed char)112));
                                arr_13 [i_0] [i_1] [i_2] [i_3] [4U] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
                                var_20 = ((/* implicit */int) ((((/* implicit */_Bool) max((arr_7 [7U]), (arr_7 [i_0])))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65535)) >> (((3463805788233200209ULL) - (3463805788233200194ULL)))))), (((((/* implicit */unsigned long long int) 9223372036854775807LL)) & (var_12))))) : (((/* implicit */unsigned long long int) -178132411))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (long long int i_6 = 2; i_6 < 14; i_6 += 1) 
                        {
                            {
                                arr_18 [i_0] [i_1] [i_2] [12LL] [i_6] [i_0] [i_1] |= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (signed char)5)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (7490393044385126487LL)))))) == (((((/* implicit */_Bool) ((unsigned long long int) var_12))) ? (2688861093U) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_5 [i_0] [i_1] [i_0]), (((/* implicit */unsigned short) var_10))))))))));
                                var_21 = ((/* implicit */_Bool) (((((~(arr_16 [i_6 + 1] [i_6 + 1] [i_6] [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6 + 1]))) + (9223372036854775807LL))) >> ((((~((-(((/* implicit */int) arr_2 [(_Bool)1] [i_1])))))) - (170)))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (0U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_15 [i_0] [i_1] [i_2] [i_2] [i_0] [5])))) : (((unsigned int) 14982938285476351407ULL))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((int) var_16)), (((/* implicit */int) ((((/* implicit */int) var_1)) == (((/* implicit */int) (signed char)127)))))))) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
}

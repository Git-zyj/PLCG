/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112105
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)65535))));
                    var_18 = ((/* implicit */unsigned long long int) (unsigned short)0);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 1; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_19 *= ((/* implicit */unsigned long long int) (unsigned short)65535);
                                var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) var_3))));
                                arr_14 [i_0] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)0)) % (((/* implicit */int) ((((/* implicit */int) ((unsigned char) (unsigned short)65535))) != (((((/* implicit */_Bool) (signed char)124)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)65522)))))))));
                                var_21 ^= ((/* implicit */unsigned short) min((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-113))))), (((((/* implicit */int) (short)-5194)) / (((/* implicit */int) (signed char)104))))));
                                var_22 = ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) var_1))) == (((((/* implicit */_Bool) var_12)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) (signed char)124))))))) && (((/* implicit */_Bool) ((((/* implicit */int) (signed char)-20)) & (((((/* implicit */_Bool) var_3)) ? (var_11) : (((/* implicit */int) (unsigned short)15)))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 1; i_5 < 9; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 1; i_6 < 10; i_6 += 2) 
                        {
                            {
                                arr_19 [i_1] [i_1] [i_1] [i_1] [i_6] = ((/* implicit */short) var_5);
                                var_23 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)120))));
                                var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) min(((unsigned short)65535), ((unsigned short)65507)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_7))))) : (4294967286U)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
    var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)136)) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)124)) : (((/* implicit */int) var_3)))) : ((-(((/* implicit */int) var_12))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (12399245784312202566ULL)));
}

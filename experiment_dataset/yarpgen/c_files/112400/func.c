/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112400
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
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned char) max((((/* implicit */long long int) (~(((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)8176))))))), (((long long int) var_4))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    for (unsigned int i_3 = 2; i_3 < 9; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) (~((~(((/* implicit */int) var_5))))))) ? (((((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned short) (short)-23849))))) ? (((((/* implicit */_Bool) var_1)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (short)8189))))) : (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)101))))))) : (((/* implicit */long long int) (~(((((/* implicit */_Bool) (short)8200)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)-74)))))))));
                                arr_14 [i_2] [5U] = ((/* implicit */unsigned long long int) min((((((_Bool) var_7)) ? (((((/* implicit */_Bool) (short)-8200)) ? (((/* implicit */int) (short)8200)) : (-616549883))) : (((int) var_4)))), (((/* implicit */int) ((unsigned char) (+(((/* implicit */int) var_8))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (int i_5 = 4; i_5 < 6; i_5 += 4) 
                {
                    for (short i_6 = 0; i_6 < 10; i_6 += 3) 
                    {
                        {
                            arr_20 [i_0] [i_6] [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_2)) : (var_11)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1111629044))))) : (((((/* implicit */_Bool) 7)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_0)))))))));
                            arr_21 [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) 1408911970)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_7)))) ? (((((/* implicit */_Bool) -8)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9)))) : (((((/* implicit */_Bool) -1408911964)) ? (((/* implicit */int) (short)-32748)) : (((/* implicit */int) (unsigned short)12802))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned short) var_7);
}

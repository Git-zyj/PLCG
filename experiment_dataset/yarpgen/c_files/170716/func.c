/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170716
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
    var_20 = min(((_Bool)1), ((_Bool)1));
    var_21 -= max(((unsigned char)235), ((unsigned char)6));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 8; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((-468632081), (((/* implicit */int) (short)32767))))) ? (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (_Bool)1))))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -468632081)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)46574))) : (1073741568U)))), (min((16972333679576420588ULL), (((/* implicit */unsigned long long int) (unsigned short)21132))))))));
                    arr_8 [6] [3] = min((((/* implicit */long long int) 606831460)), (max((4176747636024579111LL), (((/* implicit */long long int) (short)19452)))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 9; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            {
                                arr_14 [(_Bool)1] [i_1 + 1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), (max((((/* implicit */long long int) (signed char)-51)), (32212254720LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (4433230883192832LL)));
                                var_22 ^= min((((/* implicit */unsigned long long int) min((-1018684150), (((/* implicit */int) (short)120))))), (min((10ULL), (((/* implicit */unsigned long long int) (_Bool)0)))));
                            }
                        } 
                    } 
                    var_23 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)62)), (-7117586674520063147LL)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)2923))) : (3960810395105549573LL)))) ? (min((-4595362152254126665LL), (((((/* implicit */_Bool) -4433230883192833LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (7117586674520063142LL))))) : (((/* implicit */long long int) 3970844629U)));
                }
            } 
        } 
    } 
    var_24 += ((/* implicit */int) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) max(((signed char)-30), ((signed char)-125)))) ? (30ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (0U)))))) : (var_5)));
}

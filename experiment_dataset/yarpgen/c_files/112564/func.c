/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112564
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
    for (long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                arr_5 [i_1] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned short)32002)) ? (((/* implicit */int) (unsigned short)33534)) : (((/* implicit */int) (unsigned short)33533)))), (((/* implicit */int) var_0)))))));
                var_10 = ((/* implicit */unsigned long long int) min((var_10), (((/* implicit */unsigned long long int) -3353609578930311533LL))));
            }
        } 
    } 
    var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -3353609578930311533LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)33534))) : (1644698124U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)1)))) != ((+(((/* implicit */int) var_9)))))))) : (((((/* implicit */_Bool) (~(3116725663U)))) ? (((((/* implicit */_Bool) (unsigned short)64788)) ? (var_2) : (var_2))) : (((/* implicit */unsigned long long int) ((var_9) ? (((/* implicit */int) (unsigned short)1991)) : (((/* implicit */int) (unsigned short)50666)))))))));
    var_12 = ((/* implicit */unsigned short) 3353609578930311532LL);
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (unsigned short i_3 = 2; i_3 < 12; i_3 += 4) 
        {
            {
                arr_12 [i_3] = ((/* implicit */unsigned long long int) (~(((((var_3) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)15))))) + (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1)))))))));
                arr_13 [i_3] [i_2] = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_8))))) : ((-(422912282U)))));
                /* LoopNest 2 */
                for (unsigned char i_4 = 2; i_4 < 14; i_4 += 4) 
                {
                    for (unsigned short i_5 = 0; i_5 < 15; i_5 += 4) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((+(var_5))) / (((((/* implicit */_Bool) (signed char)112)) ? (arr_10 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))) ? ((~(((((/* implicit */int) (signed char)67)) / (((/* implicit */int) var_6)))))) : (((/* implicit */int) ((((/* implicit */int) (short)28399)) < (((/* implicit */int) (unsigned short)2047)))))));
                            var_14 = ((unsigned int) ((unsigned int) 3144033706U));
                        }
                    } 
                } 
                var_15 = ((/* implicit */unsigned int) (+(max((((/* implicit */long long int) (+(((/* implicit */int) (signed char)112))))), (((((arr_3 [i_2] [i_2]) + (9223372036854775807LL))) >> (((/* implicit */int) (signed char)16))))))));
            }
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137068
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
    var_13 = ((/* implicit */long long int) max((var_13), (var_6)));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) (+(((/* implicit */int) arr_0 [i_0])))))));
                arr_6 [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) (short)2475)) ? (18253975235322541448ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1162))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_1)))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned char) (+(var_2)));
    /* LoopNest 2 */
    for (short i_2 = 0; i_2 < 16; i_2 += 1) 
    {
        for (long long int i_3 = 0; i_3 < 16; i_3 += 1) 
        {
            {
                var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-84)) ? (((/* implicit */int) arr_5 [16LL])) : (((/* implicit */int) (unsigned short)7382))))) ? (((((/* implicit */_Bool) (short)-23343)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7382))) : (10825575377501101208ULL))) : (((/* implicit */unsigned long long int) ((int) -4926590916527087462LL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)25030))) >= (-7661252008101726632LL))))) : (min((((/* implicit */unsigned long long int) (+(1766258102)))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_3]))) : (976316769597709889ULL)))))));
                var_17 += ((/* implicit */signed char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_4 [i_2])))) ? (((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */int) (short)-25031)) : (((/* implicit */int) var_3))))) : (((long long int) arr_0 [i_3]))))) ? (min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)58151))))), (((((/* implicit */_Bool) (short)2)) ? (982178766U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) min((((/* implicit */short) (_Bool)0)), ((short)3116)))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    arr_15 [i_2] [i_3] [8LL] &= ((((/* implicit */long long int) ((/* implicit */int) (signed char)106))) + (var_2));
                    arr_16 [i_4] [i_3] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)3112)) ? (((/* implicit */int) (short)1162)) : (((/* implicit */int) (short)-3112))));
                    var_18 += ((/* implicit */unsigned short) -4990613570507011195LL);
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 16; i_5 += 4) 
                    {
                        for (signed char i_6 = 0; i_6 < 16; i_6 += 4) 
                        {
                            {
                                var_19 += var_7;
                                arr_22 [i_4] [i_3] [(signed char)4] = ((/* implicit */short) 3419075761U);
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}

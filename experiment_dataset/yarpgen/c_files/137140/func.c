/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137140
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
    var_13 = ((/* implicit */unsigned long long int) var_8);
    /* LoopNest 3 */
    for (long long int i_0 = 3; i_0 < 22; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 22; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 25; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) min(((unsigned char)100), ((unsigned char)100)))) ? (((((/* implicit */_Bool) -6198339502073396837LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)167))) : (9223372036854775807LL))) : (min((((/* implicit */long long int) (unsigned char)156)), (0LL))))), (-2896749346269178656LL)));
                                arr_12 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) min(((unsigned char)100), ((unsigned char)156)));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */unsigned int) ((max((max((432345564227567616LL), (((/* implicit */long long int) -320443265)))), (((/* implicit */long long int) min((((/* implicit */short) (signed char)-71)), ((short)-21594)))))) >> ((((~(((((/* implicit */_Bool) (unsigned char)87)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-27543))) : (0U))))) - (27503U)))));
                    var_16 ^= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) min((503316480U), (0U)))) && (((/* implicit */_Bool) (-(3791650826U)))))), (((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) ((3791650826U) <= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-124))))))))));
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                    {
                        for (long long int i_6 = 0; i_6 < 25; i_6 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */long long int) -1);
                                arr_19 [(short)1] [i_1] [i_0] [24U] [i_0 - 2] [i_6] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) max((-7561607829839580348LL), (-6670947949125990132LL)))) ? (((((/* implicit */int) (short)-31017)) - (((/* implicit */int) (unsigned short)35083)))) : (((((/* implicit */_Bool) (unsigned char)235)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)49052)))))), (((/* implicit */int) min(((unsigned short)51909), (((/* implicit */unsigned short) (_Bool)1)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_7 = 0; i_7 < 25; i_7 += 1) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                var_18 = max((min(((-9223372036854775807LL - 1LL)), ((~(9223372036854775807LL))))), (137438953471LL));
                                var_19 = ((/* implicit */unsigned int) min((max((max((7998782454349980058LL), (((/* implicit */long long int) (unsigned short)20229)))), (((/* implicit */long long int) ((((/* implicit */int) (signed char)-24)) <= (((/* implicit */int) (unsigned char)219))))))), (((((/* implicit */long long int) ((/* implicit */int) max(((short)31017), (((/* implicit */short) (unsigned char)100)))))) + (min((((/* implicit */long long int) (short)-17025)), (-8128574923253140892LL)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((3791650816U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)49052))))) - (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))), (var_1)));
}

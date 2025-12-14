/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129869
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
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    var_16 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_8)) > (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_3)))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_14)), (var_10)))), (var_4))))));
                    var_17 = ((/* implicit */unsigned short) ((long long int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) * (var_4))), (((var_0) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))));
                    var_18 = ((/* implicit */unsigned short) ((min((((var_15) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))), (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)35655)) : (((/* implicit */int) (_Bool)1))))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) min((((var_9) == (var_15))), (((0U) > (536870848U)))))))));
                }
                /* LoopNest 2 */
                for (signed char i_3 = 0; i_3 < 15; i_3 += 3) 
                {
                    for (unsigned short i_4 = 0; i_4 < 15; i_4 += 2) 
                    {
                        {
                            arr_12 [i_0] [i_0] [(_Bool)1] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)10))) * (7368495603262775766ULL)));
                            arr_13 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) var_9);
                            arr_14 [i_0] [i_1] [i_0] [i_4] [i_1] = ((/* implicit */unsigned short) ((var_10) << (((((/* implicit */_Bool) ((var_4) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_0) != (((/* implicit */unsigned long long int) var_2)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) | (var_15)))))));
                        }
                    } 
                } 
                var_19 -= ((/* implicit */int) var_8);
                var_20 -= ((((((/* implicit */unsigned long long int) min((((/* implicit */int) var_7)), (var_11)))) - ((((_Bool)1) ? (134217727ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) << (((((((/* implicit */int) ((var_9) > (var_15)))) * (((/* implicit */int) ((unsigned short) var_12))))) - (21637))));
            }
        } 
    } 
    var_21 &= ((/* implicit */unsigned int) ((((35184372088831ULL) % (((unsigned long long int) (_Bool)1)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) min((var_5), (((/* implicit */unsigned long long int) var_2)))))))));
    var_22 -= ((/* implicit */unsigned long long int) ((unsigned int) min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_6)), (var_10)))), (min((((/* implicit */unsigned long long int) var_10)), (var_9))))));
}

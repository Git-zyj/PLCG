/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155410
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
    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)196))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)8139)) >= (((/* implicit */int) (_Bool)0)))))) : (min((((/* implicit */unsigned long long int) (_Bool)1)), (15591977359172958269ULL))))), (((/* implicit */unsigned long long int) ((((var_10) >= (((/* implicit */long long int) ((/* implicit */int) var_13))))) ? (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_6)))) : (((/* implicit */int) (unsigned char)56))))))))));
    var_18 = ((/* implicit */unsigned short) max(((+(11734571533498804506ULL))), (max((((/* implicit */unsigned long long int) (-(var_10)))), (((unsigned long long int) var_16))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        for (short i_1 = 3; i_1 < 13; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    arr_8 [i_2] [i_2] [i_2] &= ((/* implicit */unsigned char) (~(((((/* implicit */int) arr_4 [i_0 + 3] [i_2] [i_0 + 2])) & (((/* implicit */int) arr_4 [i_0 - 1] [i_2] [i_0]))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (_Bool)1))));
                                var_20 += ((/* implicit */unsigned char) (unsigned short)8139);
                                var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) (-(((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_7 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (signed char)0)))))))))));
                                var_22 += ((/* implicit */unsigned char) (signed char)100);
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) min((min(((-(arr_3 [9ULL]))), (((/* implicit */unsigned long long int) ((long long int) (_Bool)0))))), (((/* implicit */unsigned long long int) max((arr_0 [i_0 + 1]), (((/* implicit */unsigned short) max(((short)7584), (((/* implicit */short) (_Bool)1)))))))))))));
                    var_24 -= ((/* implicit */unsigned char) (((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)177))) : (4294967290U))) >= (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)8139)))))));
                }
            } 
        } 
    } 
}

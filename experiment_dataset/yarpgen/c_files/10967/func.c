/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10967
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
    for (long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */unsigned int) (~(((12828190099321174100ULL) >> (((var_1) - (5650163867326095657ULL)))))));
                arr_6 [i_0] = ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)7))) >= ((~(6081995628419734989LL))));
                arr_7 [i_0] = ((/* implicit */unsigned short) (+(3069780945U)));
            }
        } 
    } 
    var_12 = ((/* implicit */long long int) min((((/* implicit */unsigned int) max((((((/* implicit */_Bool) 1649685568)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) ((unsigned short) var_5)))))), (4294967295U)));
    /* LoopNest 3 */
    for (long long int i_2 = 0; i_2 < 19; i_2 += 3) 
    {
        for (signed char i_3 = 0; i_3 < 19; i_3 += 1) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    arr_16 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_4] |= ((/* implicit */int) arr_13 [i_2] [4ULL]);
                    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_4])) ? (((/* implicit */int) ((((/* implicit */_Bool) var_2)) && ((_Bool)0)))) : (((((/* implicit */int) arr_10 [i_2] [i_2])) << (((((/* implicit */int) (unsigned char)248)) - (232)))))))) && (var_6)));
                    arr_17 [i_2] [i_3] [i_4] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) (-(4156284207U))))) ? (((/* implicit */int) ((unsigned short) arr_11 [i_3]))) : (((/* implicit */int) max((((((/* implicit */long long int) ((/* implicit */int) (signed char)-66))) != (arr_11 [i_3]))), (((var_9) != (((/* implicit */unsigned long long int) var_2)))))))));
                    var_14 = ((/* implicit */_Bool) arr_3 [i_3] [(_Bool)1]);
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 19; i_5 += 2) 
                    {
                        for (unsigned long long int i_6 = 3; i_6 < 18; i_6 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned long long int) ((unsigned short) var_2));
                                var_16 = ((/* implicit */unsigned short) 2854699355400407806ULL);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}

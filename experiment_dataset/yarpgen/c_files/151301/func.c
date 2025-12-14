/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151301
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
    var_14 |= ((/* implicit */unsigned int) max((max((((/* implicit */int) min(((unsigned short)896), ((unsigned short)896)))), (((((/* implicit */int) (unsigned short)888)) ^ (((/* implicit */int) (_Bool)1)))))), (min((((/* implicit */int) var_10)), ((~(((/* implicit */int) (_Bool)1))))))));
    var_15 = ((/* implicit */unsigned long long int) max((var_15), (max((((/* implicit */unsigned long long int) var_2)), (max((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)64645))))), (137434759168ULL)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */signed char) ((_Bool) min(((~(((/* implicit */int) (unsigned short)65161)))), (((/* implicit */int) max((((/* implicit */unsigned short) (short)28643)), ((unsigned short)65179)))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        {
                            arr_13 [i_1] [i_1] [i_2] [i_3] [i_0] = ((/* implicit */unsigned char) (_Bool)0);
                            arr_14 [i_1] [i_1] = ((/* implicit */short) max((min((((/* implicit */long long int) max(((short)-28643), (((/* implicit */short) (_Bool)1))))), (323770330282620789LL))), (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 3487306772593220432LL))))) & (((/* implicit */int) (_Bool)1)))))));
                            var_17 = ((/* implicit */unsigned long long int) max((((((((/* implicit */_Bool) (unsigned short)47546)) && (((/* implicit */_Bool) -1455694531412513394LL)))) || ((!((_Bool)1))))), ((((!((_Bool)1))) && (((/* implicit */_Bool) 1455694531412513394LL))))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */short) 1045986752);
                arr_15 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) 25165824U);
                var_19 = ((/* implicit */int) ((((/* implicit */long long int) max((((/* implicit */int) max((((/* implicit */unsigned short) (short)-28644)), ((unsigned short)892)))), (((((/* implicit */_Bool) (signed char)-24)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))) > (max((4963442535772138965LL), (((/* implicit */long long int) (unsigned short)64633))))));
            }
        } 
    } 
}

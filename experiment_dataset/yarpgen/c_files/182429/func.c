/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182429
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
    var_15 = ((/* implicit */_Bool) (~((~(((long long int) 10434602956016232188ULL))))));
    var_16 = ((short) 1056141296);
    var_17 = ((/* implicit */unsigned long long int) ((_Bool) 1718878867U));
    var_18 = ((/* implicit */int) (-(((((/* implicit */_Bool) -1056141294)) ? (min((((/* implicit */unsigned long long int) (unsigned short)65535)), (8012141117693319428ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned int) min((((/* implicit */int) (unsigned short)19232)), ((-((+(((/* implicit */int) (unsigned short)27374))))))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 16; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        {
                            arr_10 [i_1] = ((/* implicit */unsigned int) ((max((arr_8 [i_1] [i_1] [i_2 + 2] [i_3] [i_1] [i_1]), (-2012448468))) ^ ((+(arr_8 [(_Bool)0] [(unsigned short)15] [(unsigned short)15] [i_2] [(unsigned short)15] [(_Bool)1])))));
                            arr_11 [(short)6] [i_1] [i_2] [(short)6] [i_2] [i_1] &= ((/* implicit */unsigned int) ((signed char) arr_3 [i_2 - 1] [i_2 + 2] [i_1]));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_4 = 0; i_4 < 18; i_4 += 2) 
                {
                    for (unsigned int i_5 = 0; i_5 < 18; i_5 += 1) 
                    {
                        {
                            arr_17 [i_0] [i_0] [i_1] [i_4] [i_1] [i_4] = ((/* implicit */unsigned long long int) ((short) ((signed char) 3689421394327176182LL)));
                            arr_18 [i_0] [i_1] [i_0] [i_5] = ((/* implicit */unsigned int) ((_Bool) (unsigned char)255));
                            arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = max(((~(-3689421394327176197LL))), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_4 [i_0] [i_0])), (9697272474118754889ULL)))) ? (arr_7 [i_0] [i_0] [(unsigned char)13]) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) 2561854885325088871LL)))))));
                        }
                    } 
                } 
                arr_20 [i_0] = ((/* implicit */int) (+((-(arr_7 [i_1] [i_1] [i_1])))));
            }
        } 
    } 
}

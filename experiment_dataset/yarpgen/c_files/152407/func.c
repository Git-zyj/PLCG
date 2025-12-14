/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152407
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
    var_11 = ((/* implicit */int) var_4);
    var_12 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)65535))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-28919)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-32758)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        {
                            arr_14 [i_0] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)0))));
                            arr_15 [i_0] [i_1] [i_2] [i_3] [7ULL] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_11 [i_0 - 2] [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 2])))))));
                        }
                    } 
                } 
                arr_16 [i_1] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) (signed char)103))) ? ((+(-5854069655852237720LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 - 2]))))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned short) var_6);
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102777
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
    for (long long int i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */_Bool) ((unsigned long long int) (-(((/* implicit */int) (signed char)-11)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        {
                            arr_11 [i_1] = ((unsigned short) (signed char)3);
                            var_17 = ((/* implicit */_Bool) (short)-31841);
                            arr_12 [i_0 + 2] [i_0] [i_1] [i_1] [i_2] [i_3] = ((((((((arr_0 [i_1]) + (9223372036854775807LL))) << (((((/* implicit */int) (unsigned short)14649)) - (14649))))) ^ (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)8086), (((/* implicit */unsigned short) (signed char)23)))))))) >= (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned short)50896)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) min((1169477146), (((/* implicit */int) (signed char)96))))) : (((arr_6 [i_3]) | (((/* implicit */unsigned int) 1315635836))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) ((int) var_10));
    var_19 = ((/* implicit */_Bool) var_3);
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((int) (signed char)23)) | (((/* implicit */int) ((short) -6527205840969310170LL)))))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)14654)) + (((/* implicit */int) var_11))))) : (((long long int) ((((/* implicit */unsigned long long int) 2044)) / (14025243364585390448ULL))))));
}

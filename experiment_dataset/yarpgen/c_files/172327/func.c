/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172327
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
    for (signed char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) max((((/* implicit */unsigned short) (signed char)-9)), (var_15)))), (((511LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)55157)))))))) ? (var_12) : (((/* implicit */int) (unsigned char)250))));
                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)10378))))) ? (((((/* implicit */_Bool) (unsigned char)4)) ? (1363284383) : (-1))) : (((/* implicit */int) ((max((((/* implicit */int) (unsigned short)10371)), (1512066408))) < (((/* implicit */int) var_1)))))));
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 12; i_2 += 3) 
                {
                    for (int i_3 = 1; i_3 < 14; i_3 += 2) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned long long int) max((var_21), ((~(max((549755813887ULL), (((/* implicit */unsigned long long int) ((var_18) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)55156))))))))))));
                            arr_11 [i_1] [i_3] [i_2] [i_3] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((int) arr_6 [i_0])) == ((+(((/* implicit */int) (_Bool)1)))))))));
                            arr_12 [i_0] [i_0] [(unsigned char)0] [14] [i_2] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (2142181191367691577LL) : (((/* implicit */long long int) var_12))))) ? (((/* implicit */long long int) 4294967295U)) : ((~(max((((/* implicit */long long int) 2533950093U)), (4397912293376LL)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 2533950093U)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)188)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_17))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_13))) <= (var_14)))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_11))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) var_0)), (var_1))))) + (((((/* implicit */_Bool) (signed char)71)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (18446744073709551615ULL)))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186585
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
    var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) (+(((/* implicit */int) (signed char)22)))))));
    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((((/* implicit */_Bool) var_1)) ? (((12031982369915651728ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) var_5)), (var_2)))) ? (((/* implicit */long long int) 1U)) : (((((/* implicit */_Bool) var_9)) ? (var_0) : (((/* implicit */long long int) var_2))))))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                var_18 -= ((/* implicit */unsigned int) (-(arr_1 [i_0])));
                arr_6 [i_0 + 1] [i_0 + 1] = ((/* implicit */unsigned char) 6227682335314139114LL);
                /* LoopNest 2 */
                for (unsigned char i_2 = 2; i_2 < 19; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 21; i_3 += 4) 
                    {
                        {
                            var_19 += ((/* implicit */signed char) (unsigned short)0);
                            var_20 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) (short)10698)) ? (((/* implicit */int) (unsigned short)65527)) : (((/* implicit */int) (_Bool)0))))) ^ (((long long int) 3804013787479966083LL))));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (short i_4 = 2; i_4 < 20; i_4 += 3) 
                            {
                                var_21 = ((/* implicit */long long int) min((var_21), (((long long int) (unsigned char)155))));
                                var_22 = ((/* implicit */unsigned int) (-(((var_0) & (var_0)))));
                                var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) (unsigned short)8))));
                            }
                        }
                    } 
                } 
                var_24 = var_7;
                arr_16 [i_1] [18ULL] [18ULL] = ((/* implicit */long long int) arr_1 [i_0]);
            }
        } 
    } 
}

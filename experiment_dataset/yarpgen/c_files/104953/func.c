/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104953
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
    var_14 = ((/* implicit */long long int) ((var_11) ? (((/* implicit */unsigned long long int) min(((~(((/* implicit */int) var_8)))), (((/* implicit */int) var_4))))) : (var_10)));
    var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((((((/* implicit */_Bool) (+(((/* implicit */int) var_11))))) ? (((/* implicit */int) max((((/* implicit */signed char) var_0)), (var_6)))) : (((/* implicit */int) (unsigned short)10233)))) << (((var_3) - (678618582735879213LL))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((+(((/* implicit */int) arr_1 [i_0])))) >> (((-127515968) + (127515979)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) var_11)), ((unsigned short)65535))))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) arr_1 [i_0])))))));
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_17 *= ((/* implicit */long long int) (((+(((/* implicit */int) arr_2 [i_4] [i_4] [i_4])))) >= (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
                                var_18 += ((/* implicit */_Bool) ((int) (signed char)-67));
                                arr_10 [i_1] [i_1] = ((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_2] [i_1]);
                                var_19 -= ((/* implicit */unsigned char) var_13);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}

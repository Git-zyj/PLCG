/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111702
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
    for (long long int i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */int) max((var_11), (((/* implicit */int) (-((-((~(-3173452123629101508LL))))))))));
                var_12 = ((/* implicit */_Bool) var_9);
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        {
                            var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) ((((/* implicit */_Bool) -351932026)) ? (2147483634) : (((/* implicit */int) (unsigned char)96)))))));
                            var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) ((((((((/* implicit */_Bool) (unsigned short)18358)) ? (((/* implicit */int) (unsigned char)70)) : (((/* implicit */int) (signed char)-113)))) << ((((~(var_9))) - (7064279828003505125ULL))))) ^ (((/* implicit */int) var_10)))))));
                            var_15 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)1))));
                        }
                    } 
                } 
                var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) min((min(((unsigned char)240), ((unsigned char)95))), (((/* implicit */unsigned char) ((signed char) -2147483634))))))));
                var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) var_1))));
            }
        } 
    } 
    var_18 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) var_0))))) : (962819458U)));
}

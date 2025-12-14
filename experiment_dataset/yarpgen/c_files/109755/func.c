/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109755
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
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        for (signed char i_1 = 3; i_1 < 7; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    arr_11 [i_0] [i_2] = ((/* implicit */signed char) (~(max((4902306438966412436LL), (max((((/* implicit */long long int) (signed char)-1)), (4902306438966412436LL)))))));
                    var_10 += ((/* implicit */long long int) ((((/* implicit */int) (signed char)0)) != (((/* implicit */int) (signed char)-9))));
                    var_11 = ((/* implicit */unsigned char) ((int) ((((/* implicit */long long int) 1631234613)) / (max((((/* implicit */long long int) (signed char)-56)), (4902306438966412436LL))))));
                    var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) ((((/* implicit */_Bool) 722838245U)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-24)))))) : (((((/* implicit */_Bool) (signed char)34)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-4902306438966412415LL))))))));
                    var_13 *= ((/* implicit */long long int) ((((((/* implicit */_Bool) 17382397795213646590ULL)) ? (((((/* implicit */_Bool) (signed char)-30)) ? (17382397795213646575ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)5792))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)13))))) >= (((/* implicit */unsigned long long int) max(((+(-1812796938))), (((/* implicit */int) (unsigned char)10)))))));
                }
            } 
        } 
    } 
    var_14 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) (unsigned char)75)) ? (((/* implicit */int) (signed char)9)) : (((/* implicit */int) (signed char)-38)))))) ? ((-(((/* implicit */int) (!(((/* implicit */_Bool) 1781240117))))))) : ((((_Bool)0) ? (((/* implicit */int) (signed char)-24)) : (((/* implicit */int) (unsigned char)248))))));
    var_15 = (~(1064346278495905055ULL));
}

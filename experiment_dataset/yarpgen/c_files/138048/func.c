/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138048
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
    for (short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_1] [2LL] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((7377023213024740933ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))));
                var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) (!(((((/* implicit */_Bool) ((((/* implicit */_Bool) -249863504)) ? (((/* implicit */int) (unsigned char)91)) : (((/* implicit */int) (unsigned short)61065))))) || (((/* implicit */_Bool) (unsigned char)103)))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 2) 
    {
        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) 1028300522U)), (-6945987806544008211LL)))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (_Bool)1))))) : (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)94)), ((unsigned short)56529))))));
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 923285123U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)59)))))) : ((+((+(18446744073709551615ULL)))))));
    }
}

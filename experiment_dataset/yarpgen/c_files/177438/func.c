/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177438
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
    for (long long int i_0 = 3; i_0 < 9; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                var_10 = max((((long long int) (signed char)-102)), (max((var_8), (389252045916349532LL))));
                /* LoopNest 3 */
                for (long long int i_2 = 3; i_2 < 8; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        for (long long int i_4 = 1; i_4 < 7; i_4 += 2) 
                        {
                            {
                                var_11 = ((/* implicit */signed char) (unsigned short)15);
                                var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) min((((/* implicit */int) ((((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_2 [i_1])))) || ((!(((/* implicit */_Bool) var_4))))))), (((((/* implicit */int) arr_15 [i_0 - 2] [i_4 + 1] [i_4 + 1] [i_3] [i_3] [i_4])) - (((/* implicit */int) (unsigned short)65527)))))))));
                                var_13 &= ((unsigned short) var_4);
                            }
                        } 
                    } 
                } 
                var_14 *= ((/* implicit */signed char) max((((((8222775862332184706LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65517))))) % (((/* implicit */long long int) ((/* implicit */int) (unsigned short)15))))), (-2943327686295279555LL)));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) << (((((((/* implicit */_Bool) (unsigned short)65535)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)64378))))) + (6498235260091922104LL)))))) ? (((/* implicit */int) (unsigned short)23004)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (var_5) : (var_1)))) ? (((((/* implicit */int) (unsigned short)65503)) + (((/* implicit */int) (signed char)-45)))) : (((/* implicit */int) var_2))))));
}

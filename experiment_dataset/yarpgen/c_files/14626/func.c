/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14626
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
    var_15 = var_1;
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((1653527820912260645LL) << (((3730389169U) - (3730389168U)))))) ? (((/* implicit */int) (unsigned short)1792)) : (((/* implicit */int) (signed char)127))));
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-127)) ? (8157266222485960677LL) : (((/* implicit */long long int) 1647029682U))));
        var_16 = ((/* implicit */unsigned int) arr_1 [i_0]);
    }
    for (long long int i_1 = 0; i_1 < 25; i_1 += 1) 
    {
        var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -5280801510953554485LL)) ? (-8157266222485960677LL) : (((/* implicit */long long int) 1402872011U))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -1464844238)) ? (((/* implicit */int) (signed char)-121)) : (((/* implicit */int) (unsigned short)41091))))) : (8157266222485960689LL))))));
        var_18 = ((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned short)4226)), (-8157266222485960683LL)))), (((((/* implicit */_Bool) -4349405416227014498LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)19981))) : (var_5))))) > (((/* implicit */unsigned long long int) -1827539304094521415LL))));
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 25; i_2 += 3) 
        {
            for (long long int i_3 = 3; i_3 < 23; i_3 += 2) 
            {
                {
                    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)20))))) ? (max((((/* implicit */long long int) (((_Bool)1) ? (-569996530) : (((/* implicit */int) (unsigned char)42))))), (-8157266222485960679LL))) : (max((((/* implicit */long long int) min((((/* implicit */int) var_12)), (arr_11 [i_1] [i_2] [i_3] [i_3])))), (8157266222485960677LL)))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_4 = 1; i_4 < 23; i_4 += 1) 
                    {
                        var_20 = (~(1827539304094521414LL));
                        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)59605)) && (((/* implicit */_Bool) arr_7 [i_1]))));
                    }
                }
            } 
        } 
    }
}

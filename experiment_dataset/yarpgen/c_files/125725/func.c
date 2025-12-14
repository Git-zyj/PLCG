/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125725
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
    var_18 = ((/* implicit */int) -18LL);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                arr_4 [16ULL] &= ((/* implicit */long long int) max((((((/* implicit */_Bool) max((-5716889320076186727LL), (-18LL)))) ? (((((/* implicit */_Bool) (unsigned short)63029)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)38983))) : (16ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)11717))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((short)-18336), (((/* implicit */short) (_Bool)0))))) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) (short)-13817)), (4294967295U)))) : (-942988865705262528LL))))));
                arr_5 [i_0] [i_0] = ((/* implicit */short) (_Bool)0);
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) max((max((max((16ULL), (((/* implicit */unsigned long long int) (signed char)-31)))), (((/* implicit */unsigned long long int) max((((/* implicit */short) (_Bool)1)), ((short)17748)))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (signed char)30)), (4294967295U))))));
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 2) 
    {
        for (short i_3 = 1; i_3 < 11; i_3 += 1) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 1) 
                {
                    var_20 = ((/* implicit */unsigned short) 4105041884U);
                    var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)37489)) ? (13132001580530885810ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-31)))))) ? (((((/* implicit */_Bool) 4LL)) ? (((/* implicit */int) (signed char)-48)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (unsigned char)0)))))));
                }
                for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 2) 
                {
                    var_22 = ((/* implicit */signed char) 5879298691990768707LL);
                    var_23 = ((/* implicit */unsigned int) max((max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) 0U)), (-20LL)))), (max((((/* implicit */unsigned long long int) (unsigned short)4532)), (11417497927239805737ULL))))), (((/* implicit */unsigned long long int) (short)15061))));
                }
                arr_19 [i_3] [11ULL] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((max((((/* implicit */int) (short)3204)), (908745598))), (((((/* implicit */_Bool) -3LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)30968))))))), (7527143898224980540ULL)));
                arr_20 [i_3] = ((/* implicit */short) max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)37489)))), (((((/* implicit */_Bool) (signed char)-102)) ? (-3637290045869669750LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-54)))))))), (max((max((16061536696993244807ULL), (((/* implicit */unsigned long long int) (short)30949)))), (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (signed char)30)) : (((/* implicit */int) (short)30957)))))))));
            }
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171256
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 19; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) var_15))));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 3; i_2 < 17; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        for (short i_4 = 2; i_4 < 16; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) max((min((((/* implicit */unsigned int) ((signed char) var_14))), (max((((/* implicit */unsigned int) var_7)), (1247274338U))))), (((/* implicit */unsigned int) ((max((((/* implicit */int) var_10)), (var_6))) >= (((/* implicit */int) (unsigned char)228))))))))));
                                var_18 = ((/* implicit */unsigned long long int) 1247274338U);
                                arr_13 [i_1] [i_1] [i_1] [i_1 - 4] [i_1 - 4] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) max((((/* implicit */signed char) var_0)), ((signed char)11))))) == (((((/* implicit */int) (unsigned short)65519)) * (((/* implicit */int) min((((/* implicit */unsigned short) arr_5 [i_0] [i_1])), ((unsigned short)37718))))))));
                            }
                        } 
                    } 
                } 
                arr_14 [i_1] [(_Bool)1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65523))) <= (((((/* implicit */_Bool) ((unsigned short) var_12))) ? (arr_8 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)31)))))));
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) ((long long int) ((unsigned int) var_3)));
    var_20 = ((/* implicit */int) var_11);
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)30)) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)26455)) : (var_9))) : (-1505657494)))) ? (((((4294967290U) << (((var_4) - (1510584526))))) >> ((((~(var_12))) - (1756012906U))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))));
    var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) (unsigned char)47))));
}

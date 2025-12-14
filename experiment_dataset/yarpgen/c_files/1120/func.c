/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1120
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
    var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_11)), (var_10)))) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (unsigned char)206))))), (max((max((((/* implicit */unsigned long long int) var_0)), (var_12))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_11))))))))))));
    var_20 *= ((/* implicit */unsigned char) (((+((~(1920967124))))) | (((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? ((-(((/* implicit */int) var_6)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((short) (+(((/* implicit */int) var_14))))))));
        arr_4 [i_0] = ((/* implicit */_Bool) ((signed char) var_1));
    }
    /* LoopNest 2 */
    for (unsigned short i_1 = 1; i_1 < 11; i_1 += 1) 
    {
        for (unsigned long long int i_2 = 2; i_2 < 9; i_2 += 1) 
        {
            {
                var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(3718560104U)))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)29370)), (17974986951241327463ULL)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_15))))) : (min((((/* implicit */unsigned long long int) var_15)), (2199023255551ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_9)) ? (14236876054700515865ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))))))))));
                arr_10 [i_1] = ((/* implicit */unsigned char) min(((+(-1920967125))), ((-(((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) (unsigned short)9505)))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned short) 5012465036125527016LL);
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168467
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
    var_10 = ((/* implicit */unsigned long long int) min((var_10), (((/* implicit */unsigned long long int) ((max((min((((/* implicit */long long int) 0U)), (-2273102050552348954LL))), (((/* implicit */long long int) ((_Bool) 2273102050552348958LL))))) / (((/* implicit */long long int) (~(((/* implicit */int) (signed char)47))))))))));
    var_11 -= ((/* implicit */signed char) max((((/* implicit */long long int) var_1)), ((-(var_7)))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_12 *= ((/* implicit */unsigned int) (+(arr_1 [i_0] [i_0])));
        arr_3 [i_0] [i_0] = (unsigned char)67;
        arr_4 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((arr_0 [i_0]), (arr_0 [i_0]))))));
        var_13 = ((/* implicit */unsigned short) var_8);
        arr_5 [i_0] = ((/* implicit */short) max((((long long int) 2817675915U)), (((/* implicit */long long int) (+((~(((/* implicit */int) var_0)))))))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_1 = 1; i_1 < 21; i_1 += 4) 
    {
        arr_9 [i_1] [(_Bool)1] |= ((/* implicit */short) arr_8 [i_1] [i_1]);
        arr_10 [i_1] = ((/* implicit */long long int) var_6);
    }
    for (short i_2 = 0; i_2 < 13; i_2 += 3) 
    {
        arr_13 [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_2 [i_2])), (-8518629270359697853LL)))) ? (((/* implicit */int) max((arr_2 [i_2]), (arr_2 [i_2])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_2])))))));
        /* LoopNest 3 */
        for (unsigned char i_3 = 0; i_3 < 13; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 1) 
            {
                for (unsigned int i_5 = 0; i_5 < 13; i_5 += 2) 
                {
                    {
                        var_14 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (2250273965U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)66)))))) ? (((/* implicit */long long int) max((2044693323U), (((/* implicit */unsigned int) (signed char)3))))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) (short)0))) : (8518629270359697866LL)))))) ? ((~(((/* implicit */int) (unsigned char)53)))) : (((/* implicit */int) (signed char)-67))));
                        var_15 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 3168649891U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_3] [i_3] [i_2]))) : (arr_1 [i_2] [i_2]))) + (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1)))))))) ? ((~(((/* implicit */int) (short)4439)))) : (((/* implicit */int) (unsigned char)12))));
                    }
                } 
            } 
        } 
    }
    var_16 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (+(var_4)))) ? (var_9) : (((/* implicit */unsigned long long int) var_7))))));
}

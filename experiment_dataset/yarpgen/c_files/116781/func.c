/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116781
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 14; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    arr_6 [(signed char)10] [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned short)27687)) ? (2521719604578127200ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)28))))), (((/* implicit */unsigned long long int) (signed char)28))))) ? (((/* implicit */int) (unsigned short)32766)) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (var_17) : (var_17)))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_3 = 4; i_3 < 14; i_3 += 4) 
                    {
                        var_19 -= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-32))) - (var_12)));
                        arr_10 [i_2] [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)32770)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_3 [1ULL])))) | (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)66)))))));
                        var_20 *= ((((4094533610985465705ULL) << (((((/* implicit */int) arr_5 [(signed char)13] [i_2] [7ULL] [i_0])) - (44486))))) << (((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (signed char)-29)) : (((/* implicit */int) (signed char)72)))) + (57))));
                    }
                    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) 1684072225934601386ULL)) ? (((/* implicit */int) (signed char)-98)) : (((/* implicit */int) (unsigned short)62331)))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 1) 
                    {
                        for (signed char i_5 = 0; i_5 < 16; i_5 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned short) (!((((+(((/* implicit */int) arr_12 [i_0] [i_2] [i_0])))) < (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_5 [i_0] [(signed char)4] [i_0] [i_0])) : (((/* implicit */int) (signed char)-28))))))));
                                arr_16 [i_0] [i_4] [i_2] [i_2] [i_2] [i_4] = ((/* implicit */signed char) ((unsigned long long int) var_17));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)65051))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */signed char) ((((/* implicit */int) var_11)) ^ (min(((~(((/* implicit */int) var_11)))), (((/* implicit */int) ((signed char) var_8)))))));
    var_25 = var_7;
}

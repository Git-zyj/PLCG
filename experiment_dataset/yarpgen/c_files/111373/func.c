/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111373
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((var_9) * (18340617633217351976ULL))) >> (((((/* implicit */int) (signed char)8)) >> (((var_9) - (8232680320173208615ULL)))))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((((/* implicit */int) ((signed char) (unsigned char)48))) == ((~(((/* implicit */int) var_14))))))))))));
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (min(((+(230248695))), (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)28)), ((unsigned char)92)))))) : (((/* implicit */int) (signed char)-9))));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 14; i_1 += 4) 
    {
        for (unsigned char i_2 = 1; i_2 < 11; i_2 += 4) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (int i_4 = 0; i_4 < 14; i_4 += 4) 
                    {
                        {
                            arr_13 [i_1] [i_2] = ((/* implicit */int) var_16);
                            var_19 += ((/* implicit */int) min((((/* implicit */unsigned int) ((min((((/* implicit */unsigned int) (signed char)-9)), (3762660653U))) == ((~(var_15)))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned short) (signed char)12)), (var_0)))) ? (min((((/* implicit */unsigned int) var_16)), (var_15))) : ((+(var_15)))))));
                            var_20 *= ((/* implicit */unsigned int) max((2147483647), ((-(((/* implicit */int) ((signed char) -2147483639)))))));
                        }
                    } 
                } 
                arr_14 [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) max((max((var_11), (((/* implicit */int) (signed char)15)))), (min((12958271), (226664468)))))), (min((((/* implicit */unsigned int) ((((/* implicit */int) var_7)) >= (((/* implicit */int) (signed char)-103))))), (((unsigned int) (unsigned char)198))))));
            }
        } 
    } 
    var_21 *= ((/* implicit */short) ((unsigned char) min((((/* implicit */unsigned int) max((2147483647), (((/* implicit */int) (unsigned char)29))))), (min((((/* implicit */unsigned int) (signed char)-8)), (var_15))))));
    var_22 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) max((((var_11) + (((/* implicit */int) var_5)))), (((/* implicit */int) (unsigned short)11020))))) < (min((((/* implicit */unsigned long long int) var_1)), (var_9)))));
    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (signed char)34)))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) var_16))))), (min((((/* implicit */unsigned long long int) var_15)), (var_9))))))));
}

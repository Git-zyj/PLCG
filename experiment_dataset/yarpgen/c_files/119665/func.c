/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119665
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
    var_12 = ((/* implicit */short) ((max((min((var_7), (((/* implicit */int) var_6)))), (((/* implicit */int) (signed char)-1)))) == (((/* implicit */int) var_11))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_13 ^= ((/* implicit */unsigned int) var_9);
        var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 981255043241673148ULL)) ? (((/* implicit */int) (unsigned char)0)) : (((((/* implicit */_Bool) (signed char)-12)) ? (min((2113592028), (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) min((var_2), ((_Bool)0)))))))))));
    }
    for (unsigned short i_1 = 0; i_1 < 14; i_1 += 4) 
    {
        var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) ((unsigned short) 18446744073709551613ULL)))));
        var_16 = ((long long int) 2147483647);
    }
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 19; i_2 += 4) 
    {
        for (int i_3 = 0; i_3 < 19; i_3 += 2) 
        {
            {
                var_17 = ((/* implicit */int) min((((/* implicit */unsigned int) (_Bool)1)), (657641229U)));
                var_18 |= ((/* implicit */unsigned char) var_4);
                var_19 *= ((/* implicit */signed char) 1371539057);
                var_20 = ((/* implicit */long long int) min((2ULL), (((/* implicit */unsigned long long int) (+(arr_11 [i_2]))))));
                var_21 = ((/* implicit */long long int) (-(-2147483637)));
            }
        } 
    } 
    var_22 &= ((/* implicit */unsigned int) var_0);
    var_23 = ((((/* implicit */_Bool) 2ULL)) ? ((+(var_10))) : (min((((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)47328)) : (((/* implicit */int) var_11))))), (min((var_10), (((/* implicit */long long int) var_9)))))));
}

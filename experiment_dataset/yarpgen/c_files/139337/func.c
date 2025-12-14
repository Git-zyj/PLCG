/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139337
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
    var_13 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)42297)) ? (1659079557U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)58591))))))));
    var_14 = ((/* implicit */unsigned long long int) var_8);
    /* LoopSeq 4 */
    for (unsigned int i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        var_15 = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_1 [i_0 + 1]), (((/* implicit */int) var_3))))) ? (min((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)58591))) / (var_1))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) var_12)) / (var_6)))))) : (max((max((((/* implicit */unsigned long long int) (unsigned short)58571)), (var_1))), (((/* implicit */unsigned long long int) ((var_4) / (((/* implicit */int) (signed char)45)))))))));
        var_16 ^= ((/* implicit */int) ((max((14088301153597572474ULL), (((/* implicit */unsigned long long int) ((int) -1732826399))))) - (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0])) * (((/* implicit */int) arr_0 [i_0 + 1])))))));
    }
    for (int i_1 = 0; i_1 < 15; i_1 += 3) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (short)17479)), (2558425497990311825LL)));
        var_18 -= ((unsigned int) (unsigned short)24600);
        arr_4 [i_1] = ((/* implicit */int) min((2492588047U), (((/* implicit */unsigned int) 1537442757))));
        arr_5 [i_1] = ((/* implicit */unsigned char) (+(min((((/* implicit */int) (unsigned char)211)), (arr_2 [i_1])))));
        /* LoopSeq 1 */
        for (int i_2 = 1; i_2 < 13; i_2 += 1) 
        {
            var_19 = (-(4432470155180164281ULL));
            var_20 *= ((/* implicit */unsigned char) ((int) var_3));
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 15; i_3 += 3) /* same iter space */
    {
        var_21 *= ((/* implicit */unsigned char) (~(((((/* implicit */unsigned long long int) var_8)) ^ (var_5)))));
        var_22 |= ((/* implicit */unsigned int) (-(var_12)));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 15; i_4 += 3) /* same iter space */
    {
        arr_14 [i_4] [i_4] = ((/* implicit */unsigned long long int) ((int) (+(var_4))));
        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)22023)) || (((/* implicit */_Bool) var_11))));
        var_24 = ((/* implicit */int) ((unsigned char) -1732826378));
    }
}

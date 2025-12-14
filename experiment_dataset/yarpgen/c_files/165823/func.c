/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165823
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
    var_19 = ((/* implicit */signed char) ((unsigned int) ((signed char) (-(((/* implicit */int) var_7))))));
    var_20 = ((/* implicit */unsigned short) (signed char)88);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_21 = ((/* implicit */signed char) ((-3068866084145369314LL) % (((/* implicit */long long int) ((/* implicit */int) (unsigned char)96)))));
        arr_4 [i_0] = ((min((((/* implicit */unsigned int) arr_0 [i_0])), (min((var_14), (((/* implicit */unsigned int) var_7)))))) << (((((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (var_10))) - (759318765))));
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 23; i_1 += 4) /* same iter space */
        {
            arr_8 [i_0] [i_1] [(signed char)22] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)65515)) ? (0ULL) : (((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_13)))) ^ (min((18446744073709551613ULL), (((/* implicit */unsigned long long int) -3068866084145369314LL))))))));
            var_22 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) max((3068866084145369323LL), (((/* implicit */long long int) var_11))))))))));
            var_23 += ((/* implicit */unsigned char) ((unsigned long long int) ((short) var_15)));
        }
        for (long long int i_2 = 0; i_2 < 23; i_2 += 4) /* same iter space */
        {
            arr_11 [i_0] [i_0] = max((((/* implicit */unsigned int) (unsigned short)52155)), (1154062733U));
            arr_12 [i_0] [i_0] = ((/* implicit */unsigned char) ((min((max((18446744073709551615ULL), (((/* implicit */unsigned long long int) 1839326247U)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_6 [i_0] [(unsigned short)7] [(signed char)3]))))))) <= (((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) 213340725))) % (((/* implicit */int) (signed char)127)))))));
            arr_13 [i_0] = ((/* implicit */unsigned long long int) ((max((((((/* implicit */_Bool) var_5)) ? (193760251) : (var_18))), (((/* implicit */int) var_11)))) - ((+(((/* implicit */int) ((signed char) -723165905)))))));
        }
        var_24 |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 4160891955381300327LL))));
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126399
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
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_0 [i_0] [(_Bool)1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)229))) : (var_9))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_1 [i_0])))));
        arr_3 [i_0] = ((/* implicit */unsigned int) max(((unsigned short)20880), (((/* implicit */unsigned short) var_2))));
        var_13 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_7)) ? (arr_1 [i_0]) : (arr_1 [i_0]))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))));
        arr_4 [i_0] &= ((/* implicit */long long int) arr_0 [i_0] [i_0]);
    }
    for (long long int i_1 = 0; i_1 < 21; i_1 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 19; i_2 += 1) 
        {
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                for (unsigned int i_4 = 0; i_4 < 21; i_4 += 1) 
                {
                    {
                        arr_16 [i_1] [i_1] [i_3] [i_1] [i_4] &= ((/* implicit */unsigned short) var_9);
                        var_14 = ((/* implicit */unsigned int) max((var_14), (((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)3)) ? (((/* implicit */int) (signed char)3)) : (((/* implicit */int) (unsigned short)20880))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_1] [i_1] [i_3] [i_4])) ? ((-2147483647 - 1)) : (((/* implicit */int) (_Bool)1))))) : (max((((/* implicit */unsigned int) (unsigned char)195)), (var_12)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (((unsigned int) arr_8 [i_1] [i_3 - 1] [i_1]))))));
                        arr_17 [i_1] [i_2 - 2] [i_3] [i_4] [i_1] |= (!(((/* implicit */_Bool) max((var_11), (((/* implicit */unsigned long long int) (_Bool)1))))));
                        arr_18 [i_2] = ((/* implicit */signed char) ((((/* implicit */unsigned int) (~(((/* implicit */int) ((var_3) >= (((/* implicit */unsigned long long int) var_6)))))))) < (((unsigned int) ((var_2) ? (((/* implicit */int) var_2)) : (15))))));
                        arr_19 [i_2] = ((/* implicit */_Bool) ((unsigned int) ((int) ((((/* implicit */_Bool) var_4)) ? (1272402621U) : (4294967295U)))));
                    }
                } 
            } 
        } 
        arr_20 [i_1] = ((/* implicit */unsigned int) (-((~(((/* implicit */int) var_5))))));
        var_15 = ((/* implicit */short) var_6);
        var_16 ^= ((/* implicit */unsigned short) ((max((((/* implicit */unsigned long long int) -2147483646)), (arr_13 [i_1] [i_1] [i_1] [i_1]))) << (((max((((((/* implicit */_Bool) var_8)) ? (2737480796299557376ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))), (((/* implicit */unsigned long long int) ((unsigned char) arr_8 [i_1] [i_1] [i_1]))))) - (2737480796299557370ULL)))));
        arr_21 [i_1] &= ((/* implicit */unsigned char) arr_14 [i_1] [i_1] [i_1] [i_1] [i_1]);
    }
    var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((unsigned int) ((unsigned char) ((((/* implicit */_Bool) 3286347089U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (7284281858236700725ULL))))))));
}

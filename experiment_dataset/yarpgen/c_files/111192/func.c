/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111192
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
    var_10 = ((/* implicit */signed char) ((((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) + (var_1))) != (var_5)));
    var_11 = ((/* implicit */unsigned short) ((((long long int) var_1)) >= (var_2)));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        var_12 |= (!(((((/* implicit */_Bool) (unsigned short)25054)) && (((/* implicit */_Bool) arr_3 [i_0])))));
        var_13 = ((/* implicit */unsigned short) (~(var_2)));
        var_14 = ((/* implicit */unsigned char) ((arr_0 [i_0] [i_0 + 3]) << (((arr_0 [i_0] [i_0 - 1]) - (3010800464442998395ULL)))));
    }
    for (unsigned char i_1 = 0; i_1 < 17; i_1 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned short i_2 = 2; i_2 < 14; i_2 += 1) 
        {
            for (signed char i_3 = 2; i_3 < 15; i_3 += 3) 
            {
                for (unsigned short i_4 = 3; i_4 < 14; i_4 += 3) 
                {
                    {
                        var_15 += ((/* implicit */signed char) min((0ULL), (((/* implicit */unsigned long long int) -1328628377800941317LL))));
                        var_16 = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_13 [i_1])) ? (((((/* implicit */_Bool) -1328628377800941319LL)) ? (1328628377800941316LL) : (((/* implicit */long long int) 4294967295U)))) : (((((/* implicit */_Bool) var_6)) ? (1328628377800941324LL) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1]))))))), (((/* implicit */long long int) arr_4 [11ULL] [i_1]))));
                    }
                } 
            } 
        } 
        var_17 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) 4294967295U)))) ? (((/* implicit */long long int) ((((_Bool) -5881469175469535977LL)) ? (((/* implicit */int) arr_3 [i_1])) : ((~(((/* implicit */int) var_4))))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) arr_9 [i_1] [i_1] [i_1]))))) ? (((/* implicit */long long int) ((var_5) | (((/* implicit */int) (_Bool)1))))) : (1328628377800941316LL)))));
        var_18 = ((/* implicit */unsigned int) (unsigned short)40499);
    }
    for (long long int i_5 = 0; i_5 < 23; i_5 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_18 [i_5])))) ? ((~(arr_17 [i_5]))) : (var_0)));
        var_20 ^= ((/* implicit */unsigned int) (((_Bool)1) ? (var_0) : (((/* implicit */unsigned long long int) (~(arr_18 [i_5]))))));
    }
    for (long long int i_6 = 0; i_6 < 23; i_6 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned char) var_2);
        var_22 += ((/* implicit */unsigned long long int) (short)-32757);
    }
}

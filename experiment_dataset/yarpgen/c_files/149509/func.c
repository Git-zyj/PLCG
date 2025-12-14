/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149509
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
    var_14 = ((/* implicit */unsigned short) var_3);
    var_15 = ((/* implicit */short) ((min((var_3), (((((/* implicit */long long int) ((/* implicit */int) var_13))) > (var_6))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_5))))) > (((((/* implicit */_Bool) 124980789U)) ? (((/* implicit */unsigned long long int) -1)) : (18446744073709551615ULL))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        var_16 ^= ((/* implicit */int) arr_1 [i_0 + 2]);
        var_17 = ((/* implicit */unsigned short) ((long long int) ((unsigned short) var_6)));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 11; i_1 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) 124980789U)) ? (((/* implicit */int) arr_4 [i_1] [i_1 + 3])) : (((((/* implicit */int) var_2)) ^ (((/* implicit */int) var_5)))))))));
        /* LoopNest 2 */
        for (long long int i_2 = 1; i_2 < 13; i_2 += 4) 
        {
            for (signed char i_3 = 0; i_3 < 14; i_3 += 3) 
            {
                {
                    arr_13 [i_1] [i_2] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-85)) ? (((/* implicit */int) (signed char)77)) : (((/* implicit */int) (signed char)-41))));
                    var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_1 - 2] [i_1 + 2])) << (((var_6) - (6221182387056556004LL)))));
                }
            } 
        } 
        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (signed char)-67)) : (((/* implicit */int) arr_9 [i_1] [i_1] [i_1]))));
        arr_14 [i_1] = ((/* implicit */_Bool) ((short) 4169986485U));
    }
    for (int i_4 = 2; i_4 < 11; i_4 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) (~(14143992160179042193ULL)))) ? (((int) var_0)) : (((/* implicit */int) (unsigned char)69)))) : (((((/* implicit */_Bool) max(((unsigned char)161), (((/* implicit */unsigned char) (_Bool)1))))) ? (((/* implicit */int) (unsigned char)210)) : (((/* implicit */int) (short)5429))))));
        var_22 = ((/* implicit */short) max((((((((/* implicit */int) var_2)) > (((/* implicit */int) var_10)))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)74)), ((unsigned short)65511)))) : (((/* implicit */int) var_1)))), (((/* implicit */int) (!(((/* implicit */_Bool) (short)(-32767 - 1))))))));
    }
}

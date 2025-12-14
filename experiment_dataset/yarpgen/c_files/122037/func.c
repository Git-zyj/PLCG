/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122037
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
    var_17 = ((/* implicit */_Bool) min((var_17), (var_6)));
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_11)) >= (((/* implicit */int) min((var_2), ((short)-30986)))))))) != (((var_6) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)14336))) : (((unsigned long long int) var_4))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 4; i_0 < 9; i_0 += 2) /* same iter space */
    {
        arr_4 [2] = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_3 [i_0])), (var_15)))) && (((/* implicit */_Bool) max((((/* implicit */unsigned int) var_2)), (arr_2 [i_0])))))))));
        arr_5 [i_0] = ((/* implicit */signed char) ((var_1) + (((/* implicit */long long int) ((((/* implicit */int) var_10)) - (((/* implicit */int) arr_0 [i_0] [(short)6])))))));
        arr_6 [i_0] &= ((/* implicit */int) arr_2 [i_0]);
    }
    for (unsigned long long int i_1 = 4; i_1 < 9; i_1 += 2) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) - (min((1807391503), (((/* implicit */int) (unsigned short)14336))))))) ? (max(((+(((/* implicit */int) arr_0 [i_1] [i_1])))), (((/* implicit */int) var_10)))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) -3205883015208533369LL))))))));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 9; i_2 += 2) 
        {
            for (long long int i_3 = 2; i_3 < 11; i_3 += 2) 
            {
                {
                    var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-35)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_1 - 1] [i_2 + 2]))))))));
                    var_21 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) min((max((var_0), (((/* implicit */signed char) var_6)))), ((signed char)-12))))) < (min((var_15), (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_11)))))))));
                    arr_14 [(unsigned char)6] [(unsigned char)6] [i_1] &= ((/* implicit */unsigned short) 1879237474777903758ULL);
                }
            } 
        } 
    }
    /* vectorizable */
    for (signed char i_4 = 1; i_4 < 18; i_4 += 3) 
    {
        arr_18 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (unsigned short)14336)) - (14321)))));
        /* LoopNest 2 */
        for (signed char i_5 = 1; i_5 < 17; i_5 += 3) 
        {
            for (unsigned short i_6 = 0; i_6 < 19; i_6 += 1) 
            {
                {
                    var_22 = ((/* implicit */int) (!(((/* implicit */_Bool) var_14))));
                    var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_15 [i_5] [(_Bool)1])))) > (((/* implicit */int) var_2)))))));
                }
            } 
        } 
    }
    var_24 &= ((/* implicit */short) -2952876137102239641LL);
    var_25 = ((/* implicit */unsigned short) (((!((_Bool)0))) ? (((/* implicit */unsigned long long int) ((((-763384450658538367LL) != (((/* implicit */long long int) ((/* implicit */int) var_7))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))) : (max((4731281902217504996ULL), (((/* implicit */unsigned long long int) ((int) (short)21510)))))));
}

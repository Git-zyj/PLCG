/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114196
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
    for (unsigned char i_0 = 1; i_0 < 22; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) var_13);
        var_17 = ((/* implicit */unsigned short) arr_1 [i_0]);
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            var_18 ^= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((long long int) arr_2 [i_0]))) > (max((max((18446744073709551600ULL), (((/* implicit */unsigned long long int) (unsigned char)211)))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (unsigned char)96)), (var_15))))))));
            /* LoopNest 3 */
            for (long long int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                for (signed char i_3 = 0; i_3 < 24; i_3 += 3) 
                {
                    for (unsigned short i_4 = 0; i_4 < 24; i_4 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min(((unsigned char)252), (min(((unsigned char)136), ((unsigned char)252))))))));
                            var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)51478)) ? (((/* implicit */int) (unsigned char)101)) : (((/* implicit */int) (unsigned char)159))));
                            var_21 &= ((/* implicit */unsigned int) (+(max((9407028888889348158ULL), (((/* implicit */unsigned long long int) (unsigned char)157))))));
                        }
                    } 
                } 
            } 
            arr_16 [i_1] = ((/* implicit */signed char) max((((arr_15 [i_0] [i_0 + 2] [i_0] [i_0] [i_0 + 2] [i_1]) - (arr_15 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_1]))), (((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0] [i_0 + 2] [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)79))) : (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1])))));
        }
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)176))))) <= (((((/* implicit */_Bool) 9039715184820203458ULL)) ? (((/* implicit */int) (unsigned char)163)) : (((/* implicit */int) var_0))))));
    }
    for (unsigned char i_5 = 1; i_5 < 22; i_5 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 3) 
        {
            for (unsigned char i_7 = 0; i_7 < 24; i_7 += 3) 
            {
                for (unsigned char i_8 = 3; i_8 < 23; i_8 += 4) 
                {
                    {
                        var_23 = ((/* implicit */unsigned int) var_5);
                        var_24 = ((/* implicit */unsigned char) arr_1 [i_5]);
                    }
                } 
            } 
        } 
        var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) min((((((/* implicit */_Bool) arr_27 [i_5] [i_5] [i_5] [i_5 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_12))), (((/* implicit */unsigned int) max((var_5), (((/* implicit */unsigned short) (signed char)-31))))))))));
    }
    var_26 -= ((/* implicit */signed char) var_11);
    var_27 = ((/* implicit */unsigned char) var_16);
    var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)1)), ((unsigned char)132)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)79))) : ((+((+(3481589061U)))))));
}

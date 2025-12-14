/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109346
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
    for (unsigned int i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (long long int i_2 = 4; i_2 < 13; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */_Bool) min((((((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)103))) : (2492076085771746044LL))) / (((/* implicit */long long int) ((/* implicit */int) var_8))))), (var_11)));
                    var_15 = ((/* implicit */signed char) var_4);
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (int i_3 = 0; i_3 < 18; i_3 += 4) 
    {
        var_16 = ((/* implicit */_Bool) ((short) var_11));
        /* LoopNest 2 */
        for (signed char i_4 = 0; i_4 < 18; i_4 += 2) 
        {
            for (unsigned short i_5 = 2; i_5 < 15; i_5 += 3) 
            {
                {
                    var_17 = ((/* implicit */_Bool) arr_13 [i_3] [i_4] [i_3] [i_4]);
                    var_18 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65510))) | (14334499865702778435ULL)))))))));
                    var_19 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_8)) != (((((/* implicit */_Bool) arr_10 [i_3] [i_3] [i_5])) ? (((/* implicit */int) (unsigned short)65510)) : (arr_9 [i_3] [i_3]))))))) >= (((((/* implicit */_Bool) 4112244208006773181ULL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) -984325741570706807LL))))));
                    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((unsigned long long int) (!(((/* implicit */_Bool) arr_13 [i_4] [i_4] [16U] [i_5 - 2]))))))));
                    var_21 = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) 18446744073709551595ULL)) ? (((unsigned long long int) arr_14 [i_5 + 1] [i_4])) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_11 [1ULL])) : (((/* implicit */int) arr_11 [i_5]))))))));
                }
            } 
        } 
        var_22 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((2640740700U) < (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))) == (min((((/* implicit */unsigned long long int) arr_11 [i_3])), (var_1))))))));
    }
}

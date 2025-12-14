/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140014
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
    var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_1)) : (min(((+(((/* implicit */int) var_3)))), (((/* implicit */int) var_10))))));
    var_13 |= ((/* implicit */_Bool) var_0);
    /* LoopSeq 3 */
    for (long long int i_0 = 1; i_0 < 18; i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) var_5))));
                        var_15 = ((/* implicit */short) (((!(((/* implicit */_Bool) var_1)))) ? (var_5) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_11)))))));
                        var_16 = ((/* implicit */unsigned long long int) (+(var_2)));
                    }
                } 
            } 
        } 
        arr_10 [i_0] = ((unsigned short) min((var_8), (((/* implicit */long long int) ((((/* implicit */int) var_10)) < (((/* implicit */int) var_10)))))));
    }
    /* vectorizable */
    for (long long int i_4 = 1; i_4 < 18; i_4 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) < (((/* implicit */int) var_3))));
        arr_13 [i_4] = ((/* implicit */_Bool) (-(var_4)));
        arr_14 [i_4] [13ULL] = ((/* implicit */unsigned short) (~(var_6)));
        var_18 = ((/* implicit */signed char) ((unsigned long long int) var_6));
    }
    /* vectorizable */
    for (signed char i_5 = 0; i_5 < 23; i_5 += 4) 
    {
        var_19 = ((((/* implicit */_Bool) (~(var_6)))) ? (var_5) : (((/* implicit */unsigned long long int) var_2)));
        var_20 = ((/* implicit */long long int) (-(((/* implicit */int) var_10))));
        /* LoopSeq 2 */
        for (short i_6 = 0; i_6 < 23; i_6 += 4) 
        {
            var_21 = ((/* implicit */unsigned char) ((int) ((unsigned long long int) var_11)));
            var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1)))))));
            var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) (((+(((/* implicit */int) var_3)))) * (((/* implicit */int) var_9)))))));
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            var_24 -= ((/* implicit */signed char) (-(((/* implicit */int) var_7))));
            var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)231)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)25))) : (7243119339078758917ULL)));
        }
        var_26 = ((/* implicit */unsigned char) ((((long long int) var_8)) / (((/* implicit */long long int) ((/* implicit */int) var_1)))));
    }
}

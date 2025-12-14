/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115026
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
    var_14 |= ((/* implicit */signed char) var_13);
    var_15 = ((/* implicit */unsigned char) var_1);
    /* LoopNest 2 */
    for (signed char i_0 = 4; i_0 < 14; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] [i_1] = ((((/* implicit */_Bool) ((signed char) arr_2 [i_1 + 1] [i_0]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((14522973822753466253ULL), (arr_0 [i_0 - 2])))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_4))))) : (arr_4 [(signed char)6] [i_1 + 1] [i_0 + 3])))) : (max((((((/* implicit */_Bool) (unsigned char)14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) : (18336756514131931430ULL))), (((/* implicit */unsigned long long int) max((var_7), (((/* implicit */unsigned int) var_9))))))));
                var_16 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) : (arr_3 [i_0 + 2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (max((arr_1 [(signed char)11]), (14522973822753466253ULL))))) + (((((/* implicit */_Bool) arr_3 [i_0 + 2])) ? (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0 + 3] [i_0])) : (((((/* implicit */_Bool) (unsigned char)241)) ? (arr_0 [(short)4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0])))))))));
                var_17 = ((/* implicit */int) (!(max((((((/* implicit */int) (unsigned char)212)) >= (((/* implicit */int) (signed char)0)))), (((((/* implicit */int) (unsigned char)243)) <= (((/* implicit */int) (signed char)-104))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_2 = 0; i_2 < 20; i_2 += 1) 
    {
        var_18 *= ((/* implicit */unsigned char) var_2);
        /* LoopSeq 1 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((signed char) arr_8 [i_2] [i_2])))));
            var_20 = ((/* implicit */unsigned long long int) max((var_20), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)48)) ? (((/* implicit */int) (short)2047)) : (((/* implicit */int) arr_9 [i_2] [i_3]))))) : (((var_2) ? (arr_8 [(_Bool)1] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)1)))))))));
            var_21 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_8 [i_3] [i_3])))) ? (((/* implicit */int) arr_9 [i_2] [i_3])) : (((/* implicit */int) ((((/* implicit */int) arr_9 [6] [i_2])) != (((/* implicit */int) var_5)))))));
            arr_11 [i_2] [13] [i_3] = ((/* implicit */short) (+(((3923770250956085362ULL) + (arr_8 [i_2] [i_3])))));
            var_22 -= ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_7 [i_2] [i_2]))));
        }
        var_23 -= ((unsigned short) (+(((/* implicit */int) var_11))));
    }
}

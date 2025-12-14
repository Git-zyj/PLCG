/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188894
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
    var_16 = ((/* implicit */long long int) (~((-(((((/* implicit */_Bool) (unsigned char)131)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_15))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 4; i_2 < 7; i_2 += 1) 
            {
                {
                    var_17 -= ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */long long int) (-(var_3)))) < (arr_3 [i_0] [i_1] [i_2])))) | (((((/* implicit */_Bool) ((3401031189U) << (((/* implicit */int) var_1))))) ? (((/* implicit */int) arr_6 [i_0])) : (((/* implicit */int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) arr_6 [i_0])))))))));
                    var_18 = ((/* implicit */signed char) 263233546);
                    arr_7 [i_0] [(_Bool)1] [i_1] [(signed char)0] = ((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0]);
                    arr_8 [i_2 - 1] = ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)-76))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_3 = 0; i_3 < 10; i_3 += 4) 
        {
            for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) max((var_7), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)23)) : ((+(((/* implicit */int) var_4))))))));
                    var_20 = ((/* implicit */long long int) arr_10 [i_0]);
                    var_21 = ((/* implicit */unsigned int) min((((/* implicit */long long int) (signed char)4)), (7368003409707437114LL)));
                }
            } 
        } 
        var_22 = min((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0]))) - (arr_14 [i_0] [i_0])))) ? (var_8) : (((/* implicit */unsigned int) min((((/* implicit */int) arr_12 [i_0] [i_0] [i_0])), (110744566)))))), (((((/* implicit */_Bool) ((var_6) ? (var_7) : (-1898480621)))) ? (((unsigned int) var_4)) : ((~(var_8))))));
    }
    var_23 -= var_11;
    var_24 -= ((/* implicit */unsigned short) max((var_1), (((_Bool) ((((/* implicit */_Bool) var_0)) ? (25343482) : (((/* implicit */int) var_15)))))));
}

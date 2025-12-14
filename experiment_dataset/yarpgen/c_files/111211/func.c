/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111211
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
    var_10 = ((/* implicit */short) max((var_10), (((/* implicit */short) var_7))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_11 += ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_3 [(signed char)2] [(signed char)2])) ? (((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (var_4)))) : (((/* implicit */int) var_1)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (1930187944U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(_Bool)1] [i_1])))))) ? (((((/* implicit */int) var_9)) - (((/* implicit */int) var_4)))) : (((((/* implicit */_Bool) (signed char)12)) ? (((/* implicit */int) (short)-14873)) : (((/* implicit */int) (_Bool)0))))))));
                    var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) 4294967295U))));
                    var_13 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [i_1] [i_2 - 1]))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_3 = 1; i_3 < 12; i_3 += 1) 
    {
        for (signed char i_4 = 0; i_4 < 13; i_4 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                {
                    var_14 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2410096237434746217ULL)) ? (((12289053936767573498ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)160)))))) ? ((~(((/* implicit */int) (signed char)52)))) : (max((((/* implicit */int) max((((/* implicit */unsigned char) var_4)), (arr_14 [i_3] [9U])))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)58)) : (((/* implicit */int) var_9))))))));
                    var_15 = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_9 [i_4]))))))))));
                }
                arr_16 [(_Bool)1] [(_Bool)1] [i_4] &= ((/* implicit */signed char) var_7);
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned short) var_3);
}

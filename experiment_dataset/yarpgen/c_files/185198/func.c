/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185198
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_0 [i_0] [i_0]) >> (((arr_0 [i_0] [i_0]) - (6387854713835957238LL)))))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_2 [i_0])))) : (((((((/* implicit */int) (short)-4438)) + (2147483647))) >> (((2988054292U) - (2988054287U)))))))) != (max((1306913004U), (max((((/* implicit */unsigned int) arr_1 [i_0] [i_0])), (2347128050U)))))));
        arr_4 [(short)4] &= ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))) ? (min((((/* implicit */unsigned int) ((signed char) arr_2 [i_0]))), (((((/* implicit */_Bool) arr_2 [(short)8])) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [(_Bool)1]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((min((((/* implicit */long long int) arr_1 [i_0] [(signed char)10])), (arr_0 [i_0] [i_0]))) <= (max((arr_0 [i_0] [i_0]), (((/* implicit */long long int) var_9))))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            arr_7 [i_0] [(unsigned short)0] [(short)3] = ((/* implicit */short) ((((/* implicit */int) arr_1 [i_1] [i_0])) == (((/* implicit */int) arr_6 [i_1 + 1] [i_1 - 1]))));
            arr_8 [i_0] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0]))));
        }
    }
    var_19 |= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) 2157701632U)) ? (1818267934) : (((/* implicit */int) var_5))))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) ((-6LL) <= (((/* implicit */long long int) ((/* implicit */int) var_13))))))) | (((2347128050U) | (var_17))))) : (max(((+(var_7))), (((/* implicit */unsigned int) var_6))))));
    /* LoopNest 2 */
    for (short i_2 = 0; i_2 < 16; i_2 += 1) 
    {
        for (signed char i_3 = 0; i_3 < 16; i_3 += 3) 
        {
            {
                arr_15 [i_2] [3LL] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_14 [i_3] [i_2])) && (((/* implicit */_Bool) ((int) (+(((/* implicit */int) arr_13 [8ULL] [8ULL]))))))));
                arr_16 [i_2] [i_3] = ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned short)20018)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_14)))), (((/* implicit */int) ((((/* implicit */_Bool) (short)0)) && (((/* implicit */_Bool) 2988054316U)))))))) ? (((((/* implicit */int) (short)7864)) + (((/* implicit */int) (signed char)-94)))) : (((((/* implicit */_Bool) arr_14 [i_2] [i_3])) ? ((~(((/* implicit */int) arr_9 [i_2] [i_3])))) : (((/* implicit */int) ((arr_12 [i_3]) == (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))))));
            }
        } 
    } 
}

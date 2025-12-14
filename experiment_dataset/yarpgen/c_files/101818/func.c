/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101818
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
    var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) (+(var_10))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (short i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) max((var_9), (((/* implicit */long long int) var_3))));
                    arr_8 [3] [13ULL] [i_1] [i_0] = ((/* implicit */unsigned short) arr_3 [i_0] [i_1]);
                    var_13 ^= ((/* implicit */unsigned int) ((((((var_1) | (((/* implicit */unsigned long long int) 152251066U)))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) var_11)), (var_0))))))) ? ((-(((/* implicit */int) max((((/* implicit */short) var_4)), ((short)15311)))))) : (((((/* implicit */_Bool) (signed char)-62)) ? ((-(((/* implicit */int) (signed char)68)))) : (((/* implicit */int) var_0))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_3 = 2; i_3 < 19; i_3 += 1) 
        {
            for (unsigned int i_4 = 4; i_4 < 17; i_4 += 2) 
            {
                {
                    var_14 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_5))));
                    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_3] [i_3 - 1])) ? (((/* implicit */int) (signed char)98)) : (((/* implicit */int) (short)-21809))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_11))) == (arr_13 [i_3] [i_3 - 1] [i_3 - 1] [i_3])))) : (((/* implicit */int) arr_5 [i_0] [i_3] [i_3 - 2]))));
                    var_16 ^= ((/* implicit */short) ((((arr_10 [i_3 - 2] [i_3 + 1]) == (arr_10 [i_3 - 1] [i_3]))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) max((((/* implicit */unsigned long long int) (_Bool)0)), (var_1)))))) : (((max((((/* implicit */long long int) (signed char)63)), (var_9))) * (((/* implicit */long long int) ((/* implicit */int) ((-265138252) == (((/* implicit */int) arr_12 [(unsigned short)8]))))))))));
                }
            } 
        } 
        var_17 = ((((/* implicit */int) (!(((/* implicit */_Bool) 387809611))))) & (((/* implicit */int) (unsigned char)255)));
    }
    var_18 ^= ((/* implicit */signed char) ((int) max((((/* implicit */long long int) ((var_11) && (((/* implicit */_Bool) var_6))))), ((+(var_9))))));
    var_19 = ((/* implicit */int) max((var_2), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_11)))))));
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 23; i_5 += 2) 
    {
        for (unsigned int i_6 = 2; i_6 < 22; i_6 += 1) 
        {
            for (unsigned long long int i_7 = 3; i_7 < 21; i_7 += 2) 
            {
                {
                    arr_24 [(signed char)5] [i_6] [i_7] |= ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */int) ((unsigned short) var_10))) & (((/* implicit */int) (signed char)-80)))));
                    arr_25 [i_7] [i_6] [i_6] [6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1)) ? (((/* implicit */int) max((arr_19 [i_6 - 2] [i_7]), (((/* implicit */unsigned char) var_11))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_5])))))))) ? (((/* implicit */int) ((var_2) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) ((var_6) != (((/* implicit */int) (signed char)46)))))));
                    arr_26 [i_6] [i_6] &= ((/* implicit */unsigned int) (-(max((((/* implicit */unsigned long long int) arr_16 [i_7 + 1] [i_7])), (var_1)))));
                }
            } 
        } 
    } 
}

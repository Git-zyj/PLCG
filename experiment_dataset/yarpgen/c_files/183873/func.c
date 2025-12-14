/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183873
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) - (18428848616420264667ULL))))))));
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_0] [i_1]))))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) (signed char)104)) ? (((/* implicit */int) (signed char)-110)) : (((/* implicit */int) (unsigned short)16846))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_2 = 3; i_2 < 20; i_2 += 4) 
    {
        for (short i_3 = 0; i_3 < 24; i_3 += 4) 
        {
            for (unsigned int i_4 = 2; i_4 < 21; i_4 += 1) 
            {
                {
                    var_21 -= ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_2 + 1] [i_2])))))));
                    var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_12 [i_2 + 4] [i_2 + 1] [i_4 + 1] [i_4 + 2]))))) ? ((+(var_15))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [1ULL] [i_2 + 2] [i_4 + 1] [i_4 + 2]))))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_5 = 0; i_5 < 20; i_5 += 3) 
    {
        for (unsigned short i_6 = 3; i_6 < 17; i_6 += 3) 
        {
            {
                var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)48689))))) ? (((arr_6 [i_6 + 1] [i_6 + 2]) ? (((/* implicit */int) var_12)) : (((arr_6 [i_5] [5ULL]) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_7 [i_5] [i_6 - 2])))))) : (((/* implicit */int) ((((/* implicit */int) arr_7 [i_6 + 2] [i_6 - 1])) > (((/* implicit */int) arr_7 [i_6 + 3] [i_6 - 2])))))));
                /* LoopNest 2 */
                for (unsigned short i_7 = 0; i_7 < 20; i_7 += 4) 
                {
                    for (int i_8 = 0; i_8 < 20; i_8 += 3) 
                    {
                        {
                            arr_24 [i_5] [i_6] [i_7] [i_8] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_6]))))) >> ((((~(var_7))) - (2564518691877937845LL)))));
                            var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_7] [i_6 + 3] [i_6])) + (((/* implicit */int) (signed char)109))))) ? ((~(((/* implicit */int) (signed char)-19)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (+(var_6)))))))));
                            arr_25 [i_8] [i_6] [i_6] [i_8] = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_9))) * (arr_8 [i_6 - 1] [7] [i_6]))) | (((((/* implicit */_Bool) arr_8 [i_6 - 3] [i_8] [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_18))) : (arr_8 [i_6 - 1] [i_6] [i_8])))));
                        }
                    } 
                } 
                var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) (((-((((_Bool)1) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (signed char)-19)))))) <= (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-110))))) ? (((((/* implicit */_Bool) arr_19 [(_Bool)1] [i_6] [(_Bool)1])) ? (arr_19 [(unsigned char)2] [i_6] [i_5]) : (((/* implicit */int) arr_20 [(short)14])))) : (((/* implicit */int) arr_12 [i_6 - 2] [i_6 - 2] [i_6 - 3] [i_6])))))))));
                var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_5] [i_6 + 3] [i_6] [i_6 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_13 [i_6] [i_6 + 1] [i_6] [i_6])))) ? ((+(2611251175U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (var_5) : (((/* implicit */int) (unsigned short)31391)))))));
            }
        } 
    } 
}

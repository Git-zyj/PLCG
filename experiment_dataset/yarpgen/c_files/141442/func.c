/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141442
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
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)58800))) + (var_4)));
    /* LoopNest 3 */
    for (unsigned char i_0 = 4; i_0 < 19; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [6LL] [i_0] = min((((((/* implicit */_Bool) ((long long int) 2714165083U))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (((((/* implicit */long long int) 2714165089U)) + (var_17))))), (((/* implicit */long long int) var_13)));
                    var_20 = ((4596398671721994436LL) >= (((/* implicit */long long int) arr_0 [(unsigned short)8] [i_2])));
                }
            } 
        } 
    } 
    var_21 ^= (-(var_17));
    /* LoopSeq 1 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_22 = ((/* implicit */unsigned char) min((min((((((/* implicit */_Bool) arr_2 [i_3])) ? (arr_8 [i_3] [i_3] [i_3] [i_3]) : (8387384334779444110LL))), ((-(var_6))))), (((/* implicit */long long int) (+(((/* implicit */int) var_13)))))));
        /* LoopNest 2 */
        for (long long int i_4 = 0; i_4 < 11; i_4 += 4) 
        {
            for (unsigned char i_5 = 0; i_5 < 11; i_5 += 1) 
            {
                {
                    var_23 = ((/* implicit */unsigned char) min((var_23), (arr_4 [i_5])));
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 0; i_6 < 11; i_6 += 1) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 11; i_7 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned char) arr_18 [i_7] [i_5] [i_5] [(_Bool)1]);
                                var_25 = max((((arr_19 [i_4] [i_5]) % (-4413653213254973973LL))), (max((((/* implicit */long long int) arr_22 [i_6] [i_6] [i_6])), (arr_19 [i_3] [i_4]))));
                                arr_24 [i_4] [i_4] [2U] [i_6] [i_3] [i_4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_18), (-8387384334779444110LL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_8 [i_3] [i_4] [i_3] [i_3]) < (((/* implicit */long long int) var_11)))))) : (((((/* implicit */_Bool) (unsigned char)0)) ? (4159184816141202212LL) : (9223372036854775795LL)))));
                                var_26 -= ((/* implicit */_Bool) ((long long int) var_12));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned short i_8 = 1; i_8 < 20; i_8 += 3) 
    {
        for (unsigned int i_9 = 2; i_9 < 21; i_9 += 2) 
        {
            {
                var_27 = ((/* implicit */unsigned int) max(((((-(((/* implicit */int) arr_27 [i_8] [(unsigned short)8])))) >= (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_25 [i_8] [i_8])))))), (((((((/* implicit */int) var_10)) | (((/* implicit */int) var_16)))) < (((/* implicit */int) var_3))))));
                var_28 |= ((/* implicit */unsigned int) var_7);
                var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) arr_27 [i_8] [i_9 - 1]))) ? (((/* implicit */int) (!(arr_25 [i_8] [i_9 - 1])))) : (((/* implicit */int) ((unsigned char) arr_25 [i_8] [i_8])))));
            }
        } 
    } 
}

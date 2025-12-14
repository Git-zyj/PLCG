/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107194
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
    var_16 = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned long long int) var_13))))) && (((/* implicit */_Bool) var_11)))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        arr_2 [i_0 - 1] [6LL] = ((/* implicit */signed char) arr_0 [(unsigned char)10]);
        arr_3 [i_0 + 2] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) arr_0 [i_0]))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(arr_0 [i_0]))))) : (((unsigned int) arr_0 [i_0]))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 12; i_1 += 3) 
    {
        arr_7 [(_Bool)1] [(signed char)8] = (~(((/* implicit */int) (unsigned char)161)));
        arr_8 [4U] |= (!(((/* implicit */_Bool) (unsigned char)0)));
    }
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 19; i_2 += 3) 
    {
        for (unsigned char i_3 = 0; i_3 < 20; i_3 += 3) 
        {
            {
                arr_13 [(unsigned char)16] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_11 [i_2] [14] [i_3]))));
                arr_14 [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(arr_9 [i_2])))) ^ (((((/* implicit */int) arr_9 [i_2])) * (((/* implicit */int) arr_9 [i_2]))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_4 = 1; i_4 < 11; i_4 += 3) 
    {
        for (signed char i_5 = 1; i_5 < 9; i_5 += 1) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    arr_22 [i_4] [i_5] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_4 + 1] [i_5 + 2] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_4 - 1] [i_5 + 2] [i_4])))))) : (((((/* implicit */_Bool) arr_20 [i_4 + 1] [i_5 + 3] [i_4])) ? (var_0) : (((/* implicit */unsigned long long int) arr_20 [i_4 - 1] [i_5 - 1] [i_4]))))));
                    arr_23 [i_4] [i_5] [8] [i_4] = ((/* implicit */signed char) ((((((/* implicit */int) arr_15 [i_4])) > (((/* implicit */int) arr_15 [i_6])))) && (((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)72))) ^ (-1500360525217487478LL)))))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */long long int) ((var_13) < (((/* implicit */int) ((var_1) && (((/* implicit */_Bool) ((0) / (-1143611178)))))))));
}

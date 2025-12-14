/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166286
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
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */int) ((unsigned char) var_4));
                    var_20 = ((/* implicit */int) var_9);
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) max((((((/* implicit */int) ((unsigned short) 8530261040344327438ULL))) >> (((max((((/* implicit */int) var_18)), (var_8))) - (2042240030))))), (((/* implicit */int) var_13)))))));
                        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) min((((/* implicit */int) arr_1 [i_0])), (-1233451702)))) ? (-8553644728480129621LL) : (7926237238383107643LL)))))));
                        arr_10 [i_0] [7ULL] [i_2] [i_0] = ((/* implicit */unsigned char) (-(9223372036854775807LL)));
                    }
                    arr_11 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((signed char) 9916483033365224178ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_6)))) : (((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_0] [2] [i_2]))))) ? (((/* implicit */unsigned long long int) min((7926237238383107643LL), (((/* implicit */long long int) (unsigned short)65535))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0]))) : (8530261040344327438ULL)))))));
                }
            } 
        } 
        arr_12 [i_0] = ((/* implicit */unsigned char) var_8);
    }
    for (signed char i_4 = 0; i_4 < 13; i_4 += 2) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned long long int) max(((unsigned char)243), ((unsigned char)5)));
        arr_16 [i_4] = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_4]))))) : (((/* implicit */int) min((((/* implicit */unsigned char) var_6)), ((unsigned char)35)))))));
        var_24 = ((/* implicit */unsigned long long int) var_1);
        var_25 -= ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)245)) && (((/* implicit */_Bool) 9916483033365224177ULL))))) <= (((/* implicit */int) ((((unsigned long long int) var_17)) <= (((8530261040344327438ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)243))))))))));
        arr_17 [i_4] [i_4] = ((/* implicit */signed char) var_0);
    }
    var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */int) var_18)) * (((/* implicit */int) var_1)))) : (((/* implicit */int) var_5))));
    var_27 = ((/* implicit */unsigned int) (!((!(((_Bool) var_9))))));
}

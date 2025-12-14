/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172470
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172470 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172470
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 10; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 11; i_4 += 4) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 645652259)) ? (var_10) : (((/* implicit */int) var_9))))) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_1 - 1] [i_0] [i_3] [i_4 + 1])) : (-645652265)))) && (((/* implicit */_Bool) arr_3 [i_2]))));
                                var_13 += ((/* implicit */unsigned short) ((signed char) min((((var_6) == (((/* implicit */int) (unsigned short)508)))), ((!(((/* implicit */_Bool) arr_8 [i_1])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        for (unsigned short i_6 = 4; i_6 < 11; i_6 += 3) 
                        {
                            {
                                arr_19 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_0] [i_6 - 1])) ? (4025197277U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0] [i_6 - 2])))))) ? (((((/* implicit */_Bool) arr_16 [i_0] [i_6 - 2])) ? (((/* implicit */int) arr_16 [i_0] [i_6 - 1])) : (((/* implicit */int) arr_16 [2ULL] [i_6 - 3])))) : (((((/* implicit */int) arr_16 [i_0] [i_6 + 1])) + (((/* implicit */int) arr_16 [i_0] [i_6 - 1]))))));
                                var_14 = ((((/* implicit */int) arr_17 [i_0] [i_0] [i_2] [i_0] [i_0])) % (((/* implicit */int) ((_Bool) var_11))));
                            }
                        } 
                    } 
                    arr_20 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */long long int) min((((((/* implicit */_Bool) -1777329409)) ? (4194288638U) : (((/* implicit */unsigned int) -645652259)))), (((/* implicit */unsigned int) (-(arr_9 [i_2] [i_1] [i_0] [i_1 + 1] [i_0]))))))), (((((/* implicit */_Bool) arr_8 [i_0])) ? (arr_14 [(unsigned short)9] [i_1] [i_1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) -1777329409))))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)55183)) ? (645652262) : (-1777329409)));
    var_16 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7))));
    var_17 -= ((/* implicit */unsigned int) min((((unsigned char) var_7)), (((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_4)))) || (((/* implicit */_Bool) var_10)))))));
    /* LoopNest 2 */
    for (unsigned short i_7 = 0; i_7 < 18; i_7 += 3) 
    {
        for (long long int i_8 = 1; i_8 < 16; i_8 += 4) 
        {
            {
                var_18 = ((/* implicit */int) max((var_18), (max(((+(((/* implicit */int) (unsigned char)13)))), (((/* implicit */int) arr_24 [i_7] [6]))))));
                var_19 ^= ((/* implicit */unsigned int) max((((signed char) (!(((/* implicit */_Bool) 8106829971151037803LL))))), (((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned short)43467)) ? (((/* implicit */int) arr_22 [i_7])) : (((/* implicit */int) arr_22 [i_7])))) != (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)71)) || (((/* implicit */_Bool) arr_21 [(_Bool)1]))))))))));
                var_20 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) (unsigned short)22061)))) ? (min((((/* implicit */unsigned long long int) arr_24 [i_7] [i_7])), (arr_23 [i_7]))) : (((((/* implicit */_Bool) arr_23 [i_7])) ? (arr_23 [i_8 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_7] [i_7])))))));
            }
        } 
    } 
}

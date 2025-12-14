/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1546
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
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) (signed char)31)) >= (((/* implicit */int) ((signed char) (unsigned char)22)))))) <= (((/* implicit */int) max(((unsigned char)255), (max(((unsigned char)255), (((/* implicit */unsigned char) (signed char)-113)))))))));
    var_15 = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)0))));
    var_16 &= (unsigned char)255;
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_1 - 1] [i_1 + 1])) : (((/* implicit */int) max((arr_2 [i_0] [i_2]), (((/* implicit */unsigned char) var_10))))))) > (((((/* implicit */int) arr_5 [i_0] [(signed char)5] [i_0])) ^ (((/* implicit */int) arr_3 [i_0]))))));
                    var_18 = ((/* implicit */unsigned char) min((((/* implicit */int) arr_5 [i_0] [i_1 - 1] [i_1 + 1])), (((((/* implicit */int) arr_5 [i_0] [i_1 - 2] [i_1 + 1])) & (((/* implicit */int) (signed char)31))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_3 = 0; i_3 < 25; i_3 += 1) 
    {
        for (signed char i_4 = 1; i_4 < 23; i_4 += 2) 
        {
            {
                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)0)) ? (((((/* implicit */int) (signed char)47)) & (((/* implicit */int) ((signed char) arr_13 [i_3]))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */int) ((unsigned char) (signed char)1))) : ((~(((/* implicit */int) arr_9 [i_3]))))))));
                var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) max((((((/* implicit */_Bool) min((((/* implicit */unsigned char) (signed char)-19)), (arr_12 [i_3] [i_3] [i_4])))) ? ((-(((/* implicit */int) arr_11 [i_3])))) : (((/* implicit */int) (signed char)-32)))), (((((((/* implicit */_Bool) (signed char)71)) ? (((/* implicit */int) (signed char)103)) : (((/* implicit */int) (signed char)(-127 - 1))))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))))))));
                var_21 |= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_12 [i_4] [i_4 - 1] [i_4 + 2]))))) || ((!(((/* implicit */_Bool) arr_14 [i_4 - 1] [i_4 - 1]))))));
                /* LoopSeq 1 */
                for (unsigned char i_5 = 1; i_5 < 21; i_5 += 4) 
                {
                    var_22 &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_5 + 4])) ? (((((((/* implicit */_Bool) arr_14 [i_3] [i_3])) ? (((/* implicit */int) arr_16 [(signed char)24] [i_5 - 1] [i_5 + 1] [(signed char)22])) : (((/* implicit */int) (signed char)7)))) + (((/* implicit */int) (unsigned char)1)))) : ((-(((((/* implicit */int) (signed char)36)) / (((/* implicit */int) (unsigned char)1))))))));
                    arr_17 [(unsigned char)1] [(unsigned char)1] [i_5 + 2] &= ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)93)) & (((/* implicit */int) min(((unsigned char)255), (arr_15 [i_4] [i_4] [i_4 - 1]))))));
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 2; i_6 < 24; i_6 += 4) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 25; i_7 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */signed char) min((((((/* implicit */_Bool) max(((signed char)127), (arr_11 [i_5])))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_2)))), (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */int) (signed char)-32)) : (((/* implicit */int) (unsigned char)35))))));
                                var_24 |= max((((unsigned char) (-(((/* implicit */int) (signed char)-32))))), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_5 + 1] [i_4] [(unsigned char)6] [i_5 + 1] [(unsigned char)6])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)0)))))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}

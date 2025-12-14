/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10903
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
    var_20 ^= ((/* implicit */unsigned short) ((min((min((((/* implicit */long long int) var_8)), (var_2))), (((/* implicit */long long int) min((((/* implicit */unsigned char) (signed char)-45)), ((unsigned char)11)))))) - (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)1)), (var_10)))) ? (((var_2) >> (((((/* implicit */int) (unsigned char)244)) - (225))))) : (((/* implicit */long long int) (-(var_9))))))));
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_8)))) : (var_9)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 3; i_0 < 19; i_0 += 3) 
    {
        var_22 = ((/* implicit */short) ((int) ((_Bool) (unsigned char)38)));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (int i_2 = 4; i_2 < 19; i_2 += 2) 
            {
                {
                    var_23 = ((/* implicit */signed char) arr_0 [i_0]);
                    var_24 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_2 - 3] [i_2] [i_2])) ? (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)8))))) : (-2462434046931534890LL)));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 16; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_25 ^= (~(((/* implicit */int) var_14)));
                                var_26 = ((((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))) < ((-(arr_4 [i_0] [i_0]))));
                                var_27 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_1] [i_2 + 1] [i_3 - 2] [i_3 + 4] [i_3 + 3])) ? (arr_11 [i_1] [i_2 + 1] [i_3 + 1] [i_3 + 2] [i_3 - 1]) : (arr_11 [i_1] [i_2 - 4] [i_3 - 2] [i_3 + 4] [i_3 + 4])));
                                var_28 += ((/* implicit */_Bool) (+(((/* implicit */int) arr_13 [i_4] [i_4] [i_4] [i_3 + 1] [i_4] [8ULL] [8ULL]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned short i_5 = 1; i_5 < 8; i_5 += 2) 
    {
        for (short i_6 = 1; i_6 < 7; i_6 += 3) 
        {
            {
                var_29 = ((/* implicit */_Bool) ((((((/* implicit */int) arr_5 [i_5])) - (((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_5] [i_6]))))))) + (((int) ((((/* implicit */_Bool) 871988933731482483ULL)) ? (((/* implicit */unsigned int) var_12)) : (arr_20 [i_5] [i_5]))))));
                var_30 |= ((/* implicit */short) arr_7 [6U] [i_6] [6U]);
                var_31 = ((/* implicit */unsigned long long int) arr_16 [(_Bool)1] [i_5]);
            }
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145815
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
    for (int i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        arr_2 [i_0 - 1] [i_0 - 1] = ((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)0))));
        arr_3 [i_0] = ((/* implicit */unsigned short) min((arr_0 [i_0 + 1]), (((min((arr_0 [i_0]), (((/* implicit */int) (_Bool)0)))) << (((/* implicit */int) min((arr_1 [i_0]), (((/* implicit */unsigned char) (_Bool)1)))))))));
    }
    for (int i_1 = 0; i_1 < 18; i_1 += 4) 
    {
        var_19 = ((/* implicit */unsigned int) min((var_19), (arr_5 [i_1] [i_1])));
        arr_8 [i_1] [i_1] = ((((/* implicit */_Bool) -431775599)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)62))) : (3915870205U));
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (int i_3 = 0; i_3 < 18; i_3 += 2) 
            {
                for (unsigned int i_4 = 0; i_4 < 18; i_4 += 3) 
                {
                    {
                        var_20 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_4 [i_3] [i_2])))) > (-4271907467942096547LL)));
                        /* LoopSeq 2 */
                        for (unsigned char i_5 = 0; i_5 < 18; i_5 += 3) 
                        {
                            arr_22 [i_1] [i_2] [i_3] [i_3] [i_4] [i_5] |= ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (unsigned short)43027)) : (((/* implicit */int) (unsigned short)39637)))));
                            var_21 ^= ((/* implicit */short) ((((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_14 [i_5] [i_1] [i_1] [(unsigned short)6])) : (((/* implicit */int) arr_17 [i_1] [i_2] [i_3] [i_4] [i_1])))) >> (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) < (arr_6 [i_3])))))) <= (arr_12 [i_1] [i_1] [i_3])));
                        }
                        /* vectorizable */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_13)))))));
                            arr_25 [i_1] [i_2] [(short)6] [i_4] [i_2] = ((/* implicit */int) var_0);
                        }
                        var_23 += ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_18)) : (arr_15 [i_1] [i_1] [i_4])))))) ? (((/* implicit */int) arr_17 [i_3] [i_3] [i_3] [i_2] [i_3])) : (((/* implicit */int) ((((((/* implicit */_Bool) (signed char)-99)) ? (arr_12 [i_1] [i_2] [i_3]) : (((/* implicit */int) var_18)))) <= ((((_Bool)1) ? (((/* implicit */int) (signed char)-62)) : (((/* implicit */int) arr_11 [i_1] [i_1] [i_3])))))))));
                    }
                } 
            } 
        } 
        arr_26 [i_1] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((arr_20 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) < (arr_0 [i_1]))))));
        var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) min((((/* implicit */long long int) (+(((/* implicit */int) arr_14 [i_1] [i_1] [i_1] [i_1]))))), (((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (max((arr_10 [i_1]), (((/* implicit */long long int) var_12)))) : (((/* implicit */long long int) ((/* implicit */int) var_6))))))))));
    }
    var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) var_2))));
}

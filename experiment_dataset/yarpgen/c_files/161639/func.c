/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161639
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
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 4; i_0 < 13; i_0 += 3) 
    {
        arr_2 [i_0] = (!(((/* implicit */_Bool) min((((int) (signed char)-16)), (((/* implicit */int) min((var_11), (arr_1 [i_0]))))))));
        arr_3 [i_0] |= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((long long int) var_6))))) ? (((/* implicit */int) ((_Bool) (~(((/* implicit */int) var_11)))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_1 [i_0]))))) || (((((/* implicit */_Bool) (unsigned short)50735)) && (((/* implicit */_Bool) -1567508450046028751LL)))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            var_13 = ((/* implicit */unsigned char) ((_Bool) (!(((/* implicit */_Bool) var_2)))));
            var_14 = ((/* implicit */int) ((arr_4 [i_1]) & (arr_4 [i_0])));
        }
        for (long long int i_2 = 0; i_2 < 15; i_2 += 2) 
        {
            var_15 = ((/* implicit */unsigned char) var_8);
            arr_8 [i_0 + 2] [i_0 + 2] = arr_7 [i_0 - 4] [(_Bool)1];
            arr_9 [i_0] = ((/* implicit */long long int) var_1);
        }
        arr_10 [i_0] [i_0] = (!(var_7));
    }
    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 3) 
    {
        var_16 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_6) ^ (((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) arr_13 [i_3] [i_3])) ? (((/* implicit */unsigned int) arr_11 [i_3] [i_3])) : (var_12))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))));
        var_17 ^= ((/* implicit */unsigned int) arr_13 [14LL] [14LL]);
    }
    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
    {
        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) (+(arr_15 [i_4]))))));
        /* LoopNest 3 */
        for (short i_5 = 1; i_5 < 15; i_5 += 2) 
        {
            for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
            {
                for (unsigned char i_7 = 1; i_7 < 14; i_7 += 2) 
                {
                    {
                        arr_22 [i_7 + 3] [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (unsigned short)16230)))) : ((+(arr_15 [i_4])))))) ? (max((var_5), (((/* implicit */long long int) ((int) arr_17 [i_5] [i_6 - 1] [i_6 - 1]))))) : (max((var_2), (((/* implicit */long long int) 1544034047U))))));
                        var_19 = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned long long int) ((arr_19 [i_4] [i_5] [i_5] [i_4]) | (((/* implicit */long long int) ((/* implicit */int) var_9)))))), (max((((/* implicit */unsigned long long int) arr_16 [i_5])), (13457019629452250290ULL))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_4])))));
                        arr_23 [i_5] [i_5 + 3] [i_5 + 3] [i_5 - 1] [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_4 + 1]))) & (3126394243U))))) ? (var_2) : (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_12 [i_4])), (arr_15 [i_7])))) ? (((/* implicit */int) arr_21 [i_7])) : (((/* implicit */int) (!(((/* implicit */_Bool) 3421973861U))))))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_8 = 0; i_8 < 12; i_8 += 2) 
    {
        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((int) (+(2788439207U)))))));
        var_21 *= ((/* implicit */unsigned int) ((long long int) var_0));
        var_22 ^= ((/* implicit */unsigned int) var_6);
    }
    var_23 &= ((/* implicit */short) max((((/* implicit */long long int) var_10)), (((((/* implicit */long long int) ((unsigned int) var_8))) & (((long long int) var_2))))));
}

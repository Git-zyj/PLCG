/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160
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
    var_20 = ((/* implicit */unsigned char) var_13);
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_21 = ((((/* implicit */_Bool) ((unsigned int) arr_1 [i_0]))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (((unsigned int) (short)16914)));
        var_22 = ((/* implicit */int) var_17);
    }
    var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) var_16))));
    var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) ((((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) max((((/* implicit */int) var_12)), (var_10)))))) || (((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)156)) && (((/* implicit */_Bool) var_15))))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned char)12))))))))))));
    /* LoopSeq 2 */
    for (unsigned short i_1 = 2; i_1 < 19; i_1 += 4) 
    {
        var_25 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_3 [i_1 + 3])) ? (arr_3 [i_1 + 2]) : (arr_3 [i_1 + 1])))));
        arr_4 [1ULL] = ((/* implicit */long long int) (-(((/* implicit */int) (short)-27761))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_26 -= ((/* implicit */short) ((((/* implicit */_Bool) max((arr_6 [i_2]), (((/* implicit */unsigned int) ((var_8) >> (((((/* implicit */int) (unsigned char)243)) - (232))))))))) ? (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)27760)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_5 [i_2]))))), (((arr_6 [(signed char)18]) >> (((850387362U) - (850387338U))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
        /* LoopNest 3 */
        for (int i_3 = 1; i_3 < 20; i_3 += 2) 
        {
            for (unsigned char i_4 = 4; i_4 < 22; i_4 += 2) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        var_27 = ((/* implicit */short) arr_7 [i_4 - 3] [i_4 - 3]);
                        var_28 = ((/* implicit */unsigned char) arr_8 [i_2] [11LL]);
                    }
                } 
            } 
        } 
        var_29 = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_10 [i_2] [i_2] [i_2])) ? (arr_12 [i_2]) : (((/* implicit */long long int) 850387377U)))));
        var_30 += ((/* implicit */unsigned char) var_12);
    }
}

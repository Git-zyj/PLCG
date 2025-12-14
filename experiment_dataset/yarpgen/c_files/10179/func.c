/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10179
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
    for (int i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 20; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */_Bool) var_15);
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((4018542308912585501ULL) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_6 [i_0] [i_1] [i_2] [i_3])))))))));
                        var_21 = var_12;
                    }
                    var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_9 [i_0] [i_1] [i_0] [i_0]) : (arr_9 [i_2 + 3] [i_2] [i_1] [i_0 - 1])))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((unsigned char) 949215571U)))))))));
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) -792089050)) : (max((((/* implicit */unsigned long long int) (unsigned char)46)), (arr_9 [i_0] [i_0] [i_0] [i_0]))))));
        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_10), (((/* implicit */short) arr_8 [i_0] [i_0] [i_0 + 1]))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_8 [i_0] [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) (unsigned char)252)))) : ((+(((/* implicit */int) arr_8 [i_0] [i_0] [i_0 + 1]))))));
    }
    /* vectorizable */
    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_5 = 1; i_5 < 20; i_5 += 4) 
        {
            var_25 = ((/* implicit */_Bool) ((arr_11 [i_5]) >> (((arr_9 [i_4 - 1] [i_4] [i_5] [i_5]) - (17847341407692483492ULL)))));
            var_26 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_14 [i_4 - 1])) ^ (((/* implicit */int) arr_10 [i_4 - 1] [i_5 + 1] [i_5 - 1] [i_5 - 1]))));
        }
        /* LoopNest 2 */
        for (short i_6 = 1; i_6 < 20; i_6 += 3) 
        {
            for (unsigned short i_7 = 3; i_7 < 17; i_7 += 1) 
            {
                {
                    var_27 += ((/* implicit */short) (+(arr_6 [i_4 - 1] [i_6 + 1] [i_7 - 1] [i_7])));
                    var_28 = ((/* implicit */unsigned short) var_12);
                }
            } 
        } 
    }
    var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((+(17361505805483284528ULL))), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_11)))))) && (((/* implicit */_Bool) var_10))));
    var_30 = (!(((/* implicit */_Bool) ((unsigned char) 1085238268226267106ULL))));
    var_31 = ((/* implicit */unsigned short) ((_Bool) (~(((/* implicit */int) (_Bool)1)))));
    var_32 = ((/* implicit */unsigned long long int) ((short) 17361505805483284510ULL));
}

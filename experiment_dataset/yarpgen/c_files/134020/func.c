/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134020
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
    var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) max(((+(((/* implicit */int) max((var_9), (((/* implicit */unsigned char) var_5))))))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)152))) <= (((((/* implicit */long long int) var_0)) ^ (var_6)))))))))));
    var_14 = ((/* implicit */unsigned char) var_2);
    var_15 = ((/* implicit */short) (+(max((((/* implicit */unsigned long long int) var_5)), (max((var_1), (((/* implicit */unsigned long long int) var_7))))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 3) /* same iter space */
    {
        var_16 += ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0])) - (((/* implicit */int) arr_0 [10ULL]))))), (max((var_6), (((/* implicit */long long int) arr_1 [i_0]))))));
        var_17 = ((/* implicit */long long int) ((unsigned char) max((max((((/* implicit */unsigned long long int) (unsigned char)97)), (arr_2 [i_0]))), (((/* implicit */unsigned long long int) 381638136)))));
        /* LoopSeq 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) /* same iter space */
        {
            arr_7 [i_0] [6ULL] = ((/* implicit */unsigned long long int) ((((var_5) ? (((/* implicit */int) arr_6 [i_1 - 1] [i_1 - 1])) : (((/* implicit */int) arr_6 [i_1 - 1] [(unsigned short)1])))) << (((arr_2 [i_0]) - (8748526441125514744ULL)))));
            var_18 -= ((/* implicit */long long int) ((short) ((arr_6 [i_0] [i_1 - 1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(unsigned char)0]))) : (arr_4 [i_1 - 1] [(unsigned short)2] [i_1 - 1]))));
        }
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) /* same iter space */
        {
            var_19 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) <= (((/* implicit */int) arr_0 [i_0]))))), (((((_Bool) var_11)) ? (max((arr_2 [i_2]), (((/* implicit */unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)107)))))))));
            var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_2 - 1] [i_2 - 1] [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_10)))))));
        }
        arr_10 [i_0] = ((/* implicit */long long int) arr_8 [i_0] [i_0] [i_0]);
    }
    /* vectorizable */
    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */long long int) (+(arr_4 [i_3] [8ULL] [i_3])));
        arr_13 [i_3] = arr_9 [i_3] [i_3] [i_3];
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 1; i_4 < 9; i_4 += 4) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 4) 
            {
                {
                    arr_18 [i_3] [i_3] [i_5] = ((/* implicit */signed char) ((((/* implicit */int) arr_9 [i_3] [(unsigned char)3] [i_5])) & (((/* implicit */int) (!(((/* implicit */_Bool) -7216300362276373572LL)))))));
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (((unsigned long long int) arr_9 [i_3] [i_4 + 1] [i_5])) : (((arr_5 [i_3] [i_4] [i_3]) / (((/* implicit */unsigned long long int) arr_8 [i_3] [i_3] [i_3]))))));
                    var_23 -= ((/* implicit */unsigned short) (-(var_2)));
                    var_24 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_8 [i_4 + 1] [i_4 - 1] [(unsigned short)10]))));
                }
            } 
        } 
    }
}

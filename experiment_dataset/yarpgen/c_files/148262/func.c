/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148262
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
    var_19 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) var_2))))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 2) /* same iter space */
    {
        var_20 ^= ((/* implicit */unsigned int) ((int) ((unsigned long long int) var_18)));
        arr_3 [i_0] = ((/* implicit */unsigned short) (-(max((((/* implicit */long long int) var_15)), (((((/* implicit */long long int) 584301823U)) / (2012756274010268643LL)))))));
        var_21 &= ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned short)50293)), (max((((/* implicit */long long int) (~(244492819)))), (((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) + (var_17)))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 13; i_1 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (signed char i_2 = 0; i_2 < 13; i_2 += 1) 
        {
            var_22 *= ((/* implicit */unsigned short) (((~(arr_5 [i_1]))) << (((((((/* implicit */_Bool) var_12)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_12))))) + (2334209662376786934LL)))));
            var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((unsigned long long int) arr_2 [10LL] [i_2])))));
        }
        arr_9 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -5220483662581519720LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1] [11ULL]))) : (var_14)));
    }
    var_24 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((short) max((var_1), (((/* implicit */long long int) -244492845))))))));
    /* LoopNest 2 */
    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 3) 
    {
        for (short i_4 = 4; i_4 < 12; i_4 += 1) 
        {
            {
                var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) << (((((((((/* implicit */int) ((((/* implicit */_Bool) arr_5 [(signed char)11])) && (((/* implicit */_Bool) 5624811251720846374ULL))))) ^ (((/* implicit */int) ((signed char) var_10))))) + (92))) - (19)))));
                arr_15 [i_4] [i_4 - 2] = (((!(((/* implicit */_Bool) max((((/* implicit */unsigned short) (_Bool)1)), (arr_0 [i_3])))))) ? (max((((/* implicit */unsigned long long int) (unsigned short)26154)), (max((var_6), (((/* implicit */unsigned long long int) var_18)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) max((((/* implicit */unsigned short) arr_4 [i_3])), (var_3)))))));
            }
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168061
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
    var_16 &= ((/* implicit */_Bool) (+(((/* implicit */int) ((signed char) ((((/* implicit */int) var_2)) > (((/* implicit */int) var_6))))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 2) /* same iter space */
    {
        arr_4 [i_0] [i_0] = ((/* implicit */long long int) arr_1 [i_0]);
        var_17 -= ((/* implicit */signed char) arr_1 [i_0]);
        var_18 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((var_15), (var_12)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_0 [i_0] [i_0]))))) : (((var_5) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))) > (((/* implicit */unsigned long long int) ((long long int) (-(17012802785342595439ULL)))))));
        var_19 = ((/* implicit */unsigned char) ((max((((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_2 [i_0])) : (2147483647)))), (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (var_13))))) > (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_10))))));
        arr_5 [i_0] = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) ((unsigned char) var_3))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 11; i_1 += 2) /* same iter space */
    {
        arr_9 [i_1] [4U] = var_9;
        var_20 = ((/* implicit */short) (!(arr_0 [i_1] [i_1])));
    }
    /* LoopNest 3 */
    for (unsigned short i_2 = 1; i_2 < 20; i_2 += 4) 
    {
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 1; i_4 < 20; i_4 += 2) 
            {
                {
                    var_21 = (!((!(((/* implicit */_Bool) -2147483647)))));
                    arr_19 [i_2] [7LL] [i_4] [i_4] = ((/* implicit */_Bool) min(((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_14 [i_2 + 1] [i_3 - 1] [i_4 + 2])))), (((/* implicit */int) (!(((/* implicit */_Bool) ((var_15) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))))))));
                    arr_20 [(unsigned char)19] [i_3] [(unsigned char)19] [i_3] = ((/* implicit */unsigned short) min((((/* implicit */long long int) (unsigned short)0)), (8514240418644069276LL)));
                    var_22 = ((/* implicit */long long int) (-(arr_10 [i_2])));
                }
            } 
        } 
    } 
}

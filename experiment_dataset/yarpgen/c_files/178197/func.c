/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178197
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
    var_10 = ((/* implicit */unsigned char) var_4);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 22; i_0 += 4) /* same iter space */
    {
        var_11 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) arr_2 [i_0 - 2]))))) < (((/* implicit */int) var_7))));
        var_12 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) var_9))) ? (((/* implicit */int) var_7)) : (((((/* implicit */int) max(((unsigned char)255), (((/* implicit */unsigned char) arr_0 [i_0]))))) - (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))))));
        var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_1 [20LL] [i_0 - 1]) : (arr_1 [i_0 - 2] [i_0 + 1])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0 - 2])) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) > (70368609959936LL)))) : (((/* implicit */int) (signed char)-36))))) : (((((/* implicit */_Bool) arr_1 [i_0 - 2] [i_0 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 - 1]))) : (-2474183305279748649LL)))));
        var_14 = var_2;
        var_15 = ((/* implicit */signed char) var_5);
    }
    /* vectorizable */
    for (unsigned char i_1 = 2; i_1 < 22; i_1 += 4) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_0))));
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) (unsigned char)103))) - (((/* implicit */int) (unsigned char)13))));
        var_18 = ((/* implicit */signed char) ((unsigned char) arr_0 [i_1 - 2]));
        /* LoopNest 3 */
        for (unsigned char i_2 = 1; i_2 < 19; i_2 += 1) 
        {
            for (long long int i_3 = 0; i_3 < 23; i_3 += 2) 
            {
                for (unsigned char i_4 = 2; i_4 < 20; i_4 += 1) 
                {
                    {
                        var_19 = ((/* implicit */long long int) ((unsigned char) arr_10 [i_2 + 1] [i_2] [i_3]));
                        var_20 = ((signed char) ((unsigned char) arr_5 [i_2 + 2] [i_2 + 2]));
                        var_21 = ((/* implicit */signed char) ((long long int) ((signed char) arr_0 [i_1])));
                        var_22 *= arr_6 [i_3];
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) arr_5 [(signed char)20] [i_1 - 1]))) || (((/* implicit */_Bool) (~(var_1))))));
    }
    var_24 = ((/* implicit */signed char) min((((/* implicit */long long int) var_6)), (((((/* implicit */_Bool) (+(70368609959936LL)))) ? (((var_8) & (((/* implicit */long long int) ((/* implicit */int) var_5))))) : (((/* implicit */long long int) (~(((/* implicit */int) var_5)))))))));
    var_25 = ((/* implicit */signed char) max((max((var_4), (min((((/* implicit */long long int) var_2)), (288230376151711488LL))))), (((((((/* implicit */_Bool) var_9)) ? (var_9) : (var_4))) % (var_1)))));
    var_26 = ((/* implicit */signed char) min((((/* implicit */long long int) (signed char)32)), (-70368609959936LL)));
}

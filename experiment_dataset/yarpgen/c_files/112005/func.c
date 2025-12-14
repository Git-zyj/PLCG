/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112005
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
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) var_3)) == (((/* implicit */int) var_8))));
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (((var_2) ? (((/* implicit */int) (signed char)-104)) : (var_10)))))) ? (((((/* implicit */_Bool) (-(var_6)))) ? (((/* implicit */int) min(((signed char)87), (((/* implicit */signed char) var_2))))) : (((/* implicit */int) ((((/* implicit */long long int) var_16)) > (var_1)))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_16)))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_21 = ((arr_1 [i_0]) ? ((+(var_18))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_9))))));
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0])) ^ (((/* implicit */int) arr_2 [i_0]))))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-87))) | (2588622591U)))) : ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (3378755786701200503LL)))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_23 += ((/* implicit */long long int) max((((((/* implicit */int) (signed char)-105)) * (((/* implicit */int) (signed char)87)))), (((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))));
            var_24 += ((/* implicit */_Bool) arr_0 [14LL]);
            /* LoopNest 2 */
            for (unsigned short i_2 = 4; i_2 < 15; i_2 += 1) 
            {
                for (signed char i_3 = 1; i_3 < 15; i_3 += 3) 
                {
                    {
                        arr_11 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3])) + (((/* implicit */int) arr_9 [i_3 + 1] [i_3] [i_3] [(_Bool)1] [i_3] [i_3]))))) ? (((arr_7 [i_3 + 1] [i_3] [i_3] [i_3]) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_9 [i_3 - 1] [i_3] [i_3] [i_3] [i_3] [i_3])))) : (((/* implicit */int) min((arr_7 [i_3 - 1] [i_3] [i_3] [i_3]), (arr_9 [i_3 + 1] [i_3] [i_3] [i_3] [i_3] [i_3]))))));
                        var_25 = max((min((((signed char) (_Bool)1)), (((/* implicit */signed char) ((-3378755786701200504LL) < (4609904228100422726LL)))))), (((/* implicit */signed char) (_Bool)1)));
                        arr_12 [9U] [i_1] [(unsigned char)1] [i_0] = ((/* implicit */unsigned short) (!(((arr_1 [i_0]) && (((/* implicit */_Bool) 1631612297U))))));
                    }
                } 
            } 
            var_26 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) max((arr_5 [i_1] [i_1] [i_0]), (max((((/* implicit */signed char) (_Bool)1)), ((signed char)104))))))) < (min((((2067655652U) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)100))))), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_8 [i_0] [i_0])))))))));
        }
    }
    var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 2596492574431035870LL)) ? (3378755786701200503LL) : (((/* implicit */long long int) ((/* implicit */int) var_0))))), (((/* implicit */long long int) ((unsigned char) var_9)))))) ? (((((/* implicit */_Bool) (unsigned char)128)) ? (((/* implicit */int) ((unsigned short) (signed char)-78))) : (((/* implicit */int) max((((/* implicit */unsigned char) var_0)), (var_5)))))) : (((int) (unsigned char)0))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12062
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_10 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((int) (unsigned short)65535))))) ? (max((((/* implicit */unsigned long long int) var_1)), (((((/* implicit */_Bool) (unsigned short)65535)) ? (arr_2 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) : (((((arr_2 [i_0] [i_0]) - (((/* implicit */unsigned long long int) 425809195U)))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((0ULL) < (((/* implicit */unsigned long long int) var_0))))))))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((long long int) 11516250305070110692ULL));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (short i_3 = 2; i_3 < 19; i_3 += 3) 
                    {
                        var_11 = ((/* implicit */unsigned long long int) max((var_11), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)46270))) : (((unsigned long long int) 0ULL))))));
                        var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) (((-(((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (var_5)))))) ^ (((/* implicit */int) ((_Bool) ((long long int) var_6)))))))));
                        var_13 = max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_3 + 1] [i_3] [i_3 - 1] [i_3] [i_3 - 2]))) : (1082504775U))), (((/* implicit */unsigned int) arr_1 [(short)4])));
                        var_14 = ((/* implicit */unsigned long long int) var_5);
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_15 = ((/* implicit */unsigned long long int) var_9);
                        var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_1] [i_1]))))) ? (max((-1289750487), (((/* implicit */int) arr_5 [i_0] [i_1])))) : (((/* implicit */int) max((arr_5 [i_4] [i_0]), (arr_5 [i_0] [i_1]))))));
                        var_17 = ((/* implicit */int) arr_5 [i_4] [i_1]);
                        var_18 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) max((arr_9 [i_0] [i_1] [i_2] [i_4] [i_1] [i_1]), (((/* implicit */unsigned int) arr_3 [i_0] [i_1]))))) || (((/* implicit */_Bool) arr_5 [i_4] [i_2])))))));
                        var_19 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((short) arr_13 [i_0] [i_0]))))) ? (((/* implicit */int) ((unsigned char) max(((unsigned short)65522), (((/* implicit */unsigned short) (_Bool)1)))))) : ((-((+(((/* implicit */int) var_7))))))));
                    }
                    var_20 = ((/* implicit */_Bool) (~(max((-7633304163644796071LL), (((/* implicit */long long int) (unsigned short)46258))))));
                    var_21 = ((/* implicit */unsigned short) var_0);
                }
            } 
        } 
    }
    var_22 = ((/* implicit */signed char) var_3);
}

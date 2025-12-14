/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172929
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
    var_11 = ((/* implicit */int) min((max((((/* implicit */long long int) var_9)), (min((var_1), (((/* implicit */long long int) var_6)))))), (((/* implicit */long long int) max(((-(var_0))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_10))))))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 10; i_3 += 2) 
                {
                    {
                        var_12 = ((/* implicit */long long int) arr_4 [i_0] [4U] [i_0]);
                        var_13 = ((/* implicit */short) arr_4 [i_3] [i_0] [i_0]);
                        var_14 += ((/* implicit */int) var_9);
                        var_15 += var_1;
                        var_16 += ((/* implicit */signed char) arr_1 [(_Bool)1] [i_1]);
                    }
                } 
            } 
        } 
        var_17 = ((/* implicit */int) (~(((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)70))))) ? (arr_7 [(unsigned char)8] [0U] [i_0] [i_0]) : (((/* implicit */long long int) (+(((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))))));
    }
    /* vectorizable */
    for (signed char i_4 = 0; i_4 < 10; i_4 += 1) /* same iter space */
    {
        arr_13 [i_4] = ((/* implicit */int) arr_5 [i_4] [i_4] [i_4]);
        arr_14 [i_4] [i_4] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((arr_3 [(_Bool)1]) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8)))))));
    }
    for (signed char i_5 = 0; i_5 < 10; i_5 += 1) /* same iter space */
    {
        var_18 += ((/* implicit */signed char) min((((/* implicit */unsigned int) var_2)), (max((min((((/* implicit */unsigned int) arr_12 [i_5])), (arr_8 [i_5]))), (((/* implicit */unsigned int) arr_10 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]))))));
        var_19 = ((/* implicit */unsigned char) var_0);
        var_20 = ((/* implicit */signed char) max((((/* implicit */unsigned int) (-((~(((/* implicit */int) var_10))))))), ((-(((((/* implicit */_Bool) arr_8 [i_5])) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))));
        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) arr_9 [i_5] [i_5] [i_5] [i_5]))));
    }
    var_22 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (min((((/* implicit */unsigned int) (unsigned char)23)), (428325875U)))))));
}

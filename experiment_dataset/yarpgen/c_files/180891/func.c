/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180891
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [(unsigned char)2] = ((/* implicit */unsigned int) (_Bool)1);
        arr_3 [i_0] = ((((/* implicit */_Bool) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)0)))) ? (((((((/* implicit */int) var_11)) + (((/* implicit */int) var_6)))) + (((/* implicit */int) (unsigned char)126)))) : (((/* implicit */int) max(((short)10531), (((/* implicit */short) (_Bool)1))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)61360)));
    }
    for (signed char i_1 = 2; i_1 < 13; i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 4; i_3 < 12; i_3 += 2) 
            {
                {
                    arr_12 [i_3 - 4] [i_1] [(_Bool)1] = ((/* implicit */int) (_Bool)1);
                    var_19 = ((/* implicit */unsigned short) min((var_19), (arr_8 [i_1 - 1] [(signed char)8] [(short)9])));
                    var_20 = (i_1 % 2 == 0) ? (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_5 [i_1])) << (((((/* implicit */int) (unsigned char)124)) - (122))))) + ((-(((/* implicit */int) arr_5 [i_1]))))))) ? (((((var_9) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) >> ((((-(((/* implicit */int) arr_9 [i_1])))) + (32))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((min(((_Bool)1), (var_4))) || (((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) arr_7 [(_Bool)1] [(_Bool)1]))))))))))) : (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_5 [i_1])) << (((((/* implicit */int) (unsigned char)124)) - (122))))) + ((-(((/* implicit */int) arr_5 [i_1]))))))) ? (((((var_9) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) >> ((((((-(((/* implicit */int) arr_9 [i_1])))) + (32))) - (26))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((min(((_Bool)1), (var_4))) || (((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) arr_7 [(_Bool)1] [(_Bool)1])))))))))));
                }
            } 
        } 
        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) max(((((!(var_6))) ? (((/* implicit */int) (unsigned char)2)) : (((/* implicit */int) arr_11 [(short)7] [i_1 + 2] [i_1 - 1] [i_1])))), (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_1 - 2])) && (((/* implicit */_Bool) arr_1 [i_1 - 2]))))))))));
    }
    for (signed char i_4 = 2; i_4 < 13; i_4 += 1) /* same iter space */
    {
        arr_15 [i_4] = arr_5 [6U];
        arr_16 [i_4] = ((/* implicit */short) max((((/* implicit */int) (_Bool)1)), (-1576047449)));
    }
    var_22 = ((/* implicit */unsigned short) min((((/* implicit */int) (_Bool)1)), ((-(((/* implicit */int) var_4))))));
    var_23 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) ((unsigned char) var_12))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) min(((_Bool)1), ((_Bool)1))))))));
}

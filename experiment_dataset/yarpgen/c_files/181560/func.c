/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181560
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
    var_18 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) 4091942734U)) ? (646620092U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))) : (((unsigned int) var_5)))) | (((/* implicit */unsigned int) ((((/* implicit */int) var_5)) ^ (((/* implicit */int) ((unsigned short) var_12))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */unsigned short) ((unsigned int) 3673119932U));
                /* LoopSeq 2 */
                for (unsigned short i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    var_20 = ((/* implicit */_Bool) arr_1 [i_0] [7U]);
                    var_21 -= ((/* implicit */short) ((unsigned char) min((((/* implicit */short) arr_6 [i_0] [i_1])), (var_2))));
                    /* LoopSeq 2 */
                    for (signed char i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        var_22 = ((/* implicit */unsigned char) (~(((((/* implicit */unsigned int) ((/* implicit */int) var_2))) - (var_15)))));
                        var_23 = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)159))));
                        var_24 = ((unsigned int) (!(((/* implicit */_Bool) var_6))));
                    }
                    for (unsigned int i_4 = 0; i_4 < 23; i_4 += 2) 
                    {
                        var_25 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)29))) : (arr_1 [i_2] [i_0]))), (((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (arr_1 [i_4] [i_2]) : (arr_1 [i_0] [i_2])))));
                        /* LoopSeq 1 */
                        for (short i_5 = 0; i_5 < 23; i_5 += 1) 
                        {
                            arr_15 [i_2] = ((/* implicit */short) min((((/* implicit */int) (short)26084)), ((-(((/* implicit */int) ((arr_1 [i_4] [(short)11]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)43037))))))))));
                            var_26 = ((/* implicit */unsigned char) ((signed char) arr_4 [i_0]));
                            var_27 = ((/* implicit */unsigned int) var_16);
                            var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) max((((/* implicit */short) (_Bool)1)), ((short)-26085))))) ? ((+((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (203024559U))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_8)))))));
                        }
                    }
                }
                for (unsigned char i_6 = 0; i_6 < 23; i_6 += 2) 
                {
                    var_29 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [(signed char)6] [i_1] [i_0])) ? (((/* implicit */int) arr_3 [i_6])) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_1]))))) ? (((/* implicit */int) max((arr_5 [i_0] [i_1] [i_6] [i_6]), ((unsigned char)150)))) : (((/* implicit */int) (!(((((/* implicit */_Bool) 4091968301U)) && (((/* implicit */_Bool) var_1))))))));
                    arr_18 [i_0] = ((/* implicit */unsigned int) (+(max((((14711044394766117338ULL) % (((/* implicit */unsigned long long int) 4091968301U)))), (((/* implicit */unsigned long long int) 3673119927U))))));
                    var_30 = ((/* implicit */unsigned char) min((var_30), (arr_9 [i_0] [i_0] [i_6] [i_0] [i_0] [i_0])));
                }
                arr_19 [(signed char)16] [i_0] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_4)) ? (min((arr_14 [i_0] [(unsigned char)22] [i_1] [(unsigned char)14] [i_0] [i_1] [i_0]), (((/* implicit */unsigned int) arr_7 [i_0])))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))))) == ((+((((_Bool)0) ? (3291630347U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)28391)))))))));
            }
        } 
    } 
}

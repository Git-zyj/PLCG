/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178764
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 15; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 3; i_2 < 17; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */short) (+(((((/* implicit */_Bool) var_11)) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_9 [i_1 - 1] [i_1 - 3] [i_2 - 2] [i_2 - 3]))))));
                            var_18 = ((/* implicit */int) max((var_18), (((((/* implicit */int) ((unsigned char) arr_1 [i_2 - 2]))) ^ (arr_5 [i_0] [i_1] [i_0] [(short)15])))));
                            var_19 = ((/* implicit */long long int) ((((min((arr_5 [i_1] [i_1 - 2] [i_1] [i_1]), (arr_5 [i_2 - 2] [i_2] [i_2] [i_2 - 2]))) + (2147483647))) << (((max((((/* implicit */unsigned long long int) ((int) arr_6 [(signed char)2] [(signed char)2]))), (3214758269226580881ULL))) - (18446744072111754974ULL)))));
                            var_20 = ((/* implicit */unsigned int) var_15);
                            var_21 = ((((((/* implicit */_Bool) ((unsigned char) arr_8 [i_1]))) ? (((((/* implicit */_Bool) arr_6 [i_2 + 2] [i_1])) ? (((/* implicit */int) arr_1 [i_3])) : (((/* implicit */int) var_12)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2 + 1] [i_3]))))))) + ((~(arr_5 [i_3] [i_2 - 2] [i_1 + 2] [i_0]))));
                        }
                    } 
                } 
                arr_10 [i_0] [i_0] [i_0] = ((/* implicit */int) ((((((/* implicit */unsigned long long int) (+(var_7)))) + ((+(15231985804482970725ULL))))) << (((((/* implicit */int) arr_3 [i_0])) - (129)))));
                var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((int) max((arr_0 [11ULL] [i_1 + 3]), (arr_0 [i_0] [i_1 + 2])))))));
                var_23 = arr_2 [i_1];
                arr_11 [(unsigned char)10] [i_1 - 3] = ((/* implicit */_Bool) ((int) 8902120479486410794LL));
            }
        } 
    } 
    var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) (+(((/* implicit */int) var_10)))))));
}

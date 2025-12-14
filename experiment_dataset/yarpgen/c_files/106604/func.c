/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106604
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
    var_14 = min((var_3), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)243))) > (((((/* implicit */_Bool) -1309526120)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))));
    var_15 ^= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((int) (unsigned char)189))) | (var_13)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                var_16 |= ((/* implicit */unsigned char) min((((/* implicit */int) max((arr_1 [i_1]), (arr_1 [i_1])))), (((var_6) | (((/* implicit */int) arr_1 [i_1]))))));
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    arr_6 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (-(((((/* implicit */int) ((unsigned char) arr_1 [i_0]))) | (((/* implicit */int) ((((/* implicit */int) (unsigned char)63)) != (((/* implicit */int) (unsigned char)104)))))))));
                    var_17 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(var_13)))) ? (((/* implicit */int) ((unsigned char) arr_1 [i_1]))) : (((/* implicit */int) min(((unsigned char)189), ((unsigned char)74))))));
                }
                /* vectorizable */
                for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 4) 
                {
                    var_18 -= ((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_1])) != (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
                    var_19 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_4 [i_0] [3ULL] [i_3] [i_3])) > (((/* implicit */int) (unsigned char)66)))) ? (((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [(unsigned char)1])) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)170))) | (var_13)))));
                }
                var_20 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) max((arr_1 [i_0]), (((unsigned char) arr_4 [i_0] [i_1] [i_1] [i_1]))))), (((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (8698567654761864071ULL) : (arr_2 [i_0] [i_0])))));
                arr_10 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (unsigned char)170)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)5))) : (0ULL)))));
                arr_11 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) arr_4 [i_0] [1] [i_1] [i_0])) != (((/* implicit */int) arr_4 [i_0] [i_0] [11U] [i_1]))))) > ((+((+(var_6)))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) ((unsigned char) var_11));
}

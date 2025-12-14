/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105738
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
    var_17 -= ((/* implicit */int) (_Bool)1);
    /* LoopSeq 2 */
    for (signed char i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) max((arr_0 [i_0 - 2]), (((/* implicit */signed char) var_11))))) ? (4534203917156811715ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))))));
        arr_3 [i_0 + 1] = ((/* implicit */long long int) var_12);
        arr_4 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) < (arr_1 [i_0 + 1])))) >> (((((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 - 1]))) | (arr_1 [i_0]))) - (6322369978429336456ULL))) - (6345224409412704074ULL)))));
        arr_5 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_11)) : (-1487668878))), (((/* implicit */int) (!(var_11))))))) ? (((long long int) ((((/* implicit */_Bool) arr_0 [9U])) || (((/* implicit */_Bool) arr_1 [i_0]))))) : (((/* implicit */long long int) ((((var_16) > (var_16))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10)))))));
        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (arr_1 [i_0 + 1]) : (arr_1 [i_0 - 1]))))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_8 [i_1] = ((/* implicit */int) arr_6 [i_1]);
        var_19 += ((/* implicit */unsigned int) ((max((((_Bool) arr_6 [i_1])), ((!(((/* implicit */_Bool) arr_6 [i_1])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1]))))) : (((/* implicit */int) ((((/* implicit */int) (signed char)67)) <= (((/* implicit */int) arr_7 [(unsigned char)2] [i_1])))))));
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 16; i_2 += 2) 
        {
            for (int i_3 = 0; i_3 < 18; i_3 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 18; i_4 += 4) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-68)))))));
                                arr_18 [i_1] [i_4] [i_3] [i_1] [i_5] [i_2] &= ((/* implicit */unsigned long long int) arr_16 [i_1] [i_2 - 3] [i_2] [i_3] [i_2 - 3] [i_5]);
                                var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (!(((/* implicit */_Bool) -9)))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) var_15)))) && ((!(arr_11 [i_2 - 3] [i_2 + 2] [i_2 - 2])))));
                }
            } 
        } 
    }
    var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) 17310619314192214476ULL))));
}

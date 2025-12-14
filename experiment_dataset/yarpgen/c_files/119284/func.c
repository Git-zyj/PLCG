/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119284
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
    for (int i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_2 = 2; i_2 < 18; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            {
                                var_12 = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)3261))));
                                arr_17 [i_0] [i_1] [i_1] [i_3] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)65531)) : (((/* implicit */int) arr_9 [i_0 + 1] [i_0 + 1] [i_0 + 1])))))));
                                arr_18 [(_Bool)1] [i_1] [(_Bool)1] [(_Bool)1] [i_0] [i_1] [i_1] = var_5;
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_0] [i_0] [(signed char)1] [i_0])) << (((/* implicit */int) (unsigned short)4))))) ? (((((/* implicit */_Bool) (signed char)-64)) ? (((/* implicit */int) (unsigned short)10770)) : (((/* implicit */int) (unsigned short)54765)))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)57344)) > (((/* implicit */int) arr_1 [i_1] [i_1]))))))))));
                    var_14 ^= ((/* implicit */unsigned char) ((((/* implicit */int) arr_14 [i_0 + 1] [i_1] [i_2 - 2] [i_1])) == (((/* implicit */int) (unsigned short)65531))));
                    var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) ((_Bool) (unsigned short)4)))));
                }
                var_16 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)14))));
                arr_19 [i_0] = ((/* implicit */unsigned char) max((min((((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_0])) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))), (((/* implicit */unsigned long long int) ((arr_7 [i_0] [i_0] [i_1] [i_1]) / (((/* implicit */int) var_7))))))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_0 - 1] [i_0]))) ^ (arr_15 [i_1] [i_1] [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0]))))));
                var_17 = ((((/* implicit */_Bool) ((((((/* implicit */int) arr_9 [i_1] [i_0] [i_0])) != (((/* implicit */int) (unsigned short)65526)))) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0])) : (((((/* implicit */_Bool) var_0)) ? (arr_5 [i_0] [i_0]) : (((/* implicit */int) arr_9 [i_1] [i_0] [i_0]))))))) ? (((/* implicit */int) ((((/* implicit */int) min((((/* implicit */unsigned char) var_1)), ((unsigned char)102)))) <= (((/* implicit */int) ((signed char) -1LL)))))) : (((/* implicit */int) ((unsigned char) (unsigned char)102))));
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) var_1);
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113192
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
    var_19 = ((/* implicit */long long int) ((_Bool) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (-1)))) <= (((/* implicit */int) ((signed char) var_10))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 7; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_1] = (+(((((/* implicit */_Bool) (unsigned char)20)) ? (((/* implicit */int) arr_3 [i_1 + 4])) : (((/* implicit */int) (_Bool)1)))));
                /* LoopSeq 1 */
                for (short i_2 = 4; i_2 < 10; i_2 += 4) 
                {
                    var_20 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (-(((/* implicit */int) arr_3 [i_0]))))))) > (((arr_6 [i_2] [i_1] [i_2] [i_1]) - (((/* implicit */long long int) 16))))));
                    arr_7 [i_0] [i_2 - 3] [i_2] [i_0] = ((/* implicit */unsigned char) (~((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1 + 4]))) : (arr_5 [i_1 + 4] [i_2 - 3])))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        for (int i_4 = 3; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */_Bool) (((-(var_13))) + (((/* implicit */unsigned long long int) (-(189507619U))))));
                                var_22 = ((/* implicit */signed char) ((int) ((((/* implicit */int) (!(((/* implicit */_Bool) 1879048192U))))) <= (((/* implicit */int) ((735189732) < (-88787326)))))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) arr_3 [i_1 + 2]))));
                    var_24 -= ((/* implicit */int) ((signed char) (~(0U))));
                }
                var_25 = ((/* implicit */unsigned char) min((((unsigned int) min((var_2), ((unsigned char)98)))), (((/* implicit */unsigned int) (signed char)-111))));
                var_26 = ((/* implicit */int) min((0U), (1481252069U)));
                var_27 = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) arr_12 [i_1] [(_Bool)1] [i_0] [i_0] [i_1 + 2]))) ? (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 4651084623445696441LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-31))) : (7608725098288095617ULL))))))) : (((((/* implicit */int) ((unsigned short) (unsigned char)199))) & (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)55)))))))));
            }
        } 
    } 
}

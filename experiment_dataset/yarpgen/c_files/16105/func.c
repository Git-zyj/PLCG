/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16105
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
    var_17 = ((((/* implicit */_Bool) max((min((4858477268282361640ULL), (((/* implicit */unsigned long long int) 2620442397667613642LL)))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-106)))))))) ? (((/* implicit */unsigned int) ((var_3) ? (((/* implicit */int) (!(var_2)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)24198))) == (var_7))))))) : (((unsigned int) ((((/* implicit */unsigned int) -1546458574)) >= (2017246448U)))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (signed char i_1 = 3; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    var_18 *= ((arr_1 [i_0] [(signed char)6]) | ((+(1075759354U))));
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        arr_10 [i_0] [i_0] [i_0] [i_0] [(short)3] [(_Bool)1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) >= (6517627020156066918ULL)));
                        var_19 ^= ((/* implicit */signed char) ((((/* implicit */int) var_4)) - (((((/* implicit */int) var_3)) >> (((67649253U) - (67649231U)))))));
                        var_20 = ((((/* implicit */_Bool) (-(16729333642343195559ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1] [i_1 + 4] [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 1]))) : (var_12));
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 2) 
                    {
                        arr_13 [i_0] [i_0] [i_2] [i_2] = ((((/* implicit */_Bool) ((unsigned long long int) var_3))) ? (((((/* implicit */_Bool) var_0)) ? (var_0) : (var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_1 - 2] [i_0] [i_4]))));
                        var_21 = ((/* implicit */unsigned int) (_Bool)0);
                        /* LoopSeq 1 */
                        for (signed char i_5 = 0; i_5 < 20; i_5 += 2) 
                        {
                            var_22 = ((/* implicit */unsigned int) var_3);
                            var_23 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-48))) & (((unsigned long long int) arr_1 [i_0] [6ULL])));
                        }
                        var_24 = ((/* implicit */unsigned int) (!(arr_4 [i_4] [i_0])));
                    }
                }
                arr_16 [i_0] [i_0] [i_1] = arr_5 [i_0] [i_0];
                arr_17 [9ULL] [i_1] [i_1] = ((_Bool) ((((/* implicit */_Bool) (unsigned char)150)) ? (11929117053553484692ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_1 + 2] [i_1 - 1] [i_1] [i_1] [i_0])))));
                arr_18 [i_0] = ((/* implicit */unsigned char) var_10);
            }
        } 
    } 
    var_25 = ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (_Bool)0)));
    var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) 6517627020156066918ULL))) ? (var_7) : (var_8)))) && (((/* implicit */_Bool) var_8))));
    var_27 |= ((/* implicit */long long int) ((unsigned int) var_1));
}

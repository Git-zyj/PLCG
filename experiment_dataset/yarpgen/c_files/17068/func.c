/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17068
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
    var_17 -= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)8191))) ^ (((min((((/* implicit */long long int) (short)-25727)), (var_3))) ^ (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) (unsigned char)138)), ((short)-5425)))))))));
    var_18 = ((/* implicit */unsigned long long int) ((unsigned short) (+((-(((/* implicit */int) (short)-7550)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) (_Bool)1))));
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 21; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            {
                                var_20 ^= ((/* implicit */unsigned short) (short)13165);
                                var_21 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 872617236)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (491489635238472881ULL)))) || (((/* implicit */_Bool) ((unsigned long long int) 15183172270277838801ULL))))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_0 [i_1])) || (((/* implicit */_Bool) (-(((/* implicit */int) (short)-5444))))))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (unsigned char)97))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 131071LL)) ? (((/* implicit */int) (short)25726)) : (((/* implicit */int) (signed char)-110))))) ? (((/* implicit */int) (short)-26825)) : (((/* implicit */int) min(((short)17742), (((/* implicit */short) (signed char)-108)))))))));
                }
                /* vectorizable */
                for (unsigned short i_5 = 1; i_5 < 23; i_5 += 1) 
                {
                    var_23 = ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_1] [i_1] [i_5 - 1] [i_5] [i_5 + 1])) && (((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_1] [i_1] [i_5] [i_5 + 1])));
                    /* LoopSeq 1 */
                    for (signed char i_6 = 0; i_6 < 24; i_6 += 2) 
                    {
                        var_24 = ((/* implicit */long long int) (+(1496076843)));
                        var_25 = ((/* implicit */long long int) arr_13 [i_5 + 1] [i_5 + 1]);
                    }
                }
                /* LoopSeq 1 */
                for (short i_7 = 0; i_7 < 24; i_7 += 1) 
                {
                    var_26 ^= ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_8 = 1; i_8 < 22; i_8 += 1) 
                    {
                        var_27 = ((/* implicit */unsigned char) (~((-(((/* implicit */int) arr_12 [i_0] [i_8] [i_8] [i_8 - 1]))))));
                        var_28 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (15617948787266421247ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)1984)))))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_4 [(_Bool)1] [i_1] [i_7] [i_8 - 1]))) | (-3632448040566157817LL))) : (((((/* implicit */_Bool) 15868268972303249931ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_0] [i_7] [i_0]))) : (-6485825944239853093LL)))))));
                        var_29 = ((/* implicit */unsigned char) (-(((((/* implicit */int) (short)17758)) << (((6485825944239853093LL) - (6485825944239853093LL)))))));
                        var_30 = ((/* implicit */unsigned long long int) (~(6485825944239853093LL)));
                    }
                }
                var_31 = ((/* implicit */_Bool) ((unsigned char) min((arr_11 [i_0] [i_0]), (((/* implicit */unsigned char) (_Bool)1)))));
                var_32 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) arr_2 [i_0])) % (max((((/* implicit */unsigned long long int) min((-828133499125335735LL), (var_3)))), (var_7)))));
            }
        } 
    } 
    var_33 = ((/* implicit */long long int) max((var_33), (((/* implicit */long long int) (unsigned char)60))));
}

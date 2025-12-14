/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165478
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
        var_16 *= ((/* implicit */long long int) ((_Bool) ((unsigned long long int) (+(1809545701)))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [(signed char)1] [(signed char)1] [i_1] = -1809545701;
                    var_17 -= ((/* implicit */unsigned short) (((-(arr_1 [i_0] [i_1 - 1]))) + (max((max((((/* implicit */int) arr_6 [i_0] [i_1] [i_2])), (-1031293902))), (arr_4 [i_2] [i_1 - 1])))));
                }
            } 
        } 
        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) 1809545709)) ? (((/* implicit */int) (!(((((/* implicit */_Bool) arr_4 [i_0] [i_0])) || (((/* implicit */_Bool) 1245763471U))))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) 3059860250U)) != (max((((/* implicit */unsigned long long int) 3046178769U)), (1073741823ULL))))))));
        /* LoopNest 2 */
        for (signed char i_3 = 1; i_3 < 10; i_3 += 4) 
        {
            for (unsigned short i_4 = 1; i_4 < 10; i_4 += 1) 
            {
                {
                    var_19 *= ((/* implicit */unsigned int) ((unsigned long long int) arr_12 [i_0] [i_0]));
                    /* LoopSeq 1 */
                    for (int i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        var_20 = ((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) max((arr_10 [i_0] [i_0] [1]), (((/* implicit */signed char) (_Bool)0))))))));
                        arr_15 [i_0] [i_3 + 2] [i_3] [i_4] [i_4 + 1] [i_0] = min((((unsigned int) ((((/* implicit */_Bool) (unsigned short)31)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_9 [(signed char)1]))))), ((-(((unsigned int) arr_2 [i_4])))));
                    }
                    var_21 *= (+(((2409707534U) | (((/* implicit */unsigned int) max((((/* implicit */int) (_Bool)0)), (2115198711)))))));
                }
            } 
        } 
        var_22 *= ((/* implicit */unsigned char) ((unsigned short) max((var_14), (((/* implicit */unsigned long long int) 1809545702)))));
    }
    for (unsigned char i_6 = 0; i_6 < 24; i_6 += 2) 
    {
        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(1031293915)))) ? (((/* implicit */int) (unsigned char)243)) : (((((/* implicit */_Bool) (signed char)-97)) ? (((/* implicit */int) (signed char)101)) : (((/* implicit */int) (unsigned short)48919))))));
        arr_18 [i_6] [i_6] = ((/* implicit */int) max((((/* implicit */long long int) ((unsigned int) -1809545691))), (((((/* implicit */_Bool) arr_17 [i_6])) ? (((/* implicit */long long int) arr_17 [i_6])) : (arr_16 [i_6] [i_6])))));
    }
    for (unsigned int i_7 = 0; i_7 < 20; i_7 += 4) 
    {
        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) arr_20 [i_7] [i_7])) || (((/* implicit */_Bool) min((arr_21 [i_7]), (arr_21 [i_7]))))));
        arr_22 [i_7] [i_7] = ((/* implicit */short) ((((/* implicit */unsigned int) var_12)) - (((((((/* implicit */_Bool) arr_17 [i_7])) && (((/* implicit */_Bool) 3U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)9057))) : (((unsigned int) var_15))))));
    }
    var_25 = ((/* implicit */short) max(((~(((/* implicit */int) ((unsigned short) 4294967293U))))), (((/* implicit */int) (short)6565))));
}

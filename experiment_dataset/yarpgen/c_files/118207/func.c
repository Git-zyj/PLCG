/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118207
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
    var_17 = ((/* implicit */unsigned int) var_10);
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 1; i_1 < 8; i_1 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned char i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                for (short i_3 = 0; i_3 < 11; i_3 += 2) 
                {
                    for (int i_4 = 0; i_4 < 11; i_4 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned int) ((_Bool) var_4));
                            var_19 = ((/* implicit */unsigned short) ((((unsigned long long int) arr_4 [i_1 + 2] [i_1 + 2] [i_1 + 1])) * (((((/* implicit */_Bool) arr_4 [i_1 - 1] [i_1 - 1] [i_1 + 3])) ? (9175002556335807148ULL) : (((/* implicit */unsigned long long int) var_3))))));
                            var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) min(((-(((/* implicit */int) arr_4 [i_1 + 3] [i_2] [i_3])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_2] [i_3] [i_4]))))))))));
                            arr_17 [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (_Bool)0)) >= (((/* implicit */int) (unsigned short)3780))))) >> (((max((((/* implicit */long long int) (unsigned short)59376)), (((var_9) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (72055395014672384LL))))) - (59372LL)))));
                        }
                    } 
                } 
            } 
            var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((signed char)-91), ((signed char)-57)))) ? (max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)31661)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))), (min((var_0), (((/* implicit */long long int) arr_3 [i_0] [i_1 + 1] [i_1 + 2])))))) : (((/* implicit */long long int) 2642107883U))));
        }
        var_22 = ((/* implicit */unsigned char) min((((arr_8 [i_0] [i_0] [i_0] [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_7)), (var_8))))));
        var_23 = var_12;
    }
    for (unsigned short i_5 = 0; i_5 < 22; i_5 += 2) 
    {
        /* LoopSeq 1 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            arr_23 [i_6] [i_5] = ((/* implicit */short) ((((/* implicit */int) min((max(((unsigned short)53922), (((/* implicit */unsigned short) var_1)))), (((/* implicit */unsigned short) max(((short)0), (((/* implicit */short) var_9)))))))) != (((/* implicit */int) (_Bool)1))));
            arr_24 [6U] = ((/* implicit */short) ((int) arr_22 [i_6]));
            arr_25 [i_5] [i_5] = ((/* implicit */unsigned short) (+(max((((((/* implicit */_Bool) -1259707205)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_12))), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) (unsigned char)255)), ((unsigned short)59376))))))));
            var_24 = min((((/* implicit */unsigned int) ((short) var_15))), (max((arr_21 [i_5] [i_6]), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_10))))))));
        }
        var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) var_1))));
        var_26 = ((/* implicit */short) min((min((((((/* implicit */int) (unsigned short)59377)) ^ (((/* implicit */int) (short)14863)))), (((/* implicit */int) var_14)))), (((/* implicit */int) var_1))));
    }
    var_27 = ((/* implicit */long long int) var_7);
    var_28 = var_0;
}

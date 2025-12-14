/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110240
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 3; i_1 < 22; i_1 += 4) 
        {
            arr_5 [13ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)0))))) != (max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)18))))), (min((0ULL), (((/* implicit */unsigned long long int) (_Bool)1))))))));
            arr_6 [i_0] [i_0] = ((/* implicit */short) var_6);
        }
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 23; i_2 += 2) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 3) 
            {
                {
                    var_14 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_9 [i_0] [i_2] [i_0] [i_0])))) != (arr_4 [i_0] [i_2])));
                    var_15 = ((/* implicit */unsigned int) arr_9 [i_2] [i_2] [i_2] [i_2]);
                }
            } 
        } 
    }
    for (unsigned int i_4 = 1; i_4 < 11; i_4 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_5 = 4; i_5 < 10; i_5 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned int i_6 = 1; i_6 < 13; i_6 += 2) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 3) 
                {
                    for (unsigned short i_8 = 4; i_8 < 13; i_8 += 4) 
                    {
                        {
                            arr_28 [i_8] [i_4] [i_6 - 1] [i_4] [i_4] = ((/* implicit */unsigned int) (((~(17480386689518572284ULL))) <= (((unsigned long long int) arr_9 [i_4 + 1] [i_4 + 1] [i_6 + 1] [i_8 + 1]))));
                            var_16 *= ((/* implicit */unsigned int) arr_22 [i_4] [i_5 - 4] [i_6] [i_6] [i_8]);
                        }
                    } 
                } 
            } 
            arr_29 [i_4] = ((/* implicit */_Bool) arr_9 [i_5] [i_5] [i_4] [i_4]);
            var_17 = ((/* implicit */_Bool) ((max((min((17480386689518572284ULL), (9774034083464094672ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (short)32760)), (arr_4 [i_4] [i_4])))))) + (((unsigned long long int) arr_7 [14ULL] [19ULL]))));
        }
        for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 2) 
        {
            arr_33 [i_4] = min((((/* implicit */unsigned int) min((arr_26 [i_4 + 1]), (((/* implicit */short) var_5))))), (arr_4 [i_9] [i_4]));
            var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (1318780440U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_4] [i_4]))))))) && (((arr_17 [i_4] [i_4 + 2] [i_9] [i_9]) <= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (_Bool)0)) <= (((/* implicit */int) arr_32 [i_4]))))))))));
        }
        arr_34 [i_4] [6ULL] |= ((/* implicit */unsigned short) arr_17 [(_Bool)0] [i_4] [i_4] [i_4]);
        arr_35 [i_4] [i_4] = ((/* implicit */unsigned long long int) (!(((max((((/* implicit */unsigned long long int) var_5)), (966357384190979352ULL))) <= (max((966357384190979332ULL), (((/* implicit */unsigned long long int) arr_2 [i_4]))))))));
    }
    /* LoopSeq 1 */
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        var_19 = ((/* implicit */unsigned long long int) max((var_19), (16261998872214838635ULL)));
        var_20 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_0 [i_10])))) ? (max((arr_4 [i_10] [i_10]), (arr_36 [i_10] [i_10]))) : (((((/* implicit */_Bool) var_7)) ? (arr_36 [i_10] [i_10]) : (arr_8 [i_10] [i_10])))));
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143343
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
    var_15 = ((/* implicit */int) ((unsigned int) 1295525450));
    var_16 -= ((/* implicit */short) max((var_3), (((/* implicit */long long int) (short)-5962))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_17 += ((/* implicit */_Bool) ((unsigned int) ((max((var_4), (var_9))) % (max((((/* implicit */unsigned long long int) var_7)), (var_5))))));
                arr_5 [10] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) -9130257609423756353LL)), (7915728372362194618ULL)))) ? (((/* implicit */unsigned long long int) 2107773098765355099LL)) : (10531015701347357010ULL))))));
                arr_6 [i_0] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)67)), (var_9))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 4) 
    {
        for (short i_3 = 0; i_3 < 22; i_3 += 4) 
        {
            {
                var_18 -= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_9 [i_2])), (7915728372362194623ULL)));
                arr_14 [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */int) var_14)) < (((/* implicit */int) arr_7 [i_2] [i_2])))) ? (max((((/* implicit */unsigned long long int) (signed char)-89)), (7915728372362194622ULL))) : (((/* implicit */unsigned long long int) max((arr_3 [i_2] [i_2]), (((/* implicit */long long int) var_11)))))))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_14)) : (var_2)))), (max((((/* implicit */unsigned long long int) arr_13 [i_2] [14U] [i_3])), (10531015701347357033ULL))))) : (max((((((/* implicit */_Bool) -1445378677)) ? (10531015701347356999ULL) : (((/* implicit */unsigned long long int) 2472836935202614378LL)))), (((/* implicit */unsigned long long int) max((arr_8 [i_2] [i_2]), (arr_8 [i_2] [i_3]))))))));
                arr_15 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_11 [i_3] [i_3] [i_2])) : (((/* implicit */int) arr_13 [i_2] [i_3] [i_3]))));
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (signed char i_6 = 0; i_6 < 22; i_6 += 4) 
                            {
                                arr_25 [i_2] [i_3] [i_4] [(short)16] [i_5] [i_5] [i_6] = ((/* implicit */unsigned char) ((_Bool) (+(2329377232U))));
                                var_19 = (signed char)0;
                            }
                            var_20 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_13 [(_Bool)1] [i_3] [i_2])))) ? ((-(((/* implicit */int) arr_8 [i_5] [i_3])))) : (((/* implicit */int) ((((/* implicit */int) arr_8 [i_2] [i_2])) != (((/* implicit */int) arr_8 [i_4] [i_3])))))));
                            arr_26 [i_2] [(signed char)5] [i_4] = ((/* implicit */unsigned int) (-(max((max((1667559039121808300LL), (((/* implicit */long long int) arr_24 [i_5])))), (((/* implicit */long long int) (unsigned char)67))))));
                        }
                    } 
                } 
                arr_27 [i_2] [i_3] = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) -987552239)) ? (((/* implicit */unsigned long long int) var_1)) : (var_9))));
            }
        } 
    } 
}

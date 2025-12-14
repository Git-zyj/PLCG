/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131353
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
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            {
                var_10 = ((/* implicit */signed char) (+(15910576185705802408ULL)));
                var_11 += ((/* implicit */unsigned long long int) ((3375682008456534572LL) << (((arr_0 [12ULL] [16U]) - (2332769059U)))));
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) (short)6589))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 4; i_3 < 16; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            {
                                var_13 ^= ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) (signed char)-48))) << (((((/* implicit */int) (short)6616)) - (6616)))));
                                arr_14 [i_0] [i_1] [i_0] [i_3] [i_4] = ((/* implicit */long long int) ((signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) (short)-6587)))) * (((arr_4 [i_0] [i_0]) >> (((((/* implicit */int) (signed char)-123)) + (154))))))));
                                arr_15 [i_0] [i_3 + 1] = ((/* implicit */_Bool) ((short) ((unsigned long long int) ((unsigned short) arr_1 [i_0]))));
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) arr_3 [i_2]))) & (((int) (unsigned short)14130))));
                }
                for (short i_5 = 0; i_5 < 19; i_5 += 4) 
                {
                    arr_19 [i_0] = ((/* implicit */signed char) (short)6605);
                    arr_20 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) ((unsigned short) ((short) arr_11 [i_0])));
                    var_14 = ((/* implicit */unsigned short) min((var_14), (((unsigned short) ((unsigned short) (unsigned short)48013)))));
                }
                var_15 = ((/* implicit */signed char) (unsigned short)14153);
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) ((short) ((((/* implicit */long long int) ((/* implicit */int) ((short) (signed char)120)))) | (((8069134112393119991LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1814))))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185635
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
    var_10 = ((/* implicit */_Bool) (short)-7408);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    var_11 = max((((/* implicit */unsigned int) ((short) var_4))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2 + 1]))) & (var_2))));
                    var_12 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_2 + 1] [i_2 + 1] [i_2 + 1]))));
                    var_13 = ((/* implicit */unsigned char) ((((arr_2 [i_2 + 1]) >> (((((/* implicit */int) (short)-7408)) + (7429))))) == (833673299)));
                    var_14 -= ((/* implicit */unsigned long long int) min(((~(((/* implicit */int) arr_0 [i_2 + 1])))), (((/* implicit */int) (!(((/* implicit */_Bool) (short)1848)))))));
                    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7))))) & (((((/* implicit */_Bool) var_2)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-5832)))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_3 [i_0] [i_1] [4U]))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-7408))) : (arr_3 [i_0] [i_1] [i_2]))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))) <= (((((((/* implicit */_Bool) arr_8 [(unsigned char)16])) ? (var_6) : (((/* implicit */unsigned long long int) arr_8 [2])))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_3]))))))))));
        /* LoopNest 2 */
        for (short i_4 = 1; i_4 < 16; i_4 += 3) 
        {
            for (int i_5 = 1; i_5 < 15; i_5 += 3) 
            {
                {
                    var_17 -= ((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)18)))))));
                    var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned int) (unsigned char)58)))));
                }
            } 
        } 
        var_19 = (-((-(max((((/* implicit */unsigned int) arr_14 [(_Bool)1] [i_3])), (arr_9 [i_3] [i_3]))))));
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115665
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
    for (short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                arr_5 [i_1] [8U] = ((/* implicit */unsigned int) max(((!(((/* implicit */_Bool) arr_2 [i_0] [11U] [(_Bool)1])))), (((((/* implicit */int) ((signed char) arr_1 [i_1]))) > (((/* implicit */int) ((((/* implicit */int) (unsigned short)15437)) > (((/* implicit */int) arr_1 [i_1])))))))));
                arr_6 [i_0] [i_0] = (((_Bool)1) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (arr_4 [i_0] [i_1] [i_1]) : (arr_4 [i_0] [i_0] [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)6))));
                arr_7 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [(short)10]))))) >> (((max((((/* implicit */unsigned int) (_Bool)1)), (2937083322U))) - (2937083298U)))))) || (((/* implicit */_Bool) min((((unsigned long long int) 24308400)), (((/* implicit */unsigned long long int) min((-5887508477978467777LL), (((/* implicit */long long int) (_Bool)1))))))))));
                var_20 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)15)) / (((/* implicit */int) (short)128))))) / (min((((/* implicit */unsigned int) arr_2 [i_0] [i_0] [(unsigned char)0])), (2240248531U))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 23; i_2 += 1) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                arr_14 [i_2] [i_2] = ((/* implicit */unsigned char) min((((/* implicit */long long int) min((((/* implicit */int) min((((/* implicit */short) arr_8 [i_2])), ((short)-14094)))), ((~(((/* implicit */int) arr_8 [i_2]))))))), (max((((/* implicit */long long int) arr_13 [i_2] [i_2])), (((((/* implicit */_Bool) arr_9 [i_2] [i_3])) ? (5887508477978467802LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
                var_21 = ((((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_13 [i_2] [i_2])))) : (((((/* implicit */_Bool) (short)22931)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-5887508477978467791LL))))) < (((/* implicit */long long int) min((((/* implicit */int) (unsigned char)16)), (arr_12 [i_2] [i_3])))));
            }
        } 
    } 
    var_22 &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)248))))) * ((+(((/* implicit */int) (_Bool)0))))))) ? (((((var_0) ? (((/* implicit */int) (short)-3164)) : (((/* implicit */int) (_Bool)1)))) + ((~(((/* implicit */int) var_9)))))) : (((/* implicit */int) ((((/* implicit */int) var_4)) <= (((/* implicit */int) var_10)))))));
}

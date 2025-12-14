/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175778
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
    var_17 = ((/* implicit */_Bool) max((((signed char) ((((/* implicit */_Bool) 9502806672274555089ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-1))))), (((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (unsigned char)148)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 24; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((arr_2 [(_Bool)1] [i_2]) - (((/* implicit */long long int) ((/* implicit */int) arr_5 [(_Bool)0] [i_2]))))))));
                    arr_7 [i_0] [i_2] = ((/* implicit */unsigned char) ((unsigned short) var_10));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_3 = 0; i_3 < 18; i_3 += 2) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            {
                var_19 = ((/* implicit */_Bool) max((((long long int) ((int) -1775045559))), (((/* implicit */long long int) ((unsigned int) (-(((/* implicit */int) (short)-1))))))));
                arr_14 [i_4] = ((/* implicit */unsigned long long int) arr_8 [(unsigned char)11]);
                var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) arr_10 [10U]))));
                var_21 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 0U)))))) == ((+(arr_6 [i_3] [i_4] [i_3])))));
            }
        } 
    } 
    var_22 &= ((/* implicit */unsigned short) var_9);
    var_23 = min((((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) <= (var_9)))) + (((/* implicit */int) ((short) var_14))))), (((/* implicit */int) var_12)));
}

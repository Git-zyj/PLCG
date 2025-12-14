/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110945
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
    for (short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) (+(var_10)))) ? ((+(((/* implicit */int) (_Bool)1)))) : (-1070958804))), ((+(((/* implicit */int) var_3)))))))));
                arr_5 [i_1] [i_1] = ((/* implicit */long long int) max((((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? (((/* implicit */int) ((unsigned char) var_2))) : (((/* implicit */int) max((var_2), (((/* implicit */unsigned short) arr_1 [(short)6]))))))), ((((_Bool)1) ? (((/* implicit */int) (short)-2552)) : (((/* implicit */int) (short)2552))))));
                var_12 = ((/* implicit */unsigned short) (short)-5569);
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -5447166868548053104LL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (max((((/* implicit */unsigned long long int) (short)2571)), (11921340869375708178ULL)))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6))))) : (max((max((306445258042379450ULL), (((/* implicit */unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) var_9))))));
    /* LoopSeq 1 */
    for (int i_2 = 0; i_2 < 16; i_2 += 2) 
    {
        var_14 = ((/* implicit */unsigned long long int) min(((-(((/* implicit */int) (short)-1)))), (((/* implicit */int) min(((unsigned short)8232), (((/* implicit */unsigned short) (short)-2577)))))));
        arr_10 [(_Bool)1] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */int) var_2)) << (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_9 [i_2])) ? (var_5) : (((/* implicit */unsigned long long int) var_1)))) : (((((/* implicit */_Bool) var_2)) ? (var_10) : (var_0))))), (((/* implicit */unsigned long long int) arr_6 [i_2]))));
    }
    var_15 = var_8;
    var_16 = ((/* implicit */unsigned char) var_1);
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154870
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    var_11 += ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_1)), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) var_2)) : (var_3)))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_0)), ((unsigned short)0)))) : (max((((/* implicit */int) (short)56)), (((var_1) + (((/* implicit */int) var_9)))))));
                    var_12 = ((/* implicit */short) (!((!((!(var_10)))))));
                    var_13 = ((/* implicit */int) ((short) (~(((/* implicit */int) var_6)))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */short) var_0);
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_3 = 0; i_3 < 20; i_3 += 4) 
    {
        var_15 = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) (unsigned char)80)) : (-1958376156)));
        var_16 = ((/* implicit */unsigned long long int) ((unsigned short) (unsigned char)175));
        var_17 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_8 [i_3]))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_4 = 0; i_4 < 14; i_4 += 2) 
    {
        arr_13 [i_4] [i_4] = ((/* implicit */_Bool) (+(var_2)));
        var_18 = ((/* implicit */short) ((unsigned short) ((var_10) ? (arr_8 [i_4]) : (((/* implicit */long long int) ((/* implicit */int) var_10))))));
        var_19 = ((/* implicit */int) arr_12 [i_4]);
        arr_14 [i_4] = ((/* implicit */_Bool) ((var_9) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_10 [i_4])));
        var_20 = ((/* implicit */_Bool) ((short) arr_6 [i_4]));
    }
    var_21 = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)175))))))))));
}

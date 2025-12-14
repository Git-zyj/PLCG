/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175879
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
    var_11 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) max((var_3), (var_5)))) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)53923))) / (var_9))) : (((/* implicit */long long int) ((/* implicit */int) var_4))))), (((/* implicit */long long int) min((var_5), (((/* implicit */unsigned int) ((var_6) < (var_3)))))))));
    var_12 = ((/* implicit */unsigned short) var_9);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                arr_6 [i_0 + 1] [(unsigned short)6] = ((/* implicit */unsigned short) ((((4294967273U) == (max((120U), (((/* implicit */unsigned int) (short)12026)))))) ? (arr_3 [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) max((min(((unsigned short)31944), (((/* implicit */unsigned short) (short)16383)))), ((unsigned short)53963)))))));
                var_13 = ((/* implicit */unsigned short) var_3);
                var_14 &= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 100U)) && (((/* implicit */_Bool) arr_1 [i_0 - 1])))) ? (1715603176U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65524))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 18; i_2 += 1) 
    {
        for (unsigned char i_3 = 0; i_3 < 18; i_3 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned int) max((var_15), ((-(min((arr_9 [i_2] [i_2] [i_3]), (((((/* implicit */_Bool) arr_1 [i_2])) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-88)))))))))));
                var_16 *= ((/* implicit */short) ((((/* implicit */_Bool) (+(10377498651651626689ULL)))) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_3]))))))));
                var_17 = ((/* implicit */unsigned short) min((var_17), (arr_4 [i_2] [i_3] [i_3])));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_4 = 0; i_4 < 11; i_4 += 2) 
    {
        for (unsigned int i_5 = 3; i_5 < 10; i_5 += 4) 
        {
            {
                arr_18 [i_4] = ((/* implicit */short) 4294967295U);
                arr_19 [i_4] [i_5] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)11572)) / (((/* implicit */int) (unsigned short)4))));
            }
        } 
    } 
}

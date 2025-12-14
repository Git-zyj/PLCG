/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102326
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
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((max((((/* implicit */short) (_Bool)1)), (var_6))), (var_6)))) ? (((((var_11) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))) & (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) ^ (6567639003019755871LL)))))) : (((/* implicit */unsigned long long int) var_12))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (int i_2 = 4; i_2 < 19; i_2 += 4) 
                {
                    var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)64)) ? (((max((((/* implicit */unsigned long long int) var_0)), (var_11))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 16207216233553889723ULL)))))) : (((/* implicit */unsigned long long int) ((((-2147483647) + (2147483647))) >> (((((/* implicit */int) arr_4 [i_2 - 3] [i_2] [i_2 - 4])) - (45762)))))))))));
                    var_19 += ((/* implicit */signed char) ((((/* implicit */unsigned long long int) max((((/* implicit */int) arr_4 [i_2 - 1] [i_1] [i_2])), ((~(((/* implicit */int) arr_1 [i_2] [i_0]))))))) | (min(((~(3310766519236241343ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) var_10)), ((unsigned short)5513))))))));
                    var_20 -= ((/* implicit */_Bool) var_7);
                    arr_6 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) max(((((_Bool)1) ? (((/* implicit */int) (signed char)35)) : (((/* implicit */int) arr_4 [i_2 - 2] [i_2] [i_2 - 4])))), ((~(((/* implicit */int) arr_4 [i_2 + 1] [i_2] [i_2 - 1]))))));
                }
                arr_7 [i_0] [i_1] = ((/* implicit */int) ((signed char) min((((long long int) var_3)), (((/* implicit */long long int) arr_5 [i_0])))));
            }
        } 
    } 
}

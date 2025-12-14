/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115476
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
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 14; i_2 += 4) 
                {
                    for (unsigned short i_3 = 1; i_3 < 13; i_3 += 3) 
                    {
                        {
                            arr_11 [(_Bool)1] &= ((/* implicit */short) ((((/* implicit */int) (signed char)124)) != ((-(((((/* implicit */_Bool) arr_5 [(_Bool)1] [(_Bool)1] [i_2 - 3])) ? (var_0) : (((/* implicit */int) (unsigned short)65529))))))));
                            arr_12 [(short)0] &= ((/* implicit */unsigned int) ((((/* implicit */int) ((var_10) == (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65514)) ? (((/* implicit */int) (unsigned short)6)) : (((/* implicit */int) (unsigned short)9)))))))) + (((var_0) - (((((/* implicit */int) arr_6 [6LL] [i_2] [i_1] [6LL])) - (((/* implicit */int) var_8))))))));
                            arr_13 [i_1] [i_1] [i_2] = ((long long int) ((((/* implicit */_Bool) (short)-11749)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0]))) : (var_10)));
                            arr_14 [i_0] [i_2 + 1] [i_0] [2LL] [i_0] [i_3] = ((/* implicit */unsigned int) arr_5 [(short)14] [i_1] [i_3 + 1]);
                        }
                    } 
                } 
                arr_15 [(unsigned char)5] = ((/* implicit */int) var_13);
                arr_16 [i_1] [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)61)) ? (3580159141211823420LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                arr_17 [i_0] = ((/* implicit */unsigned char) var_4);
                arr_18 [12] [(short)3] [(short)3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) ((unsigned char) var_4)))) ? (((6424905906242378153LL) << (((((/* implicit */int) (short)30605)) - (30605))))) : (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0])) ^ (((/* implicit */int) var_11)))))));
            }
        } 
    } 
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) (signed char)24))))) != (((/* implicit */int) min((((/* implicit */short) var_9)), (var_11))))))) : (((((/* implicit */int) ((5211004317137439202ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))) ^ (((/* implicit */int) var_4))))));
    var_18 = ((/* implicit */long long int) var_9);
}

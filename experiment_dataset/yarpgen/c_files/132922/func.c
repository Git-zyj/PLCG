/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132922
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 6; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) (_Bool)1))));
                arr_6 [i_0] [(short)6] = ((/* implicit */int) (_Bool)1);
                arr_7 [i_1] [i_0] = ((/* implicit */unsigned short) min((arr_4 [7U] [i_1 + 3]), ((+(15393951081960216957ULL)))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        {
                            arr_13 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_5 [i_1 - 1] [i_1 - 1] [i_2]))))), (((var_11) << (((arr_11 [i_0] [i_1 + 1] [(_Bool)1] [i_0]) + (638714490453058172LL)))))));
                            arr_14 [i_1] [i_1] [i_3] = ((/* implicit */int) min((((max((((/* implicit */unsigned long long int) (_Bool)1)), (var_15))) * (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) (-((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-2532)))))))));
                            arr_15 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) -803828051)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_9 [i_0] [3U] [i_3])) != (((((/* implicit */_Bool) arr_2 [i_2])) ? (arr_0 [i_2]) : (((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_3])))))))) : ((((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1 - 1] [i_1 + 1] [i_1 + 3]))) : (var_11)))));
                        }
                    } 
                } 
                arr_16 [i_0] [i_0] = ((((((/* implicit */int) (short)-2537)) == (((/* implicit */int) (short)2524)))) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-11989))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) min((var_7), (var_9))))));
    var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) (-(((((/* implicit */_Bool) (short)26478)) ? (((/* implicit */unsigned long long int) -803828053)) : (4611686018427387904ULL))))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159691
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned char) arr_2 [i_0]);
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    for (unsigned char i_3 = 1; i_3 < 14; i_3 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) (-((-(((/* implicit */int) (_Bool)1))))))) : (((0LL) + (((/* implicit */long long int) arr_6 [i_0] [i_1] [i_3] [i_3]))))));
                            arr_11 [i_0] = ((min((arr_10 [i_3] [i_3] [i_3] [i_3 + 1] [i_3 + 1] [i_3]), (arr_10 [i_3 - 1] [i_3] [i_3] [i_3 + 1] [i_3 + 1] [i_2]))) - (arr_10 [i_3 + 1] [i_3] [i_3] [i_3 + 1] [i_3 + 1] [i_1]));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_4 = 0; i_4 < 20; i_4 += 2) 
    {
        for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 3) 
        {
            {
                arr_17 [i_4] [i_4] [i_4] = ((/* implicit */int) (+(((((/* implicit */_Bool) 0U)) ? (((((/* implicit */long long int) ((/* implicit */int) (short)-32080))) / (2027915834555209956LL))) : (((/* implicit */long long int) 4194303))))));
                var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) max((max((((/* implicit */long long int) arr_12 [i_5])), (-2027915834555209956LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(var_13)))) ? ((+(var_10))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_5])))))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((-2027915834555209956LL) / (823531438805131998LL)))) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) 5624325277637808067ULL))))))));
    var_21 = ((/* implicit */int) var_12);
}
